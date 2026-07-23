/*
 * XREFs of PopFanEndCsFanPeriod @ 0x1407DEE64
 * Callers:
 *     PopFanUpdateRunningState @ 0x1407DEF44 (PopFanUpdateRunningState.c)
 *     PopFanUpdateCsState @ 0x140B69324 (PopFanUpdateCsState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x14060B278 (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140F102B8;
  if ( qword_140F102B8 < (unsigned __int64)qword_140F102C0 )
    v0 = qword_140F102C0;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140F102C0) / 0x989680uLL);
}
