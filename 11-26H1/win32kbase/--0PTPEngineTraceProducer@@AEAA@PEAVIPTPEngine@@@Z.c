/*
 * XREFs of ??0PTPEngineTraceProducer@@AEAA@PEAVIPTPEngine@@@Z @ 0x140173910
 * Callers:
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140173804 (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

PTPEngineTraceProducer *__fastcall PTPEngineTraceProducer::PTPEngineTraceProducer(
        PTPEngineTraceProducer *this,
        struct IPTPEngine *a2)
{
  unsigned __int64 v2; // rbx
  void (__fastcall ***v4)(_QWORD, _QWORD); // rcx

  v2 = (unsigned __int64)this + 16;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &PTPEngineTraceProducer::`vftable'{for `IPTPEngine'};
  *((_QWORD *)this + 2) = &PTPEngineTraceProducer::`vftable'{for `IPTPEngineClient'};
  memset((char *)this + 40, 0, 0xA0uLL);
  v4 = (void (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)this + 3);
  *((_QWORD *)this + 25) = 0LL;
  (**v4)(v4, v2 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  return this;
}
