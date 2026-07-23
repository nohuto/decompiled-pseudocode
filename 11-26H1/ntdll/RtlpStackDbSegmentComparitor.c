/*
 * XREFs of RtlpStackDbSegmentComparitor @ 0x18015B36C
 * Callers:
 *     RtlpStackDbSegmentFindOrCreate @ 0x1800FF554 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     memcmp @ 0x1801648D0 (memcmp.c)
 */

_BOOL8 __fastcall RtlpStackDbSegmentComparitor(__int64 a1, unsigned int *a2)
{
  return *(unsigned __int8 *)(a1 + 23) == *a2
      && memcmp((const void *)(a1 + 24), *((const void **)a2 + 1), 8LL * *a2) == 0;
}
