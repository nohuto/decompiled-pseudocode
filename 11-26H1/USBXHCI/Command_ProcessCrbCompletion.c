/*
 * XREFs of Command_ProcessCrbCompletion @ 0x140032ABC
 * Callers:
 *     Command_InternalSendCommand @ 0x14000D894 (Command_InternalSendCommand.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x14002B8E4 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_ControllerResetPostReset @ 0x14003DF04 (Command_ControllerResetPostReset.c)
 *     Command_FailAllCommands @ 0x14003E18C (Command_FailAllCommands.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x14003E5F0 (Command_WdfEvtWatchdogTimerFunction.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Command_ProcessCrbCompletion(__int64 a1)
{
  return (*(__int64 (**)(void))(a1 + 40))();
}
