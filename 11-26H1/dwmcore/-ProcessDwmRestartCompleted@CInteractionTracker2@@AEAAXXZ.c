/*
 * XREFs of ?ProcessDwmRestartCompleted@CInteractionTracker2@@AEAAXXZ @ 0x1802749CC
 * Callers:
 *     ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760 (-CleanDirties@CInteractionTracker2@@IEAAXXZ.c)
 * Callees:
 *     ?AddPendingStateChange@CInteractionTracker2@@AEAAXW4ScrollState@@AEBUD2DVector3@@M@Z @ 0x18027197C (-AddPendingStateChange@CInteractionTracker2@@AEAAXW4ScrollState@@AEBUD2DVector3@@M@Z.c)
 */

void __fastcall CInteractionTracker2::ProcessDwmRestartCompleted(CInteractionTracker2 *this)
{
  *((_BYTE *)this + 828) &= ~0x20u;
  if ( !*((_DWORD *)this + 22) )
    CInteractionTracker2::AddPendingStateChange((__int64)this, 0, (__int64 *)this + 53, *((float *)this + 120));
}
