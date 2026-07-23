/*
 * XREFs of IoSetIoCompletionEx2 @ 0x140266A90
 * Callers:
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     NtSetIoCompletion @ 0x140A6A800 (NtSetIoCompletion.c)
 *     IoSetIoCompletion @ 0x140A85470 (IoSetIoCompletion.c)
 *     NtLockFile @ 0x140B720D0 (NtLockFile.c)
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

__int64 __fastcall IoSetIoCompletionEx2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        int a8)
{
  __int64 MiniCompletionPacket; // rdi
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // r15
  _QWORD *v13; // rbp
  unsigned __int8 CurrentIrql; // al
  _KTHREAD *CurrentThread; // rbx
  unsigned int v16; // r13d
  signed __int8 v17; // cf
  _QWORD *v18; // r14
  _QWORD *v19; // rsi
  _QWORD *v20; // rax
  unsigned int v21; // r12d
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 *v24; // rcx
  _QWORD *v26; // r14
  _QWORD *v27; // rsi
  char v28; // al
  __int64 v29; // rax
  unsigned int v30; // edi
  __int64 v31; // r12
  __int64 v32; // rbx
  __int64 v33; // rax
  unsigned __int8 v34; // [rsp+30h] [rbp-38h]
  struct _KPRCB *CurrentPrcb; // [rsp+A0h] [rbp+38h]

  MiniCompletionPacket = a7;
  v10 = a3;
  v11 = a2;
  v12 = a1;
  if ( a7 || (LOBYTE(a1) = 1, (MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, a6)) != 0) )
  {
    *(_QWORD *)(MiniCompletionPacket + 24) = v11;
    v13 = (_QWORD *)(v12 + 8);
    *(_QWORD *)(MiniCompletionPacket + 48) = a5;
    *(_QWORD *)(MiniCompletionPacket + 32) = v10;
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
    v16 = 0;
    v17 = _interlockedbittestandset((volatile signed __int32 *)v12, 7u);
    a8 = 0;
    if ( v17 )
    {
      do
      {
        do
          KeYieldProcessorEx(&a8);
        while ( (*(_DWORD *)v12 & 0x80u) != 0 );
      }
      while ( _interlockedbittestandset((volatile signed __int32 *)v12, 7u) );
    }
    if ( (_QWORD *)*v13 != v13
      && *(_DWORD *)(v12 + 40) < *(_DWORD *)(v12 + 44)
      && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v12 || CurrentThread->WaitReason != 15) )
    {
      v18 = (_QWORD *)*v13;
      do
      {
        v19 = v18;
        v18 = (_QWORD *)*v18;
        if ( *((_BYTE *)v19 + 16) != 3 )
          break;
        v20 = (_QWORD *)v19[1];
        if ( (_QWORD *)v18[1] != v19 || (_QWORD *)*v20 != v19 )
          goto LABEL_25;
        *v20 = v18;
        v21 = 0;
        v18[1] = v20;
        v22 = v19[3];
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 64), 0LL) )
        {
          do
          {
            if ( (++v21 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
            {
              HvlNotifyLongSpinWait(v21);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(v22 + 64) );
        }
        if ( *(_BYTE *)(v22 + 388) == 5 )
          a2 = (unsigned __int8)KiSignalThread(CurrentPrcb, v22, MiniCompletionPacket, v19);
        else
          a2 = 0LL;
        *(_QWORD *)(v22 + 64) = 0LL;
        a1 = *((unsigned __int8 *)v19 + 17);
        LOBYTE(a1) = a1 + 1;
        *((_BYTE *)v19 + 17) = a1;
        if ( (_BYTE)a2 )
        {
          *(_QWORD *)MiniCompletionPacket = 0LL;
          goto LABEL_38;
        }
      }
      while ( v18 != v13 );
    }
    v23 = *(unsigned int *)(v12 + 4);
    *(_DWORD *)(v12 + 4) = v23 + 1;
    v24 = *(__int64 **)(v12 + 32);
    if ( *v24 != v12 + 24 )
LABEL_25:
      __fastfail(3u);
    *(_QWORD *)MiniCompletionPacket = v12 + 24;
    *(_QWORD *)(MiniCompletionPacket + 8) = v24;
    *v24 = MiniCompletionPacket;
    *(_QWORD *)(v12 + 32) = MiniCompletionPacket;
    if ( !(_DWORD)v23 && (_QWORD *)*v13 != v13 )
    {
      v26 = *(_QWORD **)(v12 + 16);
      do
      {
        v27 = v26;
        v26 = (_QWORD *)v26[1];
        v28 = *((_BYTE *)v27 + 16);
        if ( v28 == 2 )
        {
          v33 = *v27;
          if ( *(_QWORD **)(*v27 + 8LL) != v27 || (_QWORD *)*v26 != v27 )
            goto LABEL_25;
          *v26 = v33;
          *(_QWORD *)(v33 + 8) = v26;
          *((_BYTE *)v27 + 17) = 5;
          KiInsertQueueInternal(v27[3], v27);
        }
        else
        {
          if ( v28 != 1 )
            break;
          v29 = *v27;
          if ( *(_QWORD **)(*v27 + 8LL) != v27 || (_QWORD *)*v26 != v27 )
            goto LABEL_25;
          *v26 = v29;
          v30 = 0;
          *(_QWORD *)(v29 + 8) = v26;
          v31 = *((unsigned __int16 *)v27 + 9);
          v32 = v27[3];
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 64), 0LL) )
          {
            do
            {
              if ( (++v30 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v24, v23, a3) )
              {
                HvlNotifyLongSpinWait(v30);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(_QWORD *)(v32 + 64) );
          }
          if ( *(_BYTE *)(v32 + 388) == 5 )
            KiSignalThread(CurrentPrcb, v32, v31, v27);
          *(_QWORD *)(v32 + 64) = 0LL;
          ++*((_BYTE *)v27 + 17);
        }
      }
      while ( v26 != v13 );
    }
LABEL_38:
    _InterlockedAnd((volatile signed __int32 *)v12, 0xFFFFFF7F);
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, v34);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v16;
}
