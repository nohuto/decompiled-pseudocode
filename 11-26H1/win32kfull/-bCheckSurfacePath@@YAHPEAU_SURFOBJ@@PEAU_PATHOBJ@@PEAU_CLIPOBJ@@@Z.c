/*
 * XREFs of ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x14032C248
 * Callers:
 *     NtGdiEngFillPath @ 0x1400F5100 (NtGdiEngFillPath.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14032E7E0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x14032EBB0 (NtGdiEngStrokePath.c)
 * Callees:
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z @ 0x14032C1E4 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z.c)
 */

__int64 __fastcall bCheckSurfacePath(struct _SURFOBJ *a1, struct _PATHOBJ *a2, struct _CLIPOBJ *a3)
{
  unsigned int v5; // r9d
  BYTE iDComplexity; // al
  BOOL v7; // r8d
  RECTL *p_rclBounds; // rbx
  __int64 v9; // rax
  LONG right; // r10d
  unsigned int v12; // edi
  LONG cy; // eax
  struct Gre::Base::SESSION_GLOBALS *v14; // rax
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF

  v5 = 1;
  v15 = 0LL;
  if ( !a1 || !a2 )
    return 0;
  if ( a3 )
  {
    iDComplexity = a3->iDComplexity;
    v7 = iDComplexity == 0;
    if ( iDComplexity )
    {
      p_rclBounds = &a3->rclBounds;
      if ( !p_rclBounds )
        return v5;
      goto LABEL_10;
    }
  }
  else
  {
    v7 = 1;
  }
  p_rclBounds = (RECTL *)&v15;
  v9 = 0LL;
  v15 = *(_OWORD *)(*(_QWORD *)&a2[1] + 48LL);
  do
    *((int *)&v15 + v9++) >>= 4;
  while ( v9 < 4 );
LABEL_10:
  right = p_rclBounds->right;
  if ( p_rclBounds->left > right || p_rclBounds->top > p_rclBounds->bottom )
  {
    v5 = 0;
  }
  else if ( right > a1->sizlBitmap.cx )
  {
    return 0;
  }
  v12 = v5;
  if ( p_rclBounds->left < 0 )
    return 0;
  cy = a1->sizlBitmap.cy;
  if ( p_rclBounds->bottom > cy || p_rclBounds->top < 0 )
    return 0;
  if ( v5 && v7 && (right == a1->sizlBitmap.cx || p_rclBounds->bottom == cy) )
  {
    v14 = Gre::Base::Globals((Gre::Base *)a1);
    TraceLoggingWriteUnsupportedGdiUsage(
      (_DWORD *)v14 + 1446,
      28,
      p_rclBounds->right,
      p_rclBounds->bottom,
      a1->sizlBitmap.cx,
      a1->sizlBitmap.cy);
    return v12;
  }
  return v5;
}
