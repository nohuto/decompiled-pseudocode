/*
 * XREFs of ?ClearCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x18013D2F0
 * Callers:
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x180139380 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x18013D238 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180013F60 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

void __fastcall CInteractionTracker::ClearCustomAnimation(CInteractionTracker *this, int a2)
{
  if ( (unsigned __int64)a2 < 2 )
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + a2 + 55);
  if ( a2 == 1 )
    *((_BYTE *)this + 597) &= ~1u;
}
