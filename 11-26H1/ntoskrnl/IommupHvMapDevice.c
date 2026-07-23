/*
 * XREFs of IommupHvMapDevice @ 0x1405A0F9C
 * Callers:
 *     IommupMapDeviceInternal @ 0x14059F814 (IommupMapDeviceInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvMapDevice(__int64 a1, __int64 a2, unsigned int *a3)
{
  char v3; // si
  int v6; // ebx
  __int64 v7; // rdx

  v3 = 0;
  if ( HalpHvCpuManager )
  {
    v6 = guard_dispatch_icall_no_overrides(a1, 14LL);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v3 = 1;
  }
  v6 = guard_dispatch_icall_no_overrides(a1, 0LL);
  if ( v6 >= 0 )
  {
    v6 = guard_dispatch_icall_no_overrides(a1, *a3);
    if ( v6 >= 0 )
      return (unsigned int)v6;
    guard_dispatch_icall_no_overrides(a1, v7);
  }
  if ( v3 )
    guard_dispatch_icall_no_overrides(a1, 5LL);
  return (unsigned int)v6;
}
