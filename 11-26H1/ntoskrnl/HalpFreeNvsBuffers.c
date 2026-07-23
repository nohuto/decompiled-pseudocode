/*
 * XREFs of HalpFreeNvsBuffers @ 0x140C0EB14
 * Callers:
 *     HalpPowerStateCallback @ 0x1404E6270 (HalpPowerStateCallback.c)
 *     HalpMapNvsArea @ 0x140C10598 (HalpMapNvsArea.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x140345690 (MmUnmapIoSpace.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 */

void __fastcall HalpFreeNvsBuffers(__int64 a1)
{
  __int64 v1; // rdx
  __int64 i; // rbx
  void *v3; // rcx

  if ( HalpNvsPreservedData )
  {
    HalpMmAllocCtxFree(a1, HalpNvsPreservedData);
    HalpNvsPreservedData = 0LL;
  }
  v1 = HalpNvsRegionData;
  if ( HalpNvsRegionData )
  {
    for ( i = 0LL; (unsigned int)i < HalpNvsRegionCount; i = (unsigned int)(i + 1) )
    {
      v3 = *(void **)(v1 + 24 * i + 16);
      if ( v3 )
      {
        MmUnmapIoSpace(v3, *(unsigned int *)(v1 + 24 * i + 8));
        v1 = HalpNvsRegionData;
        *(_QWORD *)(HalpNvsRegionData + 24 * i + 16) = 0LL;
      }
    }
  }
}
