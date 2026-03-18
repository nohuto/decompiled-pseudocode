/*
 * XREFs of ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x14032C35C
 * Callers:
 *     NtGdiEngEraseSurface @ 0x1400F48A0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngBitBlt @ 0x1400F4B10 (NtGdiEngBitBlt.c)
 *     ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1400F6A40 (-bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     NtGdiEngAlphaBlend @ 0x14032C760 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCopyBits @ 0x14032CB40 (NtGdiEngCopyBits.c)
 *     NtGdiEngLineTo @ 0x14032D480 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x14032D7D0 (NtGdiEngPaint.c)
 *     NtGdiEngTextOut @ 0x14032EF00 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x14032F2F0 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z @ 0x14032C1E4 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z.c)
 */

__int64 __fastcall bCheckSurfaceRect(struct _SURFOBJ *a1, struct _RECTL *p_rclBounds, struct _CLIPOBJ *a3)
{
  unsigned int v6; // edx
  BYTE iDComplexity; // al
  BOOL v8; // r8d
  unsigned int v9; // esi
  HDEV hdev; // rax
  int v11; // ecx
  int v12; // ecx
  LONG right; // r10d
  Gre::Base *v14; // rcx
  LONG *p_top; // rdi
  unsigned int v16; // r10d
  struct Gre::Base::SESSION_GLOBALS *v17; // rax
  __int128 v19; // [rsp+30h] [rbp-28h] BYREF

  v6 = 1;
  if ( a1 )
  {
    if ( a3 )
    {
      iDComplexity = a3->iDComplexity;
      v8 = iDComplexity == 0;
      if ( iDComplexity )
        p_rclBounds = &a3->rclBounds;
    }
    else
    {
      v8 = 1;
    }
    if ( p_rclBounds )
    {
      if ( p_rclBounds->left > p_rclBounds->right || p_rclBounds->top > p_rclBounds->bottom )
        v6 = 0;
      v9 = v6;
      v19 = (__int128)*p_rclBounds;
      if ( SLODWORD(a1[1].hsurf) < 0 )
      {
        hdev = a1->hdev;
        if ( hdev )
        {
          if ( ((_DWORD)hdev[10] & 0x20000) != 0 )
          {
            v11 = *((_DWORD *)hdev + 644);
            p_rclBounds = (struct _RECTL *)&v19;
            LODWORD(v19) = v19 - v11;
            DWORD2(v19) -= v11;
            v12 = *((_DWORD *)hdev + 645);
            DWORD1(v19) -= v12;
            HIDWORD(v19) -= v12;
          }
        }
      }
      if ( v6 )
      {
        right = p_rclBounds->right;
        if ( right > a1->sizlBitmap.cx
          || p_rclBounds->left < 0
          || p_rclBounds->bottom > a1->sizlBitmap.cy
          || p_rclBounds->top < 0 )
        {
          return 0;
        }
        else if ( v8 )
        {
          if ( (v14 = (Gre::Base *)(p_rclBounds->left & 0xF8000000), (p_rclBounds->left & 0xF8000000) != 0)
            && (p_top = &p_rclBounds->top, (_DWORD)v14 != -134217728)
            || (v14 = (Gre::Base *)(p_rclBounds->bottom & 0xF8000000), (p_rclBounds->bottom & 0xF8000000) != 0)
            && (p_top = &p_rclBounds->top, (_DWORD)v14 != -134217728)
            || (v16 = right & 0xF8000000) != 0 && (p_top = &p_rclBounds->top, v16 != -134217728)
            || (p_top = &p_rclBounds->top, (p_rclBounds->top & 0xF8000000) != 0)
            && (p_rclBounds->top & 0xF8000000) != 0xF8000000 )
          {
            v17 = Gre::Base::Globals(v14);
            TraceLoggingWriteUnsupportedGdiUsage(
              (_DWORD *)v17 + 1445,
              27,
              p_rclBounds->left,
              p_rclBounds->right,
              *p_top,
              p_rclBounds->bottom);
            return v9;
          }
        }
      }
    }
  }
  return v6;
}
