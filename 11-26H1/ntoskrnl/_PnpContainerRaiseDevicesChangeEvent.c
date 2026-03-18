/*
 * XREFs of _PnpContainerRaiseDevicesChangeEvent @ 0x140B2539C
 * Callers:
 *     _PnpObjectRaiseDevicesChangeEvent @ 0x140B25320 (_PnpObjectRaiseDevicesChangeEvent.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpContainerRaiseDevicesChangeEvent(__int64 a1, __int64 a2)
{
  DEVPROPKEY **v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax

  guard_dispatch_icall_no_overrides(a1, a2);
  v4 = off_14000F360;
  v5 = 3LL;
  do
  {
    result = guard_dispatch_icall_no_overrides(a1, a2);
    ++v4;
    --v5;
  }
  while ( v5 );
  return result;
}
