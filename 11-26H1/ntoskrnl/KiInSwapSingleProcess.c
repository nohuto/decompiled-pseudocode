/*
 * XREFs of KiInSwapSingleProcess @ 0x140312684
 * Callers:
 *     KeReadyThread @ 0x140230DB0 (KeReadyThread.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     KiAttachProcess @ 0x140312370 (KiAttachProcess.c)
 * Callees:
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MmNotifyProcessInSwapTrigger @ 0x14031284C (MmNotifyProcessInSwapTrigger.c)
 */

char __fastcall KiInSwapSingleProcess(LegacyAutoBoost *this, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r14
  char v6; // si
  char v7; // r15
  unsigned int v8; // ebp
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int64 *v13; // rdi
  signed __int64 v14; // rax
  signed __int64 v15; // rcx

  v4 = (unsigned __int8)a3;
  v6 = 1;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a2, a2, a3);
  if ( (*(_DWORD *)(a2 + 264) & 7) != 0 )
  {
    v7 = 0;
    v8 = 0;
    *((_DWORD *)this + 109) = MEMORY[0xFFFFF78000000320];
    while ( _interlockedbittestandset64((volatile signed __int32 *)this + 16, 0LL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v8);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *((_QWORD *)this + 8) );
    }
    *((_BYTE *)this + 388) = 9;
    if ( (*((_DWORD *)this + 30) & 0x1000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)this + 30, 0xCu);
    *((_QWORD *)this + 8) = 0LL;
    v9 = *(_QWORD **)(a2 + 112);
    v10 = (_QWORD *)((char *)this + 216);
    if ( *v9 != a2 + 104 )
      __fastfail(3u);
    *v10 = a2 + 104;
    *((_QWORD *)this + 28) = v9;
    *v9 = v10;
    *(_QWORD *)(a2 + 112) = v10;
    if ( (*(_DWORD *)(a2 + 264) & 7) == 1 )
    {
      _InterlockedXor((volatile signed __int32 *)(a2 + 264), 3u);
      v7 = 1;
    }
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    if ( v7 )
    {
      MmNotifyProcessInSwapTrigger(a2);
      v13 = (signed __int64 *)(a2 + 120);
      _m_prefetchw(&qword_140F26B90);
      v14 = qword_140F26B90;
      do
      {
        *v13 = v14;
        v15 = v14;
        v14 = _InterlockedCompareExchange64(&qword_140F26B90, (signed __int64)v13, v14);
      }
      while ( v14 != v15 );
      if ( !v14 )
        KeSetEvent((PRKEVENT)&KiSupervisorXStateFeaturesLock.Timer.TimerListEntry, 10, 0);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( this == (LegacyAutoBoost *)CurrentPrcb->CurrentThread )
    {
      *((_BYTE *)this + 643) = 23;
      *((_BYTE *)this + 390) = v4;
      KiSwapThread(this, (__int64)CurrentPrcb, 0LL);
      return v6;
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    v6 = 0;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  __writecr8(v4);
  return v6;
}
