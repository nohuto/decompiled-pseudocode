/*
 * XREFs of RaidUnitPoFxActivateComponent @ 0x14002A810
 * Callers:
 *     RaAcquirePowerRefWorkRoutine @ 0x14004CC60 (RaAcquirePowerRefWorkRoutine.c)
 *     RaidUnitMaintenanceTime @ 0x1400809B4 (RaidUnitMaintenanceTime.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1400825A0 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     RaUnitStoragePowerActive @ 0x1400A39D8 (RaUnitStoragePowerActive.c)
 *     RaWmiPassToMiniPort @ 0x1401B8A40 (RaWmiPassToMiniPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidUnitPoFxActivateComponent(__int64 a1, unsigned int a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rbp
  unsigned int v6; // r14d
  unsigned __int8 v9; // r15
  PEX_RUNDOWN_REF_CACHE_AWARE *v10; // rsi
  __int64 v12; // rcx
  PEX_RUNDOWN_REF_CACHE_AWARE *v13; // rbp
  bool v14; // di

  v4 = *(_QWORD *)(a1 + 24);
  v6 = a3;
  v9 = 1;
  if ( a4 )
    *a4 &= 0xFCu;
  if ( *(_QWORD *)(v4 + 5024) )
  {
    if ( (*(_BYTE *)(v4 + 108) & 1) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v4 + 5344));
      if ( (*(_BYTE *)(v4 + 108) & 2) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(v4 + 5352));
    }
    if ( *(_DWORD *)(v4 + 92) && (a3 & 1) != 0 )
      a3 = (unsigned int)a3 | 4;
    PoFxActivateComponent(**(_QWORD **)(v4 + 5024), 0LL, a3);
    v9 = *(_DWORD *)(*(_QWORD *)(v4 + 5024) + 20LL) & 1;
    if ( a4 )
      *a4 |= 2u;
  }
  if ( (*(_DWORD *)(a1 + 504) & 0x8000) == 0 )
    return v9;
  v10 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864);
  if ( !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864)) )
    return v9;
  if ( (*(_BYTE *)(v4 + 108) & 1) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2168));
    if ( (*(_BYTE *)(v4 + 108) & 2) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2176));
      v10 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864);
    }
  }
  v12 = *(_QWORD *)(a1 + 1872);
  if ( (*(_DWORD *)(v12 + 148) & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 144));
    v12 = *(_QWORD *)(a1 + 1872);
  }
  v13 = v10;
  if ( *(_DWORD *)(a1 + 1036) && (v6 & 1) != 0 )
  {
    v6 |= 4u;
    v13 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864);
  }
  PoFxActivateComponent(*(_QWORD *)v12, a2, v6);
  v14 = (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) & 2) != 0;
  if ( a4 )
  {
    *a4 |= 1u;
    v10 = v13;
  }
  ExReleaseRundownProtectionCacheAware(*v10);
  return v14;
}
