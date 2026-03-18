/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x140AAB46C
 * Callers:
 *     HvRecoverFlushProtocolStateFromFiles @ 0x14085CFE4 (HvRecoverFlushProtocolStateFromFiles.c)
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     HvWriteLogFile @ 0x140AAA7F4 (HvWriteLogFile.c)
 *     CmpDoFileSetSizeEx @ 0x140AAA978 (CmpDoFileSetSizeEx.c)
 *     HvSwapLogFiles @ 0x140AAB1BC (HvSwapLogFiles.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x140AAB370 (HvTruncateCurrentLogFileIfRequired.c)
 *     HvpPerformLogFileRecovery @ 0x140AEB2A8 (HvpPerformLogFileRecovery.c)
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
