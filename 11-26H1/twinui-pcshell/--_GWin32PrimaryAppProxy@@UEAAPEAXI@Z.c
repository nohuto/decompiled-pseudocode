/*
 * XREFs of ??_GWin32PrimaryAppProxy@@UEAAPEAXI@Z @ 0x1804EFE50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1Win32PrimaryAppProxy@@UEAA@XZ @ 0x1804EFB84 (--1Win32PrimaryAppProxy@@UEAA@XZ.c)
 */

Win32PrimaryAppProxy *__fastcall Win32PrimaryAppProxy::`scalar deleting destructor'(
        Win32PrimaryAppProxy *this,
        char a2)
{
  Win32PrimaryAppProxy::~Win32PrimaryAppProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
