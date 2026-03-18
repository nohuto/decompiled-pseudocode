/*
 * XREFs of ApiSetEditionGetExecutionEvironment @ 0x140227614
 * Callers:
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1400D0FF0 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     ?InitializeKeyboardGlobals@@YAJXZ @ 0x14024B0E4 (-InitializeKeyboardGlobals@@YAJXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionGetExecutionEvironment(__int64 a1)
{
  int (*v1)(void); // rax
  __int64 v2; // rcx
  __int64 (*v3)(void); // rax
  unsigned int v4; // ebx

  v1 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4912LL);
  if ( !v1 || v1() < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1357);
  v3 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v2) + 48) + 4920LL);
  if ( !v3 )
  {
    v4 = 0;
LABEL_8:
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1359);
    return v4;
  }
  v4 = v3();
  if ( !v4 )
    goto LABEL_8;
  return v4;
}
