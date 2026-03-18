/*
 * XREFs of CreateObjectHandle @ 0x14001F000
 * Callers:
 *     AMLIGetFieldUnitRegionObj @ 0x14001D2F0 (AMLIGetFieldUnitRegionObj.c)
 *     AMLIGetParentNoLock @ 0x14001E8F4 (AMLIGetParentNoLock.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140020600 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x14002298C (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x140024044 (ACPIIoctlEvalPreProcessingV2.c)
 *     AMLIGetNextSiblingNoLock @ 0x14003DBD4 (AMLIGetNextSiblingNoLock.c)
 *     AMLIGetFirstChildNoLock @ 0x14003DC58 (AMLIGetFirstChildNoLock.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x140054F3C (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CreateObjectHandle(__int64 a1)
{
  __int64 result; // rax

  result = a1 + 120;
  dword_14008ED38 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 128));
  return result;
}
