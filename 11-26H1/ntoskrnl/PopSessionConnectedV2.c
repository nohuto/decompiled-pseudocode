/*
 * XREFs of PopSessionConnectedV2 @ 0x1407E2424
 * Callers:
 *     PopSessionConnectionChangeV2 @ 0x1407E24E4 (PopSessionConnectionChangeV2.c)
 * Callees:
 *     PopAdaptiveConsoleSessionOverrideTrigger @ 0x1407E2184 (PopAdaptiveConsoleSessionOverrideTrigger.c)
 *     PopDiagTraceSessionStates @ 0x1409F7428 (PopDiagTraceSessionStates.c)
 *     PopSetSessionDisplayStatus @ 0x1409F7F68 (PopSetSessionDisplayStatus.c)
 *     PopAdaptiveGetSessionStateUnsafe @ 0x1409F935C (PopAdaptiveGetSessionStateUnsafe.c)
 */

__int64 __fastcall PopSessionConnectedV2(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx

  v4 = *(_DWORD *)(a2 + 4);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CONNECTED);
  if ( !v4 )
  {
    PopConsoleSession = 1;
    dword_140F0C078 = a1;
  }
  PopSetSessionDisplayStatus(a1, 1LL);
  if ( LOBYTE(ExpPlatformBinaryLock.Timer.Dpc) )
    PopAdaptiveConsoleSessionOverrideTrigger(
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      1,
      2,
      0);
  return PopAdaptiveGetSessionStateUnsafe(a1, a3, a4);
}
