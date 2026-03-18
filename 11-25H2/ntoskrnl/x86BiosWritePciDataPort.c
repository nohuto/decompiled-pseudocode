/*
 * XREFs of x86BiosWritePciDataPort @ 0x140544020
 * Callers:
 *     x86BiosWriteIoSpace @ 0x14046A3B0 (x86BiosWriteIoSpace.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 x86BiosWritePciDataPort()
{
  return guard_dispatch_icall_no_overrides(BYTE2(XmPCIConfigAddress));
}
