/*
 * XREFs of PpmCheckRecordAllUtility @ 0x140211FC0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     PpmPerfRecordUtility @ 0x1402120E0 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x140416820 (PpmParkRecordNodeStatistics.c)
 */

__int64 PpmCheckRecordAllUtility()
{
  unsigned __int64 v0; // rdi
  unsigned __int16 i; // bx
  unsigned __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rcx
  PBOOLEAN j; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int k; // edi

  v0 = PpmCheckRegistered.Bitmap[0];
  for ( i = 0; ; v0 = PpmCheckRegistered.Bitmap[i] )
  {
    while ( v0 )
    {
      _BitScanForward64(&v2, v0);
      v0 &= ~(1LL << v2);
      v3 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * i].Flink
           + (unsigned __int8)v2);
      if ( (unsigned int)v3 >= KeQueryActiveProcessorCountEx(0xFFFFu) )
        v4 = 0LL;
      else
        v4 = KiProcessorBlock[v3];
      PpmPerfRecordUtility(v4 + 35264);
    }
    if ( ++i >= (unsigned int)PpmCheckRegistered.Count )
      break;
  }
  for ( j = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
        j != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2);
        j = *(PBOOLEAN *)j )
  {
    for ( k = 0; k < *((_DWORD *)j + 74); ++k )
    {
      v6 = 1224LL * k;
      v7 = *((_QWORD *)j + 39);
      if ( *(_DWORD *)(v6 + v7 + 16) == 1 )
        PpmPerfRecordUtility(*(_QWORD *)(v6 + v7));
    }
  }
  return PpmParkRecordNodeStatistics();
}
