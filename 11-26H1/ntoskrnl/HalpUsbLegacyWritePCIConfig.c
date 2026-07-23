/*
 * XREFs of HalpUsbLegacyWritePCIConfig @ 0x14059CB20
 * Callers:
 *     HalpUsbLegacyStopUhciInterrupt @ 0x14059CE3C (HalpUsbLegacyStopUhciInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpUsbLegacyWritePCIConfig(__int64 a1, unsigned int a2, unsigned int a3)
{
  return guard_dispatch_icall_no_overrides(a2, a3);
}
