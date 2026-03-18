/*
 * XREFs of AcpiDiagThermalPollingTraceControlCallback @ 0x140056010
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagRequeueThermalPollingTimer @ 0x14002BBDC (AcpiDiagRequeueThermalPollingTimer.c)
 */

void __fastcall AcpiDiagThermalPollingTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 v4; // rcx

  v4 = 0LL;
  if ( ControlCode )
  {
    if ( ControlCode == 1 )
    {
      while ( (unsigned int)v4 < 5 )
      {
        if ( (MatchAnyKeyword & AcpiDiagThermalPollingIntervals[2 * (unsigned int)v4]) != 0 )
        {
          v4 = AcpiDiagThermalPollingIntervals[2 * (unsigned int)v4 + 1];
          if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == v4 )
            return;
          goto LABEL_7;
        }
        LODWORD(v4) = v4 + 1;
      }
    }
  }
  else
  {
LABEL_7:
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = v4;
    AcpiDiagRequeueThermalPollingTimer();
  }
}
