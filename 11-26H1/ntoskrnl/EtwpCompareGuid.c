/*
 * XREFs of EtwpCompareGuid @ 0x140A6A7E0
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

int __fastcall EtwpCompareGuid(const void *a1, const void *a2)
{
  return memcmp(a1, a2, 0x10uLL);
}
