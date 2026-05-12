/*
 * XREFs of RaidUnitStartDeviceBusy @ 0x140032E10
 * Callers:
 *     RaidUnitSubmitResetRequest @ 0x14004CED4 (RaidUnitSubmitResetRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidUnitStartDeviceBusy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned int v4; // esi
  __int64 v5; // r14
  unsigned __int8 v7; // bl
  __int64 result; // rax
  __int64 v9; // rcx

  v3 = *(_QWORD *)(a1 + 24);
  v4 = a3;
  v5 = *(_QWORD *)(a2 + 184);
  if ( *(_QWORD *)(v3 + 5024) )
  {
    if ( (*(_BYTE *)(v3 + 108) & 1) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v3 + 5344));
      if ( (*(_BYTE *)(v3 + 108) & 2) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(v3 + 5352));
    }
    if ( *(_DWORD *)(v3 + 92) && (a3 & 1) != 0 )
      a3 = (unsigned int)a3 | 4;
    PoFxActivateComponent(**(_QWORD **)(v3 + 5024), 0LL, a3);
    v7 = 2;
  }
  else
  {
    v7 = 0;
  }
  if ( (*(_DWORD *)(a1 + 504) & 0x8000) != 0
    && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864)) )
  {
    if ( (*(_BYTE *)(v3 + 108) & 1) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2168));
      if ( (*(_BYTE *)(v3 + 108) & 2) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2176));
    }
    v9 = *(_QWORD *)(a1 + 1872);
    if ( (*(_DWORD *)(v9 + 148) & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 144));
      v9 = *(_QWORD *)(a1 + 1872);
    }
    if ( *(_DWORD *)(a1 + 1036) && (v4 & 1) != 0 )
      v4 |= 4u;
    PoFxActivateComponent(*(_QWORD *)v9, 0LL, v4);
    v7 |= 1u;
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
  result = v7;
  *(_QWORD *)(v5 + 16) = v7;
  return result;
}
