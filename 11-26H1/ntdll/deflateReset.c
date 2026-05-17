/*
 * XREFs of deflateReset @ 0x180154780
 * Callers:
 *     RtlCompressDeflateInitCompressionStream @ 0x180153078 (RtlCompressDeflateInitCompressionStream.c)
 * Callees:
 *     deflateResetKeep @ 0x1801547B8 (deflateResetKeep.c)
 *     lm_init @ 0x180155860 (lm_init.c)
 */

__int64 __fastcall deflateReset(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = deflateResetKeep();
  if ( !v2 )
    lm_init(*(_QWORD *)(a1 + 40));
  return v2;
}
