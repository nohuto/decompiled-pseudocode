/*
 * XREFs of KiInitializeProcessorCycleAccumulation @ 0x1405E7B14
 * Callers:
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 *     KeInitializeClock @ 0x140D117AC (KeInitializeClock.c)
 * Callees:
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpComputeFraction @ 0x140535570 (RtlpComputeFraction.c)
 *     KiRebaselineProcessorStartCycles @ 0x1405E7BE4 (KiRebaselineProcessorStartCycles.c)
 */

void __fastcall KiInitializeProcessorCycleAccumulation(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rax
  char v4; // cl
  unsigned __int64 v5; // r8
  bool v6; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(unsigned int *)(a1 + 68);
  v11 = 0;
  v3 = RtlpComputeFraction(1000000 * v1, MEMORY[0xFFFFF78000000300], &v11);
  v4 = v11;
  if ( v11 < 0 )
  {
    v5 = v3 + (unsigned int)(1 << ~v11);
    if ( v5 < v3 )
      v5 = v3;
    v3 = v5 >> -v11;
    v4 = 0;
  }
  *(_QWORD *)(a1 + 176) = v3;
  *(_BYTE *)(a1 + 172) = v4;
  v6 = KeDisableInterrupts();
  KiRebaselineProcessorStartCycles(a1);
  *(_BYTE *)(a1 + 34524) = 1;
  if ( v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v9 = *SchedulerAssist;
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange(SchedulerAssist, v9 & 0xFFDFFFFF, v9);
      }
      while ( v10 != v9 );
      if ( (v9 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
}
