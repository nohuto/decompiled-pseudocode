/*
 * XREFs of RtlGetProductInfo @ 0x14061E210
 * Callers:
 *     ExGetSuiteMask @ 0x1408369AC (ExGetSuiteMask.c)
 *     ExpInitSystemPhase1 @ 0x140CE4380 (ExpInitSystemPhase1.c)
 * Callees:
 *     CompareVersions @ 0x14061E1D0 (CompareVersions.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQueryLicenseValue @ 0x140726010 (ZwQueryLicenseValue.c)
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
  unsigned int v13; // [rsp+38h] [rbp-D0h] BYREF
  int v14; // [rsp+3Ch] [rbp-CCh] BYREF
  ULONG v15; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD v16[4]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v17[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v18; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v19[52]; // [rsp+78h] [rbp-90h] BYREF

  v5 = 0;
  v14 = 0;
  v6 = 1;
  v13 = 0;
  v15 = 0;
  v16[0] = OSMajorVersion;
  v16[1] = OSMinorVersion;
  v16[2] = SpMajorVersion;
  v16[3] = SpMinorVersion;
  if ( ReturnedProductType )
  {
    v17[0] = OSMajorVersion;
    v17[1] = OSMinorVersion;
    v18 = xmmword_140032590;
    *ReturnedProductType = 0;
    v17[2] = SpMajorVersion;
    v17[3] = SpMinorVersion;
    if ( (int)CompareVersions(v17, &v18) >= 0 )
    {
      if ( (int)ZwQueryLicenseValue(L"$&", &v14, &v15, 4LL, &v13) < 0 || v14 != 4 || v13 != 4 )
      {
        *ReturnedProductType = -1412584499;
        return v6;
      }
      if ( (int)ZwQueryLicenseValue(L">@", &v14, v19, 200LL, &v13) < 0 )
      {
LABEL_8:
        *ReturnedProductType = v15;
        return v6;
      }
      if ( v14 == 3 && v13 >= 0x14 )
      {
        v7 = v13 / 0x14uLL;
        if ( v13 == 20 * v7 )
        {
          if ( v7 )
          {
            for ( i = 0LL; i < v9; i = (unsigned int)(v10 + 1) )
            {
              v18 = *(_OWORD *)&v19[5 * i];
              if ( (int)CompareVersions(v16, &v18) < 0 )
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
