/*
 * XREFs of sub_14003E190 @ 0x14003E190
 * Callers:
 *     sub_14003E170 @ 0x14003E170 (sub_14003E170.c)
 * Callees:
 *     sub_140005624 @ 0x140005624 (sub_140005624.c)
 */

int *sub_14003E190()
{
  dword_1400E8870 = 72;
  stru_1400E8878.SpinCount = 0LL;
  qword_1400E88A8 = 0LL;
  *(_OWORD *)&stru_1400E8878.DebugInfo = 0LL;
  qword_1400E88B0 = 0LL;
  *(_OWORD *)&stru_1400E8878.OwningThread = 0LL;
  qword_1400E88A0 = 0LL;
  if ( (int)sub_140005624(&stru_1400E8878) < 0 )
  {
    byte_1400E8928 = 1;
    dword_1400E8870 = 0;
  }
  return &dword_1400E8870;
}
