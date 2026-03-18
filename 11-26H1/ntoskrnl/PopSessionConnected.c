/*
 * XREFs of PopSessionConnected @ 0x140B72588
 * Callers:
 *     PopSessionConnectionChange @ 0x140B72640 (PopSessionConnectionChange.c)
 * Callees:
 *     Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline @ 0x140603C28 (Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline.c)
 *     PopAdaptiveConsoleSessionOverrideTrigger @ 0x1407DDB54 (PopAdaptiveConsoleSessionOverrideTrigger.c)
 *     PopDiagTraceSessionStates @ 0x140A3BA08 (PopDiagTraceSessionStates.c)
 *     PopSetSessionDisplayStatus @ 0x140A3C548 (PopSetSessionDisplayStatus.c)
 *     PopAdaptiveGetSessionStateUnsafe @ 0x140A3D93C (PopAdaptiveGetSessionStateUnsafe.c)
 */

__int64 __fastcall PopSessionConnected(unsigned int a1, __int64 a2, __int64 a3)
{
  Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline();
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CONNECTED, a1, *(unsigned __int8 *)(a2 + 1));
  if ( *(_BYTE *)(a2 + 1) )
  {
    PopAdaptiveStandbyLock.PriorityFloorCounts[24] = 1;
    *(_DWORD *)&PopAdaptiveStandbyLock.AbWaitEntryCount = a1;
  }
  PopSetSessionDisplayStatus(a1, 1, 0);
  if ( LOBYTE(ExpPlatformBinaryLock.Timer.Dpc) )
    PopAdaptiveConsoleSessionOverrideTrigger(
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      1,
      2,
      0);
  return PopAdaptiveGetSessionStateUnsafe(a1, a2 + 8, a3);
}
