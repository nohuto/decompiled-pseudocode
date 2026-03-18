/*
 * XREFs of ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1400F6894
 * Callers:
 *     NtGdiEngBitBlt @ 0x1400F4B10 (NtGdiEngBitBlt.c)
 *     NtGdiEngCopyBits @ 0x14032CB40 (NtGdiEngCopyBits.c)
 *     NtGdiEngPlgBlt @ 0x14032D980 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x14032DD50 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x14032E1F0 (NtGdiEngStretchBltROP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCheckSurfaceRectSize(
        struct _SURFOBJ *a1,
        struct _RECTL *a2,
        struct _CLIPOBJ *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  LONG left; // r11d
  LONG top; // edx
  LONG right; // r10d
  LONG bottom; // esi
  RECTL *p_rclBounds; // rdi
  LONG v13; // eax
  LONG v14; // ecx
  LONG v15; // r10d
  LONG v16; // r9d
  LONG v17; // r8d
  LONG v18; // edx
  LONG v19; // ebx
  LONG v20; // r11d
  int v21; // r8d
  int v22; // ebx
  HDEV hdev; // rax
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx

  left = 0;
  top = 0;
  right = 0;
  bottom = 0;
  p_rclBounds = 0LL;
  if ( !a1 )
    return 1LL;
  if ( a3 && a3->iDComplexity )
  {
    p_rclBounds = &a3->rclBounds;
    left = a3->rclBounds.left;
    top = a3->rclBounds.top;
    right = a3->rclBounds.right;
    bottom = a3->rclBounds.bottom;
  }
  else if ( a2 )
  {
    left = a2->left;
    top = a2->top;
    right = a2->right;
    bottom = a2->bottom;
  }
  if ( left <= right && top <= bottom )
  {
    if ( SLODWORD(a1[1].hsurf) < 0 )
    {
      hdev = a1->hdev;
      if ( hdev )
      {
        if ( ((_DWORD)hdev[10] & 0x20000) != 0 )
        {
          v25 = *((_DWORD *)hdev + 644);
          left -= v25;
          right -= v25;
          v26 = *((_DWORD *)hdev + 645);
          top -= v26;
          bottom -= v26;
        }
      }
    }
    if ( right <= a1->sizlBitmap.cx && left >= 0 && bottom <= a1->sizlBitmap.cy && top >= 0 )
    {
      if ( p_rclBounds )
      {
        if ( a2 )
        {
          v13 = a2->right;
          v14 = a2->left;
          v15 = a2->top;
          v16 = a2->bottom;
          v17 = p_rclBounds->right;
          v18 = p_rclBounds->left;
          v19 = p_rclBounds->bottom;
          if ( v17 >= v13 )
            v17 = v13;
          v20 = p_rclBounds->top;
          if ( v18 <= v14 )
            v18 = v14;
          v21 = v17 - v18;
          if ( v21 <= 0 )
            v21 = 0;
          *a4 = v21;
          if ( v19 >= v16 )
            v19 = v16;
          if ( v20 <= v15 )
            v20 = v15;
          v22 = v19 - v20;
          if ( v22 <= 0 )
            v22 = 0;
          *a5 = v22;
          return 1LL;
        }
        v29 = p_rclBounds->right - p_rclBounds->left;
        if ( v29 <= 0 )
          v29 = 0;
        *a4 = v29;
        v28 = p_rclBounds->bottom - p_rclBounds->top;
LABEL_37:
        if ( v28 <= 0 )
          v28 = 0;
        *a5 = v28;
        return 1LL;
      }
      if ( a2 )
      {
        v27 = a2->right - a2->left;
        if ( v27 <= 0 )
          v27 = 0;
        *a4 = v27;
        v28 = a2->bottom - a2->top;
        goto LABEL_37;
      }
      return 1LL;
    }
  }
  return 0LL;
}
