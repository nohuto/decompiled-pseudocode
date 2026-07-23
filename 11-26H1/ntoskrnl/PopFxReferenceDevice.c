/*
 * XREFs of PopFxReferenceDevice @ 0x140396654
 * Callers:
 *     PopFxQueueWorkOrder @ 0x1403965EC (PopFxQueueWorkOrder.c)
 *     PopFxIdleWorkerTail @ 0x140397384 (PopFxIdleWorkerTail.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x1404CA9FC (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1404CD980 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxActivateDevice @ 0x1404CEB00 (PopFxActivateDevice.c)
 *     PopFxClearDeviceConstraints @ 0x1404DB710 (PopFxClearDeviceConstraints.c)
 *     PoFxAddComponentRelation @ 0x140606A90 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x140606D00 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveComponentRelation @ 0x140607110 (PoFxRemoveComponentRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140607360 (PoFxRemoveDeviceRelation.c)
 *     PopFxGetParentFxDevice @ 0x140607AC8 (PopFxGetParentFxDevice.c)
 *     PopFxIssueDirectedPowerTransition @ 0x140607D1C (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
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
