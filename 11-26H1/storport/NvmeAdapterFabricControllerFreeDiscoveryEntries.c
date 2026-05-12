/*
 * XREFs of NvmeAdapterFabricControllerFreeDiscoveryEntries @ 0x1400E84A4
 * Callers:
 *     NvmeAdapterCleanupFabricNvmeController @ 0x1400E5018 (NvmeAdapterCleanupFabricNvmeController.c)
 *     NvmeAdapterNvmeControllerBackgroundWork @ 0x1400EA6E0 (NvmeAdapterNvmeControllerBackgroundWork.c)
 *     NvmeAdapterPerformFabricControllerDiscovery @ 0x1400EBB5C (NvmeAdapterPerformFabricControllerDiscovery.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeAdapterFabricControllerFreeDiscoveryEntries(_QWORD **a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    ExFreePoolWithTag(v2, 0x52436152u);
  }
}
