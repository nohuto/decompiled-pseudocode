/*
 * XREFs of HvlpFastAcknowledgePageRequest @ 0x1405BE950
 * Callers:
 *     HvlAcknowledgePageRequest @ 0x1405BBAE0 (HvlAcknowledgePageRequest.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1405BE9FC (HvlpSlowAcknowledgePageRequest.c)
 * Callees:
 *     HvcallFastExtended @ 0x14032BFB0 (HvcallFastExtended.c)
 */

__int64 __fastcall HvlpFastAcknowledgePageRequest(int a1, unsigned __int64 a2, int *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+50h] [rbp+18h]

  LODWORD(v5) = 65702;
  HIDWORD(v5) = a1 & 0xFFF;
  result = HvcallFastExtended(v5, a2, 32 * a1, 0LL, 0);
  *a3 = WORD2(result) & 0xFFF;
  return result;
}
