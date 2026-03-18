/*
 * XREFs of ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x140039948
 * Callers:
 *     GenerateMouseMove @ 0x1400398E0 (GenerateMouseMove.c)
 * Callees:
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x14005E70C (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     IsInputProcessingActivated @ 0x140067500 (IsInputProcessingActivated.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _anonymous_namespace_::PhysicalCursorPointAsLogicalPoint @ 0x1400BA520 (_anonymous_namespace_--PhysicalCursorPointAsLogicalPoint.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x140104744 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     ?WindowManagementInitiate@Mouse@InputTraceLogging@@SAXK@Z @ 0x14010EBB4 (-WindowManagementInitiate@Mouse@InputTraceLogging@@SAXK@Z.c)
 *     ApiSetEditionUpdateCursorAsync @ 0x140196D20 (ApiSetEditionUpdateCursorAsync.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::MoveMouseWindowManagement(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // bp
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment() != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1571LL);
  v6 = IsInputProcessingActivated();
  if ( (a2 & 1) != 0 )
  {
    v7 = anonymous_namespace_::PhysicalCursorPointAsLogicalPoint(v12);
    v8 = *(unsigned int *)(v7 + 8);
    *(_QWORD *)(a1 + 44) = *(_QWORD *)v7;
    *(_DWORD *)(a1 + 52) = v8;
    v10 = *(_QWORD *)(W32GetUserSessionState(v8, v9) + 19872);
    *(_QWORD *)(v10 + 4952) = 0LL;
    v5 = *(_QWORD *)(W32GetUserSessionState(v10, v11) + 19184);
    *(_QWORD *)(a1 + 3664) = v5;
    *(_QWORD *)(a1 + 3672) = 0LL;
  }
  if ( (a2 & 2) != 0 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19176) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1604LL);
    W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 4016), 0);
    *(_BYTE *)(a1 + 4024) = 1;
    W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 4016), 0);
  }
  InputTraceLogging::Mouse::WindowManagementInitiate(a2);
  if ( v6 )
    ApiSetEditionUpdateCursorAsync();
  else
    CMouseProcessor::ExecuteMoveMouseWindowManagement((CMouseProcessor *)a1);
}
