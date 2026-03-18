/*
 * XREFs of KeAbPreWakeupThread @ 0x14026A2B4
 * Callers:
 *     IopReleaseFileObjectLock @ 0x140269EC0 (IopReleaseFileObjectLock.c)
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     FsRtlReleaseHeaderMutex @ 0x14027C200 (FsRtlReleaseHeaderMutex.c)
 *     KeReleaseMutantEx @ 0x1403DD130 (KeReleaseMutantEx.c)
 *     KeSetEventBoostPriorityEx @ 0x140421E18 (KeSetEventBoostPriorityEx.c)
 * Callees:
 *     ?KiAbpPreWakeupByThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z @ 0x140382B84 (-KiAbpPreWakeupByThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z.c)
 *     ?KiAbPreWakeupThread@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXJK@Z @ 0x140457E30 (-KiAbPreWakeupThread@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXJK@Z.c)
 */

void __fastcall KeAbPreWakeupThread(AutoBoost *a1, struct _KTHREAD *a2, void *a3)
{
  unsigned int v3; // [rsp+20h] [rbp-8h]

  if ( (KiAbpGlobalState & 1) != 0 )
    AutoBoost::KiAbpPreWakeupByThread(a1, a2, (void *)1, 1u);
  else
    LegacyAutoBoost::KiAbPreWakeupThread(a1, a2, a3, 1, v3);
}
