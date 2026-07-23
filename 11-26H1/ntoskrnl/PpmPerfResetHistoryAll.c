/*
 * XREFs of PpmPerfResetHistoryAll @ 0x140AEBEE4
 * Callers:
 *     PpmCheckReInit @ 0x140AEBB2C (PpmCheckReInit.c)
 * Callees:
 *     PpmPerfResetHistory @ 0x1402127BC (PpmPerfResetHistory.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 */

void PpmPerfResetHistoryAll()
{
  unsigned __int64 v0; // rdi
  __int64 v1; // rbx
  unsigned __int64 v2; // rdx
  __int64 Prcb; // rax
  PBOOLEAN i; // rbx
  unsigned int j; // edi
  __int64 v6; // rcx
  __int64 v7; // rax

  v0 = PpmCheckRegistered.Bitmap[0];
  LOWORD(v1) = 0;
  while ( 1 )
  {
    while ( v0 )
    {
      _BitScanForward64(&v2, v0);
      v0 &= ~(1LL << v2);
      Prcb = KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16
                                                                                                 * (unsigned __int16)v1].Flink
                       + (unsigned int)(unsigned __int8)v2));
      PpmPerfResetHistory(Prcb + 35264);
    }
    v1 = (unsigned __int16)(v1 + 1);
    if ( (unsigned int)v1 >= PpmCheckRegistered.Count )
      break;
    v0 = PpmCheckRegistered.Bitmap[v1];
  }
  for ( i = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
        i != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2);
        i = *(PBOOLEAN *)i )
  {
    for ( j = 0; j < *((_DWORD *)i + 74); ++j )
    {
      v6 = 1224LL * j;
      v7 = *((_QWORD *)i + 39);
      if ( *(_DWORD *)(v6 + v7 + 16) == 1 )
        PpmPerfResetHistory(*(_QWORD *)(v6 + v7));
    }
  }
}
