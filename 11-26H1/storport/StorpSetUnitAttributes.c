/*
 * XREFs of StorpSetUnitAttributes @ 0x14005C7AC
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 *     RaMiniportGetRaidAdapter @ 0x140042128 (RaMiniportGetRaidAdapter.c)
 */

__int64 __fastcall StorpSetUnitAttributes(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // bl
  _DWORD *v4; // rcx
  __int64 v6; // rdx
  __int64 RaidAdapter; // r8
  __int64 *Unit; // rax
  __int64 *v9; // r9
  int v10; // eax
  int v11; // [rsp+40h] [rbp+18h]

  HIBYTE(v11) = 0;
  v3 = a3;
  if ( a3 >= 0x10 )
    return 3238002694LL;
  v4 = *(_DWORD **)(a1 - 16);
  if ( (v4[62] & 1) != 0 )
    return 3238002690LL;
  RaidAdapter = RaMiniportGetRaidAdapter(v4);
  if ( !RaidAdapter )
    return 3238002694LL;
  if ( !v6 )
    return 3238002694LL;
  if ( *(_WORD *)v6 != 1 )
    return 3238002694LL;
  if ( *(_DWORD *)(v6 + 4) < 4u )
    return 3238002694LL;
  LOWORD(v11) = *(_WORD *)(v6 + 8);
  BYTE2(v11) = *(_BYTE *)(v6 + 10);
  Unit = RaidAdapterFindUnit(RaidAdapter, v11);
  v9 = Unit;
  if ( !Unit )
    return 3238002694LL;
  v10 = *((_DWORD *)Unit + 488) ^ ((unsigned __int8)*((_DWORD *)Unit + 488) ^ (unsigned __int8)(2 * v3)) & 2 ^ ((unsigned __int8)(2 * v3) ^ *((_BYTE *)Unit + 1952) ^ ((unsigned __int8)*((_DWORD *)Unit + 488) ^ (unsigned __int8)(2 * v3)) & 2) & 4 ^ ((unsigned __int8)(2 * v3) ^ *((_BYTE *)Unit + 1952) ^ ((unsigned __int8)*((_DWORD *)Unit + 488) ^ (unsigned __int8)(2 * v3)) & 2 ^ ((unsigned __int8)(2 * v3) ^ *((_BYTE *)Unit + 1952) ^ ((unsigned __int8)*((_DWORD *)Unit + 488) ^ (unsigned __int8)(2 * v3)) & 2) & 4) & 8;
  *((_DWORD *)v9 + 488) = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(8 * v3)) & 0x40;
  return 0LL;
}
