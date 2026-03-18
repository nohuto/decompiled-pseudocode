/*
 * XREFs of ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x14021F290
 * Callers:
 *     MouseButtonAction @ 0x1402168A0 (MouseButtonAction.c)
 * Callees:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x14005E7B8 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x14005E8F8 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x140104744 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A4F40 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseButtonAction(CMouseProcessor *a1, int a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int16 v11; // dx
  __int16 v12; // ax
  __int64 v13; // rdx
  __int128 v14; // [rsp+28h] [rbp-51h] BYREF
  __int64 v15; // [rsp+38h] [rbp-41h]
  _BYTE v16[96]; // [rsp+40h] [rbp-39h] BYREF

  v6 = *(_QWORD *)(W32GetUserGdiSessionState(a1) + 40);
  if ( PsGetCurrentProcess(v8, v7) != v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1882);
  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment(v10, v9) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1883);
  if ( a3 > 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1884);
  if ( (unsigned int)(a2 - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1885);
  v15 = 0LL;
  v11 = 1;
  if ( a2 != 1 )
    v11 = 4;
  v12 = 2 * v11;
  v14 = 0LL;
  if ( a3 != 1 )
    v12 = v11;
  WORD2(v14) = v12;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v16, (__int64)&v14, 2, 256);
  LOBYTE(v14) = 0;
  *((_QWORD *)&v14 + 1) = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)&v14, v13);
  CMouseProcessor::SynthesizeMouse(a1, (struct CMouseProcessor::MouseInputDataEx *)v16, 0LL);
  if ( (_BYTE)v14 )
    --*(_DWORD *)(*((_QWORD *)&v14 + 1) + 28LL);
}
