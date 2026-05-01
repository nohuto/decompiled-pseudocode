/*
 * XREFs of ??_GCFallbackWindow@@UEAAPEAXI@Z @ 0x1802E9F24
 * Callers:
 *     ??_ECFallbackWindow@@WBI@EAAPEAXI@Z @ 0x1802E9ED0 (--_ECFallbackWindow@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CFallbackWindow@@UEAA@XZ @ 0x1802E9E88 (--1CFallbackWindow@@UEAA@XZ.c)
 */

CFallbackWindow *__fastcall CFallbackWindow::`scalar deleting destructor'(CFallbackWindow *this, char a2)
{
  CFallbackWindow::~CFallbackWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
