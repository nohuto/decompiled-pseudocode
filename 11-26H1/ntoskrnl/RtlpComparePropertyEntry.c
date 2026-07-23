/*
 * XREFs of RtlpComparePropertyEntry @ 0x14061DA20
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

int __fastcall RtlpComparePropertyEntry(const void *a1, const void *a2)
{
  return memcmp(a1, a2, 0x10uLL);
}
