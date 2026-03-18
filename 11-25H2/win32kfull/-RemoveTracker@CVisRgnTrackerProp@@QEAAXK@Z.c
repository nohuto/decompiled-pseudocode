/*
 * XREFs of ?RemoveTracker@CVisRgnTrackerProp@@QEAAXK@Z @ 0x14005B460
 * Callers:
 *     RemoveVisRgnTracker @ 0x14005B418 (RemoveVisRgnTracker.c)
 * Callees:
 *     DwmAsyncUpdateVisRgn @ 0x14005CFA4 (DwmAsyncUpdateVisRgn.c)
 *     ?FreeTrackedRegion@CVisRgnTrackerProp@@AEAAXI@Z @ 0x14005D17C (-FreeTrackedRegion@CVisRgnTrackerProp@@AEAAXI@Z.c)
 */

void __fastcall CVisRgnTrackerProp::RemoveTracker(CVisRgnTrackerProp *this, int a2)
{
  int v3; // edx
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // rax

  v3 = *((_DWORD *)this + 10) & ~a2;
  *((_DWORD *)this + 10) = v3;
  if ( (v3 & 8) == 0 && *((_QWORD *)this + 6) )
  {
    CVisRgnTrackerProp::FreeTrackedRegion(this, 0);
    v12 = (void *)ReferenceDwmApiPort(v11, v10);
    DwmAsyncUpdateVisRgn(v12, 0);
  }
  if ( (*((_DWORD *)this + 10) & 6) == 0 && *((_QWORD *)this + 7) )
  {
    CVisRgnTrackerProp::FreeTrackedRegion(this, 1u);
    v6 = (void *)ReferenceDwmApiPort(v5, v4);
    DwmAsyncUpdateVisRgn(v6, 0);
  }
  if ( (*((_DWORD *)this + 10) & 1) == 0 )
  {
    if ( *((_QWORD *)this + 8) )
    {
      CVisRgnTrackerProp::FreeTrackedRegion(this, 2u);
      v9 = (void *)ReferenceDwmApiPort(v8, v7);
      DwmAsyncUpdateVisRgn(v9, 0);
    }
  }
}
