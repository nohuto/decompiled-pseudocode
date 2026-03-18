/*
 * XREFs of PopFxReferenceDevice @ 0x1403948D4
 * Callers:
 *     PopFxQueueWorkOrder @ 0x14039486C (PopFxQueueWorkOrder.c)
 *     PopFxIdleWorkerTail @ 0x140395604 (PopFxIdleWorkerTail.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x1404D0FCC (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1404D4110 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxActivateDevice @ 0x1404D5290 (PopFxActivateDevice.c)
 *     PopFxClearDeviceConstraints @ 0x1404E2030 (PopFxClearDeviceConstraints.c)
 *     PoFxAddComponentRelation @ 0x140603F90 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x140604200 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveComponentRelation @ 0x140604610 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140604860 (PoFxRemoveDeviceRelation.c)
 *     PopFxGetParentFxDevice @ 0x140604FC8 (PopFxGetParentFxDevice.c)
 *     PopFxIssueDirectedPowerTransition @ 0x14060521C (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     PopFxBugCheck @ 0x1403B0E54 (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxReferenceDevice(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 result; // rax

  _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 244));
  if ( *(_BYTE *)(BugCheckParameter2 + 240) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 244), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(BugCheckParameter2 + 248), 0, 0);
    PopFxBugCheck(0x607uLL, BugCheckParameter2, 0xFFFFFFFFC0000056uLL, 0LL);
  }
  result = a2;
  _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 4LL * a2 + 272));
  return result;
}
