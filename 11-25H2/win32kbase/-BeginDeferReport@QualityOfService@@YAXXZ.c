/*
 * XREFs of ?BeginDeferReport@QualityOfService@@YAXXZ @ 0x1401A7D50
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall QualityOfService::BeginDeferReport(QualityOfService *this)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rbx

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(this);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v2 = *(_QWORD *)(*(_QWORD *)(CurrentProcessWin32Process + 1184) + 41304LL);
  if ( !*(_BYTE *)v2 )
  {
    if ( *(_QWORD *)(v2 + 8) != v2 + 8 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 467);
    *(_BYTE *)v2 = 1;
  }
}
