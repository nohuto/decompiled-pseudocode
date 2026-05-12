/*
 * XREFs of NvmeNamespacePowerRequiredStep1 @ 0x140128720
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceReleasePoFx @ 0x140031BE4 (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x140031C1C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespaceAcquireRemoveLock @ 0x140041680 (NvmeNamespaceAcquireRemoveLock.c)
 *     NvmeNamespacePowerRequiredStep2 @ 0x140128798 (NvmeNamespacePowerRequiredStep2.c)
 */

void __fastcall NvmeNamespacePowerRequiredStep1(_QWORD *Context)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  int v4; // eax

  ++**(_QWORD **)(Context[16] + 32LL);
  if ( NvmeNamespaceCheckAndAcquirePoFx((__int64)Context) )
  {
    NvmeNamespaceAcquireRemoveLock((__int64)Context, 0LL);
    *(_DWORD *)(*(_QWORD *)(Context[16] + 8LL) + 32LL) |= 4u;
    v2 = Context[16];
    v3 = *(_QWORD *)(v2 + 8);
    v4 = *(_DWORD *)(v3 + 32);
    if ( (v4 & 8) != 0 )
      *(_DWORD *)(v3 + 32) = v4 & 0xFFFFFFF7;
    else
      *(_DWORD *)(v2 + 64) = 1;
    NvmeNamespacePowerRequiredStep2(Context);
    NvmeNamespaceReleasePoFx((__int64)Context);
  }
}
