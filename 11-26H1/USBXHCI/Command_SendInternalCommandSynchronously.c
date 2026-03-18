/*
 * XREFs of Command_SendInternalCommandSynchronously @ 0x14003E5A4
 * Callers:
 *     Command_D0EntryPostInterruptsEnabled @ 0x1400342E4 (Command_D0EntryPostInterruptsEnabled.c)
 * Callees:
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 */

NTSTATUS __fastcall Command_SendInternalCommandSynchronously(__int64 a1, __int64 a2)
{
  *(_WORD *)(a2 + 70) = 3;
  Command_SendCommand(a1, a2 + 8);
  return KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
}
