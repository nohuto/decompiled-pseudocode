/*
 * XREFs of Command_Initialize @ 0x140007328
 * Callers:
 *     Command_D0Entry @ 0x1400070F4 (Command_D0Entry.c)
 *     Command_ControllerResetPostReset @ 0x14003DF04 (Command_ControllerResetPostReset.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     XilCoreCommand_Initialize @ 0x140007540 (XilCoreCommand_Initialize.c)
 *     Controller_IsControllerAccessible @ 0x14000B90C (Controller_IsControllerAccessible.c)
 *     XilCommand_InitializeSecureResources @ 0x140039830 (XilCommand_InitializeSecureResources.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x140057924 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall Command_Initialize(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 80) != a1 + 80 )
  {
    Debug_FreAssertMsg(
      "PendingList must be empty",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\command.c",
      413LL);
    MicrosoftTelemetryAssertTriggeredMsgKM("PendingList is not empty on re-initialization of the command ring.");
  }
  if ( *(_QWORD *)(a1 + 96) != a1 + 96 )
  {
    Debug_FreAssertMsg(
      "WaitingList must be empty",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\command.c",
      419LL);
    MicrosoftTelemetryAssertTriggeredMsgKM("WaitingList is not empty on re-initialization of the command ring.");
  }
  result = Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8));
  if ( (_BYTE)result )
  {
    if ( *(_BYTE *)(a1 + 136) )
      result = XilCommand_InitializeSecureResources();
    else
      result = XilCoreCommand_Initialize(a1 + 168);
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_DWORD *)(a1 + 64) = 1;
  }
  return result;
}
