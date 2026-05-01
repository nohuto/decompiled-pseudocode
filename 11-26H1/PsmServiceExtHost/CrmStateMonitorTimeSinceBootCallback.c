/*
 * XREFs of CrmStateMonitorTimeSinceBootCallback @ 0x180067E40
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x1800200C0 (CrmStateMonitorStateSet.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmStateMonitorTimeSinceBootCallback(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int128 v5; // kr00_16
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  _OWORD SystemInformation[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(SystemInformation, 0, sizeof(SystemInformation));
  NtQuerySystemInformation(SystemTimeOfDayInformation, SystemInformation, 0x30u, 0LL);
  CrmStateMonitorStateSet(a2, a2 + 16, 8uLL, 0);
  v5 = SystemInformation[0];
  v6 = 20000000LL * *((_QWORD *)a2 + 8);
  *((_QWORD *)a2 + 8) *= 2LL;
  if ( *((__int64 *)&v5 + 1) >= v6 + (__int64)v5 )
    v7 = -1LL;
  else
    v7 = *((_QWORD *)&v5 + 1) - v6 - v5;
  v9 = v7;
  return TpSetTimer(a3, &v9, 0LL, 0LL);
}
