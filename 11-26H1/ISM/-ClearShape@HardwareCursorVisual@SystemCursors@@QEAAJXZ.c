/*
 * XREFs of ?ClearShape@HardwareCursorVisual@SystemCursors@@QEAAJXZ @ 0x1800FD9C0
 * Callers:
 *     ?SetShapeForInputType@DesktopSystemCursorService@@UEAAJW4InputType@@PEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x180074250 (-SetShapeForInputType@DesktopSystemCursorService@@UEAAJW4InputType@@PEBU_MIT_CURSOR_MANAGEMENT_M.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SystemCursors::HardwareCursorVisual::ClearShape(SystemCursors::HardwareCursorVisual *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5));
  return 0LL;
}
