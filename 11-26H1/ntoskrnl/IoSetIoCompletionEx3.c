/*
 * XREFs of IoSetIoCompletionEx3 @ 0x1402659C0
 * Callers:
 *     ExpShutdownWorkerFactory @ 0x1403B3AE0 (ExpShutdownWorkerFactory.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140461C90 (ExpWorkerFactoryCompletionPacketRoutine.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     EtwTraceEnqueueWork @ 0x140267678 (EtwTraceEnqueueWork.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x14027BEB0 (KiSignalThread.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     IopAllocateMiniCompletionPacket @ 0x140A893B0 (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall IoSetIoCompletionEx3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        char a8,
        char a9)
{
  __int64 MiniCompletionPacket; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // r15
  _QWORD *v14; // r13
  unsigned int v15; // edi
  unsigned __int8 CurrentIrql; // al
  _KTHREAD *CurrentThread; // rbx
  unsigned int v18; // r12d
  _QWORD *Object; // rax
  bool v20; // di
  bool v21; // cf
  _QWORD *v22; // r14
  _QWORD *v23; // rdi
  _QWORD *v24; // rax
  unsigned int v25; // ebp
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 *v28; // rcx
  _QWORD *v30; // r14
  _QWORD *v31; // rsi
  char v32; // al
  __int64 v33; // rax
  unsigned int v34; // edi
  __int64 v35; // rbp
  __int64 v36; // rbx
  __int64 v37; // rax
  unsigned int v38; // [rsp+30h] [rbp-48h]
  struct _KPRCB *CurrentPrcb; // [rsp+38h] [rbp-40h]
  unsigned __int8 v40; // [rsp+40h] [rbp-38h]

  MiniCompletionPacket = a7;
  v11 = a3;
  v12 = a2;
  v13 = a1;
  if ( a7 || (LOBYTE(a1) = 1, (MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, a6)) != 0) )
  {
    v14 = (_QWORD *)(v13 + 8);
    *(_QWORD *)(MiniCompletionPacket + 32) = v11;
    v15 = a9;
    v38 = a9;
    *(_QWORD *)(MiniCompletionPacket + 24) = v12;
    *(_DWORD *)(MiniCompletionPacket + 40) = a4;
    *(_QWORD *)(MiniCompletionPacket + 48) = a5;
    CurrentIrql = KeGetCurrentIrql();
    v40 = CurrentIrql;
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
      EtwTraceEnqueueWork(CurrentThread, MiniCompletionPacket, a3);
    }
    if ( v15 )
    {
      v18 = 0;
      if ( (*(_BYTE *)(v13 + 1) & 2) != 0 )
        v15 = 0;
      v38 = v15;
    }
    else
    {
      v18 = 0;
    }
    Object = CurrentThread[1].WaitBlock[1].Object;
    if ( !Object )
      Object = &CurrentThread->Header.Lock;
    v20 = 0;
    if ( a8 )
    {
      a1 = *(unsigned int *)(Object[68] + 136LL);
      if ( (a1 & 0x2000) != 0 )
        v20 = 1;
    }
    v21 = _interlockedbittestandset((volatile signed __int32 *)v13, 7u);
    LODWORD(a7) = 0;
    if ( v21 )
    {
      do
      {
        do
          KeYieldProcessorEx(&a7);
        while ( (*(_DWORD *)v13 & 0x80u) != 0 );
      }
      while ( _interlockedbittestandset((volatile signed __int32 *)v13, 7u) );
    }
    if ( (_QWORD *)*v14 != v14
      && (*(_DWORD *)(v13 + 40) < *(_DWORD *)(v13 + 44) || v20)
      && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v13 || CurrentThread->WaitReason != 15) )
    {
      v22 = (_QWORD *)*v14;
      do
      {
        v23 = v22;
        v22 = (_QWORD *)*v22;
        if ( *((_BYTE *)v23 + 16) != 3 )
          break;
        v24 = (_QWORD *)v23[1];
        if ( (_QWORD *)v22[1] != v23 || (_QWORD *)*v24 != v23 )
          goto LABEL_32;
        *v24 = v22;
        LOBYTE(a2) = 0;
        v22[1] = v24;
        v25 = 0;
        v26 = v23[3];
        LOBYTE(a7) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 64), 0LL) )
        {
          do
          {
            if ( (++v25 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
            {
              HvlNotifyLongSpinWait(v25);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(v26 + 64) );
        }
        if ( *(_BYTE *)(v26 + 388) == 5 )
          a2 = (unsigned __int8)KiSignalThread(CurrentPrcb, v26, MiniCompletionPacket, v23);
        else
          a2 = (unsigned __int8)a7;
        *(_QWORD *)(v26 + 64) = 0LL;
        a1 = *((unsigned __int8 *)v23 + 17);
        LOBYTE(a1) = a1 + 1;
        *((_BYTE *)v23 + 17) = a1;
        if ( (_BYTE)a2 )
        {
          *(_QWORD *)MiniCompletionPacket = 0LL;
          goto LABEL_48;
        }
      }
      while ( v22 != v14 );
    }
    v27 = *(unsigned int *)(v13 + 4);
    *(_DWORD *)(v13 + 4) = v27 + 1;
    v28 = *(__int64 **)(v13 + 32);
    if ( *v28 != v13 + 24 )
LABEL_32:
      __fastfail(3u);
    *(_QWORD *)MiniCompletionPacket = v13 + 24;
    *(_QWORD *)(MiniCompletionPacket + 8) = v28;
    *v28 = MiniCompletionPacket;
    *(_QWORD *)(v13 + 32) = MiniCompletionPacket;
    if ( !(_DWORD)v27 && (_QWORD *)*v14 != v14 )
    {
      v30 = *(_QWORD **)(v13 + 16);
      do
      {
        v31 = v30;
        v30 = (_QWORD *)v30[1];
        v32 = *((_BYTE *)v31 + 16);
        if ( v32 == 2 )
        {
          v37 = *v31;
          if ( *(_QWORD **)(*v31 + 8LL) != v31 || (_QWORD *)*v30 != v31 )
            goto LABEL_32;
          *v30 = v37;
          *(_QWORD *)(v37 + 8) = v30;
          *((_BYTE *)v31 + 17) = 5;
          KiInsertQueueInternal(v31[3], v31);
        }
        else
        {
          if ( v32 != 1 )
            break;
          v33 = *v31;
          if ( *(_QWORD **)(*v31 + 8LL) != v31 || (_QWORD *)*v30 != v31 )
            goto LABEL_32;
          *v30 = v33;
          v34 = 0;
          *(_QWORD *)(v33 + 8) = v30;
          v35 = *((unsigned __int16 *)v31 + 9);
          v36 = v31[3];
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 64), 0LL) )
          {
            do
            {
              if ( (++v34 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v28, v27, a3) )
              {
                HvlNotifyLongSpinWait(v34);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(_QWORD *)(v36 + 64) );
          }
          if ( *(_BYTE *)(v36 + 388) == 5 )
            KiSignalThread(CurrentPrcb, v36, v35, v31);
          *(_QWORD *)(v36 + 64) = 0LL;
          ++*((_BYTE *)v31 + 17);
        }
      }
      while ( v30 != v14 );
    }
LABEL_48:
    _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
    v21 = a8 != 0;
    a8 = -a8;
    KiExitDispatcher((__int64)CurrentPrcb, v21 ? 3 : 0, 1u, v38, v40);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v18;
}
