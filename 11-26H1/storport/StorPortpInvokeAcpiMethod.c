/*
 * XREFs of StorPortpInvokeAcpiMethod @ 0x14005B718
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidNtStatusToStorStatus @ 0x1400018E8 (RaidNtStatusToStorStatus.c)
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 *     RaMiniportGetRaidAdapter @ 0x140042128 (RaMiniportGetRaidAdapter.c)
 *     RaidSyncAcpiEvalMethod @ 0x140047160 (RaidSyncAcpiEvalMethod.c)
 */

__int64 __fastcall StorPortpInvokeAcpiMethod(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG a7,
        _DWORD *a8)
{
  _DWORD *v12; // rcx
  __int64 RaidAdapter; // rax
  struct _DEVICE_OBJECT *v14; // rcx
  int v15; // eax
  int v16; // [rsp+50h] [rbp+18h]

  HIBYTE(v16) = 0;
  if ( KeGetCurrentIrql() )
    return 3238002696LL;
  if ( a8 )
    *a8 = 0;
  v12 = *(_DWORD **)(a1 - 16);
  if ( (v12[62] & 1) != 0 )
    return 3238002690LL;
  RaidAdapter = RaMiniportGetRaidAdapter(v12);
  if ( !RaidAdapter )
    return 3238002694LL;
  if ( a2 )
  {
    if ( *(_WORD *)a2 != 1 )
      return 3238002694LL;
    if ( *(_DWORD *)(a2 + 4) < 4u )
      return 3238002694LL;
    LOWORD(v16) = *(_WORD *)(a2 + 8);
    BYTE2(v16) = *(_BYTE *)(a2 + 10);
    RaidAdapter = (__int64)RaidAdapterFindUnit(RaidAdapter, v16);
    if ( !RaidAdapter )
      return 3238002694LL;
  }
  v14 = *(struct _DEVICE_OBJECT **)(RaidAdapter + 8);
  if ( !v14 )
    return 3238002694LL;
  v15 = RaidSyncAcpiEvalMethod(v14, a4, InputBufferLength, OutputBuffer, a7, a8);
  return RaidNtStatusToStorStatus(v15);
}
