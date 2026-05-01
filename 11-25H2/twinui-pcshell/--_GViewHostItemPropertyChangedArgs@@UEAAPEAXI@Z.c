/*
 * XREFs of ??_GViewHostItemPropertyChangedArgs@@UEAAPEAXI@Z @ 0x1803F7A80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ViewHostItemPropertyChangedArgs@@UEAA@XZ @ 0x1803F76B0 (--1ViewHostItemPropertyChangedArgs@@UEAA@XZ.c)
 */

HSTRING *__fastcall ViewHostItemPropertyChangedArgs::`scalar deleting destructor'(HSTRING *this, char a2)
{
  ViewHostItemPropertyChangedArgs::~ViewHostItemPropertyChangedArgs(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
