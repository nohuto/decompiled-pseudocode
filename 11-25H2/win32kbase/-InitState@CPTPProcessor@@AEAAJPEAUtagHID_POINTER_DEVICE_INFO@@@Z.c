/*
 * XREFs of ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1401573A4
 * Callers:
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x14015799C (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1400629F0 (-SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z.c)
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140062BA4 (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z @ 0x140157444 (-Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z.c)
 *     CreatePTPEngine @ 0x14019EB10 (CreatePTPEngine.c)
 */

__int64 __fastcall CPTPProcessor::InitState(
        struct PTPEngineTraceProducer **this,
        struct tagHID_POINTER_DEVICE_INFO *a2)
{
  __int64 result; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  PTPEngineTraceProducer **v6; // rdi
  struct IPTPEngine *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  result = CreatePTPEngine(&v7);
  if ( (int)result >= 0 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v6 = this + 69;
    result = PTPEngineTraceProducer::Create(v7, PerformanceCounter.QuadPart, this + 69);
    if ( (int)result >= 0 )
    {
      *((_QWORD *)*v6 + 4) = (unsigned __int64)(this + 21) & -(__int64)(this != 0LL);
      CPTPProcessor::BuildEnvironment((CPTPProcessor *)this, a2);
      PTPEngineTraceProducer::SetEnvironment(*v6, (const struct PTPEnvironment *)(this + 70));
      return 0LL;
    }
  }
  return result;
}
