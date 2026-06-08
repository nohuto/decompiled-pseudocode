/*
 * XREFs of TranslateActivityWindow @ 0x1400070CC
 * Callers:
 *     CpcSetAutonomousActivityWindow @ 0x140006530 (CpcSetAutonomousActivityWindow.c)
 *     PerfSelectionCpc @ 0x140007000 (PerfSelectionCpc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TranslateActivityWindow(unsigned int a1)
{
  char v2; // cl

  v2 = 0;
  while ( a1 > 0x7F )
  {
    ++v2;
    a1 /= 0xAu;
  }
  return a1 & 0x7F | ((v2 & 7) << 7);
}
