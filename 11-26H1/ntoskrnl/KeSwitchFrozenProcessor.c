/*
 * XREFs of KeSwitchFrozenProcessor @ 0x1404F1C1C
 * Callers:
 *     KdpSendWaitContinue @ 0x140C17038 (KdpSendWaitContinue.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KiCheckStall @ 0x14052A940 (KiCheckStall.c)
 *     KiSetDebuggerOwner @ 0x140530774 (KiSetDebuggerOwner.c)
 */

__int64 __fastcall KeSwitchFrozenProcessor(ULONG a1)
{
  __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // rbx
  volatile signed __int32 *SchedulerAssist; // rax
  __int64 v4; // rdx
  volatile signed __int32 *v6; // rcx

  v1 = a1;
  if ( a1 < KeQueryActiveProcessorCountEx(0xFFFFu) && !LOBYTE(stru_140F10828.WriteOperationCount) )
  {
    _mm_lfence();
    if ( ((*(_DWORD *)(KiProcessorBlock[v1] + 11656) - 2) & 0xFFFFFFFD) == 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      KiSetDebuggerOwner();
      if ( (CurrentPrcb->IpiFrozen & 0xF) == 2 )
        return 3LL;
      if ( (CurrentPrcb->IpiFrozen & 0xF) != 4 )
        return 0LL;
      SchedulerAssist = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
        _InterlockedOr(SchedulerAssist, 0x20000u);
      KeQueryPerformanceCounter(0LL);
      while ( CurrentPrcb != (struct _KPRCB *)KiDebuggerOwner )
      {
        LOBYTE(v4) = 1;
        KiCheckStall(CurrentPrcb, v4);
      }
      v6 = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( v6 )
        _InterlockedAnd(v6, 0xFFFDFFFF);
    }
  }
  return 2LL;
}
