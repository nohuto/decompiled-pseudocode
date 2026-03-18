/*
 * XREFs of ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x1400D1194
 * Callers:
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1400CFC60 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1400D0C28 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400D0B5C (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?WindowManagementExecute@Mouse@InputTraceLogging@@SAXXZ @ 0x1400D1148 (-WindowManagementExecute@Mouse@InputTraceLogging@@SAXXZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1400D135C (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ExecuteMoveMouseWindowManagement(CMouseProcessor *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  int v4; // edx
  int v5; // r8d
  _BYTE v6[8]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v7; // [rsp+30h] [rbp-41h]
  __int64 v8; // [rsp+38h] [rbp-39h]
  __int128 v9; // [rsp+48h] [rbp-29h] BYREF
  __int64 v10; // [rsp+58h] [rbp-19h]
  __int64 v11; // [rsp+60h] [rbp-11h]
  __int128 v12; // [rsp+68h] [rbp-9h]
  __int64 v13; // [rsp+78h] [rbp+7h]
  LARGE_INTEGER PerformanceCounter; // [rsp+80h] [rbp+Fh]
  LARGE_INTEGER v15; // [rsp+88h] [rbp+17h]
  int v16; // [rsp+90h] [rbp+1Fh]
  int v17; // [rsp+94h] [rbp+23h]
  __int64 v18; // [rsp+98h] [rbp+27h]
  int v19; // [rsp+A0h] [rbp+2Fh]

  InputTraceLogging::Mouse::WindowManagementExecute();
  v8 = 0LL;
  v2 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v11 = 0LL;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v15 = PerformanceCounter;
  v12 = 0LL;
  v16 = 2312;
  v13 = v2;
  v17 = 0;
  v18 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v19 = 4;
  if ( (unsigned int)GET_USERCRIT_DISPOSITION(0LL, v3) )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v6, v4, v5);
    CMouseProcessor::SynthesizeMouse(this, (struct CMouseProcessor::MouseInputDataEx *)&v9, 0LL);
    if ( v6[0] )
      --*(_DWORD *)(v7 + 28);
  }
  else
  {
    CMouseProcessor::SynthesizeMouse(this, (struct CMouseProcessor::MouseInputDataEx *)&v9, 0LL);
  }
}
