/*
 * XREFs of ApiSetEditionGetExecutionEvironment @ 0x140225810
 * Callers:
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x140104744 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     ?InitializeKeyboardGlobals@@YAJXZ @ 0x140241D0C (-InitializeKeyboardGlobals@@YAJXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionGetExecutionEvironment(__int64 a1, __int64 a2)
{
  int (*v2)(void); // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 (*v5)(void); // rax
  unsigned int v6; // ebx

  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5352LL);
  if ( !v2 || v2() < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1356);
  v5 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4, v3) + 48) + 5360LL);
  if ( !v5 )
  {
    v6 = 0;
LABEL_8:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1358);
    return v6;
  }
  v6 = v5();
  if ( !v6 )
    goto LABEL_8;
  return v6;
}
