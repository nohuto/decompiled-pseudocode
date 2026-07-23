/*
 * XREFs of deflateReset @ 0x180154650
 * Callers:
 *     RtlCompressDeflateInitCompressionStream @ 0x180152F48 (RtlCompressDeflateInitCompressionStream.c)
 * Callees:
 *     deflateResetKeep @ 0x180154688 (deflateResetKeep.c)
 *     lm_init @ 0x180155730 (lm_init.c)
 */

__int64 __fastcall deflateReset(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = deflateResetKeep();
  if ( !v2 )
    lm_init(*(_QWORD *)(a1 + 40));
  return v2;
}
