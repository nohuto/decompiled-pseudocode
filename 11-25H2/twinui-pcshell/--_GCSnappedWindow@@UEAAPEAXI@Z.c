/*
 * XREFs of ??_GCSnappedWindow@@UEAAPEAXI@Z @ 0x1801F91E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSnappedWindow@@UEAA@XZ @ 0x1801F921C (--1CSnappedWindow@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CSnappedWindow *__fastcall CSnappedWindow::`scalar deleting destructor'(CSnappedWindow *this, char a2)
{
  CSnappedWindow::~CSnappedWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
