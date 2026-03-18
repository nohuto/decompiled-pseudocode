/*
 * XREFs of ?FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ @ 0x14005D148
 * Callers:
 *     ?Delete@CVisRgnTrackerProp@@UEAAXXZ @ 0x14005D0E0 (-Delete@CVisRgnTrackerProp@@UEAAXXZ.c)
 *     zzzComposeDesktop @ 0x140171BD8 (zzzComposeDesktop.c)
 * Callees:
 *     ?FreeTrackedRegion@CVisRgnTrackerProp@@AEAAXI@Z @ 0x14005D17C (-FreeTrackedRegion@CVisRgnTrackerProp@@AEAAXI@Z.c)
 */

void __fastcall CVisRgnTrackerProp::FreeTrackedRegions(CVisRgnTrackerProp *this)
{
  signed int i; // ebx

  for ( i = 0; i < 3; ++i )
    CVisRgnTrackerProp::FreeTrackedRegion(this, i);
}
