/*
 * XREFs of LZ4_initStreamHC @ 0x1801224D0
 * Callers:
 *     LZ4_resetStreamHC_fast @ 0x180122474 (LZ4_resetStreamHC_fast.c)
 *     LZ4_compress_HC_extStateHC @ 0x180155ABC (LZ4_compress_HC_extStateHC.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

_WORD *__fastcall LZ4_initStreamHC(_WORD *a1)
{
  _WORD *result; // rax

  if ( !a1 || ((unsigned __int8)a1 & 7) != 0 )
    return 0LL;
  memset_thunk_772440563353939046(a1, 0, 0x40030uLL);
  result = a1;
  a1[131090] = 9;
  return result;
}
