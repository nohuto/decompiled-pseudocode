/*
 * XREFs of CrmStateMonitorTimeSinceBootStart @ 0x1800774A4
 * Callers:
 *     CrmStateMonitorStart @ 0x180048F00 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x180020280 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmStateMonitorTimeSinceBootStart(__int64 a1)
{
  _DWORD *v1; // r9
  int v3; // ecx
  unsigned int v4; // eax
  const void *v5; // r9
  void *v6; // r10
  int v7; // edi
  __int128 v8; // kr00_16
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  _OWORD SystemInformation[3]; // [rsp+28h] [rbp-40h] BYREF

  v1 = (_DWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v3 = *(_DWORD *)a1;
  SystemInformation[0] = 0LL;
  *v1 = 0;
  memset(&SystemInformation[1], 0, 32);
  v4 = CrmStateMonitorStateSizeGet(v3);
  memcpy_0(v6, v5, v4);
  NtQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL);
  v7 = TpAllocTimer(a1 + 72, CrmStateMonitorTimeSinceBootCallback, a1, 0LL);
  if ( v7 >= 0 )
  {
    v8 = SystemInformation[0];
    *(_QWORD *)(a1 + 64) = 30LL;
    if ( *((__int64 *)&v8 + 1) < (__int64)v8 + 300000000 )
      v9 = *((_QWORD *)&v8 + 1) - v8 - 300000000;
    else
      v9 = -1LL;
    v10 = *(_QWORD *)(a1 + 72);
    v12 = v9;
    TpSetTimer(v10, &v12, 0LL, 0LL);
  }
  return (unsigned int)v7;
}
