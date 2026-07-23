/*
 * XREFs of PopThermalUpdatePassiveTimeTracking @ 0x140B31158
 * Callers:
 *     PopThermalSxEntry @ 0x14042408C (PopThermalSxEntry.c)
 *     PopCoolingTelemetryWorker @ 0x1404244F8 (PopCoolingTelemetryWorker.c)
 *     PopThermalTelemetryWorker @ 0x1404245E0 (PopThermalTelemetryWorker.c)
 *     PopCoolingSxTransition @ 0x140424E88 (PopCoolingSxTransition.c)
 *     PopDeactiveThermalRequest @ 0x1407CEB98 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1407CEE54 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x1407D5000 (PopThermalZoneRemove.c)
 *     PopThermalWorker @ 0x140AC58C0 (PopThermalWorker.c)
 *     PoSetThermalPassiveCooling @ 0x140B310B0 (PoSetThermalPassiveCooling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopThermalUpdatePassiveTimeTracking(__int64 a1, unsigned __int8 a2)
{
  int v2; // r9d
  __int64 v3; // rdx
  __int64 result; // rax

  if ( !*(_BYTE *)a1 )
  {
    v2 = 21;
    do
    {
      if ( a2 >= PopThermalTrackingThresholds[v2 - 1] )
        break;
      --v2;
    }
    while ( v2 );
    v3 = MEMORY[0xFFFFF78000000008];
    result = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8LL * (unsigned int)(v2 - 1) + 24) += result;
    *(_QWORD *)(a1 + 8) = v3;
  }
  return result;
}
