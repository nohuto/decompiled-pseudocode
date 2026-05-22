/*
 * XREFs of ??_EAsyncPVPrincipal@@UEAAPEAXI@Z @ 0x180176DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AsyncPVPrincipal@@UEAA@XZ @ 0x180176D24 (--1AsyncPVPrincipal@@UEAA@XZ.c)
 */

AsyncPVPrincipal *__fastcall AsyncPVPrincipal::`vector deleting destructor'(
        AsyncPVPrincipal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bl

  v4 = a2;
  AsyncPVPrincipal::~AsyncPVPrincipal(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC0);
  return this;
}
