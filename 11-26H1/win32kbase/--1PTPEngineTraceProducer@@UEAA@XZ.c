/*
 * XREFs of ??1PTPEngineTraceProducer@@UEAA@XZ @ 0x14019BF8C
 * Callers:
 *     ??_EPTPEngineTraceProducer@@UEAAPEAXI@Z @ 0x140227330 (--_EPTPEngineTraceProducer@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall PTPEngineTraceProducer::~PTPEngineTraceProducer(PTPEngineTraceProducer *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &PTPEngineTraceProducer::`vftable'{for `IPTPEngine'};
  *((_QWORD *)this + 2) = &PTPEngineTraceProducer::`vftable'{for `IPTPEngineClient'};
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
  *(_QWORD *)this = &IPTPEngine::`vftable';
}
