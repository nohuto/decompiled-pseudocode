/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x140948850
 * Callers:
 *     DifNtUnsubscribeWnfStateChangeWrapper @ 0x1406909E0 (DifNtUnsubscribeWnfStateChangeWrapper.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x140948750 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpCaptureWnfStateName @ 0x140949F88 (ExpCaptureWnfStateName.c)
 *     ExpWnfDeleteSubscription @ 0x140A42210 (ExpWnfDeleteSubscription.c)
 */

__int64 __fastcall NtUnsubscribeWnfStateChange(void *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // ebx
  struct _KLOCK_ENTRIES *v3; // r9
  __int64 v4; // rdx
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v2 = ExpCaptureWnfStateName(a1);
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
  return (unsigned int)v2;
}
