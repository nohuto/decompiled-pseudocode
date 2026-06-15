/*
 * XREFs of ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x180084E40
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18015E640 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSrv::PreADGTermination(CAudioSrv *this)
{
  EnterCriticalSection(&g_csVadList);
  if ( qword_1801D5750 )
    MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", qword_1801D5750, 0LL, 1LL);
  LeaveCriticalSection(&g_csVadList);
}
