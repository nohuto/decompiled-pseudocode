/*
 * XREFs of ??_GResultException@wil@@UEAAPEAXI@Z @ 0x180090C00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ??1ResultException@wil@@UEAA@XZ @ 0x1800909A0 (--1ResultException@wil@@UEAA@XZ.c)
 */

volatile signed __int32 **__fastcall wil::ResultException::`scalar deleting destructor'(
        volatile signed __int32 **this,
        char a2)
{
  wil::ResultException::~ResultException(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC8);
  return this;
}
