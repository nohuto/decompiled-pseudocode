/*
 * XREFs of ??1DesktopSystemCursorService@@UEAA@XZ @ 0x1800FD678
 * Callers:
 *     ??_EDesktopSystemCursorService@@UEAAPEAXI@Z @ 0x1800FD6D0 (--_EDesktopSystemCursorService@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_ptr@VHardwareCursorVisual@SystemCursors@@U?$default_delete@VHardwareCursorVisual@SystemCursors@@@std@@@std@@QEAA@XZ @ 0x1800996CC (--1-$unique_ptr@VHardwareCursorVisual@SystemCursors@@U-$default_delete@VHardwareCursorVisual@Sys.c)
 */

void __fastcall DesktopSystemCursorService::~DesktopSystemCursorService(DesktopSystemCursorService *this)
{
  std::unique_ptr<SystemCursors::HardwareCursorVisual>::~unique_ptr<SystemCursors::HardwareCursorVisual>((_QWORD *)this + 3);
  *(_QWORD *)this = &SystemCursorServiceBase::`vftable';
  std::unique_ptr<SystemCursors::WindowsCompositionGlobals>::~unique_ptr<SystemCursors::WindowsCompositionGlobals>((_QWORD *)this + 2);
}
