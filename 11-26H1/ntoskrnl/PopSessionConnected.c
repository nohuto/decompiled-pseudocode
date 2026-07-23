/*
 * XREFs of PopSessionConnected @ 0x140B77568
 * Callers:
 *     PopSessionConnectionChange @ 0x140B77620 (PopSessionConnectionChange.c)
 * Callees:
 *     Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline @ 0x140606734 (Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline.c)
 *     PopAdaptiveConsoleSessionOverrideTrigger @ 0x1407E2184 (PopAdaptiveConsoleSessionOverrideTrigger.c)
 *     PopDiagTraceSessionStates @ 0x1409F7428 (PopDiagTraceSessionStates.c)
 *     PopSetSessionDisplayStatus @ 0x1409F7F68 (PopSetSessionDisplayStatus.c)
 *     PopAdaptiveGetSessionStateUnsafe @ 0x1409F935C (PopAdaptiveGetSessionStateUnsafe.c)
 */

__int64 __fastcall PopSessionConnected(int a1, __int64 a2, __int64 a3)
{
  Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline();
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CONNECTED, a1, *(unsigned __int8 *)(a2 + 1));
  if ( *(_BYTE *)(a2 + 1) )
  {
    PopConsoleSession = 1;
    dword_140F0C078 = a1;
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
