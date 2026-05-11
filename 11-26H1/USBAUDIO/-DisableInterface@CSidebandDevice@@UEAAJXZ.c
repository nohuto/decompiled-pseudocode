/*
 * XREFs of ?DisableInterface@CSidebandDevice@@UEAAJXZ @ 0x140010220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSidebandDevice::DisableInterface(struct _UNICODE_STRING *this)
{
  unsigned int v1; // ebx
  struct _UNICODE_STRING *v2; // rdi

  v1 = 0;
  v2 = this + 3;
  if ( this[3].Length )
  {
    v1 = IoSetDeviceInterfaceState(this + 3, 0);
    RtlFreeUnicodeString(v2);
  }
  return v1;
}
