/*
 * XREFs of _lambda_e9d9692466b90d39df94103fce77647b_::operator() @ 0x14020ED0C
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1401166DC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x14018A790 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall lambda_e9d9692466b90d39df94103fce77647b_::operator()(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  struct W32_PUSH_LOCK *v6; // rbx
  unsigned int v7; // edi

  v4 = 2LL * (unsigned int)(a3 - 1);
  if ( *((_DWORD *)&funcs_14020ED75 + 4 * (unsigned int)(a3 - 1) + 2) != a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2275);
  v6 = *(struct W32_PUSH_LOCK **)(*a1 + 1232LL);
  W32AcquirePushLockExclusiveEx(v6, 0);
  v7 = ((__int64 (__fastcall *)(_QWORD, __int64))*(&funcs_14020ED75 + v4))(*a1, a2);
  W32ReleasePushLockExclusiveEx(v6, 0LL);
  return v7;
}
