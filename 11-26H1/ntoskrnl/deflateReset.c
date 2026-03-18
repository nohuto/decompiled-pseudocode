/*
 * XREFs of deflateReset @ 0x140627BEC
 * Callers:
 *     RtlCompressDeflateInitCompressionStream @ 0x1406264E4 (RtlCompressDeflateInitCompressionStream.c)
 * Callees:
 *     deflateResetKeep @ 0x140627C24 (deflateResetKeep.c)
 *     lm_init @ 0x140629570 (lm_init.c)
 */

__int64 __fastcall deflateReset(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = deflateResetKeep();
  if ( !v2 )
    lm_init(*(_QWORD *)(a1 + 40));
  return v2;
}
