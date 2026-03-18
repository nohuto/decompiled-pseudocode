/*
 * XREFs of ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1400F3E60
 * Callers:
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1400F4200 (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1400F4924 (-bFindFirstSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindNextSegment@XCLIPOBJ@@IEAAHXZ @ 0x1400F5D98 (-bFindNextSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bRecordSegment@XCLIPOBJ@@IEAAHXZ @ 0x1400F5E8C (-bRecordSegment@XCLIPOBJ@@IEAAHXZ.c)
 * Callees:
 *     ?vIntersectHorizontal@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z @ 0x1400F3DB8 (-vIntersectHorizontal@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z.c)
 *     ?vIntersectVertical@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z @ 0x1400F3EC8 (-vIntersectVertical@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z.c)
 */

__int64 __fastcall XCLIPOBJ::bIntersectWall(XCLIPOBJ *this, LONG a2, struct _POINTL *a3, struct _POINTL *a4, int *a5)
{
  __int64 v5; // rbx
  LONG v6; // r11d
  int v7; // r10d

  v5 = *((_QWORD *)this + 18);
  v6 = 1 - a2;
  v7 = *(_DWORD *)(v5 + 64);
  if ( (v7 & 0x20) == 0 )
    v6 = a2;
  if ( (v7 & 5) != 0 )
    vIntersectHorizontal((struct DDA_CLIPLINE *)(v5 + 64), v6, a3, a4, a5);
  else
    vIntersectVertical((struct DDA_CLIPLINE *)(v5 + 64), v6, a3, a4, a5);
  return 1LL;
}
