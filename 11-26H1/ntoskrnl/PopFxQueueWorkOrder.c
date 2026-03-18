/*
 * XREFs of PopFxQueueWorkOrder @ 0x14039486C
 * Callers:
 *     PopFxIdleComponent @ 0x140395020 (PopFxIdleComponent.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1404D6040 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404F97B0 (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxIssueDirectedPowerTransition @ 0x14060521C (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxReferenceDevice @ 0x1403948D4 (PopFxReferenceDevice.c)
 *     PopFxQueueWorkItem @ 0x140394940 (PopFxQueueWorkItem.c)
 */

__int64 __fastcall PopFxQueueWorkOrder(__int64 a1, ULONG_PTR a2)
{
  _KPROCESS **p_Process; // rdi
  __int64 result; // rax

  p_Process = (_KPROCESS **)&unk_140F12260;
  if ( (*(_DWORD *)(a2 + 864) & 0x1000) != 0 )
    p_Process = &stru_140F12420.Process;
  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 32));
  if ( (_DWORD)result == 1 )
  {
    PopFxReferenceDevice(a2);
    return PopFxQueueWorkItem(p_Process, a1);
  }
  return result;
}
