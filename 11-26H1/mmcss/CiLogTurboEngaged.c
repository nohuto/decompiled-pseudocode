/*
 * XREFs of CiLogTurboEngaged @ 0x140004130
 * Callers:
 *     CiSchedulerWait @ 0x140001990 (CiSchedulerWait.c)
 *     CiSchedulerProcessDeadlines @ 0x140002280 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerSleep @ 0x1400031C0 (CiSchedulerSleep.c)
 * Callees:
 *     __security_check_cookie @ 0x1400057E0 (__security_check_cookie.c)
 */

NTSTATUS CiLogTurboEngaged()
{
  int v1; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  UserData.Ptr = (ULONGLONG)&v1;
  v1 = 1;
  *(_QWORD *)&UserData.Size = 4LL;
  return EtwWrite(RegHandle, &CiTurboEngagedEvent, 0LL, 1u, &UserData);
}
