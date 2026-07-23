/*
 * XREFs of IoSetIoCompletionEx @ 0x140266E50
 * Callers:
 *     NtSetIoCompletionEx @ 0x140928F50 (NtSetIoCompletionEx.c)
 *     PspSendReliableJobNotification @ 0x140AEB3B4 (PspSendReliableJobNotification.c)
 *     PspNotificationPacketCallback @ 0x140AEDFC0 (PspNotificationPacketCallback.c)
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

__int64 __fastcall IoSetIoCompletionEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7)
{
  __int64 MiniCompletionPacket; // rdi
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // r15
  _QWORD *v12; // rbp
  unsigned __int8 CurrentIrql; // al
  _KTHREAD *CurrentThread; // rbx
  unsigned int v15; // r13d
  signed __int8 v16; // cf
  _QWORD *v17; // r14
  _QWORD *v18; // rsi
  _QWORD *v19; // rax
  unsigned int v20; // r12d
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 *v23; // rcx
  _QWORD *v25; // r14
  _QWORD *v26; // rsi
  char v27; // al
  __int64 v28; // rax
  unsigned int v29; // edi
  __int64 v30; // r12
  __int64 v31; // rbx
  __int64 v32; // rax
  struct _KPRCB *CurrentPrcb; // [rsp+30h] [rbp-38h]
  unsigned __int8 v34; // [rsp+38h] [rbp-30h]

  MiniCompletionPacket = a7;
  v9 = a3;
  v10 = a2;
  v11 = a1;
  if ( a7 || (LOBYTE(a1) = 1, (MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, a6)) != 0) )
  {
    *(_QWORD *)(MiniCompletionPacket + 24) = v10;
    v12 = (_QWORD *)(v11 + 8);
    *(_QWORD *)(MiniCompletionPacket + 48) = a5;
    *(_QWORD *)(MiniCompletionPacket + 32) = v9;
    *(_DWORD *)(MiniCompletionPacket + 40) = a4;
    CurrentIrql = KeGetCurrentIrql();
    v34 = CurrentIrql;
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
    v15 = 0;
    v16 = _interlockedbittestandset((volatile signed __int32 *)v11, 7u);
    LODWORD(a7) = 0;
    if ( v16 )
    {
      do
      {
        do
          KeYieldProcessorEx(&a7);
        while ( (*(_DWORD *)v11 & 0x80u) != 0 );
      }
      while ( _interlockedbittestandset((volatile signed __int32 *)v11, 7u) );
    }
    if ( (_QWORD *)*v12 != v12
      && *(_DWORD *)(v11 + 40) < *(_DWORD *)(v11 + 44)
      && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v11 || CurrentThread->WaitReason != 15) )
    {
      v17 = (_QWORD *)*v12;
      do
      {
        v18 = v17;
        v17 = (_QWORD *)*v17;
        if ( *((_BYTE *)v18 + 16) != 3 )
          break;
        v19 = (_QWORD *)v18[1];
        if ( (_QWORD *)v17[1] != v18 || (_QWORD *)*v19 != v18 )
          goto LABEL_25;
        *v19 = v17;
        v20 = 0;
        v17[1] = v19;
        v21 = v18[3];
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 64), 0LL) )
        {
          do
          {
            if ( (++v20 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
            {
              HvlNotifyLongSpinWait(v20);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(v21 + 64) );
        }
        if ( *(_BYTE *)(v21 + 388) == 5 )
          a2 = (unsigned __int8)KiSignalThread(CurrentPrcb, v21, MiniCompletionPacket, v18);
        else
          a2 = 0LL;
        *(_QWORD *)(v21 + 64) = 0LL;
        a1 = *((unsigned __int8 *)v18 + 17);
        LOBYTE(a1) = a1 + 1;
        *((_BYTE *)v18 + 17) = a1;
        if ( (_BYTE)a2 )
        {
          *(_QWORD *)MiniCompletionPacket = 0LL;
          goto LABEL_38;
        }
      }
      while ( v17 != v12 );
    }
    v22 = *(unsigned int *)(v11 + 4);
    *(_DWORD *)(v11 + 4) = v22 + 1;
    v23 = *(__int64 **)(v11 + 32);
    if ( *v23 != v11 + 24 )
LABEL_25:
      __fastfail(3u);
    *(_QWORD *)MiniCompletionPacket = v11 + 24;
    *(_QWORD *)(MiniCompletionPacket + 8) = v23;
    *v23 = MiniCompletionPacket;
    *(_QWORD *)(v11 + 32) = MiniCompletionPacket;
    if ( !(_DWORD)v22 && (_QWORD *)*v12 != v12 )
    {
      v25 = *(_QWORD **)(v11 + 16);
      do
      {
        v26 = v25;
        v25 = (_QWORD *)v25[1];
        v27 = *((_BYTE *)v26 + 16);
        if ( v27 == 2 )
        {
          v32 = *v26;
          if ( *(_QWORD **)(*v26 + 8LL) != v26 || (_QWORD *)*v25 != v26 )
            goto LABEL_25;
          *v25 = v32;
          *(_QWORD *)(v32 + 8) = v25;
          *((_BYTE *)v26 + 17) = 5;
          KiInsertQueueInternal(v26[3], v26);
        }
        else
        {
          if ( v27 != 1 )
            break;
          v28 = *v26;
          if ( *(_QWORD **)(*v26 + 8LL) != v26 || (_QWORD *)*v25 != v26 )
            goto LABEL_25;
          *v25 = v28;
          v29 = 0;
          *(_QWORD *)(v28 + 8) = v25;
          v30 = *((unsigned __int16 *)v26 + 9);
          v31 = v26[3];
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 64), 0LL) )
          {
            do
            {
              if ( (++v29 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v23, v22, a3) )
              {
                HvlNotifyLongSpinWait(v29);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(_QWORD *)(v31 + 64) );
          }
          if ( *(_BYTE *)(v31 + 388) == 5 )
            KiSignalThread(CurrentPrcb, v31, v30, v26);
          *(_QWORD *)(v31 + 64) = 0LL;
          ++*((_BYTE *)v26 + 17);
        }
      }
      while ( v25 != v12 );
    }
LABEL_38:
    _InterlockedAnd((volatile signed __int32 *)v11, 0xFFFFFF7F);
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, v34);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v15;
}
