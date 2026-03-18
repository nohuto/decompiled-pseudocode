/*
 * XREFs of ?bCheckDestSurfaceOverlap@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14021FDD0
 * Callers:
 *     NtGdiEngStretchBlt @ 0x140263F90 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1402644B0 (NtGdiEngStretchBltROP.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bCheckDestSurfaceOverlap(struct _SURFOBJ *a1, struct _RECTL *a2)
{
  LONG right; // r8d
  LONG bottom; // eax
  LONG left; // r9d
  LONG top; // r10d
  int v6; // edx
  LONG cx; // ebx
  int v8; // eax
  LONG cy; // r8d
  LONG v10; // ecx
  LONG v11; // r11d

  right = a2->right;
  bottom = a2->bottom;
  left = a2->left;
  top = a2->top;
  v6 = bottom;
  cx = a1->sizlBitmap.cx;
  if ( bottom >= top )
  {
    v6 = top;
    top = bottom;
  }
  v8 = right;
  if ( right >= left )
  {
    v8 = left;
    left = right;
  }
  cy = a1->sizlBitmap.cy;
  v10 = 0;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  if ( v6 >= 0 )
    v10 = v6;
  if ( cx >= left )
    cx = left;
  if ( cy >= top )
    cy = top;
  if ( cx < v11 )
    return 0LL;
  if ( cy < v10 )
    v10 = cy;
  return v10 != cy && v11 != cx;
}
