/*
 * XREFs of NvmeNamespacePowerNotRequiredStep1 @ 0x140128450
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceReleasePoFx @ 0x140031BE4 (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespacePowerNotRequiredStep2 @ 0x1401284CC (NvmeNamespacePowerNotRequiredStep2.c)
 */

void __fastcall NvmeNamespacePowerNotRequiredStep1(_QWORD *Context)
{
  ++*(_QWORD *)(*(_QWORD *)(Context[16] + 32LL) + 8LL);
  if ( NvmeNamespaceCheckAndAcquirePoFx((__int64)Context) )
  {
    *(_DWORD *)(*(_QWORD *)(Context[16] + 8LL) + 32LL) &= ~4u;
    *(_DWORD *)(Context[16] + 64LL) = 0;
    if ( *((_DWORD *)Context + 67) )
    {
      if ( (*(_DWORD *)(Context[16] + 136LL) & 0x10) != 0 )
        *((_BYTE *)Context + 276) = 0;
    }
    NvmeNamespacePowerNotRequiredStep2(Context);
    NvmeNamespaceReleasePoFx((__int64)Context);
  }
}
