/*
 * XREFs of PspGetNextSilo @ 0x140959E18
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x1404887E0 (EtwpAdjustTraceBuffers.c)
 *     PsRootSiloInformation @ 0x1407753B8 (PsRootSiloInformation.c)
 *     PsFreeSiloContextSlot @ 0x1407EE620 (PsFreeSiloContextSlot.c)
 *     PsShutdownSystem @ 0x1407FA284 (PsShutdownSystem.c)
 *     PsStartSiloMonitor @ 0x1407FBC40 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1407FBE80 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216838 (PsIsServerSilo.c)
 *     PspGetNextJob @ 0x14095A1E0 (PspGetNextJob.c)
 */

__int64 __fastcall PspGetNextSilo(void *a1, char a2)
{
  __int64 result; // rax
  void *v4; // r8

  while ( 1 )
  {
    result = PspGetNextJob(a1);
    v4 = (void *)result;
    if ( !result )
      break;
    if ( (*(_DWORD *)(result + 1552) & 0x40000000) != 0 && (!a2 || PsIsServerSilo(result)) )
      return (__int64)v4;
    a1 = v4;
  }
  return result;
}
