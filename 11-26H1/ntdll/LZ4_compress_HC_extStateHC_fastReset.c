/*
 * XREFs of LZ4_compress_HC_extStateHC_fastReset @ 0x180155B1C
 * Callers:
 *     LZ4_compress_HC_extStateHC @ 0x180155ABC (LZ4_compress_HC_extStateHC.c)
 * Callees:
 *     LZ4HC_compress_generic @ 0x1800ED00C (LZ4HC_compress_generic.c)
 *     LZ4_compressBound @ 0x180120590 (LZ4_compressBound.c)
 *     LZ4_resetStreamHC_fast @ 0x180122474 (LZ4_resetStreamHC_fast.c)
 *     LZ4HC_init_internal @ 0x180155A28 (LZ4HC_init_internal.c)
 */

__int64 __fastcall LZ4_compress_HC_extStateHC_fastReset(__int64 a1, unsigned int *a2, _BYTE *a3, int a4, int a5)
{
  int v9; // eax
  __int64 v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = a4;
  if ( (a1 & 7) != 0 )
    return 0LL;
  LZ4_resetStreamHC_fast(a1);
  LZ4HC_init_internal(a1, (__int64)a2);
  v9 = LZ4_compressBound(v11);
  return LZ4HC_compress_generic(a1, a2, a3, &v11, a5, v10, a5 < v9);
}
