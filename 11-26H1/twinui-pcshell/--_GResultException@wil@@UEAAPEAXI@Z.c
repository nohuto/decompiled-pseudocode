/*
 * XREFs of ??_GResultException@wil@@UEAAPEAXI@Z @ 0x1802D50C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ResultException@wil@@UEAA@XZ @ 0x1802D4DB0 (--1ResultException@wil@@UEAA@XZ.c)
 */

volatile signed __int32 **__fastcall wil::ResultException::`scalar deleting destructor'(
        volatile signed __int32 **this,
        char a2)
{
  wil::ResultException::~ResultException(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xD0);
  return this;
}
