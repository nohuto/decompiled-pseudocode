/*
 * XREFs of HalpUsbLegacyReadPCIConfig @ 0x14059A364
 * Callers:
 *     HalpUsbLegacyScanBusForHandoff @ 0x14059A438 (HalpUsbLegacyScanBusForHandoff.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x14059A588 (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpUsbLegacyStopUhciInterrupt @ 0x14059A6BC (HalpUsbLegacyStopUhciInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpUsbLegacyReadPCIConfig(__int64 a1, unsigned int a2, unsigned int a3)
{
  return guard_dispatch_icall_no_overrides(a2, a3);
}
