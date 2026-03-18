/*
 * XREFs of ?KiDoesThreadDominateRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@KPEAPEAU_KSCB@@@Z @ 0x1402BCA30
 * Callers:
 *     KiDeferGroupSchedulingPreemption @ 0x14022FA60 (KiDeferGroupSchedulingPreemption.c)
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KiDirectSwitchThread @ 0x140239BE0 (KiDirectSwitchThread.c)
 *     KiExecuteAllDpcs @ 0x14032DD00 (KiExecuteAllDpcs.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140333210 (KiGroupSchedulingGenerationEnd.c)
 *     KiAdjustRescheduleContextForIsolationWidthChange @ 0x1405FB2E0 (KiAdjustRescheduleContextForIsolationWidthChange.c)
 * Callees:
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402BC410 (KiEvaluateGroupSchedulingPreemption.c)
 */

bool __fastcall KiDoesThreadDominateRescheduleContextEntry(
        struct _KI_RESCHEDULE_CONTEXT_ENTRY *a1,
        struct _KTHREAD *a2,
        char a3,
        struct _KSCB **a4)
{
  struct _KSCB *v5; // r9
  bool result; // al
  unsigned __int8 AllCompareThreadStateFlags; // r10
  _KTHREAD *CompareThread; // rax
  char Priority; // r11
  struct _KSCB *v10; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v10 = 0LL;
  if ( KiGroupSchedulingEnabled )
  {
    result = KiEvaluateGroupSchedulingPreemption((__int64 *)a1, (__int64)a2, a3, &v10);
    v5 = v10;
  }
  else
  {
    AllCompareThreadStateFlags = a1->AllCompareThreadStateFlags;
    if ( (AllCompareThreadStateFlags & 1) != 0 )
    {
      result = 1;
    }
    else
    {
      CompareThread = a1->CompareThread;
      Priority = a2->Priority;
      result = Priority > CompareThread->Priority
            || Priority == CompareThread->Priority && ((AllCompareThreadStateFlags & 0x18) != 0 || (a3 & 1) != 0)
            || (AllCompareThreadStateFlags & 0x10) != 0 && Priority;
    }
  }
  if ( a4 )
    *a4 = v5;
  return result;
}
