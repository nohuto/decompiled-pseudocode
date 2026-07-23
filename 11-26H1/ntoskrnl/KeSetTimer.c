/*
 * XREFs of KeSetTimer @ 0x1403B62A0
 * Callers:
 *     <none>
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     DifObjTrkIsKvEnabledForPlugin @ 0x1403B6970 (DifObjTrkIsKvEnabledForPlugin.c)
 *     KiInsertTimerTable @ 0x1403B6998 (KiInsertTimerTable.c)
 *     KiDecodeTolerableDelayValue @ 0x1403B6BFC (KiDecodeTolerableDelayValue.c)
 *     KiTimerWaitTest @ 0x1403B6C5C (KiTimerWaitTest.c)
 *     DifObjTrkRemoveItem @ 0x1403B7980 (DifObjTrkRemoveItem.c)
 *     KiTraceSetTimer @ 0x1403E8F38 (KiTraceSetTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     DifObjTrkInsertItem @ 0x14064EAB0 (DifObjTrkInsertItem.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __stdcall KeSetTimer(PKTIMER Timer, LARGE_INTEGER DueTime, PKDPC Dpc)
{
  char v6; // r12
  _KDPC *v7; // rsi
  __int64 CurrentIrql; // r13
  unsigned int v9; // r14d
  unsigned __int64 Process; // rcx
  unsigned int v11; // r15d
  __int64 Processor; // rax
  __int64 v13; // r11
  unsigned __int64 v14; // rax
  volatile signed __int32 *v15; // r14
  unsigned __int64 v16; // r10
  unsigned __int8 TimerType; // r8
  __int64 v18; // r11
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v20; // r9
  unsigned __int64 v21; // rbp
  struct _LIST_ENTRY *Blink; // rax
  __int64 v23; // r13
  char v24; // dl
  __int64 v25; // r15
  unsigned __int8 v26; // cl
  unsigned __int8 v27; // cl
  __int64 v28; // rdx
  LONGLONG v29; // rax
  PKDPC v30; // rbx
  int v31; // r8d
  volatile signed __int32 *v33; // r15
  unsigned int v34; // r12d
  __int64 v35; // rcx
  signed __int8 Reserved1; // al
  BOOLEAN v37; // [rsp+30h] [rbp-88h]
  char v38; // [rsp+31h] [rbp-87h]
  int v39; // [rsp+34h] [rbp-84h] BYREF
  __int64 v40; // [rsp+38h] [rbp-80h]
  unsigned __int64 Size; // [rsp+40h] [rbp-78h]
  PKTIMER v42; // [rsp+48h] [rbp-70h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+50h] [rbp-68h]
  PKDPC v44; // [rsp+58h] [rbp-60h]
  _QWORD v45[3]; // [rsp+60h] [rbp-58h] BYREF

  v44 = Dpc;
  v6 = 1;
  if ( !(unsigned __int8)DifObjTrkIsKvEnabledForPlugin(49LL)
    || _InterlockedCompareExchange8(&Timer->TimerDifObjTracking, 1, 0) )
  {
    v38 = 0;
  }
  else
  {
    v38 = 1;
    DifObjTrkInsertItem(49LL, Timer, 0LL, 0LL);
  }
  v7 = (_KDPC *)(KiWaitNever ^ __ROR8__(
                                 (unsigned __int64)Timer ^ _byteswap_uint64((unsigned __int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ (unsigned __int64)Dpc),
                                 KiWaitNever));
  CurrentIrql = KeGetCurrentIrql();
  v45[0] = CurrentIrql;
  if ( (_BYTE)CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 2LL);
  v9 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v42 = 0LL;
  if ( _InterlockedCompareExchange8(&Timer->TimerDifObjTracking, 1, 2) == 2 )
    DifObjTrkRemoveItem(49LL, Timer, 0LL);
  else
    v6 = 0;
  v37 = 0;
LABEL_10:
  Process = 0x140000000uLL;
  while ( 1 )
  {
    if ( _interlockedbittestandset(&Timer->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (Timer->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Timer->Header.Lock, 7u) );
      Process = 0x140000000uLL;
    }
    v11 = 0;
    if ( v6 )
      _InterlockedCompareExchange8(&Timer->TimerDifObjTracking, 0, 1);
    if ( (Timer->Header.Reserved1 & 0xC0) == 0 )
    {
      v24 = 0;
      goto LABEL_28;
    }
    Processor = Timer->Processor;
    Size = Timer->Header.Size;
    v13 = KiProcessorBlock[Processor];
    v14 = (unsigned __int64)Timer->TimerType << 8;
    v40 = v13;
    v15 = (volatile signed __int32 *)(v13 + 16640 + 32 * (v14 + Size + 16));
    while ( _interlockedbittestandset64(v15, 0LL) )
    {
      do
      {
        if ( (++v11 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v11);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v15 );
    }
    if ( (Timer->Header.Reserved1 & 0x80u) == 0 )
    {
      v16 = Size;
      TimerType = Timer->TimerType;
      v18 = v40;
      Flink = Timer->TimerListEntry.Flink;
      v20 = v40 + 16640;
      v21 = v40 + 16640 + 32 * (((unsigned __int64)TimerType << 8) + Size + 16);
      Blink = Timer->TimerListEntry.Blink;
      v23 = v40 + 16640 + 32 * (((TimerType ^ 1LL) << 8) + Size + 16);
      if ( Flink->Blink != &Timer->TimerListEntry || Blink->Flink != &Timer->TimerListEntry )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      if ( Blink != Flink )
        goto LABEL_25;
      *(_DWORD *)(v21 + 28) = -1;
      if ( TimerType )
      {
        v33 = (volatile signed __int32 *)(v20 + 32 * (v16 + 16));
        if ( _interlockedbittestandset64(v33, 0LL) )
        {
          _mm_pause();
        }
        else if ( v33 )
        {
          goto LABEL_57;
        }
        _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
        v39 = 0;
        while ( _interlockedbittestandset64(v33, 0LL) )
        {
          do
            KeYieldProcessorEx(&v39);
          while ( *(_QWORD *)v33 );
        }
        v15 = (volatile signed __int32 *)(v40 + 16640 + 32 * (Size + 272));
        v39 = 0;
        while ( _interlockedbittestandset64(v15, 0LL) )
        {
          do
            KeYieldProcessorEx(&v39);
          while ( *(_QWORD *)v15 );
        }
        goto LABEL_56;
      }
      v33 = (volatile signed __int32 *)(v20 + 32 * (v16 + 272));
      v34 = 0;
      while ( _interlockedbittestandset64(v33, 0LL) )
      {
        do
        {
          if ( (++v34 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v34);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)v33 );
      }
LABEL_56:
      v18 = v40;
      v16 = Size;
LABEL_57:
      if ( *(_DWORD *)(v21 + 28) == -1 && *(_DWORD *)(v23 + 28) == -1 )
      {
        v35 = qword_140FC2698[2 * *(unsigned __int8 *)(v18 + 208)];
        if ( KiSerializeTimerExpiration )
        {
          _interlockedbittestandreset64((volatile signed __int32 *)(v35 + 8 * (v16 >> 6)), v16 & 0x3F);
          goto LABEL_61;
        }
        _interlockedbittestandreset64((volatile signed __int32 *)((v16 << 6) + v35), *(unsigned __int8 *)(v18 + 209));
        _InterlockedAnd64((volatile signed __int64 *)v33, 0LL);
      }
      else
      {
LABEL_61:
        _InterlockedAnd64((volatile signed __int64 *)v33, 0LL);
      }
LABEL_25:
      _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
      LOBYTE(CurrentIrql) = v45[0];
      v24 = 1;
      v37 = 1;
      Process = 3221225471LL;
      _InterlockedAnd(&Timer->Header.Lock, 0xBFFFFFFF);
      goto LABEL_28;
    }
    _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
    v9 = 0;
    if ( _InterlockedExchange64((volatile __int64 *)(v40 + 8LL * (Timer->Header.Reserved1 & 0x3F) + 16640), 0LL) )
      break;
    _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
    Reserved1 = Timer->Header.Reserved1;
    Process = 0x140000000uLL;
    v39 = 0;
    if ( Reserved1 < 0 )
    {
      do
        KeYieldProcessorEx(&v39);
      while ( (Timer->Header.Reserved1 & 0x80u) != 0 );
      goto LABEL_10;
    }
  }
  v24 = 1;
  Process = 0xFFFFFFLL;
  v37 = 1;
  _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFFu);
LABEL_28:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v24 )
  {
    v42 = Timer;
    v45[0] = &v42;
    v45[1] = 8LL;
    EtwTraceKernelEvent((int)v45, 1, 0x40020000u, 3925, 1538);
  }
  v25 = (__int64)CurrentPrcb;
  v26 = 0;
  if ( !KiGlobalTimerResolutionRequests )
  {
    if ( CurrentPrcb->NestingLevel
      || (Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process, (*(_DWORD *)(Process + 500) & 0x1000) == 0)
      || (*(_DWORD *)(Process + 1532) & 0x4000000) != 0 )
    {
      v26 = 1;
    }
  }
  Timer->TimerType = v26;
  v27 = 0;
  Timer->Dpc = v7;
  Timer->Period = 0;
  LODWORD(v45[0]) = Timer->Header.LockNV;
  BYTE1(v45[0]) = 0;
  if ( DueTime.HighPart >= 0 )
  {
    v27 = 1;
    BYTE1(v45[0]) = 1;
    DueTime.QuadPart = MEMORY[0xFFFFF78000000014] - DueTime.QuadPart;
    if ( DueTime.HighPart >= 0 )
    {
      Timer->Header.LockNV = v45[0];
      Timer->DueTime.QuadPart = 0LL;
      if ( v38 )
      {
        _InterlockedCompareExchange8(&Timer->TimerDifObjTracking, 0, 1);
        DifObjTrkRemoveItem(49LL, Timer, 0LL);
      }
LABEL_44:
      KiTimerWaitTest(v25, Timer, 0LL);
      goto LABEL_45;
    }
  }
  LOBYTE(Process) = v27 >> 2;
  v28 = 0LL;
  if ( (_BYTE)Process )
    v28 = (unsigned int)KiDecodeTolerableDelayValue(Process);
  BYTE3(v45[0]) |= 0x40u;
  v29 = MEMORY[0xFFFFF78000000008] - DueTime.QuadPart;
  Timer->DueTime.QuadPart = MEMORY[0xFFFFF78000000008] - DueTime.QuadPart;
  BYTE2(v45[0]) = (unsigned __int64)(v28 + v29) >> 18;
  Timer->Header.LockNV = v45[0];
  if ( v38 )
    _InterlockedCompareExchange8(&Timer->TimerDifObjTracking, 2, 1);
  v30 = v44;
  v31 = (int)v44;
  Timer->Header.SignalState = 0;
  if ( !(unsigned __int8)KiInsertTimerTable(
                           v25,
                           (_DWORD)Timer,
                           v31,
                           (unsigned __int8)((unsigned __int64)(v28 + v29) >> 18),
                           0LL) )
    goto LABEL_44;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(Timer, v30, 0LL);
  else
    _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
LABEL_45:
  KiExitDispatcher(v25, 0LL, 1u, 0, CurrentIrql);
  return v37;
}
