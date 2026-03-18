/*
 * XREFs of IvtDrainSvmPageRequests @ 0x1405A6130
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402B4630 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IvtIommuWaitCommand @ 0x140427808 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x14042795C (IvtIommuSendCommand.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall IvtDrainSvmPageRequests(__int64 a1, unsigned __int16 a2, char a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v9[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v10[2]; // [rsp+48h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v9[1] = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
  IvtIommuWaitCommand(a1, 0, 1LL);
  v9[0] = 18LL;
  IvtIommuSendCommand(a1, v9, 1);
  v10[1] = 0x7FFFFFFFFFFFF801LL;
  v10[0] = (16 * (a3 & 0x1F | ((unsigned __int64)a2 << 12))) | 8;
  IvtIommuSendCommand(a1, v10, 1);
  IvtIommuWaitCommand(a1, 0, 1LL);
  IvtIommuSendCommand(a1, v9, 1);
  IvtIommuSendCommand(a1, v10, 1);
  IvtIommuWaitCommand(a1, 1, 1LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
