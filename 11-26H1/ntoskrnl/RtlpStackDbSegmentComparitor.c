/*
 * XREFs of RtlpStackDbSegmentComparitor @ 0x1406266C4
 * Callers:
 *     RtlpStackDbSegmentFindOrCreate @ 0x14043C888 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

_BOOL8 __fastcall RtlpStackDbSegmentComparitor(__int64 a1, const void **a2)
{
  __int64 v2; // r8

  v2 = *(unsigned int *)a2;
  return *(unsigned __int8 *)(a1 + 23) == (_DWORD)v2 && memcmp((const void *)(a1 + 24), a2[1], 8 * v2) == 0;
}
