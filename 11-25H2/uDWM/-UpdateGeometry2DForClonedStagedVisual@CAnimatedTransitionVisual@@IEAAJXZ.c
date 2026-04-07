/*
 * XREFs of ?UpdateGeometry2DForClonedStagedVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800869A0
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180021C68 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18000A81C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180017004 (-RoundToNearestInt@@YAHM@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateGeometry2DForClonedStagedVisual(CAnimatedTransitionVisual *this)
{
  LONG v2; // eax
  float v3; // xmm0_4
  LONG v4; // eax
  struct tagPOINT **v5; // rcx
  struct tagPOINT v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = RoundToNearestInt((float)*((int *)this + 202) + *((float *)this + 176));
  v3 = (float)*((int *)this + 203);
  v7.x = v2;
  v4 = RoundToNearestInt(v3 + *((float *)this + 177));
  v5 = (struct tagPOINT **)*((_QWORD *)this + 20);
  v7.y = v4;
  CVisual::SetOffset(*v5, &v7);
  return 0LL;
}
