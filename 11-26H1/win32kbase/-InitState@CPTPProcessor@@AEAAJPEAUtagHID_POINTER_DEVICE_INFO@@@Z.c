/*
 * XREFs of ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140173804
 * Callers:
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140192A90 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1400812A0 (-SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z.c)
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x14008145C (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ??0PTPEngineTraceProducer@@AEAA@PEAVIPTPEngine@@@Z @ 0x140173910 (--0PTPEngineTraceProducer@@AEAA@PEAVIPTPEngine@@@Z.c)
 *     ??0TPTHRESHOLDS@@QEAA@XZ @ 0x140173990 (--0TPTHRESHOLDS@@QEAA@XZ.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall CPTPProcessor::InitState(CPTPProcessor *this, struct tagHID_POINTER_DEVICE_INFO *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rsi
  LARGE_INTEGER PerformanceCounter; // rbx
  PTPEngineTraceProducer *v7; // rax
  LARGE_INTEGER *v8; // rax

  v4 = Win32AllocPoolZInitImpl(256LL, 0xD38uLL, 0x70747355u);
  v5 = (_QWORD *)v4;
  if ( !v4 )
    return 3221225495LL;
  memset((void *)(v4 + 16), 0, 0xD28uLL);
  v5[1] = 0LL;
  *v5 = &CPTPEngine::`vftable';
  TPTHRESHOLDS::TPTHRESHOLDS((TPTHRESHOLDS *)(v5 + 385));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v7 = (PTPEngineTraceProducer *)Win32AllocPoolZInitImpl(256LL, 0xD0uLL, 0x70747355u);
  if ( !v7 )
    return 3221225495LL;
  v8 = (LARGE_INTEGER *)PTPEngineTraceProducer::PTPEngineTraceProducer(v7, (struct IPTPEngine *)v5);
  if ( !v8 )
    return 3221225495LL;
  v8[25] = PerformanceCounter;
  *((_QWORD *)this + 69) = v8;
  v8[4].QuadPart = ((unsigned __int64)this + 168) & -(__int64)(this != 0LL);
  CPTPProcessor::BuildEnvironment(this, a2);
  PTPEngineTraceProducer::SetEnvironment(*((PTPEngineTraceProducer **)this + 69), (CPTPProcessor *)((char *)this + 560));
  return 0LL;
}
