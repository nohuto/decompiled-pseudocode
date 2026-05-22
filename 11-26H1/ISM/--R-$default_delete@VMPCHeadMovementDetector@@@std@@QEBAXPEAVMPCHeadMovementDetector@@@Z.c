/*
 * XREFs of ??R?$default_delete@VMPCHeadMovementDetector@@@std@@QEBAXPEAVMPCHeadMovementDetector@@@Z @ 0x1800CEEF0
 * Callers:
 *     ??1?$unique_ptr@VMPCHeadMovementDetector@@U?$default_delete@VMPCHeadMovementDetector@@@std@@@std@@QEAA@XZ @ 0x1800CEB6C (--1-$unique_ptr@VMPCHeadMovementDetector@@U-$default_delete@VMPCHeadMovementDetector@@@std@@@std.c)
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x1800CF5C0 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCHeadMovementDetector@@QEAA@XZ @ 0x1800D0AA0 (--1MPCHeadMovementDetector@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<MPCHeadMovementDetector>::operator()(__int64 a1, MPCHeadMovementDetector *a2)
{
  if ( a2 )
  {
    MPCHeadMovementDetector::~MPCHeadMovementDetector(a2);
    operator delete(a2, (const struct std::nothrow_t *)0xB8);
  }
}
