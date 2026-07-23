/*
 * XREFs of KiCheckKeepAlive @ 0x140453C14
 * Callers:
 *     KeAccumulateTicks @ 0x140221310 (KeAccumulateTicks.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x140453E40 (KeRemoveProcessorAffinityEx.c)
 */

char __fastcall KiCheckKeepAlive(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // si
  unsigned int v4; // ecx
  __int64 v5; // r8
  __int64 v7; // rdx
  wchar_t *v8; // rcx

  v1 = *(unsigned int *)(a1 + 36);
  v2 = 0;
  v4 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v1);
  if ( !KiClockTimerPerCpuTickScheduling )
  {
    v7 = v4 >> 6;
    if ( (unsigned int)v7 >= KiClockCheckPending[0] || ((*(_QWORD *)&KiClockCheckPending[4 * v7 + 4] >> v4) & 1) == 0 )
      return v2;
    if ( !(unsigned int)KeCheckProcessorAffinityEx(KiClockCheckReady, v1) )
    {
LABEL_11:
      KeAddProcessorAffinityEx(KiClockCheckReady, v1);
      return v2;
    }
    KeRemoveProcessorAffinityEx(KiClockCheckReady, (unsigned int)v1);
    v8 = KiClockCheckPending;
LABEL_13:
    KeRemoveProcessorAffinityEx(v8, (unsigned int)v1);
    return 1;
  }
  v5 = v4 >> 6;
  if ( (unsigned int)v5 < KiClockCheckReady[0] && ((*(_QWORD *)&KiClockCheckReady[4 * v5 + 4] >> v4) & 1) != 0 )
  {
    v8 = KiClockCheckReady;
    goto LABEL_13;
  }
  if ( *(_BYTE *)(a1 + 38472) && MEMORY[0xFFFFF78000000008] > *(_QWORD *)(a1 + 38336) )
    goto LABEL_11;
  return v2;
}
