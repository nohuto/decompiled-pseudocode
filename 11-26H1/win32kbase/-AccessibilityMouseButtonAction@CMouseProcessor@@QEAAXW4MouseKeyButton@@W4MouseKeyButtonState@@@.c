/*
 * XREFs of ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x140222A38
 * Callers:
 *     MouseButtonAction @ 0x14021BD90 (MouseButtonAction.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400D0B5C (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1400D0FF0 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1400D135C (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x14012E0A0 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseButtonAction(CMouseProcessor *a1, int a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int16 v11; // dx
  __int16 v12; // ax
  int v13; // edx
  int v14; // r8d
  __int128 v15; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-90h]
  _BYTE v17[96]; // [rsp+40h] [rbp-88h] BYREF

  v6 = *(_QWORD *)(W32GetUserGdiSessionState(a1) + 40);
  if ( PsGetCurrentProcess(v7) != v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1892);
  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment(v9, v8, v10) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1893);
  if ( a3 > 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1894);
  if ( (unsigned int)(a2 - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1895);
  v16 = 0LL;
  v11 = 1;
  if ( a2 != 1 )
    v11 = 4;
  v12 = 2 * v11;
  v15 = 0LL;
  if ( a3 != 1 )
    v12 = v11;
  WORD2(v15) = v12;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v17, &v15, 2, 256);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v15, v13, v14);
  CMouseProcessor::SynthesizeMouse(a1, (struct CMouseProcessor::MouseInputDataEx *)v17, 0LL);
  if ( (_BYTE)v15 )
    --*(_DWORD *)(*((_QWORD *)&v15 + 1) + 28LL);
}
