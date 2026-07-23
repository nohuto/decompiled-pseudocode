/*
 * XREFs of strcpy_s @ 0x14053EAD0
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x14080BF20 (RtlIncrementCorrelationVector.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14085A110 (CmpAddProcessorConfigurationEntry.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140B4CD10 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140B5E48C (BiConvertNtDeviceToBootEnvironment.c)
 *     ExpSystemErrorHandler2 @ 0x140C056F0 (ExpSystemErrorHandler2.c)
 *     HdlspGetLine @ 0x140C52AA8 (HdlspGetLine.c)
 *     HdlspSetBlueScreenInformation @ 0x140C53600 (HdlspSetBlueScreenInformation.c)
 *     PspCreateSecureSystemProcess @ 0x140CDE3BC (PspCreateSecureSystemProcess.c)
 *     PspInitPhase0 @ 0x140D0D27C (PspInitPhase0.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl strcpy_s(char *a1, rsize_t SizeInBytes, const char *Src)
{
  errno_t v3; // ebx
  signed __int64 v4; // r9
  char v5; // al

  if ( a1 && SizeInBytes )
  {
    if ( Src )
    {
      v4 = a1 - Src;
      while ( 1 )
      {
        v5 = *Src;
        Src[v4] = *Src;
        ++Src;
        if ( !v5 )
          return 0;
        if ( !--SizeInBytes )
        {
          v3 = 34;
          goto LABEL_9;
        }
      }
    }
    else
    {
      v3 = 22;
LABEL_9:
      *a1 = 0;
      xHalTimerWatchdogStop();
      return v3;
    }
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
