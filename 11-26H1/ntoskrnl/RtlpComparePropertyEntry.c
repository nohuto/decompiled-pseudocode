/*
 * XREFs of RtlpComparePropertyEntry @ 0x14061A9D0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x14073D750 (memcmp.c)
 */

int __fastcall RtlpComparePropertyEntry(const void *a1, const void *a2)
{
  return memcmp(a1, a2, 0x10uLL);
}
