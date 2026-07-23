/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x140AA8A4C
 * Callers:
 *     HvRecoverFlushProtocolStateFromFiles @ 0x1408632D4 (HvRecoverFlushProtocolStateFromFiles.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     HvWriteLogFile @ 0x140AA7DD4 (HvWriteLogFile.c)
 *     CmpDoFileSetSizeEx @ 0x140AA7F58 (CmpDoFileSetSizeEx.c)
 *     HvSwapLogFiles @ 0x140AA879C (HvSwapLogFiles.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x140AA8950 (HvTruncateCurrentLogFileIfRequired.c)
 *     HvpPerformLogFileRecovery @ 0x140AEE1B4 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvpLogTypeToLogArrayIndex(int a1)
{
  bool result; // al

  result = 0;
  if ( a1 != 1 )
    return a1 != 4;
  return result;
}
