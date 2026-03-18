/*
 * XREFs of LZ4_compress_HC_extStateHC @ 0x1403D98B0
 * Callers:
 *     RtlCompressBufferLz4 @ 0x1403D8440 (RtlCompressBufferLz4.c)
 * Callees:
 *     LZ4_initStreamHC @ 0x14052EA44 (LZ4_initStreamHC.c)
 *     LZ4_compress_HC_extStateHC_fastReset @ 0x140635084 (LZ4_compress_HC_extStateHC_fastReset.c)
 */

__int64 __fastcall LZ4_compress_HC_extStateHC(int a1, int a2, int a3, int a4, int a5)
{
  __int64 result; // rax

  result = LZ4_initStreamHC();
  if ( result )
    return LZ4_compress_HC_extStateHC_fastReset(a1, a2, a3, a4, a5);
  return result;
}
