/*
 * XREFs of IopAllocateRelationList @ 0x1409B38E8
 * Callers:
 *     PnpQueuePendingSurpriseRemoval @ 0x1409B317C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x1409B372C (PnpInvalidateRelationsInList.c)
 *     PnpBuildRemovalRelationList @ 0x1409B4990 (PnpBuildRemovalRelationList.c)
 * Callees:
 *     PiAllocateDeviceObjectList @ 0x1409B4B00 (PiAllocateDeviceObjectList.c)
 *     PnpAllocateCriticalMemory @ 0x1409B4B74 (PnpAllocateCriticalMemory.c)
 *     IopFreeRelationList @ 0x1409B5B30 (IopFreeRelationList.c)
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
