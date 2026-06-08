/*
 * XREFs of ReadGenAddrHiddenEx @ 0x140005D88
 * Callers:
 *     ReadGenAddrMaybeHiddenEx @ 0x140001C64 (ReadGenAddrMaybeHiddenEx.c)
 *     InitCpcStatesInternal @ 0x140036530 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddrEx @ 0x140001C90 (ReadGenAddrEx.c)
 *     ReadGenAddrHidden @ 0x140005E88 (ReadGenAddrHidden.c)
 */

unsigned __int64 __fastcall ReadGenAddrHiddenEx(__int64 a1, unsigned __int8 *a2)
{
  if ( !a2 )
    return 0LL;
  if ( *a2 == 1 || *a2 == 127 )
    return ReadGenAddrHidden(a1, a2);
  return ReadGenAddrEx(a2);
}
