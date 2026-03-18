/*
 * XREFs of ?Update@CVisRgnTrackerProp@@QEAAXXZ @ 0x14004DA94
 * Callers:
 *     UpdateDirtyVisRgnTrackers @ 0x14004D9D0 (UpdateDirtyVisRgnTrackers.c)
 * Callees:
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x14004DB50 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 */

void __fastcall CVisRgnTrackerProp::Update(CVisRgnTrackerProp *this, __int64 a2)
{
  unsigned int v3; // edi
  int v4; // eax
  __int64 v5; // r9
  char v6; // cl
  unsigned int v7; // edx

  v3 = 18;
  v4 = IsTopLevelWindow(*((_QWORD *)this + 2), a2);
  *((_BYTE *)this + 73) = 0;
  v6 = *(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x10;
  if ( *((_BYTE *)this + 72) || v6 )
  {
    *((_BYTE *)this + 72) = v6 != 0;
    if ( !v4 && (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 4) != 0 )
      v3 = 26;
    if ( (*((_DWORD *)this + 10) & 8) != 0 )
      CVisRgnTrackerProp::UpdateTrackerRegion(this, v3, 0);
    if ( (*((_DWORD *)this + 10) & 6) != 0 )
    {
      v7 = v3 | 4;
      if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 31LL) & 2) == 0 )
        v7 = v3;
      CVisRgnTrackerProp::UpdateTrackerRegion(this, v7, 1u);
    }
    if ( (*((_DWORD *)this + 10) & 0xF) != 0 )
      CVisRgnTrackerProp::UpdateTrackerRegion(this, 0, 2u);
  }
}
