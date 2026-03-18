/*
 * XREFs of HUBMISC_GetActivityIdIrp @ 0x1400304F8
 * Callers:
 *     HUBFDO_IoctlCyclePort @ 0x14007CB88 (HUBFDO_IoctlCyclePort.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x14007D044 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x14007D60C (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x14007D7E4 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x14007DA20 (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x14007DCD4 (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x14007DF08 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x14007E274 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x14007E6C0 (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetNodeConnectionSuperSpeedPlusInformation @ 0x14007EAC8 (HUBFDO_IoctlGetNodeConnectionSuperSpeedPlusInformation.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x14007EFC0 (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x14007F1A8 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlResetHub @ 0x14007F748 (HUBFDO_IoctlResetHub.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBMISC_GetActivityIdIrp(__int64 a1, __int64 a2)
{
  if ( g_IoGetActivityIdIrp )
    return g_IoGetActivityIdIrp(a1, a2);
  else
    return 3221226021LL;
}
