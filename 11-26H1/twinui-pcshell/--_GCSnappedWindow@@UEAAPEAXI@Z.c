/*
 * XREFs of ??_GCSnappedWindow@@UEAAPEAXI@Z @ 0x1801EF270
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSnappedWindow@@UEAA@XZ @ 0x1801EF2AC (--1CSnappedWindow@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CSnappedWindow *__fastcall CSnappedWindow::`scalar deleting destructor'(CSnappedWindow *this, char a2)
{
  CSnappedWindow::~CSnappedWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
