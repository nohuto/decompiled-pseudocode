/*
 * XREFs of PspGetNextSilo @ 0x1409FF6D8
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x140482320 (EtwpAdjustTraceBuffers.c)
 *     PsRootSiloInformation @ 0x1407783B8 (PsRootSiloInformation.c)
 *     PsFreeSiloContextSlot @ 0x1407F4180 (PsFreeSiloContextSlot.c)
 *     PsShutdownSystem @ 0x1407FFCB4 (PsShutdownSystem.c)
 *     PsStartSiloMonitor @ 0x140801670 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1408018B0 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PsIsServerSilo @ 0x140216B68 (PsIsServerSilo.c)
 *     PspGetNextJob @ 0x1409FFAA0 (PspGetNextJob.c)
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
