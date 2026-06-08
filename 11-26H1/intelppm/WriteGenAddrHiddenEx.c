/*
 * XREFs of WriteGenAddrHiddenEx @ 0x14000877C
 * Callers:
 *     WriteGenAddrMaybeHiddenEx @ 0x1400087B0 (WriteGenAddrMaybeHiddenEx.c)
 *     PerfControlCpcHidden @ 0x140008F70 (PerfControlCpcHidden.c)
 * Callees:
 *     WriteGenAddrEx @ 0x1400013F8 (WriteGenAddrEx.c)
 *     WriteGenAddrHidden @ 0x1400086E0 (WriteGenAddrHidden.c)
 */

__int64 __fastcall WriteGenAddrHiddenEx(unsigned int a1, char *a2, __int64 a3)
{
  char v4; // dl

  v4 = *a2;
  if ( v4 == 1 || v4 == 127 )
    return WriteGenAddrHidden(a1, a2, a3);
  else
    return WriteGenAddrEx(a2, a3);
}
