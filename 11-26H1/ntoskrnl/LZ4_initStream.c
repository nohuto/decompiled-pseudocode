/*
 * XREFs of LZ4_initStream @ 0x1404703F0
 * Callers:
 *     LZ4_compress_fast_extState_progress @ 0x1406298E8 (LZ4_compress_fast_extState_progress.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *__fastcall LZ4_initStream(void *a1)
{
  if ( !a1 || ((unsigned __int8)a1 & 7) != 0 )
    return 0LL;
  memset_0(a1, 0, 0x4020uLL);
  return a1;
}
