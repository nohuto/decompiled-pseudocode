/*
 * XREFs of PopFanEndCsFanPeriod @ 0x1407DAF74
 * Callers:
 *     PopFanUpdateRunningState @ 0x1407DB054 (PopFanUpdateRunningState.c)
 *     PopFanUpdateCsState @ 0x140B66398 (PopFanUpdateCsState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x1406086B8 (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = unk_140F10EB8;
  if ( unk_140F10EB8 < unk_140F10EC0 )
    v0 = unk_140F10EC0;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - unk_140F10EC0) / 0x989680uLL);
}
