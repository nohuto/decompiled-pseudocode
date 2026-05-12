/*
 * XREFs of NvmeAdapterCancelWaitWakeIrp @ 0x1401230DC
 * Callers:
 *     NvmeAdapterDirectedPowerUpCompletion @ 0x140123630 (NvmeAdapterDirectedPowerUpCompletion.c)
 *     NvmeAdapterPoFxD0Completion @ 0x140123F30 (NvmeAdapterPoFxD0Completion.c)
 * Callees:
 *     NvmeAdapterCheckAndAcquirePoFx @ 0x14003B978 (NvmeAdapterCheckAndAcquirePoFx.c)
 *     NvmeAdapterReleasePoFx @ 0x14003BAD0 (NvmeAdapterReleasePoFx.c)
 */

BOOLEAN __fastcall NvmeAdapterCancelWaitWakeIrp(__int64 a1)
{
  BOOLEAN v2; // di
  IRP *v3; // rcx

  v2 = 1;
  if ( NvmeAdapterCheckAndAcquirePoFx(a1) )
  {
    v3 = *(IRP **)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL) + 72LL);
    if ( v3 )
    {
      v2 = IoCancelIrp(v3);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL) + 72LL) = 0LL;
    }
    NvmeAdapterReleasePoFx(a1);
  }
  return v2;
}
