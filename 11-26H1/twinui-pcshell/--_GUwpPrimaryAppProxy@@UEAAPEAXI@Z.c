/*
 * XREFs of ??_GUwpPrimaryAppProxy@@UEAAPEAXI@Z @ 0x1804EFE10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1UwpPrimaryAppProxy@@UEAA@XZ @ 0x1804EFB50 (--1UwpPrimaryAppProxy@@UEAA@XZ.c)
 */

UwpPrimaryAppProxy *__fastcall UwpPrimaryAppProxy::`scalar deleting destructor'(UwpPrimaryAppProxy *this, char a2)
{
  UwpPrimaryAppProxy::~UwpPrimaryAppProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
