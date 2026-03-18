/*
 * XREFs of PfSnPrefetchScenario @ 0x140AE0674
 * Callers:
 *     PfSnBeginScenario @ 0x14096F3B8 (PfSnBeginScenario.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x1402052D0 (KeQueryPriorityThread.c)
 *     ExfAcquireRundownProtection @ 0x1402F05D0 (ExfAcquireRundownProtection.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     ExfWaitForRundownProtectionRelease @ 0x140463DCC (ExfWaitForRundownProtectionRelease.c)
 *     PfSnAsyncContextInitialize @ 0x140AE075C (PfSnAsyncContextInitialize.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnPrefetchScenario(PVOID P, unsigned int a2)
{
  __int64 Pool2; // rax
  struct _WORK_QUEUE_ITEM *v5; // rbx
  unsigned int v6; // ebx
  unsigned __int64 v8; // rtt
  KPRIORITY PriorityThread; // eax
  unsigned __int64 v10; // rax
  struct _EX_RUNDOWN_REF RunRef; // [rsp+40h] [rbp+8h] BYREF

  RunRef.Count = 0LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  v5 = (struct _WORK_QUEUE_ITEM *)Pool2;
  if ( Pool2 )
  {
    PfSnAsyncContextInitialize(Pool2, P, &RunRef, (a2 >> 4) & 1);
    _m_prefetchw(&RunRef);
    v8 = RunRef.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v8 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&RunRef,
                 (RunRef.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                 RunRef.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfAcquireRundownProtection(&RunRef);
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    ExQueueWorkItem(v5, (WORK_QUEUE_TYPE)(PriorityThread + 32));
    v6 = 0;
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)&RunRef, 1LL, 0LL);
    if ( v10 >= 2 )
      ExfWaitForRundownProtectionRelease((volatile signed __int64 *)&RunRef, v10);
  }
  else
  {
    v6 = -1073741670;
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return v6;
}
