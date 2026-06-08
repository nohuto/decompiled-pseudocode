/*
 * XREFs of CpcSetAutonomousActivityWindow @ 0x140008B00
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x1400087B0 (WriteGenAddrMaybeHiddenEx.c)
 *     TranslateActivityWindow @ 0x14000968C (TranslateActivityWindow.c)
 */

__int64 __fastcall CpcSetAutonomousActivityWindow(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 *v4; // r9

  v3 = TranslateActivityWindow((unsigned int)a2, a2, a3, a1);
  return WriteGenAddrMaybeHiddenEx(*v4, (char *)(v4[18] + 392), v3);
}
