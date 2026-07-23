/*
 * XREFs of KiDisarmForceParkDutyCyclingIfNecessary @ 0x1404E6B84
 * Callers:
 *     KeTransitionProcessorParkState @ 0x1404208A0 (KeTransitionProcessorParkState.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiShouldSearchSharedReadyQueue @ 0x14042BF30 (KiShouldSearchSharedReadyQueue.c)
 */

void __fastcall KiDisarmForceParkDutyCyclingIfNecessary(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // rsi
  __int64 v4; // rbx
  bool v6; // zf
  __int64 v7; // rax
  unsigned __int8 v8; // dl
  __int128 v9; // [rsp+30h] [rbp-10h] BYREF
  int v10; // [rsp+60h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 34544);
  v4 = *(_QWORD *)(a1 + 36488);
  if ( *(_DWORD *)(v3 + 336)
    && ((_BYTE)a2
     || !*(_DWORD *)(a1 + 33752)
     && (!v4 || !KiShouldSearchSharedReadyQueue(a1, *(_QWORD *)(a1 + 36488)) || !*(_DWORD *)(v4 + 8))) )
  {
    *(_BYTE *)(a1 + 35) |= 0x20u;
    if ( v4 )
    {
      v9 = 0LL;
      if ( (KiVelocityFlags & 0x200000) != 0 )
      {
        *((_QWORD *)&v9 + 1) = v4;
        *(_QWORD *)&v9 = 0LL;
        a2 = _InterlockedExchange64((volatile __int64 *)v4, (__int64)&v9);
        if ( a2 )
          KxWaitForLockOwnerShip((volatile signed __int64)&v9, a2, a3);
      }
      else
      {
        v10 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
        {
          do
            KeYieldProcessorEx(&v10);
          while ( *(_QWORD *)v4 );
        }
      }
      v6 = (KiVelocityFlags & 0x200000) == 0;
      *(_QWORD *)(v4 + 1768) &= ~*(_QWORD *)(a1 + 200);
      if ( v6 )
      {
        _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
      }
      else
      {
        _m_prefetchw(&v9);
        v7 = v9;
        if ( (_QWORD)v9 )
          goto LABEL_16;
        if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v9 + 1), 0LL, (signed __int64)&v9) != &v9 )
        {
          v7 = KxWaitForLockChainValid((__int64 *)&v9, a2, a3);
LABEL_16:
          *(_QWORD *)&v9 = 0LL;
          v8 = BYTE8(v9);
          if ( ((v8 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v7 + 8), *((__int64 *)&v9 + 1))) & 4) != 0 )
            KeWakeAddressAll();
        }
      }
    }
    *(_DWORD *)(v3 + 336) = 0;
    *(_DWORD *)(v3 + 340) = 4;
    KiInsertQueueDpc(v3, 0LL, 0LL, 0LL, 0);
  }
}
