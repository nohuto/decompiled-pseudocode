/*
 * XREFs of ??_EServiceModule@Internal@Windows@@UEAAPEAXI@Z @ 0x1800D7B04
 * Callers:
 *     ??_EServiceModule@Internal@Windows@@WCI@EAAPEAXI@Z @ 0x1800D77B0 (--_EServiceModule@Internal@Windows@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ServiceModule@Internal@Windows@@UEAA@XZ @ 0x1800D76B0 (--1ServiceModule@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::ServiceModule *__fastcall Windows::Internal::ServiceModule::`vector deleting destructor'(
        Windows::Internal::ServiceModule *this,
        __int64 a2,
        const unsigned __int16 *a3,
        bool a4)
{
  char v4; // bl

  v4 = a2;
  Windows::Internal::ServiceModule::~ServiceModule(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
