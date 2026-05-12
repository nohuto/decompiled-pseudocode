/*
 * XREFs of sub_14006B1D8 @ 0x14006B1D8
 * Callers:
 *     sub_14004534C @ 0x14004534C (sub_14004534C.c)
 *     sub_1400C8EEC @ 0x1400C8EEC (sub_1400C8EEC.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void __fastcall sub_14006B1D8(union _SLIST_HEADER *a1)
{
  memset_0(a1, 0, 0x80uLL);
  InitializeSListHead(a1 + 5);
  InitializeSListHead(a1 + 6);
}
