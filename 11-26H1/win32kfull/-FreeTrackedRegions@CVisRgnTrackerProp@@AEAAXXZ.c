/*
 * XREFs of ?FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ @ 0x1401D24F8
 * Callers:
 *     ?Delete@CVisRgnTrackerProp@@UEAAXXZ @ 0x1401D2260 (-Delete@CVisRgnTrackerProp@@UEAAXXZ.c)
 *     zzzComposeDesktop @ 0x140201D04 (zzzComposeDesktop.c)
 * Callees:
 *     ?FreeTrackedRegion@CVisRgnTrackerProp@@AEAAXI@Z @ 0x1401D252C (-FreeTrackedRegion@CVisRgnTrackerProp@@AEAAXI@Z.c)
 */

void __fastcall CVisRgnTrackerProp::FreeTrackedRegions(CVisRgnTrackerProp *this)
{
  signed int i; // ebx

  for ( i = 0; i < 3; ++i )
    CVisRgnTrackerProp::FreeTrackedRegion(this, i);
}
