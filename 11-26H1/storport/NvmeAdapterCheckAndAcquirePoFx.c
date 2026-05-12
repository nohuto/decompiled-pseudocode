/*
 * XREFs of NvmeAdapterCheckAndAcquirePoFx @ 0x14003B978
 * Callers:
 *     NvmeAdapterIdleCondition @ 0x14003B7F0 (NvmeAdapterIdleCondition.c)
 *     NvmeAdapterActiveCondition @ 0x14003B9C0 (NvmeAdapterActiveCondition.c)
 *     NvmeAdapterCancelWaitWakeIrp @ 0x1401230DC (NvmeAdapterCancelWaitWakeIrp.c)
 *     NvmeAdapterDirectedPowerDown @ 0x140123300 (NvmeAdapterDirectedPowerDown.c)
 *     NvmeAdapterDirectedPowerUp @ 0x1401235E0 (NvmeAdapterDirectedPowerUp.c)
 *     NvmeAdapterPerfStateCallback @ 0x140123E70 (NvmeAdapterPerfStateCallback.c)
 *     NvmeAdapterPoFxD0Completion @ 0x140123F30 (NvmeAdapterPoFxD0Completion.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall NvmeAdapterCheckAndAcquirePoFx(__int64 a1)
{
  __int64 v1; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v2; // rcx

  v1 = *(_QWORD *)(a1 + 160);
  if ( v1 && *(_QWORD *)(v1 + 8) && (v2 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v1 + 80)) != 0LL )
    return ExAcquireRundownProtectionCacheAware(v2);
  else
    return 0;
}
