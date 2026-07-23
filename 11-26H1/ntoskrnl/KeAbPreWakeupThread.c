/*
 * XREFs of KeAbPreWakeupThread @ 0x140269824
 * Callers:
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     FsRtlReleaseHeaderMutex @ 0x14027B770 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseMutantEx @ 0x1403E0320 (KeReleaseMutantEx.c)
 *     KeSetEventBoostPriorityEx @ 0x140419658 (KeSetEventBoostPriorityEx.c)
 * Callees:
 *     ?KiAbpPreWakeupByThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z @ 0x140384934 (-KiAbpPreWakeupByThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z.c)
 *     ?KiAbPreWakeupThread@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXJK@Z @ 0x14044F6A0 (-KiAbPreWakeupThread@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXJK@Z.c)
 */

void __fastcall KeAbPreWakeupThread(AutoBoost *a1, struct _KTHREAD *a2, void *a3)
{
  unsigned int v3; // [rsp+20h] [rbp-8h]

  if ( (KiAbpGlobalState & 1) != 0 )
    AutoBoost::KiAbpPreWakeupByThread(a1, a2, (void *)1, 1u);
  else
    LegacyAutoBoost::KiAbPreWakeupThread(a1, a2, a3, 1, v3);
}
