/*
 * XREFs of ??0PTPEngineTraceProducer@@AEAA@PEAVIPTPEngine@@@Z @ 0x1401574B0
 * Callers:
 *     ?Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z @ 0x140157444 (-Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

PTPEngineTraceProducer *__fastcall PTPEngineTraceProducer::PTPEngineTraceProducer(
        PTPEngineTraceProducer *this,
        struct IPTPEngine *a2)
{
  unsigned __int64 v2; // rbx

  *((_QWORD *)this + 1) = 0LL;
  v2 = (unsigned __int64)this + 16;
  *((_QWORD *)this + 3) = a2;
  *(_QWORD *)this = &PTPEngineTraceProducer::`vftable'{for `IPTPEngine'};
  *((_QWORD *)this + 2) = &PTPEngineTraceProducer::`vftable'{for `IPTPEngineClient'};
  memset((char *)this + 40, 0, 0xA0uLL);
  *((_QWORD *)this + 25) = 0LL;
  (***((void (__fastcall ****)(_QWORD, _QWORD))this + 3))(
    *((_QWORD *)this + 3),
    v2 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  return this;
}
