/*
 * XREFs of CpcSetAutonomousActivityWindow @ 0x140006530
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x140001800 (WriteGenAddrMaybeHiddenEx.c)
 *     TranslateActivityWindow @ 0x1400070CC (TranslateActivityWindow.c)
 */

__int64 __fastcall CpcSetAutonomousActivityWindow(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 *v4; // r9

  v3 = TranslateActivityWindow((unsigned int)a2, a2, a3, a1);
  return WriteGenAddrMaybeHiddenEx(*v4, v4[18] + 392, v3);
}
