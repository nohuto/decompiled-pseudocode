/*
 * XREFs of PopThermalUpdatePassiveTimeTracking @ 0x140B2F378
 * Callers:
 *     PopThermalSxEntry @ 0x1404351B4 (PopThermalSxEntry.c)
 *     PopCoolingTelemetryWorker @ 0x140435360 (PopCoolingTelemetryWorker.c)
 *     PopThermalTelemetryWorker @ 0x140435450 (PopThermalTelemetryWorker.c)
 *     PopCoolingSxTransition @ 0x1404359C0 (PopCoolingSxTransition.c)
 *     PopDeactiveThermalRequest @ 0x1407CBAF8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1407CBDB4 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x1407D1F60 (PopThermalZoneRemove.c)
 *     PopThermalWorker @ 0x140AC3C50 (PopThermalWorker.c)
 *     PoSetThermalPassiveCooling @ 0x140B2F2D0 (PoSetThermalPassiveCooling.c)
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
      if ( a2 >= byte_140F10E80[v2 - 1] )
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
