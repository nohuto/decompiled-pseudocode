/*
 * XREFs of RootHub_ReleaseReadModifyWriteLock @ 0x14000D784
 * Callers:
 *     RootHub_ForceU3 @ 0x14000515C (RootHub_ForceU3.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1400089F4 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x140008BE4 (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x140009050 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x14000BBF0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_D0Exit @ 0x14002C10C (RootHub_D0Exit.c)
 *     RootHub_ForceU0AndWait @ 0x14002C35C (RootHub_ForceU0AndWait.c)
 *     RootHub_D0Entry @ 0x14002C718 (RootHub_D0Entry.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x14002C8AC (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x14002D704 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x14002DA10 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     RootHub_ClearPortResumeTime @ 0x14004A180 (RootHub_ClearPortResumeTime.c)
 *     RootHub_DisableLPMForSlot @ 0x14004A1D8 (RootHub_DisableLPMForSlot.c)
 *     RootHub_SetPortResumeTime @ 0x14004A45C (RootHub_SetPortResumeTime.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x14004B32C (RootHub_Update20HardwareLpmParameters.c)
 * Callees:
 *     DynamicLock_Release @ 0x14000D7D0 (DynamicLock_Release.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000FCC0 (Controller_RaiseAndTrackIrql.c)
 */

__int64 __fastcall RootHub_ReleaseReadModifyWriteLock(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  char v5; // bl
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 48);
  v4 = 120LL * a2;
  v5 = *(_BYTE *)(v4 + v3 + 32);
  *(_BYTE *)(v4 + v3 + 32) = 0;
  result = DynamicLock_Release(*(_QWORD *)(v4 + v3 + 24));
  if ( v5 )
    return Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  return result;
}
