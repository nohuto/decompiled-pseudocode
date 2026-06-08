/*
 * XREFs of CpcSetAutonomousMode @ 0x140008B40
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x1400087B0 (WriteGenAddrMaybeHiddenEx.c)
 */

__int64 __fastcall CpcSetAutonomousMode(__int64 *a1, int a2)
{
  return WriteGenAddrMaybeHiddenEx(*a1, (char *)(a1[18] + 368), a2 != 0);
}
