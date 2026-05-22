/*
 * XREFs of ??1?$unique_ptr@VHardwareCursorVisual@SystemCursors@@U?$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@@std@@QEAA@XZ @ 0x1800996CC
 * Callers:
 *     ?Initialize@DesktopSystemCursorService@@QEAAJXZ @ 0x18008DD8C (-Initialize@DesktopSystemCursorService@@QEAAJXZ.c)
 *     ??1SystemCursor2@@QEAA@XZ @ 0x1800FA9CC (--1SystemCursor2@@QEAA@XZ.c)
 *     ?CreateCursorVisual@SystemCursor2@@AEAAJXZ @ 0x1800FB6C8 (-CreateCursorVisual@SystemCursor2@@AEAAJXZ.c)
 *     ??1DesktopSystemCursorService@@UEAA@XZ @ 0x1800FD678 (--1DesktopSystemCursorService@@UEAA@XZ.c)
 * Callees:
 *     ??R?$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@QEBAXPEAVHardwareCursorVisual@SystemCursors@@@Z @ 0x1800FAC08 (--R-$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@QEBAXPEAVHardwareCursorVisual@Sys.c)
 */

__int64 __fastcall std::unique_ptr<SystemCursors::HardwareCursorVisual>::~unique_ptr<SystemCursors::HardwareCursorVisual>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<SystemCursors::HardwareCursorVisual>::operator()();
  return result;
}
