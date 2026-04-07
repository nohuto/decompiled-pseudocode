/*
 * XREFs of ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x1800333F0
 * Callers:
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x1800330C0 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800332CC (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLivePreview::s_GetCoverageStateOfTwoRects(const RECT *a1, const RECT *a2, struct tagRECT *a3)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( IntersectRect(a3, a1, a2) )
    return (unsigned int)EqualRect(a3, a2) + 1;
  return v5;
}
