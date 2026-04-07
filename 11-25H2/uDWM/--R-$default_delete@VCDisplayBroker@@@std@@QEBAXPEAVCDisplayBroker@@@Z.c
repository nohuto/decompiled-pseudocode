/*
 * XREFs of ??R?$default_delete@VCDisplayBroker@@@std@@QEBAXPEAVCDisplayBroker@@@Z @ 0x1800AC2E8
 * Callers:
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18005774C (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     ??1?$unique_ptr@VCDisplayBroker@@U?$default_delete@VCDisplayBroker@@@std@@@std@@QEAA@XZ @ 0x18009A0E4 (--1-$unique_ptr@VCDisplayBroker@@U-$default_delete@VCDisplayBroker@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CDisplayBroker@@QEAA@XZ @ 0x18009A600 (--1CDisplayBroker@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CDisplayBroker>::operator()(__int64 a1, __int64 *a2)
{
  const struct std::nothrow_t *v3; // rdx

  if ( a2 )
  {
    CDisplayBroker::~CDisplayBroker(a2);
    CDisplayBlackCurtainAnimatedVisual::operator delete(a2, v3);
  }
}
