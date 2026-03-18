/*
 * XREFs of _PnpContainerRaiseDevicesChangeEvent @ 0x140A7E738
 * Callers:
 *     _PnpObjectRaiseDevicesChangeEvent @ 0x140AAC538 (_PnpObjectRaiseDevicesChangeEvent.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpContainerRaiseDevicesChangeEvent(__int64 a1)
{
  DEVPROPKEY **v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  guard_dispatch_icall_no_overrides(a1);
  v2 = off_14000C0B8;
  v3 = 3LL;
  do
  {
    result = guard_dispatch_icall_no_overrides(a1);
    ++v2;
    --v3;
  }
  while ( v3 );
  return result;
}
