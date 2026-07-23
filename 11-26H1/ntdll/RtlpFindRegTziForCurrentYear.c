/*
 * XREFs of RtlpFindRegTziForCurrentYear @ 0x1800FFCFC
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x180045120 (RtlpCheckDynamicTimeZoneInformation.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1800440A0 (RtlpQueryRegistryValues.c)
 *     _itow_s @ 0x180132A00 (_itow_s.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpFindRegTziForCurrentYear(__int64 a1, const wchar_t *a2, __int16 a3)
{
  int v3; // esi
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
  wchar_t Buffer[8]; // [rsp+120h] [rbp+20h] BYREF

  v3 = a3;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  RegistryValues = -1073741811;
  if ( !itow_s(a3, Buffer, 5uLL, 10) )
  {
    memset_thunk_772440563353939046(v11, 0, 0xE0uLL);
    v15 = 0x4000000;
    v13 = L"FirstEntry";
    v19 = 0x4000000;
    v14 = &v10;
    v12 = 292;
    v17 = L"LastEntry";
    v10 = -4;
    v18 = &v9;
    v16 = 292;
    v22 = Buffer;
    v9 = -4;
    v21 = 288;
    v23 = a1;
    v24 = 50331648;
    *(_DWORD *)a1 = -44;
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, a2, (__int64)v11, 0LL, 0LL, 1);
    if ( RegistryValues >= 0 )
    {
      if ( v9 != -4 )
      {
        v7 = v10;
        if ( v10 != -4 )
        {
          if ( v3 <= v9 && v3 >= v10 )
            return (unsigned int)RegistryValues;
          if ( v3 > v9 )
            v7 = v9;
          if ( !itow_s(v7, Buffer, 5uLL, 10) )
          {
            v21 = 292;
            v24 = 50331648;
            *(_DWORD *)a1 = -44;
            return (unsigned int)RtlpQueryRegistryValues(0x40000000LL, a2, (__int64)v20, 0LL, 0LL, 1);
          }
        }
      }
      return (unsigned int)-1073741762;
    }
  }
  return (unsigned int)RegistryValues;
}
