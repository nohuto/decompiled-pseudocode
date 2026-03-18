/*
 * XREFs of CmpSortedValueEnumStackInitialize @ 0x140B055B4
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140492AB0 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *__fastcall CmpSortedValueEnumStackInitialize(__int64 a1)
{
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 10) = 0;
  *(_WORD *)(a1 + 14) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_WORD *)(a1 + 8) = -1;
  return memset_0((void *)(a1 + 16), 0, 0x40uLL);
}
