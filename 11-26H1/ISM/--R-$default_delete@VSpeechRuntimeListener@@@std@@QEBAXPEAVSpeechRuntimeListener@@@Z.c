/*
 * XREFs of ??R?$default_delete@VSpeechRuntimeListener@@@std@@QEBAXPEAVSpeechRuntimeListener@@@Z @ 0x1800D0260
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x1800CFF8C (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 *     ??1?$unique_ptr@VSpeechRuntimeListener@@U?$default_delete@VSpeechRuntimeListener@@@std@@@std@@QEAA@XZ @ 0x1800D0200 (--1-$unique_ptr@VSpeechRuntimeListener@@U-$default_delete@VSpeechRuntimeListener@@@std@@@std@@QE.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800D06AC (-Unregister@SpectrumListener@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SpeechRuntimeListener@@QEAA@XZ @ 0x1800D1C84 (--1SpeechRuntimeListener@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<SpeechRuntimeListener>::operator()(__int64 a1, SpeechRuntimeListener *a2)
{
  if ( a2 )
  {
    SpeechRuntimeListener::~SpeechRuntimeListener(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x58);
  }
}
