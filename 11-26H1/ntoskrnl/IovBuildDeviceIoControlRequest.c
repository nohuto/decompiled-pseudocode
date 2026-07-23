/*
 * XREFs of IovBuildDeviceIoControlRequest @ 0x140C26CD0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IovBuildDeviceIoControlRequest(unsigned int a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1, a2);
}
