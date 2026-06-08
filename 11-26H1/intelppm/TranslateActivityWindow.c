/*
 * XREFs of TranslateActivityWindow @ 0x14000968C
 * Callers:
 *     PerfSelectionHwp @ 0x140005650 (PerfSelectionHwp.c)
 *     CpcSetAutonomousActivityWindow @ 0x140008B00 (CpcSetAutonomousActivityWindow.c)
 *     PerfSelectionCpc @ 0x1400095C0 (PerfSelectionCpc.c)
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
