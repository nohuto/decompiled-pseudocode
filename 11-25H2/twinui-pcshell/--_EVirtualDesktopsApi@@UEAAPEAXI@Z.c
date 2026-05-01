/*
 * XREFs of ??_EVirtualDesktopsApi@@UEAAPEAXI@Z @ 0x180543090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopsApi@@UEAA@XZ @ 0x180543034 (--1VirtualDesktopsApi@@UEAA@XZ.c)
 */

VirtualDesktopsApi *__fastcall VirtualDesktopsApi::`vector deleting destructor'(VirtualDesktopsApi *this, char a2)
{
  VirtualDesktopsApi::~VirtualDesktopsApi(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
