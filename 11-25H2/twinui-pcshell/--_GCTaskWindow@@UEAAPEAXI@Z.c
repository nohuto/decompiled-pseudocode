/*
 * XREFs of ??_GCTaskWindow@@UEAAPEAXI@Z @ 0x18023C760
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTaskWindow@@UEAA@XZ @ 0x1802C46E4 (--1CTaskWindow@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CTaskWindow *__fastcall CTaskWindow::`scalar deleting destructor'(CTaskWindow *this, char a2)
{
  CTaskWindow::~CTaskWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x98);
  return this;
}
