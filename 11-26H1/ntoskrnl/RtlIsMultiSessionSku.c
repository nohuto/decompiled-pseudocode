/*
 * XREFs of RtlIsMultiSessionSku @ 0x140A91D70
 * Callers:
 *     GetGlobalizationUserModelType @ 0x1405026D4 (GetGlobalizationUserModelType.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407DFAF8 (PopAdaptiveStandbyInitialize.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140803F90 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x1408366B0 (NtSetSystemTime.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14088FB44 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     RtlCapabilityCheck @ 0x140A91900 (RtlCapabilityCheck.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x140A91D08 (SepIsImpersonationAllowedDueToCapability.c)
 *     NtSetDefaultLocale @ 0x140B0F0F0 (NtSetDefaultLocale.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 */

char RtlIsMultiSessionSku()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return BYTE4(PsGetCurrentServerSiloGlobals()[80].Blink[1].Blink);
  else
    return MEMORY[0xFFFFF780000002F1] & 1;
}
