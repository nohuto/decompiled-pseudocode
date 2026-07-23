/*
 * XREFs of MiMirrorDiscardPageContents @ 0x140527C58
 * Callers:
 *     MiMirrorBlackPhase @ 0x140C07048 (MiMirrorBlackPhase.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x1404A2784 (MiIterateOverPartitions.c)
 *     MiMirrorDiscardTreePageContents @ 0x140527C90 (MiMirrorDiscardTreePageContents.c)
 */

__int64 MiMirrorDiscardPageContents()
{
  MiMirrorDiscardTreePageContents(&qword_140E2EBF8);
  MiMirrorDiscardTreePageContents(&qword_140E2EBE8);
  return MiIterateOverPartitions((__int64)MiFailInProgressZeroing, 0LL);
}
