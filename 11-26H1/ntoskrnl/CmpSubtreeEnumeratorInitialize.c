/*
 * XREFs of CmpSubtreeEnumeratorInitialize @ 0x140B6541C
 * Callers:
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpInitializeKeyNodeStack @ 0x140944138 (CmpInitializeKeyNodeStack.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorInitialize(__int64 a1)
{
  memset_0((void *)(a1 + 2), 0, 0x66uLL);
  *(_WORD *)a1 = -2;
  return CmpInitializeKeyNodeStack((char *)(a1 + 16));
}
