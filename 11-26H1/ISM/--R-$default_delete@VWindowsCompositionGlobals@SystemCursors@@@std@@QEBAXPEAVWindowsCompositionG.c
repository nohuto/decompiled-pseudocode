/*
 * XREFs of ??R?$default_delete@VWindowsCompositionGlobals@SystemCursors@@@std@@QEBAXPEAVWindowsCompositionGlobals@SystemCursors@@@Z @ 0x1800FAC38
 * Callers:
 *     ?InitializeBase@SystemCursorServiceBase@@IEAAJXZ @ 0x1800922A8 (-InitializeBase@SystemCursorServiceBase@@IEAAJXZ.c)
 *     ??1?$unique_ptr@VWindowsCompositionGlobals@SystemCursors@@U?$default_delete@VWindowsCompositionGlobals@SystemCursors@@@std@@@std@@QEAA@XZ @ 0x1800995EC (--1-$unique_ptr@VWindowsCompositionGlobals@SystemCursors@@U-$default_delete@VWindowsCompositionG.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800244C4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::default_delete<SystemCursors::WindowsCompositionGlobals>::operator()(__int64 a1, __int64 *a2)
{
  if ( a2 )
  {
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a2);
    operator delete(a2, (const struct std::nothrow_t *)8);
  }
}
