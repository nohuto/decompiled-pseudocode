/*
 * XREFs of ?cIntersect@@YAKPEBU_RECTL@@PEAU1@J@Z @ 0x1401EE1C8
 * Callers:
 *     bMoveDevDragRect @ 0x1401EDDDC (bMoveDevDragRect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cIntersect(const struct _RECTL *a1, struct _RECTL *a2)
{
  unsigned int v2; // r9d
  LONG *p_top; // r8
  LONG *v5; // r10
  int v6; // r11d
  LONG left; // edx
  LONG right; // ecx
  LONG top; // edx
  LONG bottom; // ecx

  v2 = 0;
  p_top = &a2->top;
  v5 = &a2->top;
  v6 = 4;
  do
  {
    left = *(v5 - 1);
    if ( left <= a1->left )
      left = a1->left;
    *(p_top - 1) = left;
    right = v5[1];
    if ( right >= a1->right )
      right = a1->right;
    p_top[1] = right;
    if ( left < right )
    {
      top = *v5;
      if ( *v5 <= a1->top )
        top = a1->top;
      *p_top = top;
      bottom = v5[2];
      if ( bottom >= a1->bottom )
        bottom = a1->bottom;
      p_top[2] = bottom;
      if ( top < bottom )
      {
        p_top += 4;
        ++v2;
      }
    }
    v5 += 4;
    --v6;
  }
  while ( v6 );
  return v2;
}
