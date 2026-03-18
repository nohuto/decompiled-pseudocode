/*
 * XREFs of ImInspectChar @ 0x1400BE808
 * Callers:
 *     ?ProcessTranslatedChar@@YAJPEAU_CHARHOOKSTRUCT@@@Z @ 0x1400BE710 (-ProcessTranslatedChar@@YAJPEAU_CHARHOOKSTRUCT@@@Z.c)
 * Callees:
 *     ImpQueueCharacter @ 0x1400BE898 (ImpQueueCharacter.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ImInspectChar(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int *InputMonitorSessionState; // rbx
  __int64 v11; // r8
  int v12; // ebx

  InputMonitorSessionState = (int *)W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v11);
  v12 = *InputMonitorSessionState;
  if ( v12 == (unsigned int)PsGetCurrentProcessSessionId() )
    return ImpQueueCharacter(a1, a2, a3, a4);
  else
    return 3221226021LL;
}
