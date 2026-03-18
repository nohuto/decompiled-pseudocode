/*
 * XREFs of VidSchiCompletePreemption @ 0x14003CADC
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x14003C870 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchiCompleteAllPendingCommand @ 0x140058F78 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiPreemptEngineNodes @ 0x1400C070C (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1400C1A0C (VidSchiResetEngines.c)
 * Callees:
 *     VidSchiWaitForCompletePreemption @ 0x14011D524 (VidSchiWaitForCompletePreemption.c)
 */

__int64 __fastcall VidSchiCompletePreemption(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 3028);
  if ( (_DWORD)result )
    return VidSchiWaitForCompletePreemption();
  return result;
}
