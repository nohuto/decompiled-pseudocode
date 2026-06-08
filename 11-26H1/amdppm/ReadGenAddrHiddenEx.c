/*
 * XREFs of ReadGenAddrHiddenEx @ 0x14000395C
 * Callers:
 *     ReadGenAddrMaybeHiddenEx @ 0x140002120 (ReadGenAddrMaybeHiddenEx.c)
 *     InitCpcStatesInternal @ 0x140032B70 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddrEx @ 0x140002148 (ReadGenAddrEx.c)
 *     ReadGenAddrHidden @ 0x140003AF0 (ReadGenAddrHidden.c)
 */

__int64 __fastcall ReadGenAddrHiddenEx(__int64 a1, unsigned __int8 *a2)
{
  if ( !a2 )
    return 0LL;
  if ( *a2 == 1 || *a2 == 127 )
    return ReadGenAddrHidden(a1, a2);
  return ReadGenAddrEx(a2);
}
