/*
 * XREFs of deflateReset @ 0x14062AC3C
 * Callers:
 *     RtlCompressDeflateInitCompressionStream @ 0x140629534 (RtlCompressDeflateInitCompressionStream.c)
 * Callees:
 *     deflateResetKeep @ 0x14062AC74 (deflateResetKeep.c)
 *     lm_init @ 0x14062C5C0 (lm_init.c)
 */

__int64 __fastcall deflateReset(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = deflateResetKeep();
  if ( !v2 )
    lm_init(*(_QWORD *)(a1 + 40));
  return v2;
}
