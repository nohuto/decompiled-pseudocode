/*
 * XREFs of StorPortGetScatterGatherListVrfy @ 0x1401C22F0
 * Callers:
 *     <none>
 * Callees:
 *     RaMiniportGetRaidAdapter @ 0x140042128 (RaMiniportGetRaidAdapter.c)
 *     RaidRemapScatterGatherList @ 0x1401C2008 (RaidRemapScatterGatherList.c)
 */

_BYTE *__fastcall StorPortGetScatterGatherListVrfy(__int64 a1, __int64 a2)
{
  _BYTE *result; // rax
  __int64 v3; // r8
  _DWORD *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx

  result = 0LL;
  v3 = a2;
  if ( a1 )
  {
    v4 = *(_DWORD **)(a1 - 16);
    if ( (v4[62] & 1) != 0 )
    {
      if ( v4 )
        v5 = *(_QWORD *)v4;
      else
        v5 = 0LL;
      result = 0LL;
      if ( v5 )
        return result;
    }
    else
    {
      result = (_BYTE *)RaMiniportGetRaidAdapter(v4);
    }
  }
  v6 = 24LL;
  if ( *(_BYTE *)(v3 + 2) != 40 )
    v6 = 12LL;
  v7 = 96LL;
  if ( *(_BYTE *)(v3 + 2) != 40 )
    v7 = 48LL;
  v8 = *(_QWORD *)(v7 + v3);
  if ( !result[4434] || (result[4435] & 4) == 0 || (*(_DWORD *)(v6 + v3) & 0xC0) == 0 )
    return *(_BYTE **)(v8 + 112);
  if ( KeGetCurrentIrql() > 2u )
    return *(_BYTE **)(v8 + 112);
  if ( !RaidRemapScatterGatherList(*(unsigned int **)(v8 + 112), v8) )
    return *(_BYTE **)(v8 + 112);
  v9 = *(_QWORD *)(v8 + 120);
  if ( (*(_BYTE *)(v9 + 10) & 5) != 0 )
    return *(_BYTE **)(v9 + 24);
  else
    return MmMapLockedPagesSpecifyCache((PMDL)v9, 0, MmCached, 0LL, 0, 0x40000010u);
}
