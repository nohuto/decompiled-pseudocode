/*
 * XREFs of StorPortpSetPowerSettingNotificationGuids @ 0x14005B0A8
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaMiniportGetRaidAdapter @ 0x140042128 (RaMiniportGetRaidAdapter.c)
 */

__int64 __fastcall StorPortpSetPowerSettingNotificationGuids(__int64 a1, unsigned int a2, __int64 a3)
{
  _DWORD *v3; // rcx
  unsigned int v4; // ebx
  __int64 v6; // rbp
  __int64 RaidAdapter; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 Pool; // rax
  __int64 v12; // rcx

  v3 = *(_DWORD **)(a1 - 16);
  v4 = 0;
  v6 = a2;
  if ( (v3[62] & 1) != 0 )
    return 3238002690LL;
  RaidAdapter = RaMiniportGetRaidAdapter(v3);
  v9 = RaidAdapter;
  if ( !RaidAdapter )
    return 3238002694LL;
  v10 = v6;
  Pool = RaidAllocatePool(64LL, 24 * v6, 1161912658LL, *(_QWORD *)(RaidAdapter + 8));
  if ( Pool )
  {
    *(_QWORD *)(v9 + 4872) = Pool;
    *(_DWORD *)(v9 + 4864) = v6;
    *(_QWORD *)(v9 + 4880) = Pool + 16 * v6;
    if ( (_DWORD)v6 )
    {
      v12 = 0LL;
      do
      {
        *(_OWORD *)(v12 + *(_QWORD *)(v9 + 4872)) = *(_OWORD *)(v12 + a3);
        v12 += 16LL;
        --v10;
      }
      while ( v10 );
    }
  }
  else
  {
    return (unsigned int)-1056964605;
  }
  return v4;
}
