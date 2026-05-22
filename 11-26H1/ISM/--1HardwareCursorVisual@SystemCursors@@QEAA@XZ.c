/*
 * XREFs of ??1HardwareCursorVisual@SystemCursors@@QEAA@XZ @ 0x1800FA97C
 * Callers:
 *     ??R?$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@QEBAXPEAVHardwareCursorVisual@SystemCursors@@@Z @ 0x1800FAC08 (--R-$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@QEBAXPEAVHardwareCursorVisual@Sys.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800244C4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall SystemCursors::HardwareCursorVisual::~HardwareCursorVisual(SystemCursors::HardwareCursorVisual *this)
{
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 5);
  SystemCursors::CompositionVisual::~CompositionVisual(this);
}
