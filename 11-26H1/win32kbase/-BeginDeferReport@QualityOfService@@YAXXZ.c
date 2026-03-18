/*
 * XREFs of ?BeginDeferReport@QualityOfService@@YAXXZ @ 0x1401A7CB0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall QualityOfService::BeginDeferReport(QualityOfService *this)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rbx

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(this);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v2 = *(_QWORD *)(*(_QWORD *)(CurrentProcessWin32Process + 1208) + 41344LL);
  if ( !*(_BYTE *)v2 )
  {
    if ( *(_QWORD *)(v2 + 8) != v2 + 8 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 503LL);
    *(_BYTE *)v2 = 1;
  }
}
