/*
 * XREFs of ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x180062870
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x1800628AC (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CSaDeviceProxy *__fastcall CSaDeviceProxy::`vector deleting destructor'(CSaDeviceProxy *this, char a2)
{
  CSaDeviceProxy::~CSaDeviceProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}
