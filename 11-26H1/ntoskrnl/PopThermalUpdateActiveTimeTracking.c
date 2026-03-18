/*
 * XREFs of PopThermalUpdateActiveTimeTracking @ 0x140B41620
 * Callers:
 *     PopThermalSxEntry @ 0x1404351B4 (PopThermalSxEntry.c)
 *     PopCoolingTelemetryWorker @ 0x140435360 (PopCoolingTelemetryWorker.c)
 *     PopThermalTelemetryWorker @ 0x140435450 (PopThermalTelemetryWorker.c)
 *     PopCoolingSxTransition @ 0x1404359C0 (PopCoolingSxTransition.c)
 *     PoSetThermalActiveCooling @ 0x1407CB6B0 (PoSetThermalActiveCooling.c)
 *     PopDeactiveThermalRequest @ 0x1407CBAF8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1407CBDB4 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x1407D1F60 (PopThermalZoneRemove.c)
 *     PopThermalWorker @ 0x140AC3C50 (PopThermalWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopThermalUpdateActiveTimeTracking(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 result; // rax

  if ( !*(_BYTE *)a1 )
  {
    a2 = (unsigned __int8)a2;
    v2 = MEMORY[0xFFFFF78000000008];
    v3 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 16);
    while ( 1 )
    {
      result = *(unsigned __int8 *)(a1 + 1);
      if ( (unsigned int)a2 >= (unsigned int)result )
        break;
      *(_QWORD *)(a1 + 8 * a2 + 360) += v3;
      a2 = (unsigned int)(a2 + 1);
    }
    *(_QWORD *)(a1 + 520) += v3;
    *(_QWORD *)(a1 + 16) = v2;
  }
  return result;
}
