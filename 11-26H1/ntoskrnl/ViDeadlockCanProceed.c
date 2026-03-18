/*
 * XREFs of ViDeadlockCanProceed @ 0x140C45460
 * Callers:
 *     VfDeadlockInitializeResource @ 0x140C36320 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x140C4493C (VfDeadlockReleaseResource.c)
 *     VfFreeMemoryNotification @ 0x140C45348 (VfFreeMemoryNotification.c)
 *     VfDeadlockAcquireResource @ 0x140C47314 (VfDeadlockAcquireResource.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402642E0 (KeAreInterruptsEnabled.c)
 *     ViDeadlockCheckStackLimits @ 0x140C454D4 (ViDeadlockCheckStackLimits.c)
 */

_BOOL8 __fastcall ViDeadlockCanProceed(LONG *a1)
{
  _BOOL8 result; // rax

  result = 0;
  if ( ViDeadlockDetectionEnabled )
  {
    if ( (unsigned int)KeNumberProcessors_0 <= 4 && KeGetCurrentIrql() <= 2u && KeAreInterruptsEnabled() )
    {
      if ( ViDeadlockGlobals )
      {
        ViDeadlockCheckStackLimits();
        if ( a1 != &ViDeadlockDatabaseLock && (struct _KTHREAD *)ViDeadlockDatabaseOwner != KeGetCurrentThread() )
          return 1;
      }
    }
  }
  return result;
}
