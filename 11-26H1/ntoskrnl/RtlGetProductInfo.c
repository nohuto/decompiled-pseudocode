/*
 * XREFs of RtlGetProductInfo @ 0x140621260
 * Callers:
 *     ExGetSuiteMask @ 0x14083CBEC (ExGetSuiteMask.c)
 *     ExpInitSystemPhase1 @ 0x140CEA720 (ExpInitSystemPhase1.c)
 * Callees:
 *     CompareVersions @ 0x140621220 (CompareVersions.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x14072ABE0 (ZwQueryLicenseValue.c)
 */

BOOLEAN __stdcall RtlGetProductInfo(
        ULONG OSMajorVersion,
        ULONG OSMinorVersion,
        ULONG SpMajorVersion,
        ULONG SpMinorVersion,
        PULONG ReturnedProductType)
{
  ULONG v5; // esi
  BOOLEAN v6; // bl
  unsigned __int64 v7; // r8
  unsigned __int64 i; // rax
  unsigned __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // r10
  ULONG ResultDataSize; // [rsp+38h] [rbp-D0h] BYREF
  ULONG Type; // [rsp+3Ch] [rbp-CCh] BYREF
  ULONG Data; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD Data_8[4]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v17[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v18; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v19[52]; // [rsp+78h] [rbp-90h] BYREF

  v5 = 0;
  Type = 0;
  v6 = 1;
  ResultDataSize = 0;
  Data = 0;
  Data_8[0] = OSMajorVersion;
  Data_8[1] = OSMinorVersion;
  Data_8[2] = SpMajorVersion;
  Data_8[3] = SpMinorVersion;
  if ( ReturnedProductType )
  {
    v17[0] = OSMajorVersion;
    v17[1] = OSMinorVersion;
    v18 = xmmword_140032B08;
    *ReturnedProductType = 0;
    v17[2] = SpMajorVersion;
    v17[3] = SpMinorVersion;
    if ( (int)CompareVersions(v17, &v18) >= 0 )
    {
      if ( ZwQueryLicenseValue((PUNICODE_STRING)&stru_14000D810, &Type, &Data, 4u, &ResultDataSize) < 0
        || Type != 4
        || ResultDataSize != 4 )
      {
        *ReturnedProductType = -1412584499;
        return v6;
      }
      if ( ZwQueryLicenseValue((PUNICODE_STRING)&stru_14000D800, &Type, v19, 0xC8u, &ResultDataSize) < 0 )
      {
LABEL_8:
        *ReturnedProductType = Data;
        return v6;
      }
      if ( Type == 3 && ResultDataSize >= 0x14 )
      {
        v7 = ResultDataSize / 0x14uLL;
        if ( ResultDataSize == 20 * v7 )
        {
          if ( v7 )
          {
            for ( i = 0LL; i < v9; i = (unsigned int)(v10 + 1) )
            {
              v18 = *(_OWORD *)&v19[5 * i];
              if ( (int)CompareVersions(Data_8, &v18) < 0 )
                v5 = v19[v11 + 4];
            }
            if ( v5 )
            {
              *ReturnedProductType = v5;
              return v6;
            }
          }
          goto LABEL_8;
        }
      }
    }
  }
  return 0;
}
