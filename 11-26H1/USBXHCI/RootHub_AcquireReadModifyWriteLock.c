/*
 * XREFs of RootHub_AcquireReadModifyWriteLock @ 0x14000D648
 * Callers:
 *     RootHub_ForceU3 @ 0x14000515C (RootHub_ForceU3.c)
 *     RootHub_HandlePortStatusChangeEvent @ 0x1400089F4 (RootHub_HandlePortStatusChangeEvent.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x140009050 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x14000BBF0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_D0Exit @ 0x14002C10C (RootHub_D0Exit.c)
 *     RootHub_ForceU0AndWait @ 0x14002C35C (RootHub_ForceU0AndWait.c)
 *     RootHub_D0Entry @ 0x14002C718 (RootHub_D0Entry.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x14002C8AC (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x14002D704 (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     RootHub_ClearPortResumeTime @ 0x14004A180 (RootHub_ClearPortResumeTime.c)
 *     RootHub_DisableLPMForSlot @ 0x14004A1D8 (RootHub_DisableLPMForSlot.c)
 *     RootHub_SetPortResumeTime @ 0x14004A45C (RootHub_SetPortResumeTime.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x14004B32C (RootHub_Update20HardwareLpmParameters.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x14000D6C0 (DynamicLock_Acquire.c)
 *     Controller_LowerAndTrackIrql @ 0x14000FED0 (Controller_LowerAndTrackIrql.c)
 */

__int64 __fastcall RootHub_AcquireReadModifyWriteLock(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  char v4; // si
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 result; // rax

  v2 = a2;
  v4 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v5 + 1001) )
    {
      Controller_LowerAndTrackIrql(v5);
      v4 = 1;
    }
  }
  v6 = *(_QWORD *)(a1 + 48);
  v7 = 120 * v2;
  result = DynamicLock_Acquire(*(_QWORD *)(v7 + v6 + 24));
  *(_BYTE *)(v7 + v6 + 32) = v4;
  return result;
}
