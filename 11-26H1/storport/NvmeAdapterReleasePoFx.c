/*
 * XREFs of NvmeAdapterReleasePoFx @ 0x14003BAD0
 * Callers:
 *     NvmeAdapterIdleCondition @ 0x14003B7F0 (NvmeAdapterIdleCondition.c)
 *     NvmeAdapterActiveCondition @ 0x14003B9C0 (NvmeAdapterActiveCondition.c)
 *     NvmeAdapterCancelWaitWakeIrp @ 0x1401230DC (NvmeAdapterCancelWaitWakeIrp.c)
 *     NvmeAdapterDirectedPowerDownRequestD3 @ 0x1401233A0 (NvmeAdapterDirectedPowerDownRequestD3.c)
 *     NvmeAdapterPerfStateCallback @ 0x140123E70 (NvmeAdapterPerfStateCallback.c)
 *     NvmeAdapterPoFxD0Completion @ 0x140123F30 (NvmeAdapterPoFxD0Completion.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeAdapterReleasePoFx(__int64 a1)
{
  __int64 v1; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v2; // rcx

  v1 = *(_QWORD *)(a1 + 160);
  if ( v1 && *(_QWORD *)(v1 + 8) )
  {
    v2 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v1 + 80);
    if ( v2 )
      ExReleaseRundownProtectionCacheAware(v2);
  }
}
