/*
 * XREFs of ??_EViewRectProvider@KeyboardHosting@@UEAAPEAXI@Z @ 0x18021FC20
 * Callers:
 *     <none>
 * Callees:
 *     ??1ViewRectProvider@KeyboardHosting@@UEAA@XZ @ 0x1802CAA60 (--1ViewRectProvider@KeyboardHosting@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

KeyboardHosting::ViewRectProvider *__fastcall KeyboardHosting::ViewRectProvider::`vector deleting destructor'(
        KeyboardHosting::ViewRectProvider *this,
        char a2)
{
  KeyboardHosting::ViewRectProvider::~ViewRectProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x118);
  return this;
}
