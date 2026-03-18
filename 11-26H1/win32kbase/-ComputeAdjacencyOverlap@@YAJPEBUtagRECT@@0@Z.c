/*
 * XREFs of ?ComputeAdjacencyOverlap@@YAJPEBUtagRECT@@0@Z @ 0x140081A88
 * Callers:
 *     FindAdjacentMonitor @ 0x140081B2C (FindAdjacentMonitor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeAdjacencyOverlap(const struct tagRECT *a1, const struct tagRECT *a2)
{
  LONG right; // ebx
  unsigned int v3; // r8d
  LONG left; // r10d
  LONG bottom; // r11d
  LONG top; // r9d
  LONG v7; // esi
  LONG v8; // edi
  LONG v9; // r8d
  LONG v11; // r9d
  LONG v12; // r8d

  right = a2->right;
  v3 = 0;
  left = a1->left;
  if ( a1->left < right && (v11 = a1->right, v11 > a2->left) && (a1->top == a2->bottom || a1->bottom == a2->top) )
  {
    v12 = a1->right;
    if ( v11 >= right )
      v12 = a2->right;
    if ( left <= a2->left )
      left = a2->left;
    return (unsigned int)(v12 - left);
  }
  else
  {
    bottom = a2->bottom;
    top = a1->top;
    if ( top < bottom )
    {
      v7 = a2->top;
      v8 = a1->bottom;
      if ( v8 > v7 && (left == right || a1->right == a2->left) )
      {
        v9 = a1->bottom;
        if ( v8 >= bottom )
          v9 = a2->bottom;
        if ( top <= v7 )
          top = a2->top;
        return (unsigned int)(v9 - top);
      }
    }
  }
  return v3;
}
