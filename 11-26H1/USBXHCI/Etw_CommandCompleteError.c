/*
 * XREFs of Etw_CommandCompleteError @ 0x14004F2AC
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x14002B298 (Command_HandleCommandCompletionEvent.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x14002B8E4 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_ControllerResetPostReset @ 0x14003DF04 (Command_ControllerResetPostReset.c)
 *     Command_FailAllCommands @ 0x14003E18C (Command_FailAllCommands.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003E5F0 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     McTemplateK0ppb16qu_EtwWriteTransfer @ 0x14002B840 (McTemplateK0ppb16qu_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall Etw_CommandCompleteError(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  NTSTATUS result; // eax
  char v6; // [rsp+38h] [rbp-10h]

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x40) != 0 )
  {
    v6 = *(_BYTE *)(a3 + 60);
    return McTemplateK0ppb16qu_EtwWriteTransfer(
             a3 + 24,
             &USBXHCI_ETW_EVENT_COMMAND_COMPLETE_ERROR,
             a3,
             *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
             a3,
             a3 + 24,
             a4,
             v6);
  }
  return result;
}
