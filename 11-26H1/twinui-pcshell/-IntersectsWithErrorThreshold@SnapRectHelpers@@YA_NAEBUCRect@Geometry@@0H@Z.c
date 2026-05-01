/*
 * XREFs of ?IntersectsWithErrorThreshold@SnapRectHelpers@@YA_NAEBUCRect@Geometry@@0H@Z @ 0x1801D7874
 * Callers:
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18006E57C (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV-$deque@UtagRE.c)
 *     ?DoSnapRegionsOverlap@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@1@AEBUCRect@Geometry@@1H@Z @ 0x1805AB8D4 (-DoSnapRegionsOverlap@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@1@AEBUCRect@Geometry@@1H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

char __fastcall SnapRectHelpers::IntersectsWithErrorThreshold(
        RECT *lprcSrc1,
        RECT *lprcSrc2,
        const struct Geometry::CRect *a3)
{
  int v3; // ebx
  BOOL v4; // eax
  char v5; // cl
  struct tagRECT rcDst; // [rsp+20h] [rbp-28h] BYREF

  v3 = (int)a3;
  rcDst = 0LL;
  v4 = IntersectRect(&rcDst, lprcSrc1, lprcSrc2);
  v5 = 0;
  if ( v4 && rcDst.right - rcDst.left > v3 )
    return rcDst.bottom - rcDst.top > v3;
  return v5;
}
