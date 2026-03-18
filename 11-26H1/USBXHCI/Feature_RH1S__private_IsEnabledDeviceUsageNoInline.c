/*
 * XREFs of Feature_RH1S__private_IsEnabledDeviceUsageNoInline @ 0x140044D98
 * Callers:
 *     Controller_IdleTimeoutUpdateWorker @ 0x140039F30 (Controller_IdleTimeoutUpdateWorker.c)
 *     Controller_UpdateIdleTimeoutOnRootHubPDOD0Entry @ 0x14003A60C (Controller_UpdateIdleTimeoutOnRootHubPDOD0Entry.c)
 *     Controller_PopulateDeviceFlags @ 0x140075F9C (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     Feature_RH1S__private_IsEnabledFallback @ 0x140044DD4 (Feature_RH1S__private_IsEnabledFallback.c)
 */

__int64 Feature_RH1S__private_IsEnabledDeviceUsageNoInline()
{
  if ( (WPP_MAIN_CB.SectorSize & 0x10) != 0 )
    return WPP_MAIN_CB.SectorSize & 1;
  else
    return Feature_RH1S__private_IsEnabledFallback(*(unsigned int *)&WPP_MAIN_CB.SectorSize, 3LL);
}
