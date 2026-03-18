/*
 * XREFs of ?ComputeAdjacencyOverlap@@YAJPEBUtagRECT@@0@Z @ 0x140062FFC
 * Callers:
 *     FindAdjacentMonitor @ 0x1400630A0 (FindAdjacentMonitor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeAdjacencyOverlap(const struct tagRECT *a1, const struct tagRECT *a2)
{
  LONG left; // r9d
  unsigned int v3; // r8d
  LONG right; // r11d
  LONG top; // r10d
  LONG bottom; // ebx
  LONG v7; // edi
  LONG v8; // esi
  LONG v9; // r8d
  LONG v11; // r10d
  LONG v12; // r8d

  left = a1->left;
  v3 = 0;
  right = a2->right;
  if ( a1->left < right && (v11 = a1->right, v11 > a2->left) && (a1->top == a2->bottom || a1->bottom == a2->top) )
  {
    v12 = a1->right;
    if ( left <= a2->left )
      left = a2->left;
    if ( v11 >= right )
      v12 = a2->right;
    return (unsigned int)(v12 - left);
  }
  else
  {
    top = a1->top;
    bottom = a2->bottom;
    if ( top < bottom )
    {
      v7 = a1->bottom;
      v8 = a2->top;
      if ( v7 > v8 && (left == right || a1->right == a2->left) )
      {
        v9 = a1->bottom;
        if ( top <= v8 )
          top = a2->top;
        if ( v7 >= bottom )
          v9 = a2->bottom;
        return (unsigned int)(v9 - top);
      }
    }
  }
  return v3;
}
