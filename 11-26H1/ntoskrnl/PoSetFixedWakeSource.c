/*
 * XREFs of PoSetFixedWakeSource @ 0x140BE95A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PoSetFixedWakeSource(int a1)
{
  LODWORD(stru_140F11D08.Timer.TimerListEntry.Blink) |= a1;
}
