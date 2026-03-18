/*
 * XREFs of PopIsInputSuppressionEngaged @ 0x140AC3148
 * Callers:
 *     PopMonitorInvocation @ 0x14077C050 (PopMonitorInvocation.c)
 *     PopPowerAggregatorHandleActiveIntent @ 0x140AC2DC0 (PopPowerAggregatorHandleActiveIntent.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIsInputSuppressionEngaged(int a1)
{
  char v1; // dl
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v1 = 0;
  if ( a1 <= 36 )
  {
    if ( a1 != 36 )
    {
      v6 = a1 - 31;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( (unsigned int)(v8 - 1) > 1 )
              return v1;
          }
        }
      }
    }
  }
  else
  {
    v2 = a1 - 37;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          if ( v4 != 15 )
            return v1;
        }
      }
    }
  }
  if ( PopEnableInputSuppression
    && !PopErrataReportingIncorrectLidState
    && !PopLidOpened
    && (byte_140E67630 || dword_140F106CC == 1)
    && !PopConsoleExternalDisplayConnected )
  {
    return PopConsoleDisplayState == 0;
  }
  return v1;
}
