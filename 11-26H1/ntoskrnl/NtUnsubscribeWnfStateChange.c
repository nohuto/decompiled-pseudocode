/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x1409C41C0
 * Callers:
 *     DifNtUnsubscribeWnfStateChangeWrapper @ 0x1406945C0 (DifNtUnsubscribeWnfStateChangeWrapper.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x1409C40C0 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpCaptureWnfStateName @ 0x1409C58F8 (ExpCaptureWnfStateName.c)
 *     ExpWnfDeleteSubscription @ 0x1409FDBC0 (ExpWnfDeleteSubscription.c)
 */

NTSTATUS __cdecl NtUnsubscribeWnfStateChange(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v2; // ebx
  struct _KLOCK_ENTRIES *v3; // r9
  __int64 v4; // rdx
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v2 = ExpCaptureWnfStateName((void *)StateName);
    if ( v2 >= 0 )
    {
      v4 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[3].BasePriority;
      if ( v4 )
      {
        v2 = ExpWnfAcquireSubscriptionByName(0LL, v4, (struct _EX_RUNDOWN_REF **)&P, v3);
        if ( v2 >= 0 )
        {
          ExpWnfDeleteSubscription(P);
          v2 = 0;
        }
      }
      else
      {
        v2 = -1073741772;
      }
    }
  }
  else
  {
    v2 = -1073741796;
  }
  KeLeaveCriticalRegion();
  return v2;
}
