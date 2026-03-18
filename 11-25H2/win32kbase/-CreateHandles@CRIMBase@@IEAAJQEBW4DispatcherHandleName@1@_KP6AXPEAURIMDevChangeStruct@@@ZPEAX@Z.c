/*
 * XREFs of ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x14020F150
 * Callers:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1400E1180 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140065374 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1400DA790 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x140154130 (RIMRegisterForInputWithCallbacks.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x14020EF5C (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z.c)
 */

__int64 __fastcall CRIMBase::CreateHandles(
        CRIMBase *this,
        const enum CRIMBase::DispatcherHandleName *const a2,
        unsigned __int64 a3,
        void (*a4)(struct RIMDevChangeStruct *),
        void *a5)
{
  __int64 v8; // rbx
  char v9; // si
  __int64 v10; // r14
  __int64 v11; // rdx
  int DispatcherHandles; // r15d
  void *DispatcherHandleByName; // rbx
  __int64 v14; // rbp
  __int64 v15; // rax
  int v16; // ebp
  bool v18; // bl
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx

  if ( a3 > 0x13 )
    return 3221225485LL;
  v8 = 0LL;
  v9 = 1;
  if ( a3 )
  {
    do
    {
      v10 = *((unsigned int *)a2 + v8);
      if ( (unsigned int)v10 >= 0x13 )
        return 3221225485LL;
      if ( dword_140273700[3 * v10] != (_DWORD)v10 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 197);
      DispatcherHandles = CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
                            (CRIMBase *)((char *)this + 56 * v10 + 168),
                            (const struct CRIMBase::DispatcherCreation *)&dword_140273700[3 * v10]);
      if ( DispatcherHandles < 0 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v9 = 0;
        }
        v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
          LOBYTE(v20) = v18;
          LOBYTE(v21) = v9;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v21,
            v20,
            *(_QWORD *)(UserSessionState + 69144),
            2,
            2,
            10,
            (__int64)&WPP_16b0d3e1bc85332a6529a599abe513a5_Traceguids,
            v10);
        }
        return (unsigned int)DispatcherHandles;
      }
    }
    while ( ++v8 < a3 );
  }
  DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName((__int64)this, 0, 0);
  if ( !DispatcherHandleByName )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 208);
  v14 = CRIMBase::GetDispatcherHandleByName((__int64)this, 3u, 0);
  if ( !v14 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 211);
  v15 = CRIMBase::GetDispatcherHandleByName((__int64)this, 1u, 0);
  *((_QWORD *)this + 8) = (char *)this + 80;
  *((_QWORD *)this + 9) = (char *)this + 80;
  v16 = RIMRegisterForInputWithCallbacks(
          *((_DWORD *)this + 36),
          0LL,
          0,
          0LL,
          (__int64)gpWin32kDriverObject,
          DispatcherHandleByName,
          v14,
          v15,
          (__int64)a5,
          (__int64)CBaseInput::_RIMCallBack,
          0LL,
          0,
          (HANDLE *)this + 1);
  if ( v16 >= 0 )
  {
    CPushLock::AcquireLockExclusive((CRIMBase *)((char *)this + 152));
    v16 = RawInputManagerObjectResolveHandle(*((char **)this + 1), 3u, 1, (PVOID *)this + 2);
    if ( v16 < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 239);
    CPushLock::ReleaseLock((CRIMBase *)((char *)this + 152));
  }
  return (unsigned int)v16;
}
