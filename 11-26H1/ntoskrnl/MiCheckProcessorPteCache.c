/*
 * XREFs of MiCheckProcessorPteCache @ 0x140360820
 * Callers:
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiEmptyPteBins @ 0x140360F30 (MiEmptyPteBins.c)
 *     RtlFindClearBitsEx @ 0x140361740 (RtlFindClearBitsEx.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiCheckProcessorPteCache(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  char *v7; // r15
  struct _LIST_ENTRY *i; // r14
  _ULARGE_INTEGER DueTime; // rbx
  _KWAIT_BLOCK **p_WaitBlockList; // rdi
  KIRQL v11; // al
  unsigned __int64 v12; // rbx
  __int64 ClearBits; // rax
  __int64 result; // rax
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rbx
  volatile signed __int64 *v17; // rdi
  signed __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  _OWORD v21[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v21[0] = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0LL;
  if ( CurrentPrcb->PteBitCache == -1LL )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    for ( i = stru_140E366D8.Timer.Header.WaitListHead.Blink; ; i = (struct _LIST_ENTRY *)(v15 + 64) )
    {
      while ( 1 )
      {
        DueTime = stru_140E366D8.Timer.DueTime;
        p_WaitBlockList = &stru_140E366D8.WaitBlockList;
        if ( stru_140E366D8.Timer.DueTime.QuadPart )
        {
          while ( stru_140E366D8.WaitBlockList < (_KWAIT_BLOCK *)DueTime.QuadPart )
          {
            v11 = ExAcquireSpinLockExclusive(&stru_140E366D8.Timer.Header.SignalState);
            v12 = v11;
            if ( v11 == 17 )
            {
              if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
                stru_140E366D8.Timer.Header.SignalState = 0;
              else
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&stru_140E366D8.Timer.Header.SignalState, retaddr);
            }
            else
            {
              if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
                stru_140E366D8.Timer.Header.SignalState = 0;
              else
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&stru_140E366D8.Timer.Header.SignalState, retaddr);
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
              __writecr8(v12);
            }
            DueTime = stru_140E366D8.Timer.DueTime;
            if ( !stru_140E366D8.Timer.DueTime.QuadPart )
              goto LABEL_27;
          }
          p_WaitBlockList = (_KWAIT_BLOCK **)v21;
          *(_QWORD *)&v21[0] = (char *)stru_140E366D8.WaitBlockList - DueTime.QuadPart;
          *((_QWORD *)&v21[0] + 1) = (char *)stru_140E366D8.WaitListEntry.Flink + 8 * (DueTime.QuadPart >> 6);
          if ( i )
            i = (struct _LIST_ENTRY *)((char *)i - DueTime.QuadPart);
        }
LABEL_27:
        ClearBits = RtlFindClearBitsEx(p_WaitBlockList, 1LL, i, a4);
        if ( ClearBits != -1 )
          break;
        result = MiEmptyPteBins(&stru_140E366D8.WaitBlockList, 0LL, 2LL);
        if ( !result )
          return result;
        i = 0LL;
      }
      v15 = (ClearBits + DueTime.QuadPart) & 0xFFFFFFFFFFFFFFC0uLL;
      v16 = *((_QWORD *)&stru_140E366D8.WaitListEntry.Flink->Flink + (v15 >> 6));
      v17 = (volatile signed __int64 *)stru_140E366D8.WaitListEntry.Flink + (v15 >> 6);
      if ( v16 != -1LL )
        break;
LABEL_33:
      ;
    }
    while ( 1 )
    {
      v18 = _InterlockedCompareExchange64(v17, -1LL, v16);
      if ( v16 == v18 )
        break;
      v16 = v18;
      if ( v18 == -1 )
        goto LABEL_33;
    }
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->PteBitCache == -1LL )
    {
      CurrentPrcb->PteBitCache = v16;
      CurrentPrcb->PteBitOffset = v15;
      _InterlockedAdd64(
        (volatile signed __int64 *)&stru_140E366D8.Timer.TimerListEntry.Blink,
        -(__int64)(unsigned int)__popcnt(~v16));
      stru_140E366D8.Timer.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)(v15 + 64);
    }
    else
    {
      _InterlockedAnd64(v17, v16);
    }
  }
  *(_QWORD *)&v21[0] = 64LL;
  *((_QWORD *)&v21[0] + 1) = &CurrentPrcb->PteBitCache;
  v19 = RtlFindClearBitsEx(v21, a1, 0LL, a4);
  v20 = v19;
  if ( v19 != -1 )
  {
    RtlSetBitsEx(v21, v19, a1);
    v7 = (char *)stru_140E366D8.Teb + 8 * v20 + 8 * CurrentPrcb->PteBitOffset;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return (__int64)v7;
}
