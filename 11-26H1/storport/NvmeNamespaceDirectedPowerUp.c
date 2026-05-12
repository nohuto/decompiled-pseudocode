/*
 * XREFs of NvmeNamespaceDirectedPowerUp @ 0x140127C10
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceReleasePoFx @ 0x140031BE4 (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespaceDirectedPowerUpRequestD0 @ 0x140127CA4 (NvmeNamespaceDirectedPowerUpRequestD0.c)
 */

void __fastcall NvmeNamespaceDirectedPowerUp(_QWORD *Context)
{
  ++*(_QWORD *)(*(_QWORD *)(Context[16] + 32LL) + 24LL);
  if ( NvmeNamespaceCheckAndAcquirePoFx((__int64)Context) )
  {
    *(_DWORD *)(*(_QWORD *)(Context[16] + 8LL) + 32LL) |= 4u;
    NvmeNamespaceDirectedPowerUpRequestD0(Context);
    NvmeNamespaceReleasePoFx((__int64)Context);
  }
}
