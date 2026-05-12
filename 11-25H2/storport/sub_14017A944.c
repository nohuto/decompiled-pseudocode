/*
 * XREFs of sub_14017A944 @ 0x14017A944
 * Callers:
 *     sub_14004534C @ 0x14004534C (sub_14004534C.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void *__fastcall sub_14017A944(_BYTE *a1)
{
  *a1 = 0;
  return memset_0(a1 + 8, 0, 0x40uLL);
}
