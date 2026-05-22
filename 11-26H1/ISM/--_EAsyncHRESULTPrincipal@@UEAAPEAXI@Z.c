/*
 * XREFs of ??_EAsyncHRESULTPrincipal@@UEAAPEAXI@Z @ 0x180177DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AsyncHRESULTPrincipal@@UEAA@XZ @ 0x180177D4C (--1AsyncHRESULTPrincipal@@UEAA@XZ.c)
 */

AsyncHRESULTPrincipal *__fastcall AsyncHRESULTPrincipal::`vector deleting destructor'(
        AsyncHRESULTPrincipal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bl

  v4 = a2;
  AsyncHRESULTPrincipal::~AsyncHRESULTPrincipal(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
