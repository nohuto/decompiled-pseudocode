/*
 * XREFs of ??_GCVirtualDesktopCollection@@UEAAPEAXI@Z @ 0x18054E440
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVirtualDesktopCollection@@UEAA@XZ @ 0x18054E3E0 (--1CVirtualDesktopCollection@@UEAA@XZ.c)
 */

CVirtualDesktopCollection *__fastcall CVirtualDesktopCollection::`scalar deleting destructor'(
        CVirtualDesktopCollection *this,
        char a2)
{
  CVirtualDesktopCollection::~CVirtualDesktopCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}
