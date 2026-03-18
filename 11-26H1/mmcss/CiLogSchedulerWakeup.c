/*
 * XREFs of CiLogSchedulerWakeup @ 0x140003F70
 * Callers:
 *     CiSchedulerThreadFunction @ 0x140001520 (CiSchedulerThreadFunction.c)
 * Callees:
 *     __security_check_cookie @ 0x1400057E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CiLogSchedulerWakeup(int a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1;
  UserData.Ptr = (ULONGLONG)&v3;
  *(_QWORD *)&UserData.Size = 4LL;
  return EtwWrite(RegHandle, &CiSchedulerWakeupEvent, 0LL, 1u, &UserData);
}
