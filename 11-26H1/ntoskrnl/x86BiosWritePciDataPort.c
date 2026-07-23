/*
 * XREFs of x86BiosWritePciDataPort @ 0x140583590
 * Callers:
 *     x86BiosWriteIoSpace @ 0x1404A16E0 (x86BiosWriteIoSpace.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 x86BiosWritePciDataPort()
{
  return guard_dispatch_icall_no_overrides(
           BYTE2(XmPCIConfigAddress),
           (XmPCIConfigAddress & 0x700 | ((unsigned int)XmPCIConfigAddress >> 8) & 0xF8) >> 3);
}
