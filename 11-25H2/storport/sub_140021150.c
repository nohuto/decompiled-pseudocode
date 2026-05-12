/*
 * XREFs of sub_140021150 @ 0x140021150
 * Callers:
 *     sub_1400406A0 @ 0x1400406A0 (sub_1400406A0.c)
 *     sub_140078FA4 @ 0x140078FA4 (sub_140078FA4.c)
 *     sub_14007AB70 @ 0x14007AB70 (sub_14007AB70.c)
 *     sub_14009ACBC @ 0x14009ACBC (sub_14009ACBC.c)
 * Callees:
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_1400212C0 @ 0x1400212C0 (sub_1400212C0.c)
 */

__int64 __fastcall sub_140021150(__int64 a1, unsigned int a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rsi
  unsigned int v6; // ebp
  unsigned __int8 v9; // r14
  __int64 v11; // rcx
  bool v12; // si

  v4 = *(_QWORD *)(a1 + 24);
  v6 = a3;
  v9 = 1;
  if ( a4 )
    *a4 &= 0xFCu;
  if ( *(_QWORD *)(v4 + 4960) )
  {
    v9 = sub_1400212C0(v4, 0LL, a3);
    if ( a4 )
      *a4 |= 2u;
  }
  if ( !(unsigned __int8)sub_140021280(a1) )
    return v9;
  if ( (*(_BYTE *)(v4 + 108) & 1) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2168));
    if ( (*(_BYTE *)(v4 + 108) & 2) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2176));
  }
  v11 = *(_QWORD *)(a1 + 1872);
  if ( (*(_DWORD *)(v11 + 148) & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 144));
    v11 = *(_QWORD *)(a1 + 1872);
  }
  if ( *(_DWORD *)(a1 + 1036) && (v6 & 1) != 0 )
    v6 |= 4u;
  PoFxActivateComponent(*(_QWORD *)v11, a2, v6);
  v12 = (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) & 2) != 0;
  if ( a4 )
    *a4 |= 1u;
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  return v12;
}
