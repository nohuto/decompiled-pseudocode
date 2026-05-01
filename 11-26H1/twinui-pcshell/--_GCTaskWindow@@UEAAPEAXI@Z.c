/*
 * XREFs of ??_GCTaskWindow@@UEAAPEAXI@Z @ 0x18022E8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTaskWindow@@UEAA@XZ @ 0x1802BB634 (--1CTaskWindow@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CTaskWindow *__fastcall CTaskWindow::`scalar deleting destructor'(CTaskWindow *this, char a2)
{
  CTaskWindow::~CTaskWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x98);
  return this;
}
