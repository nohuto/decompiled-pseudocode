/*
 * XREFs of ?ProcessSetMaxPosition@CInteractionTracker2@@AEAAXXZ @ 0x180275124
 * Callers:
 *     ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760 (-CleanDirties@CInteractionTracker2@@IEAAXXZ.c)
 * Callees:
 *     ?SetMaxPositionInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z @ 0x180276274 (-SetMaxPositionInternal@CInteractionTracker2@@AEAAXAEBUD2DVector3@@@Z.c)
 */

void __fastcall CInteractionTracker2::ProcessSetMaxPosition(CInteractionTracker2 *this)
{
  int v1; // xmm1_4
  _DWORD v2[6]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_DWORD *)this + 58);
  v2[0] = *((_DWORD *)this + 57);
  v2[1] = v1;
  v2[2] = 0;
  CInteractionTracker2::SetMaxPositionInternal(this, (const struct D2DVector3 *)v2);
}
