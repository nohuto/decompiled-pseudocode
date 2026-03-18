/*
 * XREFs of ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x140110E30
 * Callers:
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x140111118 (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1401297B8 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::InitializeSensor(CBaseInput *this, __int64 a2)
{
  __int64 v3; // rax
  void (*v4)(struct RIMDevChangeStruct *); // r9
  int Handles; // edi
  unsigned __int64 v7; // [rsp+34h] [rbp-74h] BYREF
  _BYTE v8[80]; // [rsp+40h] [rbp-68h] BYREF

  if ( !PtiCurrent((__int64)this, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 942LL);
  v3 = *(_QWORD *)this;
  LODWORD(v7) = 0;
  (*(void (__fastcall **)(CBaseInput *, _BYTE *, unsigned __int64 *))(v3 + 24))(this, v8, &v7);
  Handles = CRIMBase::CreateHandles(
              this,
              (const enum CRIMBase::DispatcherHandleName *const)v8,
              (unsigned int)v7,
              v4,
              this);
  if ( Handles >= 0 )
  {
    Handles = (*(__int64 (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 32LL))(this);
    if ( Handles >= 0 )
    {
      W32AcquirePushLockExclusiveEx((CBaseInput *)((char *)this + 1312));
      *((_DWORD *)this + 330) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
      *((_DWORD *)this + 331) = (unsigned int)PsGetCurrentThreadId();
      W32ReleasePushLockExclusiveEx((CBaseInput *)((char *)this + 1312));
    }
  }
  return (unsigned int)Handles;
}
