/*
 * XREFs of KeQuerySystemAvailableCpus @ 0x1405E5860
 * Callers:
 *     PsQuerySystemAvailableCpus @ 0x140615580 (PsQuerySystemAvailableCpus.c)
 *     PsQuerySystemAvailableCpusCount @ 0x1406155C0 (PsQuerySystemAvailableCpusCount.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     RtlCountSetBitsAffinityEx @ 0x140251920 (RtlCountSetBitsAffinityEx.c)
 *     RtlBeginReadTickLock @ 0x140447880 (RtlBeginReadTickLock.c)
 */

__int64 __fastcall KeQuerySystemAvailableCpus(struct _KAFFINITY_EX *a1, _QWORD *a2, unsigned __int64 *a3, _DWORD *a4)
{
  unsigned __int64 CycleTime; // rdi
  unsigned int v5; // ebx
  __int64 result; // rax

  CycleTime = KiSupervisorXStateFeaturesLock.CycleTime;
  v5 = 0;
  if ( a2 && *a2 == KiSupervisorXStateFeaturesLock.CycleTime )
  {
    v5 = -2147483598;
  }
  else
  {
    do
    {
      CycleTime = RtlBeginReadTickLock((__int64 *)&KiSupervisorXStateFeaturesLock.CycleTime);
      if ( a1 )
        RtlpCopyAffinityEx(a1, a1->Size, (struct _KAFFINITY_EX *)&KiSupervisorXStateFeaturesLock.CurrentRunTime);
      if ( a4 )
        *a4 = RtlCountSetBitsAffinityEx((unsigned __int16 *)&KiSupervisorXStateFeaturesLock.CurrentRunTime);
    }
    while ( KiSupervisorXStateFeaturesLock.CycleTime != CycleTime );
  }
  result = v5;
  *a3 = CycleTime;
  return result;
}
