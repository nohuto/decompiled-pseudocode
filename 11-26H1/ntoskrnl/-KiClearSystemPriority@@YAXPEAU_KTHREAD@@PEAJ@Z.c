/*
 * XREFs of ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x14037B2F0
 * Callers:
 *     MiReplenishSlabAllocator @ 0x14020607C (MiReplenishSlabAllocator.c)
 *     PopFxActivateComponent @ 0x14037AB40 (PopFxActivateComponent.c)
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PspUpdateContainerImpersonation @ 0x14037E0F0 (PspUpdateContainerImpersonation.c)
 *     PopFxIdleComponent @ 0x140395020 (PopFxIdleComponent.c)
 *     KeDisconnectInterrupt @ 0x140423CA0 (KeDisconnectInterrupt.c)
 *     KeConnectInterrupt @ 0x140424368 (KeConnectInterrupt.c)
 *     PpmCheckCustomRun @ 0x1404BBD70 (PpmCheckCustomRun.c)
 *     PpmTryAcquireLock @ 0x1404C8FF4 (PpmTryAcquireLock.c)
 *     MiDemoteSlabEntries @ 0x140506A84 (MiDemoteSlabEntries.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402436D0 (KiFlushSoftwareInterruptBatch.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCheckForThreadDispatch @ 0x14037CA70 (KiCheckForThreadDispatch.c)
 *     KiSetPriorityThread @ 0x14037F250 (KiSetPriorityThread.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x14051F5B4 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall KiClearSystemPriority(ULONG_PTR BugCheckParameter1, int *a2)
{
  int *v2; // rsi
  ULONG_PTR v3; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v5; // edi
  __int64 v6; // rcx
  char v7; // al
  char v8; // al
  unsigned int v9; // edx
  int IsEnabledNoReportingNoInline; // eax
  int v11; // ecx
  int v12; // r9d
  unsigned int v13; // r8d
  int v14; // edx
  char v15; // al
  signed int v16; // eax
  char v17; // si
  struct _KPRCB *CurrentPrcb; // rdi
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r8d
  bool v24; // cc
  unsigned int v25; // edx
  int v26; // ecx
  struct _SINGLE_LIST_ENTRY v27; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2;
  v27.Next = 0LL;
  v3 = BugCheckParameter1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(BugCheckParameter1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter1, a2);
  }
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 64), 0LL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v5);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v3 + 64) );
  }
  if ( v2 )
  {
    v6 = (unsigned int)*v2;
  }
  else
  {
    v6 = (unsigned int)*(char *)(v3 + 795);
    *(_BYTE *)(v3 + 795) = 32;
  }
  v7 = *(_BYTE *)((int)v6 + v3 + 824);
  if ( !v7 )
    KeBugCheckEx(0x157u, v3, (int)v6, 2uLL, 0LL);
  v8 = v7 - 1;
  *(_BYTE *)((int)v6 + v3 + 824) = v8;
  if ( !v8 )
  {
    v9 = *(_DWORD *)(v3 + 856) ^ (1 << v6);
    *(_DWORD *)(v3 + 856) = v9;
    if ( v9 < 1 << v6 && *(char *)(v3 + 195) <= 31 )
    {
      IsEnabledNoReportingNoInline = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v6);
      v11 = *(char *)(v3 + 563);
      v12 = v11;
      if ( IsEnabledNoReportingNoInline )
      {
        if ( v11 < 16 )
        {
          v14 = v11 + (*(_WORD *)(v3 + 518) & 0xF);
          if ( v14 <= v11 )
            v14 = *(char *)(v3 + 563);
          v15 = 0;
          if ( *(char *)(v3 + 870) > 0 )
            v15 = *(_BYTE *)(v3 + 870);
          v12 = v14 + v15;
          if ( v12 >= 16 )
            v12 = 15;
          v13 = *(unsigned __int16 *)(v3 + 518);
          if ( (unsigned __int8)(v13 >> 4) > v12 )
            v12 = (unsigned __int8)(v13 >> 4);
        }
        v16 = *(_DWORD *)(v3 + 856);
        if ( !v16 )
          goto LABEL_33;
        _BitScanReverse((unsigned int *)&v16, v16);
        v24 = v12 < v16;
      }
      else
      {
        v23 = *(char *)(v3 + 563);
        if ( v11 < 16 )
        {
          v26 = v11 + (*(_WORD *)(v3 + 518) & 0xF);
          if ( v26 <= v12 )
            v26 = *(char *)(v3 + 563);
          v23 = *(char *)(v3 + 563) + *(char *)(v3 + 870);
          if ( v23 <= v26 )
            v23 = v26;
          v25 = *(unsigned __int16 *)(v3 + 518);
          if ( (unsigned __int8)(v25 >> 4) > v23 )
            v23 = (unsigned __int8)(v25 >> 4);
          if ( v23 >= 16 && (*(_DWORD *)(v3 + 120) & 0x400000) == 0 )
            v23 = 15;
        }
        v16 = *(_DWORD *)(v3 + 856);
        v12 = v23;
        if ( !v16 )
          goto LABEL_33;
        _BitScanReverse((unsigned int *)&v16, v16);
        v24 = v23 < v16;
      }
      if ( v24 )
        v12 = v16;
LABEL_33:
      if ( v12 < *(char *)(v3 + 195) )
        KiSetPriorityThread(v3, &v27, (unsigned int)v12);
    }
  }
  *(_QWORD *)(v3 + 64) = 0LL;
  v17 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  Next = v27.Next;
  if ( v27.Next )
  {
    v27.Next = v27.Next->Next;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, (ULONG_PTR)&Next[-27], &v27, 0LL);
      Next = v27.Next;
      ++v17;
      if ( v27.Next )
        v27.Next = v27.Next->Next;
      if ( (v17 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
    }
    while ( Next );
  }
  KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
  LOBYTE(v20) = CurrentIrql;
  KiCheckForThreadDispatch(CurrentPrcb, v20, v21, v22);
}
