/*
 * XREFs of NvmeNamespaceDirectedPowerDown @ 0x1401278D0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceReleasePoFx @ 0x140031BE4 (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespaceDirectedPowerDownRequestD3 @ 0x140127A0C (NvmeNamespaceDirectedPowerDownRequestD3.c)
 */

void __fastcall NvmeNamespaceDirectedPowerDown(_QWORD *Context)
{
  ++*(_QWORD *)(*(_QWORD *)(Context[16] + 32LL) + 16LL);
  if ( NvmeNamespaceCheckAndAcquirePoFx((__int64)Context) )
  {
    *(_DWORD *)(*(_QWORD *)(Context[16] + 8LL) + 32LL) &= ~4u;
    *(_DWORD *)(*(_QWORD *)(Context[16] + 8LL) + 32LL) &= ~8u;
    if ( *((_DWORD *)Context + 67) )
    {
      if ( (*(_DWORD *)(Context[16] + 136LL) & 0x10) != 0 )
        *((_BYTE *)Context + 276) = 0;
    }
    NvmeNamespaceDirectedPowerDownRequestD3(Context);
    NvmeNamespaceReleasePoFx((__int64)Context);
  }
}
