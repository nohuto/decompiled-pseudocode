/*
 * XREFs of KeAbUserModeEntryFree @ 0x14026F9C0
 * Callers:
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 * Callees:
 *     ?KiAbpPostReleaseUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z @ 0x14026F9E8 (-KiAbpPostReleaseUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z.c)
 *     ?KiAbUserModeEntryFree@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z @ 0x1404B003C (-KiAbUserModeEntryFree@LegacyAutoBoost@@YAXPEAU_KTHREAD@@PEAXK@Z.c)
 */

void __fastcall KeAbUserModeEntryFree(AutoBoost *a1, struct _KTHREAD *a2, void *a3, unsigned int a4)
{
  if ( (KiAbpGlobalState & 1) != 0 )
    AutoBoost::KiAbpPostReleaseUserMode(a1, a2, a3);
  else
    LegacyAutoBoost::KiAbUserModeEntryFree((struct _KLOCK_ENTRY *)a1, a2, a3, a4);
}
