/*
 * XREFs of ?KiAbpThreadUnboostCpuPriority@AutoBoost@@YAXPEAU_KTHREAD@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14037CDD0
 * Callers:
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027BD70 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCheckForThreadDispatch @ 0x14037E820 (KiCheckForThreadDispatch.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x140521C58 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall AutoBoost::KiAbpThreadUnboostCpuPriority(
        ULONG_PTR BugCheckParameter1,
        struct _KTHREAD *a2,
        struct _SINGLE_LIST_ENTRY *a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  char v4; // di
  unsigned int v7; // ebp
  unsigned __int8 CurrentIrql; // r15
  struct _SINGLE_LIST_ENTRY *v9; // rsi
  bool i; // zf
  int v11; // eax
  unsigned int v12; // r14d
  ULONG_PTR v13; // r12
  char v14; // al
  struct _KPRCB *CurrentPrcb; // rbp
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // al
  unsigned int v20; // edx
  int IsEnabledNoReportingNoInline; // eax
  int v22; // ecx
  __int64 v23; // r8
  unsigned int v24; // r9d
  char v25; // al
  int v26; // edx
  signed int v27; // eax
  int v28; // r9d
  bool v29; // cc
  unsigned int v30; // edx
  int v31; // ecx
  __int64 v32; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v32 = 0LL;
  v7 = (unsigned int)a2;
  CurrentIrql = -1;
  if ( a3 )
  {
    v9 = a3;
  }
  else
  {
    v9 = (struct _SINGLE_LIST_ENTRY *)&v32;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  }
  for ( i = !_BitScanForward((unsigned int *)&v11, v7); !i; i = !_BitScanForward((unsigned int *)&v11, v7) )
  {
    v12 = 0;
    v13 = (char)(v11 + 1);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v12);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v14 = *(_BYTE *)(v13 + BugCheckParameter1 + 824);
    if ( !v14 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v13, 2uLL, 0LL);
    v19 = v14 - 1;
    *(_BYTE *)(v13 + BugCheckParameter1 + 824) = v19;
    if ( v19 )
      goto LABEL_44;
    v20 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v13);
    *(_DWORD *)(BugCheckParameter1 + 856) = v20;
    if ( v20 >= 1 << v13 || *(char *)(BugCheckParameter1 + 195) > 31 )
      goto LABEL_44;
    IsEnabledNoReportingNoInline = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline((unsigned int)v13);
    v22 = *(char *)(BugCheckParameter1 + 563);
    v23 = (unsigned int)v22;
    if ( IsEnabledNoReportingNoInline )
    {
      if ( v22 < 16 )
      {
        v25 = 0;
        v26 = v22 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xF);
        if ( v26 <= v22 )
          v26 = v22;
        if ( *(char *)(BugCheckParameter1 + 870) > 0 )
          v25 = *(_BYTE *)(BugCheckParameter1 + 870);
        v23 = (unsigned int)(v26 + v25);
        if ( (int)v23 >= 16 )
          v23 = 15LL;
        v24 = *(unsigned __int16 *)(BugCheckParameter1 + 518);
        if ( (unsigned __int8)(v24 >> 4) > (int)v23 )
          v23 = (unsigned __int8)(v24 >> 4);
      }
      v27 = *(_DWORD *)(BugCheckParameter1 + 856);
      if ( !v27 )
        goto LABEL_42;
      _BitScanReverse((unsigned int *)&v27, v27);
      v29 = (int)v23 < v27;
    }
    else
    {
      v28 = v22;
      if ( v22 < 16 )
      {
        v31 = v22 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xF);
        if ( v31 <= (int)v23 )
          v31 = v23;
        v28 = *(char *)(BugCheckParameter1 + 563) + *(char *)(BugCheckParameter1 + 870);
        if ( v28 <= v31 )
          v28 = v31;
        v30 = *(unsigned __int16 *)(BugCheckParameter1 + 518);
        if ( (unsigned __int8)(v30 >> 4) > v28 )
          v28 = (unsigned __int8)(v30 >> 4);
        if ( v28 >= 16 && (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0 )
          v28 = 15;
      }
      v27 = *(_DWORD *)(BugCheckParameter1 + 856);
      v23 = (unsigned int)v28;
      if ( !v27 )
        goto LABEL_42;
      _BitScanReverse((unsigned int *)&v27, v27);
      v29 = v28 < v27;
    }
    if ( v29 )
      v23 = (unsigned int)v27;
LABEL_42:
    if ( (int)v23 < *(char *)(BugCheckParameter1 + 195) )
      KiSetPriorityThread(BugCheckParameter1, v9, v23);
LABEL_44:
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    v7 &= v7 - 1;
  }
  if ( !a3 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    Next = v9->Next;
    if ( v9->Next )
    {
      v9->Next = Next->Next;
      do
      {
        KiDeferredReadySingleThread(CurrentPrcb, (ULONG_PTR)&Next[-27], v9, 0LL);
        Next = v9->Next;
        ++v4;
        if ( v9->Next )
          v9->Next = Next->Next;
        if ( (v4 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
      }
      while ( Next );
    }
    KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
    KiCheckForThreadDispatch(CurrentPrcb, CurrentIrql, v17, v18);
  }
}
