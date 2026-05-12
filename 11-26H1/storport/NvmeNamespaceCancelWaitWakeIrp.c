/*
 * XREFs of NvmeNamespaceCancelWaitWakeIrp @ 0x1401276F8
 * Callers:
 *     NvmeNamespaceDeregisterFromPoFx @ 0x140127764 (NvmeNamespaceDeregisterFromPoFx.c)
 *     NvmeNamespaceDirectedPowerDownCompletion @ 0x140127950 (NvmeNamespaceDirectedPowerDownCompletion.c)
 *     NvmeNamespacePoFxD0Completion @ 0x140127E60 (NvmeNamespacePoFxD0Completion.c)
 *     NvmeNamespacePoFxD3Completion @ 0x140127F70 (NvmeNamespacePoFxD3Completion.c)
 * Callees:
 *     NvmeNamespaceReleasePoFx @ 0x140031BE4 (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C (NvmeNamespaceCheckAndAcquirePoFx.c)
 */

BOOLEAN __fastcall NvmeNamespaceCancelWaitWakeIrp(__int64 a1)
{
  BOOLEAN v2; // di
  IRP *v3; // rcx

  v2 = 1;
  if ( NvmeNamespaceCheckAndAcquirePoFx(a1) )
  {
    v3 = *(IRP **)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) + 72LL);
    if ( v3 )
    {
      v2 = IoCancelIrp(v3);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) + 72LL) = 0LL;
    }
    NvmeNamespaceReleasePoFx(a1);
  }
  return v2;
}
