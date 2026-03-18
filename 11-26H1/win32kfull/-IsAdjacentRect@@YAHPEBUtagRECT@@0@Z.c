/*
 * XREFs of ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x14011F4D8
 * Callers:
 *     GetInheritedMonitor @ 0x14011EDF0 (GetInheritedMonitor.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x14011F35C (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsAdjacentRect(const struct tagRECT *a1, const struct tagRECT *a2)
{
  LONG right; // r9d
  unsigned int v3; // r8d
  char v4; // r11
  LONG bottom; // edi
  LONG top; // esi
  char v7; // r10
  char v8; // r9

  right = a2->right;
  v3 = 0;
  if ( a1->left >= right || (v4 = 1, a1->right <= a2->left) )
    v4 = 0;
  bottom = a2->bottom;
  top = a1->top;
  if ( top >= bottom || (v7 = 1, a1->bottom <= a2->top) )
    v7 = 0;
  if ( a1->left == right || (v8 = 0, a1->right == a2->left) )
    v8 = 1;
  if ( (top == bottom || a1->bottom == a2->top) && v4 || v8 && v7 )
    return 1;
  return v3;
}
