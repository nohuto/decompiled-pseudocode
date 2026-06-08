/*
 * XREFs of WriteGenAddrHiddenEx @ 0x140003990
 * Callers:
 *     WriteGenAddrMaybeHiddenEx @ 0x140001800 (WriteGenAddrMaybeHiddenEx.c)
 *     PerfControlCpcHidden @ 0x1400069B0 (PerfControlCpcHidden.c)
 * Callees:
 *     WriteGenAddrEx @ 0x140001830 (WriteGenAddrEx.c)
 *     WriteGenAddrHidden @ 0x1400039C4 (WriteGenAddrHidden.c)
 */

char __fastcall WriteGenAddrHiddenEx(__int64 a1, char *a2, __int64 a3)
{
  char v4; // dl

  v4 = *a2;
  if ( v4 == 1 || v4 == 127 )
    return WriteGenAddrHidden(a1, a2);
  else
    return WriteGenAddrEx(a2, a3, a3);
}
