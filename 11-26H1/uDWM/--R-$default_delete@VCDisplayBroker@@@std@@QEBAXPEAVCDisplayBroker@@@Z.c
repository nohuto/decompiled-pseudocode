/*
 * XREFs of ??R?$default_delete@VCDisplayBroker@@@std@@QEBAXPEAVCDisplayBroker@@@Z @ 0x1800AA2C8
 * Callers:
 *     ??1?$unique_ptr@VCDisplayBroker@@U?$default_delete@VCDisplayBroker@@@std@@@std@@QEAA@XZ @ 0x18008DB08 (--1-$unique_ptr@VCDisplayBroker@@U-$default_delete@VCDisplayBroker@@@std@@@std@@QEAA@XZ.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x1800ABB28 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??1CDisplayBroker@@QEAA@XZ @ 0x18008DFC4 (--1CDisplayBroker@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::default_delete<CDisplayBroker>::operator()(__int64 a1, __int64 *a2)
{
  if ( a2 )
  {
    CDisplayBroker::~CDisplayBroker(a2);
    operator delete(a2, (const struct std::nothrow_t *)8);
  }
}
