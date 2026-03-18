/*
 * XREFs of MiMirrorDiscardPageContents @ 0x1405255E8
 * Callers:
 *     MiMirrorBlackPhase @ 0x140C00E38 (MiMirrorBlackPhase.c)
 * Callees:
 *     MiIterateOverPartitions @ 0x1404A90F4 (MiIterateOverPartitions.c)
 *     MiMirrorDiscardTreePageContents @ 0x140525620 (MiMirrorDiscardTreePageContents.c)
 */

__int64 MiMirrorDiscardPageContents()
{
  MiMirrorDiscardTreePageContents(&qword_140E2EA78);
  MiMirrorDiscardTreePageContents(&qword_140E2EA68);
  return MiIterateOverPartitions((__int64)MiFailInProgressZeroing, 0LL);
}
