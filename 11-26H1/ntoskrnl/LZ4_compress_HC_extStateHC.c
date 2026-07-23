/*
 * XREFs of LZ4_compress_HC_extStateHC @ 0x1403DCA9C
 * Callers:
 *     RtlCompressBufferLz4 @ 0x1403DB670 (RtlCompressBufferLz4.c)
 * Callees:
 *     LZ4_initStreamHC @ 0x140530F64 (LZ4_initStreamHC.c)
 *     LZ4_compress_HC_extStateHC_fastReset @ 0x14063808C (LZ4_compress_HC_extStateHC_fastReset.c)
 */

__int64 __fastcall LZ4_compress_HC_extStateHC(int a1, int a2, int a3, int a4, int a5)
{
  __int64 result; // rax

  result = LZ4_initStreamHC();
  if ( result )
    return LZ4_compress_HC_extStateHC_fastReset(a1, a2, a3, a4, a5);
  return result;
}
