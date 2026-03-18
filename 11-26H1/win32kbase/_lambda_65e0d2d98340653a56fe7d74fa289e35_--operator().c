/*
 * XREFs of _lambda_65e0d2d98340653a56fe7d74fa289e35_::operator() @ 0x14021823C
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x14013DFAC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x140095000 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall lambda_65e0d2d98340653a56fe7d74fa289e35_::operator()(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  struct W32_PUSH_LOCK *v6; // rdi
  unsigned int v7; // ebx

  v4 = 2LL * (unsigned int)(a3 - 1);
  if ( *((_DWORD *)&funcs_1402182A3 + 4 * (unsigned int)(a3 - 1) + 2) != a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2288);
  v6 = *(struct W32_PUSH_LOCK **)(*a1 + 1232LL);
  W32AcquirePushLockExclusiveEx(v6);
  v7 = ((__int64 (__fastcall *)(_QWORD, __int64))*(&funcs_1402182A3 + v4))(*a1, a2);
  W32ReleasePushLockExclusiveEx(v6);
  return v7;
}
