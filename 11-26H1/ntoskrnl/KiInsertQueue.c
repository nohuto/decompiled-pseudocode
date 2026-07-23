/*
 * XREFs of KiInsertQueue @ 0x140267210
 * Callers:
 *     EtwpQueueReply @ 0x140A8BB90 (EtwpQueueReply.c)
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
 */

__int64 __fastcall KiInsertQueue(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebp
  _QWORD *v5; // r13
  unsigned int v6; // esi
  __int64 *v7; // r14
  __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // al
  _KTHREAD *CurrentThread; // rbx
  unsigned int v11; // r12d
  _QWORD *Object; // rax
  bool v13; // si
  signed __int8 v14; // cf
  _QWORD *v15; // r14
  _QWORD *v16; // rsi
  _QWORD *v17; // rax
  char v18; // r15
  unsigned int v19; // ebp
  __int64 v20; // rbx
  _QWORD *v21; // rbp
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 **v24; // rdx
  int v26; // ebp
  _QWORD *v27; // r15
  _QWORD *v28; // r14
  char v29; // al
  __int64 v30; // rax
  unsigned int v31; // esi
  __int64 v32; // rbp
  __int64 v33; // rbx
  __int64 v34; // rax
  struct _KPRCB *CurrentPrcb; // [rsp+30h] [rbp-58h]
  unsigned __int8 v36; // [rsp+38h] [rbp-50h]
  unsigned int v37; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v38; // [rsp+98h] [rbp+10h]
  unsigned int v39; // [rsp+A0h] [rbp+18h]
  unsigned int v40; // [rsp+A8h] [rbp+20h]

  v40 = a4;
  v39 = a3;
  v38 = a2;
  v4 = a4;
  v5 = (_QWORD *)(a1 + 8);
  v6 = a3;
  v7 = a2;
  v8 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v36 = CurrentIrql;
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
    EtwTraceEnqueueWork(CurrentThread, v7, a3);
  }
  if ( v6 )
  {
    v11 = 0;
    if ( (*(_BYTE *)(v8 + 1) & 2) != 0 )
      v6 = 0;
    v39 = v6;
  }
  else
  {
    v11 = 0;
  }
  Object = CurrentThread[1].WaitBlock[1].Object;
  if ( !Object )
    Object = &CurrentThread->Header.Lock;
  v13 = 0;
  if ( (v4 & 5) != 0 )
  {
    a1 = *(unsigned int *)(Object[68] + 136LL);
    if ( (a1 & 0x2000) != 0 )
      v13 = 1;
  }
  v14 = _interlockedbittestandset((volatile signed __int32 *)v8, 7u);
  v37 = 0;
  if ( v14 )
  {
    do
    {
      do
        KeYieldProcessorEx(&v37);
      while ( (*(_DWORD *)v8 & 0x80u) != 0 );
    }
    while ( _interlockedbittestandset((volatile signed __int32 *)v8, 7u) );
  }
  v37 = *(_DWORD *)(v8 + 4);
  if ( (_QWORD *)*v5 != v5
    && (*(_DWORD *)(v8 + 40) < *(_DWORD *)(v8 + 44) || v13)
    && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v8 || CurrentThread->WaitReason != 15) )
  {
    v15 = (_QWORD *)*v5;
    do
    {
      v16 = v15;
      v15 = (_QWORD *)*v15;
      if ( *((_BYTE *)v16 + 16) != 3 )
        break;
      v17 = (_QWORD *)v16[1];
      if ( (_QWORD *)v15[1] != v16 || (_QWORD *)*v17 != v16 )
        goto LABEL_33;
      *v17 = v15;
      v18 = 0;
      v15[1] = v17;
      v19 = 0;
      v20 = v16[3];
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 64), 0LL) )
      {
        do
        {
          if ( (++v19 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
          {
            HvlNotifyLongSpinWait(v19);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v20 + 64) );
      }
      v21 = v38;
      if ( *(_BYTE *)(v20 + 388) == 5 )
        v18 = KiSignalThread(CurrentPrcb, v20, v38, v16);
      *(_QWORD *)(v20 + 64) = 0LL;
      ++*((_BYTE *)v16 + 17);
      if ( v18 )
      {
        *v21 = 0LL;
LABEL_46:
        v4 = v40;
        goto LABEL_47;
      }
    }
    while ( v15 != v5 );
    v7 = v38;
    v4 = v40;
  }
  v22 = *(unsigned int *)(v8 + 4);
  *(_DWORD *)(v8 + 4) = v22 + 1;
  v23 = v8 + 24;
  if ( (v4 & 2) != 0 )
  {
    v24 = *(__int64 ***)v23;
    if ( *(_QWORD *)(*(_QWORD *)v23 + 8LL) != v23 )
LABEL_33:
      __fastfail(3u);
    *v7 = (__int64)v24;
    v7[1] = v23;
    v24[1] = v7;
    *(_QWORD *)v23 = v7;
  }
  else
  {
    v24 = *(__int64 ***)(v8 + 32);
    if ( *v24 != (__int64 *)v23 )
      goto LABEL_33;
    *v7 = v23;
    v7[1] = (__int64)v24;
    *v24 = v7;
    *(_QWORD *)(v8 + 32) = v7;
  }
  if ( !(_DWORD)v22 && (_QWORD *)*v5 != v5 )
  {
    v27 = *(_QWORD **)(v8 + 16);
    while ( 1 )
    {
      v28 = v27;
      v27 = (_QWORD *)v27[1];
      v29 = *((_BYTE *)v28 + 16);
      if ( v29 == 2 )
      {
        v34 = *v28;
        if ( *(_QWORD **)(*v28 + 8LL) != v28 || (_QWORD *)*v27 != v28 )
          goto LABEL_33;
        *v27 = v34;
        *(_QWORD *)(v34 + 8) = v27;
        *((_BYTE *)v28 + 17) = 5;
        KiInsertQueueInternal(v28[3], v28);
      }
      else
      {
        if ( v29 != 1 )
          goto LABEL_46;
        v30 = *v28;
        if ( *(_QWORD **)(*v28 + 8LL) != v28 || (_QWORD *)*v27 != v28 )
          goto LABEL_33;
        *v27 = v30;
        v31 = 0;
        *(_QWORD *)(v30 + 8) = v27;
        v32 = *((unsigned __int16 *)v28 + 9);
        v33 = v28[3];
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 64), 0LL) )
        {
          do
          {
            if ( (++v31 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v22, v24, a3) )
            {
              HvlNotifyLongSpinWait(v31);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(v33 + 64) );
        }
        if ( *(_BYTE *)(v33 + 388) == 5 )
          KiSignalThread(CurrentPrcb, v33, v32, v28);
        *(_QWORD *)(v33 + 64) = 0LL;
        ++*((_BYTE *)v28 + 17);
      }
      if ( v27 == v5 )
        goto LABEL_46;
    }
  }
LABEL_47:
  _InterlockedAnd((volatile signed __int32 *)v8, 0xFFFFFF7F);
  if ( (v4 & 1) != 0 )
  {
    v26 = ~(unsigned __int8)(v4 >> 2) & 2 | 1;
LABEL_53:
    v11 = v26;
    goto LABEL_49;
  }
  if ( (v4 & 4) != 0 )
  {
    KiCompleteDirectSwitchThread(CurrentPrcb, CurrentPrcb->CurrentThread);
    v26 = ~(unsigned __int8)(v4 >> 2) & 2 | 4;
    goto LABEL_53;
  }
LABEL_49:
  KiExitDispatcher((__int64)CurrentPrcb, v11, 1u, v39, v36);
  return v37;
}
