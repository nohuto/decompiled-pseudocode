/*
 * XREFs of KeInsertQueueEx @ 0x140265E10
 * Callers:
 *     IopCompleteRequest @ 0x140454DF0 (IopCompleteRequest.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     EtwTraceEnqueueWork @ 0x140267678 (EtwTraceEnqueueWork.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x14027BEB0 (KiSignalThread.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeInsertQueueEx(__int64 a1, _QWORD *a2, __int64 a3, char a4)
{
  unsigned int v4; // r14d
  _QWORD *v5; // r12
  _QWORD *v6; // rbp
  __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // al
  _KTHREAD *CurrentThread; // rbx
  signed __int8 v10; // cf
  _QWORD *v11; // r14
  _QWORD *v12; // rsi
  _QWORD *v13; // rax
  char v14; // r15
  unsigned int v15; // ebp
  __int64 v16; // rbx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v20; // r15
  _QWORD *v21; // r14
  char v22; // al
  __int64 v23; // rax
  unsigned int v24; // esi
  __int64 v25; // rbp
  __int64 v26; // rbx
  __int64 v27; // rax
  unsigned __int8 v28; // [rsp+30h] [rbp-58h]
  struct _KPRCB *CurrentPrcb; // [rsp+90h] [rbp+8h]
  _QWORD *v30; // [rsp+98h] [rbp+10h]
  unsigned int v31; // [rsp+A0h] [rbp+18h]
  unsigned int v32; // [rsp+A8h] [rbp+20h] BYREF

  LOBYTE(v32) = a4;
  v31 = a3;
  v30 = a2;
  v4 = a3;
  v5 = (_QWORD *)(a1 + 8);
  v6 = a2;
  v7 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v28 = CurrentIrql;
  if ( CurrentIrql != 2 )
  {
    a1 = 2LL;
    __writecr8(2uLL);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(a3) = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
    EtwTraceEnqueueWork(CurrentThread, v6, a3);
  }
  if ( v4 )
  {
    if ( (*(_BYTE *)(v7 + 1) & 2) != 0 )
      v4 = 0;
    v31 = v4;
  }
  v10 = _interlockedbittestandset((volatile signed __int32 *)v7, 7u);
  v32 = 0;
  if ( v10 )
  {
    do
    {
      do
        KeYieldProcessorEx(&v32);
      while ( (*(_DWORD *)v7 & 0x80u) != 0 );
    }
    while ( _interlockedbittestandset((volatile signed __int32 *)v7, 7u) );
  }
  v32 = *(_DWORD *)(v7 + 4);
  if ( (_QWORD *)*v5 != v5
    && *(_DWORD *)(v7 + 40) < *(_DWORD *)(v7 + 44)
    && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v7 || CurrentThread->WaitReason != 15) )
  {
    v11 = (_QWORD *)*v5;
    do
    {
      v12 = v11;
      v11 = (_QWORD *)*v11;
      if ( *((_BYTE *)v12 + 16) != 3 )
        break;
      v13 = (_QWORD *)v12[1];
      if ( (_QWORD *)v11[1] != v12 || (_QWORD *)*v13 != v12 )
        goto LABEL_25;
      *v13 = v11;
      v14 = 0;
      v11[1] = v13;
      v15 = 0;
      v16 = v12[3];
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 64), 0LL) )
      {
        do
        {
          if ( (++v15 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
          {
            HvlNotifyLongSpinWait(v15);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v16 + 64) );
      }
      v6 = v30;
      if ( *(_BYTE *)(v16 + 388) == 5 )
        v14 = KiSignalThread(CurrentPrcb, v16, v30, v12);
      *(_QWORD *)(v16 + 64) = 0LL;
      ++*((_BYTE *)v12 + 17);
      if ( v14 )
      {
        *v30 = 0LL;
        goto LABEL_38;
      }
    }
    while ( v11 != v5 );
  }
  v17 = *(unsigned int *)(v7 + 4);
  *(_DWORD *)(v7 + 4) = v17 + 1;
  v18 = *(_QWORD **)(v7 + 32);
  if ( *v18 != v7 + 24 )
LABEL_25:
    __fastfail(3u);
  *v6 = v7 + 24;
  v6[1] = v18;
  *v18 = v6;
  *(_QWORD *)(v7 + 32) = v6;
  if ( !(_DWORD)v17 && (_QWORD *)*v5 != v5 )
  {
    v20 = *(_QWORD **)(v7 + 16);
    do
    {
      v21 = v20;
      v20 = (_QWORD *)v20[1];
      v22 = *((_BYTE *)v21 + 16);
      if ( v22 == 2 )
      {
        v27 = *v21;
        if ( *(_QWORD **)(*v21 + 8LL) != v21 || (_QWORD *)*v20 != v21 )
          goto LABEL_25;
        *v20 = v27;
        *(_QWORD *)(v27 + 8) = v20;
        *((_BYTE *)v21 + 17) = 5;
        KiInsertQueueInternal(v21[3], v21);
      }
      else
      {
        if ( v22 != 1 )
          break;
        v23 = *v21;
        if ( *(_QWORD **)(*v21 + 8LL) != v21 || (_QWORD *)*v20 != v21 )
          goto LABEL_25;
        *v20 = v23;
        v24 = 0;
        *(_QWORD *)(v23 + 8) = v20;
        v25 = *((unsigned __int16 *)v21 + 9);
        v26 = v21[3];
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 64), 0LL) )
        {
          do
          {
            if ( (++v24 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v18, v17, a3) )
            {
              HvlNotifyLongSpinWait(v24);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(v26 + 64) );
        }
        if ( *(_BYTE *)(v26 + 388) == 5 )
          KiSignalThread(CurrentPrcb, v26, v25, v21);
        *(_QWORD *)(v26 + 64) = 0LL;
        ++*((_BYTE *)v21 + 17);
      }
    }
    while ( v20 != v5 );
  }
LABEL_38:
  _InterlockedAnd((volatile signed __int32 *)v7, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, v31, v28);
  return v32;
}
