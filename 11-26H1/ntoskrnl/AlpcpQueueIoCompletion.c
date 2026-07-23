/*
 * XREFs of AlpcpQueueIoCompletion @ 0x1402686B0
 * Callers:
 *     AlpcpQueueIoCompletionPort @ 0x140267FE0 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140268B10 (AlpcpLookasidePacketCallbackRoutine.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     EtwTraceEnqueueWork @ 0x140267678 (EtwTraceEnqueueWork.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x14027BEB0 (KiSignalThread.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCompleteDirectSwitchThread @ 0x14042C2A8 (KiCompleteDirectSwitchThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     IopAllocateMiniCompletionPacket @ 0x140A893B0 (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall AlpcpQueueIoCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int v6; // edi
  __int64 MiniCompletionPacket; // rsi
  __int64 v9; // rbp
  __int64 v10; // r15
  int v11; // r14d
  _QWORD *v12; // r13
  unsigned __int8 CurrentIrql; // al
  __int64 CurrentThread; // rbx
  char v15; // r8
  __int64 v16; // rax
  bool v17; // bp
  signed __int8 v18; // cf
  _QWORD *v19; // r14
  _QWORD *v20; // rbp
  _QWORD *v21; // rax
  unsigned int v22; // r12d
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 *v25; // rcx
  unsigned int v26; // ecx
  _QWORD *v28; // rbp
  _QWORD *v29; // r14
  char v30; // al
  __int64 v31; // rax
  unsigned int v32; // esi
  __int64 v33; // r12
  __int64 v34; // rbx
  __int64 v35; // rax
  struct _KPRCB *CurrentPrcb; // [rsp+30h] [rbp-38h]
  unsigned __int8 v37; // [rsp+38h] [rbp-30h]
  unsigned int v38; // [rsp+88h] [rbp+20h]

  v6 = 0;
  MiniCompletionPacket = a4;
  v9 = a2;
  v10 = a1;
  v11 = ((_BYTE)a5 != 0) | 4;
  if ( !a6 )
    v11 = (_BYTE)a5 != 0;
  a6 = v11;
  if ( a4 || (LOBYTE(a1) = 1, (MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, 0LL)) != 0) )
  {
    *(_QWORD *)(MiniCompletionPacket + 24) = v9;
    v12 = (_QWORD *)(v10 + 8);
    *(_QWORD *)(MiniCompletionPacket + 32) = a3;
    *(_DWORD *)(MiniCompletionPacket + 40) = 0;
    *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    v37 = CurrentIrql;
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
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      v15 = *(_BYTE *)(CurrentThread + 388) == 2 && *(_DWORD *)(CurrentThread + 536) == KeGetPcr()->Prcb.Number;
      EtwTraceEnqueueWork(CurrentThread, MiniCompletionPacket, v15);
    }
    v38 = ((unsigned __int8)~*(_BYTE *)(v10 + 1) >> 1) & 1;
    v16 = *(_QWORD *)(CurrentThread + 1616);
    if ( !v16 )
      v16 = CurrentThread;
    v17 = 0;
    if ( v11 )
    {
      a1 = *(unsigned int *)(*(_QWORD *)(v16 + 544) + 136LL);
      if ( (a1 & 0x2000) != 0 )
        v17 = 1;
    }
    v18 = _interlockedbittestandset((volatile signed __int32 *)v10, 7u);
    a5 = 0;
    if ( v18 )
    {
      do
      {
        do
          KeYieldProcessorEx(&a5);
        while ( (*(_DWORD *)v10 & 0x80u) != 0 );
      }
      while ( _interlockedbittestandset((volatile signed __int32 *)v10, 7u) );
    }
    if ( (_QWORD *)*v12 != v12
      && (*(_DWORD *)(v10 + 40) < *(_DWORD *)(v10 + 44) || v17)
      && (*(_QWORD *)(CurrentThread + 232) != v10 || *(_BYTE *)(CurrentThread + 643) != 15) )
    {
      v19 = (_QWORD *)*v12;
      do
      {
        v20 = v19;
        v19 = (_QWORD *)*v19;
        if ( *((_BYTE *)v20 + 16) != 3 )
          break;
        v21 = (_QWORD *)v20[1];
        if ( (_QWORD *)v19[1] != v20 || (_QWORD *)*v21 != v20 )
          goto LABEL_32;
        *v21 = v19;
        v22 = 0;
        v19[1] = v21;
        v23 = v20[3];
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 64), 0LL) )
        {
          do
          {
            if ( (++v22 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
            {
              HvlNotifyLongSpinWait(v22);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(v23 + 64) );
        }
        if ( *(_BYTE *)(v23 + 388) == 5 )
          a1 = (unsigned __int8)KiSignalThread(CurrentPrcb, v23, MiniCompletionPacket, v20);
        else
          a1 = 0LL;
        *(_QWORD *)(v23 + 64) = 0LL;
        ++*((_BYTE *)v20 + 17);
        if ( (_BYTE)a1 )
        {
          *(_QWORD *)MiniCompletionPacket = 0LL;
          goto LABEL_45;
        }
      }
      while ( v19 != v12 );
    }
    v24 = *(unsigned int *)(v10 + 4);
    *(_DWORD *)(v10 + 4) = v24 + 1;
    v25 = *(__int64 **)(v10 + 32);
    if ( *v25 != v10 + 24 )
LABEL_32:
      __fastfail(3u);
    *(_QWORD *)MiniCompletionPacket = v10 + 24;
    *(_QWORD *)(MiniCompletionPacket + 8) = v25;
    *v25 = MiniCompletionPacket;
    *(_QWORD *)(v10 + 32) = MiniCompletionPacket;
    if ( !(_DWORD)v24 && (_QWORD *)*v12 != v12 )
    {
      v28 = *(_QWORD **)(v10 + 16);
      do
      {
        v29 = v28;
        v28 = (_QWORD *)v28[1];
        v30 = *((_BYTE *)v29 + 16);
        if ( v30 == 2 )
        {
          v35 = *v29;
          if ( *(_QWORD **)(*v29 + 8LL) != v29 || (_QWORD *)*v28 != v29 )
            goto LABEL_32;
          *v28 = v35;
          *(_QWORD *)(v35 + 8) = v28;
          *((_BYTE *)v29 + 17) = 5;
          KiInsertQueueInternal(v29[3], v29);
        }
        else
        {
          if ( v30 != 1 )
            break;
          v31 = *v29;
          if ( *(_QWORD **)(*v29 + 8LL) != v29 || (_QWORD *)*v28 != v29 )
            goto LABEL_32;
          *v28 = v31;
          v32 = 0;
          *(_QWORD *)(v31 + 8) = v28;
          v33 = *((unsigned __int16 *)v29 + 9);
          v34 = v29[3];
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 64), 0LL) )
          {
            do
            {
              if ( (++v32 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v25, v24, a3) )
              {
                HvlNotifyLongSpinWait(v32);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(_QWORD *)(v34 + 64) );
          }
          if ( *(_BYTE *)(v34 + 388) == 5 )
            KiSignalThread(CurrentPrcb, v34, v33, v29);
          *(_QWORD *)(v34 + 64) = 0LL;
          ++*((_BYTE *)v29 + 17);
        }
      }
      while ( v28 != v12 );
    }
LABEL_45:
    _InterlockedAnd((volatile signed __int32 *)v10, 0xFFFFFF7F);
    if ( (a6 & 1) != 0 )
    {
      v26 = 3;
    }
    else
    {
      v26 = 0;
      if ( (a6 & 4) != 0 )
      {
        KiCompleteDirectSwitchThread(CurrentPrcb, CurrentPrcb->CurrentThread);
        v26 = 6;
      }
    }
    KiExitDispatcher((__int64)CurrentPrcb, v26, 1u, v38, v37);
    return 1;
  }
  return v6;
}
