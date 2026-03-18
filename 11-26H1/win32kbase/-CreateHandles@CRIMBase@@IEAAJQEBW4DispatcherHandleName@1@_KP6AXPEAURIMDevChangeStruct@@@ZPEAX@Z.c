/*
 * XREFs of ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1401297B8
 * Callers:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x140110E30 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 * Callees:
 *     RIMRegisterForInputWithCallbacks @ 0x14005C740 (RIMRegisterForInputWithCallbacks.c)
 *     RawInputManagerObjectResolveHandle @ 0x14005DF20 (RawInputManagerObjectResolveHandle.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14006EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14006EF14 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x140129A80 (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CRIMBase::CreateHandles(
        CRIMBase *this,
        const enum CRIMBase::DispatcherHandleName *const a2,
        unsigned __int64 a3,
        void (*a4)(struct RIMDevChangeStruct *),
        void *a5)
{
  unsigned __int64 v8; // rbx
  char v9; // si
  __int64 v10; // rbp
  int v11; // edx
  int v12; // r8d
  int DispatcherHandles; // r14d
  __int64 v14; // rbp
  __int64 v15; // rbx
  void *v16; // rcx
  int v17; // ebp
  bool v19; // bl
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx

  if ( a3 > 0x13 )
    return 3221225485LL;
  v8 = 0LL;
  v9 = 1;
  while ( v8 < a3 )
  {
    v10 = *((unsigned int *)a2 + v8);
    if ( (unsigned int)v10 >= 0x13 )
      return 3221225485LL;
    if ( dword_14026AA10[3 * v10] != (_DWORD)v10 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 197LL);
    DispatcherHandles = CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
                          (CRIMBase *)((char *)this + 56 * v10 + 168),
                          (const struct CRIMBase::DispatcherCreation *)&dword_14026AA10[3 * v10]);
    if ( DispatcherHandles < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v9 = 0;
      }
      v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v12);
        LOBYTE(v21) = v19;
        LOBYTE(v22) = v9;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v22,
          v21,
          *(_QWORD *)(UserSessionState + 69136),
          2,
          2,
          10,
          (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids,
          v10);
      }
      return (unsigned int)DispatcherHandles;
    }
    ++v8;
  }
  v14 = *((_QWORD *)this + 23);
  if ( !v14 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 208LL);
  v15 = *((_QWORD *)this + 44);
  if ( !v15 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 211LL);
  v16 = (void *)*((_QWORD *)this + 30);
  *((_QWORD *)this + 8) = (char *)this + 80;
  *((_QWORD *)this + 9) = (char *)this + 80;
  v17 = RIMRegisterForInputWithCallbacks(
          *((_DWORD *)this + 36),
          0LL,
          0,
          0LL,
          (__int64)gpWin32kDriverObject,
          v14,
          v15,
          v16,
          (__int64)a5,
          (__int64)CBaseInput::_RIMCallBack,
          0LL,
          0,
          (HANDLE *)this + 1);
  if ( v17 >= 0 )
  {
    CPushLock::AcquireLockExclusive((CRIMBase *)((char *)this + 152));
    v17 = RawInputManagerObjectResolveHandle(*((char **)this + 1), 3u, 1, (PVOID *)this + 2);
    if ( v17 < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 239LL);
    CPushLock::ReleaseLock((CRIMBase *)((char *)this + 152));
  }
  return (unsigned int)v17;
}
