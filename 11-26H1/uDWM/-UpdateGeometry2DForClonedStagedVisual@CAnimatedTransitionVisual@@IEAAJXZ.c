/*
 * XREFs of ?UpdateGeometry2DForClonedStagedVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180050EEC
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180089430 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180014BFC (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x1800528DC (-RoundToNearestInt@@YAHM@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateGeometry2DForClonedStagedVisual(CAnimatedTransitionVisual *this)
{
  LONG v2; // eax
  float v3; // xmm0_4
  LONG v4; // eax
  struct tagPOINT **v5; // rcx
  __int64 v6; // r8
  struct tagPOINT v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = RoundToNearestInt((float)*((int *)this + 198) + *((float *)this + 172));
  v3 = (float)*((int *)this + 199);
  v8.x = v2;
  v4 = RoundToNearestInt(v3 + *((float *)this + 173));
  v5 = (struct tagPOINT **)*((_QWORD *)this + 19);
  v8.y = v4;
  CVisual::SetOffset(*v5, &v8, v6);
  return 0LL;
}
