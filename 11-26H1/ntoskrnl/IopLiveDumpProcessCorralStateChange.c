/*
 * XREFs of IopLiveDumpProcessCorralStateChange @ 0x1404A0758
 * Callers:
 *     IopLiveDumpCorralDpc @ 0x1405D14F0 (IopLiveDumpCorralDpc.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x1405D291C (IopLiveDumpInitiateCorralStateChange.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     IopLiveDumpBufferDumpData @ 0x1405D0720 (IopLiveDumpBufferDumpData.c)
 *     KeRestoreSupervisorState @ 0x1405EF3C0 (KeRestoreSupervisorState.c)
 *     KeSaveSupervisorState @ 0x1405EF444 (KeSaveSupervisorState.c)
 *     KeResumeClockTimerSafe @ 0x1405F0A60 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1405F0AC4 (KeSuspendClockTimerSafe.c)
 */

char __fastcall IopLiveDumpProcessCorralStateChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned __int32 v12; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  __int64 v15; // rdx
  unsigned __int32 v16; // ett
  int v18; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a1 + 12);
  v18 = 0;
  if ( v4 == *(_DWORD *)(a2 + 4) )
  {
    do
      KeYieldProcessorEx(&v18);
    while ( *(_DWORD *)(a1 + 12) == *(_DWORD *)(a2 + 4) );
  }
  v7 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a2 + 4) = v7;
  v8 = v7 - 2;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( --v12 )
            {
              if ( v12 == 1 && *(_BYTE *)(a2 + 9) )
              {
                LOBYTE(v12) = KeRestoreSupervisorState(
                                KeGetCurrentPrcb()->ExtendedSupervisorState,
                                MEMORY[0xFFFFF780000005F0] | 0x100LL);
                *(_BYTE *)(a2 + 9) = 0;
              }
            }
            else if ( SaveSupervisorState )
            {
              LOBYTE(v12) = KeSaveSupervisorState(
                              KeGetCurrentPrcb()->ExtendedSupervisorState,
                              MEMORY[0xFFFFF780000005F0] | 0x100LL);
              *(_BYTE *)(a2 + 9) = 1;
            }
          }
          else if ( *(_BYTE *)(a2 + 8) )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v12 = *SchedulerAssist;
              do
              {
                v15 = v12;
                LODWORD(v15) = v12 & 0xFFDFFFFF;
                v16 = v12;
                v12 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v12 & 0xFFDFFFFF, v12);
              }
              while ( v16 != v12 );
              if ( (v12 & 0x200000) != 0 )
                LOBYTE(v12) = KiRemoveSystemWorkPriorityKick(CurrentPrcb, v15, SchedulerAssist, a4);
            }
            _enable();
          }
        }
        else
        {
          LOBYTE(v12) = KeResumeClockTimerSafe();
        }
      }
      else
      {
        LOBYTE(v12) = IopLiveDumpBufferDumpData(a1, a2);
      }
    }
    else
    {
      LOBYTE(v12) = KeSuspendClockTimerSafe();
    }
  }
  else
  {
    LOBYTE(v12) = KeDisableInterrupts();
    *(_BYTE *)(a2 + 8) = v12;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
  return v12;
}
