/*
 * XREFs of RaidAdapterPoFxActivateComponentFromMiniport @ 0x14003C0EC
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterPoFxActivateComponentFromMiniport(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ecx

  if ( (*(_BYTE *)(a1 + 108) & 1) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5344));
    if ( (*(_BYTE *)(a1 + 108) & 2) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5352));
  }
  if ( *(_DWORD *)(a1 + 92) && (a3 & 1) != 0 )
    a3 = (unsigned int)a3 | 4;
  PoFxActivateComponent(**(_QWORD **)(a1 + 5024), a2, a3);
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 5024) + 20LL);
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 5024) + 80LL));
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 5024) + 88LL));
  return (v4 & 1) == 0 ? 0xC100000C : 0;
}
