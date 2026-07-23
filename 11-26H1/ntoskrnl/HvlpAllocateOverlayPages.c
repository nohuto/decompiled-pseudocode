/*
 * XREFs of HvlpAllocateOverlayPages @ 0x1405C22B8
 * Callers:
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1405BC0A0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpMapApicBackingPage @ 0x1405C249C (HvlpMapApicBackingPage.c)
 *     HvlInitializeProcessor @ 0x1407943F4 (HvlInitializeProcessor.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x14034C170 (MmAllocateContiguousNodeMemory.c)
 */

__int64 HvlpAllocateOverlayPages()
{
  unsigned int v0; // esi
  __int64 v1; // rdi
  unsigned int v2; // eax
  __int64 result; // rax

  v0 = 0;
  v1 = -1LL;
  while ( 1 )
  {
    v2 = v0++;
    if ( v2 >= 4 )
      break;
    v1 += 0x40000000LL;
    result = MmAllocateContiguousNodeMemory(4096LL, 0, v1, 0, 4, 0x80000000);
    if ( result )
      return result;
  }
  return MmAllocateContiguousNodeMemory(4096LL, 0, -1, 0, 4, 0x80000000);
}
