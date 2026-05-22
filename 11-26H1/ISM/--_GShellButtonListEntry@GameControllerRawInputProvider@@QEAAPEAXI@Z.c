/*
 * XREFs of ??_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z @ 0x18007C824
 * Callers:
 *     ??1?$unique_ptr@UShellButtonListEntry@GameControllerRawInputProvider@@U?$default_delete@UShellButtonListEntry@GameControllerRawInputProvider@@@std@@@std@@QEAA@XZ @ 0x1800996EC (--1-$unique_ptr@UShellButtonListEntry@GameControllerRawInputProvider@@U-$default_delete@UShellBu.c)
 *     ?ShellButtonListEntryDeletionCallback@GameControllerRawInputProvider@@CAJPEAX@Z @ 0x180099BD0 (-ShellButtonListEntryDeletionCallback@GameControllerRawInputProvider@@CAJPEAX@Z.c)
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800CD2E0 (--1GameControllerRawInputProvider@@UEAA@XZ.c)
 * Callees:
 *     ??1CompositionVisual@SystemCursors@@QEAA@XZ @ 0x1800992C4 (--1CompositionVisual@SystemCursors@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

GameControllerRawInputProvider::ShellButtonListEntry *__fastcall GameControllerRawInputProvider::ShellButtonListEntry::`scalar deleting destructor'(
        GameControllerRawInputProvider::ShellButtonListEntry *this)
{
  SystemCursors::CompositionVisual::~CompositionVisual(this);
  operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
