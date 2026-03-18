/*
 * XREFs of WheapPrmInvokeHandler @ 0x14065263C
 * Callers:
 *     WheapPrmTranslateDimmAddressIntel @ 0x140652680 (WheapPrmTranslateDimmAddressIntel.c)
 *     WheapPrmTranslatePhysicalAddressIntel @ 0x1406528C8 (WheapPrmTranslatePhysicalAddressIntel.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 WheapPrmInvokeHandler()
{
  return (unsigned int)guard_dispatch_icall_no_overrides(&INTEL_ADDRESS_TRANSLATION_PRM_HANDLER_GUID);
}
