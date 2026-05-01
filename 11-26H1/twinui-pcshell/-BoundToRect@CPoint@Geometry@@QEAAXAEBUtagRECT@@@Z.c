/*
 * XREFs of ?BoundToRect@CPoint@Geometry@@QEAAXAEBUtagRECT@@@Z @ 0x1804C5EF0
 * Callers:
 *     ?MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x1804C6BD0 (-MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Geometry::CPoint::BoundToRect(LONG *this, const struct tagRECT *a2)
{
  LONG right; // r9d
  LONG v4; // eax
  LONG left; // r8d
  LONG v7; // edx
  LONG bottom; // r8d
  LONG v9; // eax
  LONG top; // ecx

  right = a2->right;
  v4 = right;
  left = a2->left;
  if ( right >= *this )
    v4 = *this;
  if ( left <= v4 )
  {
    left = *this;
    if ( right < *this )
      left = a2->right;
  }
  v7 = this[1];
  *this = left;
  bottom = a2->bottom;
  v9 = bottom;
  top = a2->top;
  if ( bottom >= v7 )
    v9 = v7;
  if ( top <= v9 )
  {
    top = v7;
    if ( bottom < v7 )
      top = a2->bottom;
  }
  this[1] = top;
}
