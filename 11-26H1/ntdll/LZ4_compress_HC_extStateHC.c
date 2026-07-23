/*
 * XREFs of LZ4_compress_HC_extStateHC @ 0x180155ABC
 * Callers:
 *     RtlCompressBufferLz4 @ 0x180152D90 (RtlCompressBufferLz4.c)
 * Callees:
 *     LZ4_initStreamHC @ 0x1801224D0 (LZ4_initStreamHC.c)
 *     LZ4_compress_HC_extStateHC_fastReset @ 0x180155B1C (LZ4_compress_HC_extStateHC_fastReset.c)
 */

_WORD *__fastcall LZ4_compress_HC_extStateHC(_WORD *a1, int a2, int a3, int a4, int a5)
{
  int v8; // ebx
  _WORD *result; // rax

  v8 = (int)a1;
  result = LZ4_initStreamHC(a1);
  if ( result )
    return (_WORD *)LZ4_compress_HC_extStateHC_fastReset(v8, a2, a3, a4, a5);
  return result;
}
