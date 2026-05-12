/*
 * XREFs of RaidUnitPoFxIdleComponentFromMiniport @ 0x1400196B8
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 *     RaidUnitCompleteRequest @ 0x140017760 (RaidUnitCompleteRequest.c)
 *     RaidPnPPassToMiniPort @ 0x14001A8BC (RaidPnPPassToMiniPort.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001BC80 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitCompleteResetRequest @ 0x140024200 (RaidUnitCompleteResetRequest.c)
 *     RaWmiPassToMiniPort @ 0x1401B8A40 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 */

__int64 __fastcall RaidUnitPoFxIdleComponentFromMiniport(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  _QWORD **v3; // rdi
  PEX_RUNDOWN_REF_CACHE_AWARE *v5; // r14
  char v7; // r15
  bool v8; // bl
  int v9; // ebx
  __int64 v10; // rax
  char v12; // cl

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (_QWORD **)(a1 + 1872);
  v5 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864);
  v7 = 0;
  v8 = 0;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    PoFxIdleComponent(**v3, a2, 0LL);
    v7 = 1;
    v9 = *((_DWORD *)*v3 + 8);
    ExReleaseRundownProtectionCacheAware(*v5);
    v8 = (v9 & 2) == 0;
  }
  if ( *(_QWORD *)(v2 + 5024) )
  {
    v12 = RaidAdapterPoFxIdleComponent(v2, 0LL, 0LL);
    if ( !v7 )
      v8 = v12;
  }
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    _InterlockedDecrement64(*v3 + 5);
    _InterlockedIncrement64(*v3 + 20);
    ExReleaseRundownProtectionCacheAware(*v5);
  }
  v10 = *(_QWORD *)(v2 + 5024);
  if ( v10 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(v10 + 80));
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v2 + 5024) + 96LL));
  }
  return !v8 ? 0xC100000C : 0;
}
