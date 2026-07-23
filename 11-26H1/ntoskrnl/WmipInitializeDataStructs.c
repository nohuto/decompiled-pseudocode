/*
 * XREFs of WmipInitializeDataStructs @ 0x140CE6798
 * Callers:
 *     WmipDriverEntry @ 0x140CE6560 (WmipDriverEntry.c)
 * Callees:
 *     WmipAllocRegEntry @ 0x1404E0D7C (WmipAllocRegEntry.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WmipAddDataSource @ 0x140A0ABF4 (WmipAddDataSource.c)
 *     WmipAddMofResource @ 0x140B1C418 (WmipAddMofResource.c)
 */

__int64 WmipInitializeDataStructs()
{
  _QWORD *v0; // rbx
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 *i; // rax
  char v4[16]; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v5[24]; // [rsp+40h] [rbp-19h] BYREF

  WmipDSHeadPtr = (__int64)&WmipDSHead;
  qword_140F040F8 = (__int64)&WmipDSHead;
  WmipDSHead = (__int64)&WmipDSHead;
  WmipGEHeadPtr = (__int64)&WmipGEHead;
  qword_140F04138 = (__int64)&WmipGEHead;
  WmipGEHead = (__int64)&WmipGEHead;
  WmipMRHeadPtr = (__int64)&WmipMRHead;
  qword_140F04118 = (__int64)&WmipMRHead;
  WmipMRHead = (__int64)&WmipMRHead;
  v4[0] = 0;
  v0 = WmipAllocRegEntry(-1LL, 1342177280);
  if ( !v0 )
    return 3221225626LL;
  memset_0(v5, 0, 0x58uLL);
  v5[0] = 88;
  v5[4] = 2;
  v5[6] = -943770160;
  v5[7] = 298953435;
  v5[8] = -1610593601;
  v5[9] = 271124169;
  v5[14] = -471861315;
  v5[15] = 298989845;
  v5[16] = -1073740911;
  v5[17] = -1567049393;
  result = WmipAddDataSource((__int64)v0, (__int64)v5, 88, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v2 = WmipGEHeadPtr;
    for ( i = *(__int64 **)WmipGEHeadPtr; i != (__int64 *)v2; i = (__int64 *)*i )
      *((_DWORD *)i + 4) |= 1u;
    result = WmipAddMofResource(v0[4], L"kernelbase.dll", 1, L"MofResourceName", v4);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
