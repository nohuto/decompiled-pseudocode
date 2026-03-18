/*
 * XREFs of ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x14033AAD8
 * Callers:
 *     NtGdiEngFillPath @ 0x14020DCC0 (NtGdiEngFillPath.c)
 *     NtGdiEngStrokePath @ 0x140264B40 (NtGdiEngStrokePath.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14033C2E0 (NtGdiEngStrokeAndFillPath.c)
 * Callees:
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z @ 0x1402FBB4C (-TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z.c)
 *     Feature_1886439739__private_IsEnabledDeviceUsageNoInline @ 0x14033AE0C (Feature_1886439739__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall bCheckSurfacePath(struct _SURFOBJ *a1, struct _PATHOBJ *a2, struct _CLIPOBJ *a3)
{
  unsigned int v4; // ebx
  BYTE iDComplexity; // al
  BOOL v6; // ebp
  RECTL *p_rclBounds; // rdi
  __int64 v8; // rax
  LONG right; // r8d
  Gre::Base *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rax
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF

  v4 = 1;
  v13 = 0LL;
  if ( !a1 || !a2 )
    return 0;
  if ( !a3 )
  {
    v6 = 1;
LABEL_8:
    p_rclBounds = (RECTL *)&v13;
    v8 = 0LL;
    v13 = *(_OWORD *)(*(_QWORD *)&a2[1] + 48LL);
    do
      *((int *)&v13 + v8++) >>= 4;
    while ( v8 < 4 );
    goto LABEL_10;
  }
  iDComplexity = a3->iDComplexity;
  v6 = iDComplexity == 0;
  if ( !iDComplexity )
    goto LABEL_8;
  p_rclBounds = &a3->rclBounds;
  if ( a3 == (struct _CLIPOBJ *)-4LL )
    return v4;
LABEL_10:
  right = p_rclBounds->right;
  if ( p_rclBounds->left > right || p_rclBounds->top > p_rclBounds->bottom )
  {
    v4 = 0;
  }
  else if ( right > a1->sizlBitmap.cx )
  {
LABEL_18:
    v4 = 0;
    goto LABEL_19;
  }
  if ( p_rclBounds->left < 0 || p_rclBounds->bottom > a1->sizlBitmap.cy || p_rclBounds->top < 0 )
    goto LABEL_18;
LABEL_19:
  if ( (unsigned int)Feature_1886439739__private_IsEnabledDeviceUsageNoInline(a1)
    && v4
    && v6
    && (p_rclBounds->right == a1->sizlBitmap.cx || p_rclBounds->bottom == a1->sizlBitmap.cy) )
  {
    v11 = Gre::Base::Globals(v10);
    TraceLoggingWriteUnsupportedGdiUsage((_DWORD *)v11 + 1438);
  }
  return v4;
}
