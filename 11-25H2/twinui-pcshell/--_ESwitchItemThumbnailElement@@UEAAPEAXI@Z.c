/*
 * XREFs of ??_ESwitchItemThumbnailElement@@UEAAPEAXI@Z @ 0x1804ADE40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SwitchItemThumbnailElement@@UEAA@XZ @ 0x1804ADBF0 (--1SwitchItemThumbnailElement@@UEAA@XZ.c)
 */

SwitchItemThumbnailElement *__fastcall SwitchItemThumbnailElement::`vector deleting destructor'(
        SwitchItemThumbnailElement *this,
        char a2)
{
  SwitchItemThumbnailElement::~SwitchItemThumbnailElement(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x270);
  return this;
}
