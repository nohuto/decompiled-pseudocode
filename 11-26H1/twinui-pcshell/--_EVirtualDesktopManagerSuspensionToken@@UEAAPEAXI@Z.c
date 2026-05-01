/*
 * XREFs of ??_EVirtualDesktopManagerSuspensionToken@@UEAAPEAXI@Z @ 0x1805522E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopManagerSuspensionToken@@UEAA@XZ @ 0x180551C3C (--1VirtualDesktopManagerSuspensionToken@@UEAA@XZ.c)
 */

VirtualDesktopManagerSuspensionToken *__fastcall VirtualDesktopManagerSuspensionToken::`vector deleting destructor'(
        VirtualDesktopManagerSuspensionToken *this,
        char a2)
{
  VirtualDesktopManagerSuspensionToken::~VirtualDesktopManagerSuspensionToken(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
