/*
 * XREFs of KiInSwapSingleProcess @ 0x1402C79E4
 * Callers:
 *     KeReadyThread @ 0x14022F420 (KeReadyThread.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     KiAttachProcess @ 0x1402C76D0 (KiAttachProcess.c)
 * Callees:
 *     KiSwapThread @ 0x14023C0A0 (KiSwapThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAcquireKobjectLockSafe @ 0x140277760 (KiAcquireKobjectLockSafe.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1402C7BAC (MmNotifyProcessInSwapTrigger.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
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
  unsigned __int64 *v13; // rdi
  unsigned __int64 AffinityVersion; // rax
  unsigned __int64 v15; // rcx

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
      v13 = (unsigned __int64 *)(a2 + 120);
      _m_prefetchw(&KiSupervisorXStateFeaturesLock.AffinityVersion);
      AffinityVersion = KiSupervisorXStateFeaturesLock.AffinityVersion;
      do
      {
        *v13 = AffinityVersion;
        v15 = AffinityVersion;
        AffinityVersion = _InterlockedCompareExchange64(
                            (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.AffinityVersion,
                            (signed __int64)v13,
                            AffinityVersion);
      }
      while ( AffinityVersion != v15 );
      if ( !AffinityVersion )
        KeSetEvent((PRKEVENT)&KiSupervisorXStateFeaturesLock.StackLimit, 10, 0);
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
