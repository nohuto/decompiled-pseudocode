/*
 * XREFs of KeFindFirstSetRightAffinityEx @ 0x14048A580
 * Callers:
 *     PpmCheckContinueExecution @ 0x140254D58 (PpmCheckContinueExecution.c)
 *     PpmParkComputeUnparkMask @ 0x14025E0F0 (PpmParkComputeUnparkMask.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetRightAffinityEx(unsigned __int16 *a1)
{
  __int16 i; // dx
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // rax

  for ( i = 0; i < (int)*a1; ++i )
  {
    v2 = *(_QWORD *)&a1[4 * i + 4];
    if ( v2 )
    {
      _BitScanForward64(&v3, v2);
      return *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
             + (unsigned int)(v3 + (i << 6)));
    }
  }
  return 0xFFFFFFFFLL;
}
