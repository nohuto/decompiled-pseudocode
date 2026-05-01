/*
 * XREFs of ??_ECVirtualDesktopBarElement@@UEAAPEAXI@Z @ 0x1804B9720
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVirtualDesktopBarElement@@UEAA@XZ @ 0x1804B955C (--1CVirtualDesktopBarElement@@UEAA@XZ.c)
 */

CVirtualDesktopBarElement *__fastcall CVirtualDesktopBarElement::`vector deleting destructor'(
        CVirtualDesktopBarElement *this,
        char a2)
{
  CVirtualDesktopBarElement::~CVirtualDesktopBarElement(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x310);
  return this;
}
