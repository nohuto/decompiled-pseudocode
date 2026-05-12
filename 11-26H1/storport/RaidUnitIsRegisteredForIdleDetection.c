/*
 * XREFs of RaidUnitIsRegisteredForIdleDetection @ 0x140078484
 * Callers:
 *     RaidStartIoPacket @ 0x140005F70 (RaidStartIoPacket.c)
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 *     RaUnitAddToPendingList @ 0x140033130 (RaUnitAddToPendingList.c)
 *     RaidUnitPendingDpcRoutine @ 0x140034050 (RaidUnitPendingDpcRoutine.c)
 *     RaAcquirePowerRefWorkRoutine @ 0x14004CC60 (RaAcquirePowerRefWorkRoutine.c)
 *     StorpUnitInitializePoFxPower @ 0x14005A524 (StorpUnitInitializePoFxPower.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x14007ECF0 (RaUnitDeregisterFromIdleDetection.c)
 *     RaUnitPowerCapIoctl @ 0x14009D9A8 (RaUnitPowerCapIoctl.c)
 *     RaUnitRegisterForIdleDetection @ 0x1401B7450 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidUnitIsRegisteredForIdleDetection(__int64 a1)
{
  if ( FeatureFixKcsanRacyAccessV2 )
    return (*(_DWORD *)(a1 + 504) & 0x8000) != 0;
  else
    return *(_BYTE *)(a1 + 505) >> 7;
}
