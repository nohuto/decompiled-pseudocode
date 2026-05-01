/*
 * XREFs of ??_GCVirtualDesktopContainerElement@@UEAAPEAXI@Z @ 0x1804CACF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVirtualDesktopContainerElement@@UEAA@XZ @ 0x1804CAB84 (--1CVirtualDesktopContainerElement@@UEAA@XZ.c)
 */

CVirtualDesktopContainerElement *__fastcall CVirtualDesktopContainerElement::`scalar deleting destructor'(
        CVirtualDesktopContainerElement *this,
        char a2)
{
  CVirtualDesktopContainerElement::~CVirtualDesktopContainerElement(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x368);
  return this;
}
