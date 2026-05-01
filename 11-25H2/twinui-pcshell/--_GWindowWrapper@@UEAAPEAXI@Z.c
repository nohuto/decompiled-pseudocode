/*
 * XREFs of ??_GWindowWrapper@@UEAAPEAXI@Z @ 0x180422FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1WindowWrapper@@UEAA@XZ @ 0x180422A54 (--1WindowWrapper@@UEAA@XZ.c)
 */

WindowWrapper *__fastcall WindowWrapper::`scalar deleting destructor'(WindowWrapper *this, char a2)
{
  WindowWrapper::~WindowWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2D8);
  return this;
}
