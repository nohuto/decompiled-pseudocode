/*
 * XREFs of IopAllocateRelationList @ 0x140911808
 * Callers:
 *     PnpQueuePendingSurpriseRemoval @ 0x14091109C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x14091164C (PnpInvalidateRelationsInList.c)
 *     PnpBuildRemovalRelationList @ 0x1409128B0 (PnpBuildRemovalRelationList.c)
 * Callees:
 *     PiAllocateDeviceObjectList @ 0x140912A20 (PiAllocateDeviceObjectList.c)
 *     PnpAllocateCriticalMemory @ 0x140912A94 (PnpAllocateCriticalMemory.c)
 *     IopFreeRelationList @ 0x140913A50 (IopFreeRelationList.c)
 */

_BYTE *__fastcall IopAllocateRelationList(__int64 a1)
{
  unsigned int v1; // edi
  _BYTE *CriticalMemory; // rbx
  __int64 DeviceObjectList; // rax

  v1 = a1;
  CriticalMemory = (_BYTE *)PnpAllocateCriticalMemory(a1, 256LL, 16LL, 1416654416LL);
  if ( CriticalMemory )
  {
    DeviceObjectList = PiAllocateDeviceObjectList(v1, 8LL);
    *(_QWORD *)CriticalMemory = DeviceObjectList;
    if ( DeviceObjectList )
    {
      CriticalMemory[8] = 0;
    }
    else
    {
      IopFreeRelationList(CriticalMemory);
      return 0LL;
    }
  }
  return CriticalMemory;
}
