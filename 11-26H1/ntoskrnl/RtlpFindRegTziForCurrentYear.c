/*
 * XREFs of RtlpFindRegTziForCurrentYear @ 0x14061CC94
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x14080A7EC (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14080AF40 (RtlpUpdateDynamicTimeZones.c)
 * Callees:
 *     _itow_s @ 0x14053D970 (_itow_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlQueryRegistryValuesEx @ 0x140A10120 (RtlQueryRegistryValuesEx.c)
 */

__int64 __fastcall RtlpFindRegTziForCurrentYear(_OWORD *a1, const WCHAR *a2, __int16 a3)
{
  int v3; // edi
  NTSTATUS v6; // ebx
  __int16 v7; // ax
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+80h] [rbp-80h]
  const wchar_t *v13; // [rsp+88h] [rbp-78h]
  int *v14; // [rsp+90h] [rbp-70h]
  int v15; // [rsp+98h] [rbp-68h]
  _RTL_QUERY_REGISTRY_TABLE v16; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t DstBuf[8]; // [rsp+120h] [rbp+20h] BYREF

  v3 = a3;
  *a1 = 0LL;
  a1[1] = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  *((_DWORD *)a1 + 10) = 0;
  v6 = -1073741811;
  if ( !itow_s(a3, DstBuf, 5uLL, 10) )
  {
    memset_0(&QueryTable, 0, 0xE0uLL);
    QueryTable.Flags = 292;
    QueryTable.DefaultType = 0x4000000;
    QueryTable.Name = L"FirstEntry";
    v15 = 0x4000000;
    QueryTable.EntryContext = &v10;
    v10 = -4;
    v13 = L"LastEntry";
    v12 = 292;
    v14 = &v9;
    v9 = -4;
    v16.Name = DstBuf;
    v16.Flags = 288;
    v16.EntryContext = a1;
    v16.DefaultType = 50331648;
    *(_DWORD *)a1 = -44;
    v6 = RtlQueryRegistryValuesEx(0x40000000u, a2, &QueryTable, 0LL, 0LL);
    if ( v6 >= 0 )
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
          v16.Flags = 292;
          v16.DefaultType = 50331648;
          *(_DWORD *)a1 = -44;
          return (unsigned int)RtlQueryRegistryValuesEx(0x40000000u, a2, &v16, 0LL, 0LL);
        }
        return (unsigned int)-1073741762;
      }
    }
  }
  return (unsigned int)v6;
}
