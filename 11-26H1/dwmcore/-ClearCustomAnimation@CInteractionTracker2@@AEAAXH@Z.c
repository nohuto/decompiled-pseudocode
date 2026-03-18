/*
 * XREFs of ?ClearCustomAnimation@CInteractionTracker2@@AEAAXH@Z @ 0x180272D0C
 * Callers:
 *     ?SetRequestedPositionInternal@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x180276C14 (-SetRequestedPositionInternal@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrac.c)
 *     ?StopCustomAnimation@CInteractionTracker2@@AEAAXH_N@Z @ 0x180277314 (-StopCustomAnimation@CInteractionTracker2@@AEAAXH_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180013F60 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

void __fastcall CInteractionTracker2::ClearCustomAnimation(CInteractionTracker2 *this, int a2)
{
  if ( (unsigned __int64)a2 < 2 )
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + a2 + 84);
  if ( a2 == 1 )
    *((_BYTE *)this + 829) &= ~2u;
}
