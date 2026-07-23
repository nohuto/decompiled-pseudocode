/*
 * XREFs of PopFxQueueWorkOrder @ 0x1403965EC
 * Callers:
 *     PopFxIdleComponent @ 0x140396DA0 (PopFxIdleComponent.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1404CF810 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404F2DC0 (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxIssueDirectedPowerTransition @ 0x140607D1C (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxReferenceDevice @ 0x140396654 (PopFxReferenceDevice.c)
 *     PopFxQueueWorkItem @ 0x1403966C0 (PopFxQueueWorkItem.c)
 */

__int64 __fastcall PopFxQueueWorkOrder(__int64 a1, ULONG_PTR a2)
{
  _ULARGE_INTEGER *p_ReadTransferCount; // rdi
  __int64 result; // rax

  p_ReadTransferCount = (_ULARGE_INTEGER *)&PopFxBlockingDeviceListLock.ReadTransferCount;
  if ( (*(_DWORD *)(a2 + 864) & 0x1000) != 0 )
    p_ReadTransferCount = &PopFxBlockingDeviceListLock.Timer.DueTime;
  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 32));
  if ( (_DWORD)result == 1 )
  {
    PopFxReferenceDevice(a2);
    return PopFxQueueWorkItem(p_ReadTransferCount, a1);
  }
  return result;
}
