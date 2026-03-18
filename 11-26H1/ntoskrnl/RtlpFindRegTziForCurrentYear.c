/*
 * XREFs of RtlpFindRegTziForCurrentYear @ 0x140619C44
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x140804D4C (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1408054A0 (RtlpUpdateDynamicTimeZones.c)
 * Callees:
 *     _itow_s @ 0x14053B4F0 (_itow_s.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlQueryRegistryValuesEx @ 0x140A10F30 (RtlQueryRegistryValuesEx.c)
 */

__int64 __fastcall RtlpFindRegTziForCurrentYear(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // edi
  int RegistryValues; // ebx
  __int16 v7; // ax
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v11[8]; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+48h] [rbp-B8h]
  const wchar_t *v13; // [rsp+50h] [rbp-B0h]
  int *v14; // [rsp+58h] [rbp-A8h]
  int v15; // [rsp+60h] [rbp-A0h]
  int v16; // [rsp+80h] [rbp-80h]
  const wchar_t *v17; // [rsp+88h] [rbp-78h]
  int *v18; // [rsp+90h] [rbp-70h]
  int v19; // [rsp+98h] [rbp-68h]
  _BYTE v20[8]; // [rsp+B0h] [rbp-50h] BYREF
  int v21; // [rsp+B8h] [rbp-48h]
  wchar_t *v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h]
  int v24; // [rsp+D0h] [rbp-30h]
  wchar_t DstBuf[8]; // [rsp+120h] [rbp+20h] BYREF

  v3 = a3;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  RegistryValues = -1073741811;
  if ( !itow_s(a3, DstBuf, 5uLL, 10) )
  {
    memset_0(v11, 0, 0xE0uLL);
    v12 = 292;
    v15 = 0x4000000;
    v13 = L"FirstEntry";
    v19 = 0x4000000;
    v14 = &v10;
    v10 = -4;
    v17 = L"LastEntry";
    v16 = 292;
    v18 = &v9;
    v9 = -4;
    v22 = DstBuf;
    v21 = 288;
    v23 = a1;
    v24 = 50331648;
    *(_DWORD *)a1 = -44;
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000LL, a2, v11, 0LL, 0LL);
    if ( RegistryValues >= 0 )
    {
      if ( v9 == -4 )
        return (unsigned int)-1073741762;
      v7 = v10;
      if ( v10 == -4 )
        return (unsigned int)-1073741762;
      if ( v3 < v10 || v3 > v9 )
      {
        if ( v3 > v9 )
          v7 = v9;
        if ( !itow_s(v7, DstBuf, 5uLL, 10) )
        {
          v21 = 292;
          v24 = 50331648;
          *(_DWORD *)a1 = -44;
          return (unsigned int)RtlQueryRegistryValuesEx(0x40000000LL, a2, v20, 0LL, 0LL);
        }
        return (unsigned int)-1073741762;
      }
    }
  }
  return (unsigned int)RegistryValues;
}
