/*
 * XREFs of CmpKeyEnumStackInitialize @ 0x140944064
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x140866AEC (CmpPartialPromoteSubkeys.c)
 *     CmpSubtreeEnumeratorStart @ 0x140943AB8 (CmpSubtreeEnumeratorStart.c)
 *     CmpEnumerateLayeredKey @ 0x140944A98 (CmpEnumerateLayeredKey.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140AE2504 (CmpGetSubKeyCountForKeyNodeStack.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x1409440B4 (CmpKeyEnumStackEntryInitialize.c)
 *     CmpInitializeKeyNodeStack @ 0x140944138 (CmpInitializeKeyNodeStack.c)
 */

__int64 __fastcall CmpKeyEnumStackInitialize(char *a1)
{
  char *v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  memset_0(a1, 0, 0x160uLL);
  CmpInitializeKeyNodeStack(a1 + 8);
  v2 = a1 + 88;
  v3 = 2LL;
  do
  {
    result = CmpKeyEnumStackEntryInitialize(v2);
    v2 += 128;
    --v3;
  }
  while ( v3 );
  return result;
}
