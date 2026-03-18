/*
 * XREFs of LZ4_initStreamHC @ 0x14052EA44
 * Callers:
 *     LZ4_compress_HC_extStateHC @ 0x1403D98B0 (LZ4_compress_HC_extStateHC.c)
 *     LZ4_resetStreamHC_fast @ 0x14063510C (LZ4_resetStreamHC_fast.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

_WORD *__fastcall LZ4_initStreamHC(_WORD *a1)
{
  _WORD *result; // rax

  if ( !a1 || ((unsigned __int8)a1 & 7) != 0 )
    return 0LL;
  memset_0(a1, 0, 0x40030uLL);
  result = a1;
  a1[131090] = 9;
  return result;
}
