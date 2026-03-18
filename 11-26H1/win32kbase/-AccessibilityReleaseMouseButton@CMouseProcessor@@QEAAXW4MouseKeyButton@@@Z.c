/*
 * XREFs of ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x140222C88
 * Callers:
 *     ReleaseMouseButton @ 0x14021C000 (ReleaseMouseButton.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400D0B5C (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1400D0FF0 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1400D135C (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x14012E0A0 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::AccessibilityReleaseMouseButton(CMouseProcessor *a1, char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int16 v9; // cx
  __int16 v10; // ax
  int v11; // edx
  int v12; // r8d
  __int128 v13; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-90h]
  _BYTE v15[96]; // [rsp+40h] [rbp-88h] BYREF

  v4 = *(_QWORD *)(W32GetUserGdiSessionState(a1) + 40);
  if ( PsGetCurrentProcess(v5) != v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1929);
  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment(v7, v6, v8) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1930);
  v14 = 0LL;
  v13 = 0LL;
  if ( (a2 & 1) != 0 )
    WORD2(v13) = 2;
  v9 = (a2 & 1) != 0 ? 2 : 0;
  v10 = v9 | 8;
  if ( (a2 & 2) != 0 )
    WORD2(v13) = v9 | 8;
  else
    v10 = (a2 & 1) != 0 ? 2 : 0;
  if ( !v10 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1945);
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v15, &v13, 3, 256);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v13, v11, v12);
  CMouseProcessor::SynthesizeMouse(a1, (struct CMouseProcessor::MouseInputDataEx *)v15, 0LL);
  if ( (_BYTE)v13 )
    --*(_DWORD *)(*((_QWORD *)&v13 + 1) + 28LL);
}
