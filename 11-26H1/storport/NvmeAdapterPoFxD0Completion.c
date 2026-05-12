/*
 * XREFs of NvmeAdapterPoFxD0Completion @ 0x140123F30
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterCheckAndAcquirePoFx @ 0x14003B978 (NvmeAdapterCheckAndAcquirePoFx.c)
 *     NvmeAdapterReleasePoFx @ 0x14003BAD0 (NvmeAdapterReleasePoFx.c)
 *     NvmeAdapterCancelWaitWakeIrp @ 0x1401230DC (NvmeAdapterCancelWaitWakeIrp.c)
 */

void __fastcall NvmeAdapterPoFxD0Completion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rdx

  *(_DWORD *)(Context[20] + 76LL) &= ~2u;
  v5 = Context[20];
  v6 = *(_DWORD *)(v5 + 76);
  if ( (v6 & 0x20) != 0 )
    *(_DWORD *)(v5 + 76) = v6 & 0xFFFFFFDF;
  if ( NvmeAdapterCheckAndAcquirePoFx((__int64)Context) )
  {
    v7 = Context[20];
    v8 = *(_QWORD *)(v7 + 8);
    if ( (*(_DWORD *)(v8 + 20) & 0x40) != 0 && (*(_DWORD *)(*(_QWORD *)(v8 + 8) + 12LL) & 0x800) != 0 )
    {
      if ( *(_BYTE *)v7 == 1 )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 136), 0, 1) )
          PoFxIdleComponent(**(_QWORD **)(Context[20] + 8LL), 0LL, 0LL);
      }
      NvmeAdapterCancelWaitWakeIrp((__int64)Context);
    }
    PoFxReportDevicePoweredOn(**(_QWORD **)(Context[20] + 8LL));
    NvmeAdapterReleasePoFx((__int64)Context);
  }
}
