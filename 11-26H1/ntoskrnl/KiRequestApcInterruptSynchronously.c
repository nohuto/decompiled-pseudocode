/*
 * XREFs of KiRequestApcInterruptSynchronously @ 0x140522BEC
 * Callers:
 *     KiSuspendThread @ 0x14020917C (KiSuspendThread.c)
 *     KiSignalThreadForApc @ 0x14020B2C0 (KiSignalThreadForApc.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x140253150 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KiIpiSendRequest @ 0x14032BF00 (KiIpiSendRequest.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiRequestApcInterruptSynchronously(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r8d
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // rcx
  __int64 result; // rax
  __int128 v8; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+40h] [rbp-C0h]
  void (__fastcall *v10)(void *, void *, void *, void *); // [rsp+48h] [rbp-B8h]
  __int64 v11; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v12[33]; // [rsp+58h] [rbp-A8h] BYREF

  v1 = a1;
  memset_0(v12, 0, 0x100uLL);
  v11 = 2097153LL;
  memset_0(v12, 0, 0x100uLL);
  v2 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v1) & 0x3F;
  v3 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v1) >> 6;
  if ( (_DWORD)v3 )
  {
    if ( WORD1(v11) <= (unsigned int)v3 )
      goto LABEL_5;
    LOWORD(v11) = v3 + 1;
  }
  v4 = (unsigned int)v3;
  v3 = v12[v3];
  _bittestandset64(&v3, v2);
  v12[v4] = v3;
LABEL_5:
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v3, 12LL);
  }
  v10 = KiRequestApcInterruptSynchronouslyWorker;
  v9 = 0LL;
  v8 = 0LL;
  KiIpiSendRequest((__int64)KeGetCurrentPrcb(), 0LL, (char *)&v11, &v8, 5LL);
  KiIpiStallOnPacketTargetsPrcb(v6, (__int64)KeGetCurrentPrcb());
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
