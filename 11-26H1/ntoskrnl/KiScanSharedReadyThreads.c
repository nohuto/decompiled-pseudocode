/*
 * XREFs of KiScanSharedReadyThreads @ 0x1403C93BC
 * Callers:
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KiNormalPriorityReadyScan @ 0x1403C90A4 (KiNormalPriorityReadyScan.c)
 * Callees:
 *     KiDeferredReadyThread @ 0x140230D00 (KiDeferredReadyThread.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiInsertDeferredReadyList @ 0x140307900 (KiInsertDeferredReadyList.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x140338180 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiSetPriorityBoost @ 0x1403C9908 (KiSetPriorityBoost.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1403CA394 (KiReadGuestSchedulerAssistPriority.c)
 *     EtwTraceAntiStarvationBoost @ 0x140531784 (EtwTraceAntiStarvationBoost.c)
 */

char __fastcall KiScanSharedReadyThreads(struct _KPRCB *a1, __int64 a2, char a3)
{
  signed __int64 v3; // rax
  __int64 v4; // rbx
  unsigned __int8 v5; // r15
  char v6; // di
  int v7; // r12d
  int v8; // esi
  int v9; // eax
  unsigned __int8 v10; // cl
  int v11; // r13d
  unsigned int v12; // esi
  unsigned int v13; // eax
  int v14; // esi
  __int64 v15; // rdx
  _QWORD **v16; // r14
  _QWORD *v17; // rdi
  __int64 v18; // r15
  bool v19; // cl
  bool v20; // zf
  char v21; // dl
  _QWORD *v22; // r14
  char v23; // cl
  int v24; // edi
  int v25; // ebx
  int v26; // r13d
  volatile signed __int32 *v27; // rsi
  __int64 v28; // rcx
  int v29; // r15d
  int GuestSchedulerAssistPriority; // eax
  char v31; // dl
  char v32; // dl
  __int128 v34; // [rsp+30h] [rbp-48h] BYREF
  int v35; // [rsp+40h] [rbp-38h]
  int v36; // [rsp+44h] [rbp-34h]
  unsigned int v37; // [rsp+48h] [rbp-30h]
  int v38; // [rsp+4Ch] [rbp-2Ch] BYREF
  int v39; // [rsp+50h] [rbp-28h]
  int v40; // [rsp+54h] [rbp-24h]
  _QWORD *v41; // [rsp+58h] [rbp-20h] BYREF
  int v42; // [rsp+60h] [rbp-18h]
  int v43; // [rsp+68h] [rbp-10h]
  __int64 v45; // [rsp+C8h] [rbp+50h]
  int v47; // [rsp+D8h] [rbp+60h] BYREF

  v45 = a2;
  LOBYTE(v3) = a3;
  v4 = a2;
  v34 = 0LL;
  if ( !a3 )
  {
    v5 = *(_BYTE *)(a2 + 706);
    v36 = 1;
    if ( _bittest(&KiVelocityFlags, 0x15u) )
    {
      *((_QWORD *)&v34 + 1) = a2;
      *(_QWORD *)&v34 = 0LL;
      a2 = _InterlockedExchange64((volatile __int64 *)a2, (__int64)&v34);
      if ( a2 )
        LOBYTE(v3) = KxWaitForLockOwnerShip((volatile signed __int64)&v34, a2, 0LL);
    }
    else
    {
      v47 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      {
        do
        {
          KeYieldProcessorEx(&v47);
          v3 = *(_QWORD *)v4;
        }
        while ( *(_QWORD *)v4 );
      }
    }
    v8 = *(_DWORD *)(v4 + 8) & 0x7FFE;
    if ( v8 )
    {
      v7 = 10;
      v40 = KiLockQuantumTarget;
      v39 = 15;
      v9 = MEMORY[0xFFFFF78000000320] - 300;
      goto LABEL_7;
    }
    if ( _bittest(&KiVelocityFlags, 0x15u) )
    {
      _m_prefetchw(&v34);
      v3 = v34;
      if ( (_QWORD)v34 )
        goto LABEL_82;
      v3 = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v34 + 1), 0LL, (signed __int64)&v34);
      if ( (__int128 *)v3 != &v34 )
      {
        v3 = KxWaitForLockChainValid((__int64 *)&v34, a2, 0LL);
LABEL_82:
        *(_QWORD *)&v34 = 0LL;
        v32 = BYTE8(v34);
        LOBYTE(v3) = v32 ^ _InterlockedExchange64((volatile __int64 *)(v3 + 8), *((__int64 *)&v34 + 1));
        if ( (v3 & 4) != 0 )
          LOBYTE(v3) = KeWakeAddressAll();
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
    }
    v6 = 1;
    goto LABEL_32;
  }
  v5 = *(_BYTE *)(a2 + 707);
  v6 = 8;
  v7 = KiNormalPriorityBoostMaximumThreadReadyCount * *(unsigned __int8 *)(a2 + 708);
  v36 = 8;
  if ( _bittest(&KiVelocityFlags, 0x15u) )
  {
    *((_QWORD *)&v34 + 1) = a2;
    *(_QWORD *)&v34 = 0LL;
    a2 = _InterlockedExchange64((volatile __int64 *)a2, (__int64)&v34);
    if ( a2 )
      LOBYTE(v3) = KxWaitForLockOwnerShip((volatile signed __int64)&v34, a2, 0LL);
  }
  else
  {
    v47 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    {
      do
      {
        KeYieldProcessorEx(&v47);
        v3 = *(_QWORD *)v4;
      }
      while ( *(_QWORD *)v4 );
    }
    v6 = 8;
  }
  v8 = *(_DWORD *)(v4 + 8) & 0x300;
  if ( v8 )
  {
    v39 = 11;
    v9 = MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks;
    v40 = KiCyclesPerClockQuantum * KiNormalPriorityBoostingPeriodMultiplier;
LABEL_7:
    v10 = v5;
    v11 = 16;
    v38 = v5;
    v12 = __ROR4__(v8, v5);
    v47 = v9;
    v41 = 0LL;
    do
    {
      _BitScanForward(&v13, v12);
      v42 = 0;
      v43 = v12 ^ (1 << v13);
      v14 = v47;
      v15 = (v10 + (_BYTE)v13) & 0x1F;
      v37 = (v10 + (_BYTE)v13) & 0x1F;
      v16 = (_QWORD **)(v4 + 16 * v15 + 64);
      v17 = *v16;
      do
      {
        v18 = (__int64)(v17 - 27);
        v19 = 0;
        v20 = (*(_DWORD *)(v17 - 12) & 0x400000) == 0;
        v17 = (_QWORD *)*v17;
        if ( !v20 )
        {
          GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(v18, 0LL);
          v15 = v37;
          v19 = GuestSchedulerAssistPriority != *(_DWORD *)(v18 + 1024);
        }
        LODWORD(v3) = v14 - *(_DWORD *)(v18 + 436);
        v35 = v3;
        if ( (int)v3 > 0 || v19 )
        {
          KiRemoveThreadFromSharedReadyQueue(v4, v18, v15);
          LOBYTE(v3) = KiInsertDeferredReadyList((__int64 *)&v41, v18);
          if ( v35 > 0 )
            --v7;
        }
        --v11;
        if ( v17 == v16 )
          break;
        if ( !v7 )
          break;
        v15 = v37;
      }
      while ( v11 );
      v12 = v43;
      v42 = v11;
      v35 = v7;
      if ( !v43 )
        break;
      if ( !v7 )
        break;
      v10 = v38;
    }
    while ( v11 );
    if ( !_bittest(&KiVelocityFlags, 0x15u) )
    {
      _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
      goto LABEL_26;
    }
    _m_prefetchw(&v34);
    v3 = v34;
    if ( !(_QWORD)v34 )
    {
      v3 = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v34 + 1), 0LL, (signed __int64)&v34);
      if ( (__int128 *)v3 == &v34 )
        goto LABEL_26;
      v3 = KxWaitForLockChainValid((__int64 *)&v34, v15, 0LL);
    }
    *(_QWORD *)&v34 = 0LL;
    v21 = BYTE8(v34);
    LOBYTE(v3) = v21 ^ _InterlockedExchange64((volatile __int64 *)(v3 + 8), *((__int64 *)&v34 + 1));
    if ( (v3 & 4) != 0 )
      LOBYTE(v3) = KeWakeAddressAll();
LABEL_26:
    v22 = v41;
    v6 = v36;
    if ( v41 )
    {
      v24 = v47;
      v25 = v39;
      v26 = v40;
      do
      {
        v27 = (volatile signed __int32 *)(v22 - 27);
        v28 = *(v22 - 18);
        v22 = (_QWORD *)*v22;
        v41 = (_QWORD *)v28;
        LOBYTE(v47) = 0;
        v38 = 0;
        while ( _interlockedbittestandset64(v27 + 16, 0LL) )
        {
          do
            KeYieldProcessorEx(&v38);
          while ( *((_QWORD *)v27 + 8) );
        }
        v29 = *((char *)v27 + 195);
        if ( v24 - *((_DWORD *)v27 + 109) > 0 && v29 < v25 )
        {
          LOBYTE(v47) = 1;
          KiSetPriorityBoost(0, (_DWORD)v27, v25, (_DWORD)v41, v26);
        }
        v20 = (_BYTE)v47 == 0;
        *((_QWORD *)v27 + 8) = 0LL;
        if ( !v20 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
          EtwTraceAntiStarvationBoost(v27, (unsigned int)v29, (unsigned int)v25);
        LOBYTE(v3) = KiDeferredReadyThread(a1);
      }
      while ( v22 );
      v4 = v45;
      v6 = v36;
      v7 = v35;
      v11 = v42;
    }
    if ( v11 && v7 )
    {
      v23 = a3;
    }
    else
    {
      v23 = a3;
      LODWORD(v3) = v37 + 1;
      if ( a3 )
      {
        if ( (unsigned int)v3 <= 9 )
          v6 = v37 + 1;
      }
      else
      {
        if ( (unsigned int)v3 > 0xE )
          LOBYTE(v3) = v6;
        v6 = v3;
      }
    }
    if ( v23 )
      goto LABEL_31;
LABEL_32:
    *(_BYTE *)(v4 + 706) = v6;
    return v3;
  }
  if ( _bittest(&KiVelocityFlags, 0x15u) )
  {
    _m_prefetchw(&v34);
    v3 = v34;
    if ( !(_QWORD)v34 )
    {
      v3 = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v34 + 1), 0LL, (signed __int64)&v34);
      if ( (__int128 *)v3 == &v34 )
        goto LABEL_31;
      v3 = KxWaitForLockChainValid((__int64 *)&v34, a2, 0LL);
    }
    *(_QWORD *)&v34 = 0LL;
    v31 = BYTE8(v34);
    LOBYTE(v3) = v31 ^ _InterlockedExchange64((volatile __int64 *)(v3 + 8), *((__int64 *)&v34 + 1));
    if ( (v3 & 4) != 0 )
      LOBYTE(v3) = KeWakeAddressAll();
    goto LABEL_31;
  }
  _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
LABEL_31:
  *(_BYTE *)(v4 + 707) = v6;
  return v3;
}
