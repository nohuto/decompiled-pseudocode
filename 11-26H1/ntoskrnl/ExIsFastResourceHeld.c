/*
 * XREFs of ExIsFastResourceHeld @ 0x140407F30
 * Callers:
 *     DifExIsFastResourceHeldWrapper @ 0x140656510 (DifExIsFastResourceHeldWrapper.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall ExIsFastResourceHeld(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 *p_LastXStateSaveDebugInfo,
        __int64 a3,
        __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 CurrentIrql; // al
  __int64 v7; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int8 v10; // bl
  unsigned __int64 *SparePtr; // rcx
  __int64 v13; // r8
  unsigned __int8 v14; // bp
  unsigned __int64 *i; // rcx
  unsigned __int32 v16; // eax
  unsigned __int32 v17; // ett
  unsigned __int64 *v18; // rsi

  CurrentThread = KeGetCurrentThread();
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  if ( (*(_QWORD *)BugCheckParameter2 & 1) != 0 || (*(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    _disable();
    if ( (*(_QWORD *)BugCheckParameter2 & 1) != 0 && *(struct _KTHREAD **)(BugCheckParameter2 + 80) == CurrentThread )
    {
      v7 = BugCheckParameter2 + 64;
    }
    else
    {
      p_LastXStateSaveDebugInfo = &CurrentThread[1].LastXStateSaveDebugInfo;
      v7 = 0LL;
      SparePtr = (unsigned __int64 *)CurrentThread[1].WaitBlock[3].SparePtr;
      v13 = 0LL;
      while ( SparePtr != p_LastXStateSaveDebugInfo )
      {
        if ( (*((_BYTE *)SparePtr + 37) & 2) == 0 && SparePtr[3] == BugCheckParameter2 )
        {
          v7 = (__int64)SparePtr;
          break;
        }
        SparePtr = (unsigned __int64 *)*SparePtr;
        if ( (unsigned __int64)++v13 > 6 )
        {
          v7 = 1LL;
          break;
        }
      }
    }
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v16 = *SchedulerAssist;
      do
      {
        p_LastXStateSaveDebugInfo = (unsigned __int64 *)v16;
        LODWORD(p_LastXStateSaveDebugInfo) = v16 & 0xFFDFFFFF;
        v17 = v16;
        v16 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v16 & 0xFFDFFFFF, v16);
      }
      while ( v17 != v16 );
      if ( (v16 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, p_LastXStateSaveDebugInfo, SchedulerAssist, a4);
    }
    _enable();
    if ( v7 )
    {
      if ( v7 != 1 )
        return 1;
      v14 = KeGetCurrentIrql();
      if ( v14 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(p_LastXStateSaveDebugInfo) = 2;
        KiRaiseIrqlProcessIrqlFlags(v14, p_LastXStateSaveDebugInfo);
      }
      if ( (*(_QWORD *)BugCheckParameter2 & 1) != 0 && *(struct _KTHREAD **)(BugCheckParameter2 + 80) == CurrentThread )
      {
        i = (unsigned __int64 *)(BugCheckParameter2 + 64);
LABEL_28:
        if ( i )
        {
          v10 = 1;
LABEL_31:
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
          __writecr8(v14);
          return v10;
        }
      }
      else
      {
        v18 = &CurrentThread[1].LastXStateSaveDebugInfo;
        for ( i = (unsigned __int64 *)*v18; i != v18; i = (unsigned __int64 *)*i )
        {
          if ( (*((_BYTE *)i + 37) & 2) == 0 && i[3] == BugCheckParameter2 )
            goto LABEL_28;
        }
      }
      v10 = 0;
      goto LABEL_31;
    }
  }
  return 0LL;
}
