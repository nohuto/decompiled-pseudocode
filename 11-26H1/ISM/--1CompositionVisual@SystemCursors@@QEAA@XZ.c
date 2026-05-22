/*
 * XREFs of ??1CompositionVisual@SystemCursors@@QEAA@XZ @ 0x1800992C4
 * Callers:
 *     ??_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z @ 0x18007C824 (--_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z.c)
 *     ??1HardwareCursorVisual@SystemCursors@@QEAA@XZ @ 0x1800FA97C (--1HardwareCursorVisual@SystemCursors@@QEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800244C4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall SystemCursors::CompositionVisual::~CompositionVisual(SystemCursors::CompositionVisual *this)
{
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 3);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 2);
}
