/*
 * XREFs of ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1400D0C28
 * Callers:
 *     GenerateMouseMove @ 0x1400D0B90 (GenerateMouseMove.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _anonymous_namespace_::PhysicalCursorPointAsLogicalPoint @ 0x1400CFE80 (_anonymous_namespace_--PhysicalCursorPointAsLogicalPoint.c)
 *     ApiSetEditionUpdateCursorAsync @ 0x1400D00EC (ApiSetEditionUpdateCursorAsync.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1400D0FF0 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     ?WindowManagementInitiate@Mouse@InputTraceLogging@@SAXK@Z @ 0x1400D102C (-WindowManagementInitiate@Mouse@InputTraceLogging@@SAXK@Z.c)
 *     IsInputProcessingActivated @ 0x1400D10D0 (IsInputProcessingActivated.c)
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x1400D1194 (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::MoveMouseWindowManagement(__int64 a1, unsigned int a2)
{
  int v4; // edx
  __int64 v5; // rcx
  char v6; // bp
  int v7; // r8d
  _DWORD *v8; // rax
  int v9; // ecx
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rcx
  int v13; // edx
  int v14; // r8d
  __int64 v15; // rcx
  _DWORD v16[10]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment() != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1581LL);
  v6 = IsInputProcessingActivated();
  if ( (a2 & 1) != 0 )
  {
    v8 = anonymous_namespace_::PhysicalCursorPointAsLogicalPoint(v16, v4, v7);
    v9 = v8[2];
    *(_QWORD *)(a1 + 44) = *(_QWORD *)v8;
    *(_DWORD *)(a1 + 52) = v9;
    v12 = *(_QWORD *)(W32GetUserSessionState(v9, v10, v11) + 19904);
    *(_QWORD *)(v12 + 4952) = 0LL;
    v5 = *(_QWORD *)(W32GetUserSessionState(v12, v13, v14) + 19216);
    *(_QWORD *)(a1 + 3668) = v5;
    *(_QWORD *)(a1 + 3676) = 0LL;
  }
  if ( (a2 & 2) != 0 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v5, v4, v7) + 19208) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1614LL);
    W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 4024));
    *(_BYTE *)(a1 + 4032) = 1;
    W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(a1 + 4024));
  }
  InputTraceLogging::Mouse::WindowManagementInitiate(a2);
  if ( v6 )
    ApiSetEditionUpdateCursorAsync(v15);
  else
    CMouseProcessor::ExecuteMoveMouseWindowManagement((CMouseProcessor *)a1);
}
