/*
 * XREFs of ?Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z @ 0x140157444
 * Callers:
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1401573A4 (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0PTPEngineTraceProducer@@AEAA@PEAVIPTPEngine@@@Z @ 0x1401574B0 (--0PTPEngineTraceProducer@@AEAA@PEAVIPTPEngine@@@Z.c)
 */

__int64 __fastcall PTPEngineTraceProducer::Create(
        struct IPTPEngine *a1,
        __int64 a2,
        struct PTPEngineTraceProducer **a3)
{
  PTPEngineTraceProducer *v6; // rax
  PTPEngineTraceProducer *v7; // rax

  v6 = (PTPEngineTraceProducer *)Win32AllocPoolZInitImpl(256LL, 0xD0uLL, 0x70747355u);
  if ( !v6 )
    return 3221225495LL;
  v7 = PTPEngineTraceProducer::PTPEngineTraceProducer(v6, a1);
  if ( !v7 )
    return 3221225495LL;
  *((_QWORD *)v7 + 25) = a2;
  *a3 = v7;
  return 0LL;
}
