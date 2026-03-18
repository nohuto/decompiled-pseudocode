/*
 * XREFs of KiInitializeProcessorCycleAccumulation @ 0x1405E51A4
 * Callers:
 *     KiInitializeKernel @ 0x140BF6190 (KiInitializeKernel.c)
 *     KeInitializeClock @ 0x140D0B7A4 (KeInitializeClock.c)
 * Callees:
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpComputeFraction @ 0x1405330F0 (RtlpComputeFraction.c)
 *     KiRebaselineProcessorStartCycles @ 0x1405E5274 (KiRebaselineProcessorStartCycles.c)
 */

__int64 __fastcall KiInitializeProcessorCycleAccumulation(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rax
  char v4; // cl
  unsigned __int64 v5; // r8
  bool v6; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v10; // ett
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
  result = KiRebaselineProcessorStartCycles(a1);
  *(_BYTE *)(a1 + 34524) = 1;
  if ( v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v10 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v10 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return result;
}
