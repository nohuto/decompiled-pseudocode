/*
 * XREFs of ??_GWin32PrimaryAppProxy@@UEAAPEAXI@Z @ 0x1804DD7F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1Win32PrimaryAppProxy@@UEAA@XZ @ 0x1804DD564 (--1Win32PrimaryAppProxy@@UEAA@XZ.c)
 */

void **__fastcall Win32PrimaryAppProxy::`scalar deleting destructor'(void **this, char a2)
{
  Win32PrimaryAppProxy::~Win32PrimaryAppProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
