/*
 * XREFs of ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x14021F4D4
 * Callers:
 *     ReleaseMouseButton @ 0x140216AE0 (ReleaseMouseButton.c)
 * Callees:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x14005E7B8 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x14005E8F8 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x140104744 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A4F40 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::AccessibilityReleaseMouseButton(CMouseProcessor *a1, char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edx
  __int16 v10; // cx
  __int64 v11; // rdx
  __int128 v12; // [rsp+30h] [rbp-41h] BYREF
  __int64 v13; // [rsp+40h] [rbp-31h]
  _BYTE v14[96]; // [rsp+48h] [rbp-29h] BYREF

  v4 = *(_QWORD *)(W32GetUserGdiSessionState(a1) + 40);
  if ( PsGetCurrentProcess(v6, v5) != v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1919);
  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment(v8, v7) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1920);
  v13 = 0LL;
  v12 = 0LL;
  v9 = a2 & 1;
  if ( (a2 & 1) != 0 )
    WORD2(v12) = 2;
  v10 = v9 != 0 ? 2 : 0;
  if ( (a2 & 2) != 0 )
  {
    v10 = v9 != 0 ? 10 : 8;
    WORD2(v12) = v10;
  }
  if ( !v10 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1935);
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v14, (__int64)&v12, 3, 256);
  LOBYTE(v12) = 0;
  *((_QWORD *)&v12 + 1) = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)&v12, v11);
  CMouseProcessor::SynthesizeMouse(a1, (struct CMouseProcessor::MouseInputDataEx *)v14, 0LL);
  if ( (_BYTE)v12 )
    --*(_DWORD *)(*((_QWORD *)&v12 + 1) + 28LL);
}
