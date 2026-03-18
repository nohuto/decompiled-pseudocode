/*
 * XREFs of KiRequestProcessInSwap @ 0x1402C6AEC
 * Callers:
 *     KiInswapAndReadyThread @ 0x1402C6944 (KiInswapAndReadyThread.c)
 *     KiReadyOutSwappedThreads @ 0x14037B7C4 (KiReadyOutSwappedThreads.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1402C7BAC (MmNotifyProcessInSwapTrigger.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

char __fastcall KiRequestProcessInSwap(__int64 a1, __int64 a2)
{
  char v2; // bp
  unsigned int v5; // esi
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  unsigned __int64 AffinityVersion; // rax
  unsigned __int64 *v9; // rdi
  unsigned __int64 v10; // rcx

  v2 = 0;
  v5 = 0;
  *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
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
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_BYTE *)(a1 + 388) = 9;
  if ( (*(_DWORD *)(a1 + 120) & 0x1000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
  *(_QWORD *)(a1 + 64) = 0LL;
  v6 = *(_QWORD **)(a2 + 112);
  v7 = (_QWORD *)(a1 + 216);
  if ( *v6 != a2 + 104 )
    __fastfail(3u);
  *v7 = a2 + 104;
  v7[1] = v6;
  *v6 = v7;
  *(_QWORD *)(a2 + 112) = v7;
  LOBYTE(AffinityVersion) = *(_DWORD *)(a2 + 264) & 7;
  if ( (_BYTE)AffinityVersion == 1 )
  {
    _InterlockedXor((volatile signed __int32 *)(a2 + 264), 3u);
    v2 = 1;
  }
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  if ( v2 )
  {
    MmNotifyProcessInSwapTrigger(a2);
    v9 = (unsigned __int64 *)(a2 + 120);
    _m_prefetchw(&KiSupervisorXStateFeaturesLock.AffinityVersion);
    AffinityVersion = KiSupervisorXStateFeaturesLock.AffinityVersion;
    do
    {
      *v9 = AffinityVersion;
      v10 = AffinityVersion;
      AffinityVersion = _InterlockedCompareExchange64(
                          (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.AffinityVersion,
                          (signed __int64)v9,
                          AffinityVersion);
    }
    while ( AffinityVersion != v10 );
    if ( !AffinityVersion )
      LOBYTE(AffinityVersion) = KeSetEvent((PRKEVENT)&KiSupervisorXStateFeaturesLock.StackLimit, 10, 0);
  }
  return AffinityVersion;
}
