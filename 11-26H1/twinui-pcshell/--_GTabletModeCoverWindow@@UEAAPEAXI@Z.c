/*
 * XREFs of ??_GTabletModeCoverWindow@@UEAAPEAXI@Z @ 0x180211380
 * Callers:
 *     <none>
 * Callees:
 *     ??1TabletModeCoverWindow@@UEAA@XZ @ 0x1802A9188 (--1TabletModeCoverWindow@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

TabletModeCoverWindow *__fastcall TabletModeCoverWindow::`scalar deleting destructor'(
        TabletModeCoverWindow *this,
        char a2)
{
  TabletModeCoverWindow::~TabletModeCoverWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE0);
  return this;
}
