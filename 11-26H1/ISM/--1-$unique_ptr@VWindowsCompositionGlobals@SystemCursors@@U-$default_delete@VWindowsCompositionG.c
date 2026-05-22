/*
 * XREFs of ??1?$unique_ptr@VWindowsCompositionGlobals@SystemCursors@@U?$default_delete@VWindowsCompositionGlobals@SystemCursors@@@std@@@std@@QEAA@XZ @ 0x1800995EC
 * Callers:
 *     ?InitializeBase@SystemCursorServiceBase@@IEAAJXZ @ 0x1800922A8 (-InitializeBase@SystemCursorServiceBase@@IEAAJXZ.c)
 *     ??1SystemCursorService2@@UEAA@XZ @ 0x1800FAA24 (--1SystemCursorService2@@UEAA@XZ.c)
 *     ??1SystemCursorServiceBase@@UEAA@XZ @ 0x1800FAA94 (--1SystemCursorServiceBase@@UEAA@XZ.c)
 *     ??_ESystemCursorServiceBase@@UEAAPEAXI@Z @ 0x1800FADF0 (--_ESystemCursorServiceBase@@UEAAPEAXI@Z.c)
 *     ??1DesktopSystemCursorService@@UEAA@XZ @ 0x1800FD678 (--1DesktopSystemCursorService@@UEAA@XZ.c)
 *     _SystemCursorServiceBase::InitializeBase_::_1_::dtor$0 @ 0x1801D7F64 (_SystemCursorServiceBase--InitializeBase_--_1_--dtor$0.c)
 * Callees:
 *     ??R?$default_delete@VWindowsCompositionGlobals@SystemCursors@@@std@@QEBAXPEAVWindowsCompositionGlobals@SystemCursors@@@Z @ 0x1800FAC38 (--R-$default_delete@VWindowsCompositionGlobals@SystemCursors@@@std@@QEBAXPEAVWindowsCompositionG.c)
 */

__int64 __fastcall std::unique_ptr<SystemCursors::WindowsCompositionGlobals>::~unique_ptr<SystemCursors::WindowsCompositionGlobals>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<SystemCursors::WindowsCompositionGlobals>::operator()(a1, *a1);
  return result;
}
