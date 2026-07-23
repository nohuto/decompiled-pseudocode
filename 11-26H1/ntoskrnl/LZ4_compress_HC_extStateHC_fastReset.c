/*
 * XREFs of LZ4_compress_HC_extStateHC_fastReset @ 0x14063808C
 * Callers:
 *     LZ4_compress_HC_extStateHC @ 0x1403DCA9C (LZ4_compress_HC_extStateHC.c)
 * Callees:
 *     LZ4_compressBound @ 0x14046E010 (LZ4_compressBound.c)
 *     LZ4HC_compress_generic @ 0x14062DBFC (LZ4HC_compress_generic.c)
 *     LZ4HC_init_internal @ 0x140637EA4 (LZ4HC_init_internal.c)
 *     LZ4_resetStreamHC_fast @ 0x140638114 (LZ4_resetStreamHC_fast.c)
 */

__int64 __fastcall LZ4_compress_HC_extStateHC_fastReset(__int64 a1, char *a2, _BYTE *a3, int a4, int a5)
{
  int v9; // eax
  __int64 v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = a4;
  if ( (a1 & 7) != 0 )
    return 0LL;
  LZ4_resetStreamHC_fast();
  LZ4HC_init_internal(a1, (__int64)a2);
  v9 = LZ4_compressBound(v11);
  return LZ4HC_compress_generic(a1, a2, a3, &v11, a5, v10, a5 < v9);
}
