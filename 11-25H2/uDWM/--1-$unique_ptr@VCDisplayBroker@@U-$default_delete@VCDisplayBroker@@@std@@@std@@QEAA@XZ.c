/*
 * XREFs of ??1?$unique_ptr@VCDisplayBroker@@U?$default_delete@VCDisplayBroker@@@std@@@std@@QEAA@XZ @ 0x18009A0E4
 * Callers:
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18005774C (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800AC090 (--1CDesktopManager@@EEAA@XZ.c)
 *     _CDesktopManager::InitializeComObjects_::_1_::dtor$0 @ 0x1800EBD4A (_CDesktopManager--InitializeComObjects_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VCDisplayBroker@@@std@@QEBAXPEAVCDisplayBroker@@@Z @ 0x1800AC2E8 (--R-$default_delete@VCDisplayBroker@@@std@@QEBAXPEAVCDisplayBroker@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CDisplayBroker>::~unique_ptr<CDisplayBroker>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CDisplayBroker>::operator()();
  return result;
}
