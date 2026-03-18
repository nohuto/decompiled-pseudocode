/*
 * XREFs of ?RemoveTracker@CVisRgnTrackerProp@@QEAAXK@Z @ 0x1401D22C8
 * Callers:
 *     RemoveVisRgnTracker @ 0x1401D2208 (RemoveVisRgnTracker.c)
 * Callees:
 *     DwmAsyncUpdateVisRgn @ 0x1401D23C0 (DwmAsyncUpdateVisRgn.c)
 *     ?FreeTrackedRegion@CVisRgnTrackerProp@@AEAAXI@Z @ 0x1401D252C (-FreeTrackedRegion@CVisRgnTrackerProp@@AEAAXI@Z.c)
 */

void __fastcall CVisRgnTrackerProp::RemoveTracker(CVisRgnTrackerProp *this, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  void *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // rax

  *((_DWORD *)this + 10) &= ~a2;
  if ( (*((_DWORD *)this + 10) & 8) == 0 && *((_QWORD *)this + 6) )
  {
    CVisRgnTrackerProp::FreeTrackedRegion(this, 0);
    v5 = (void *)ReferenceDwmApiPort(v4, v3);
    DwmAsyncUpdateVisRgn(v5, 0);
  }
  if ( (*((_DWORD *)this + 10) & 6) == 0 && *((_QWORD *)this + 7) )
  {
    CVisRgnTrackerProp::FreeTrackedRegion(this, 1u);
    v8 = (void *)ReferenceDwmApiPort(v7, v6);
    DwmAsyncUpdateVisRgn(v8, 0);
  }
  if ( (*((_DWORD *)this + 10) & 1) == 0 )
  {
    if ( *((_QWORD *)this + 8) )
    {
      CVisRgnTrackerProp::FreeTrackedRegion(this, 2u);
      v11 = (void *)ReferenceDwmApiPort(v10, v9);
      DwmAsyncUpdateVisRgn(v11, 0);
    }
  }
}
