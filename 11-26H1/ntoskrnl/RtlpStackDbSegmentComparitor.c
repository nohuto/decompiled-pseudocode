/*
 * XREFs of RtlpStackDbSegmentComparitor @ 0x140623674
 * Callers:
 *     RtlpStackDbSegmentFindOrCreate @ 0x140443D78 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     memcmp @ 0x14073D750 (memcmp.c)
 */

_BOOL8 __fastcall RtlpStackDbSegmentComparitor(__int64 a1, const void **a2)
{
  __int64 v2; // r8

  v2 = *(unsigned int *)a2;
  return *(unsigned __int8 *)(a1 + 23) == (_DWORD)v2 && memcmp((const void *)(a1 + 24), a2[1], 8 * v2) == 0;
}
