/*
 * XREFs of ??_EViewRectProvider@KeyboardHosting@@UEAAPEAXI@Z @ 0x180211340
 * Callers:
 *     <none>
 * Callees:
 *     ??1ViewRectProvider@KeyboardHosting@@UEAA@XZ @ 0x1802C2168 (--1ViewRectProvider@KeyboardHosting@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

KeyboardHosting::ViewRectProvider *__fastcall KeyboardHosting::ViewRectProvider::`vector deleting destructor'(
        KeyboardHosting::ViewRectProvider *this,
        char a2)
{
  KeyboardHosting::ViewRectProvider::~ViewRectProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x310);
  return this;
}
