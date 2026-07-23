/*
 * XREFs of IommupHvUnmapDevice @ 0x1405A1180
 * Callers:
 *     IommupMapDeviceInternal @ 0x14059F814 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x14059FB94 (IommupUnmapDeviceInternal.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvUnmapDevice(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax

  if ( (unsigned int)guard_dispatch_icall_no_overrides(BugCheckParameter2, a2) == 3473497 )
    KeBugCheckEx(0x159u, 0x3000uLL, BugCheckParameter2, 0LL, 0LL);
  result = guard_dispatch_icall_no_overrides(BugCheckParameter2, v3);
  if ( HalpHvCpuManager )
    return guard_dispatch_icall_no_overrides(BugCheckParameter2, 5LL);
  return result;
}
