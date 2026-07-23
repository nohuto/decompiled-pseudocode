/*
 * XREFs of RtlIsMultiSessionSku @ 0x140A968C0
 * Callers:
 *     GetGlobalizationUserModelType @ 0x1404FBFA4 (GetGlobalizationUserModelType.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407E44EC (PopAdaptiveStandbyInitialize.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140809A30 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x14083C8F0 (NtSetSystemTime.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140895F40 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     RtlCapabilityCheck @ 0x140A96450 (RtlCapabilityCheck.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x140A96858 (SepIsImpersonationAllowedDueToCapability.c)
 *     NtSetDefaultLocale @ 0x140B10920 (NtSetDefaultLocale.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return BYTE4(PsGetCurrentServerSiloGlobals()[80].Blink[1].Blink);
  else
    return MEMORY[0xFFFFF780000002F1] & 1;
}
