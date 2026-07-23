/*
 * XREFs of KiCommitThreadWait @ 0x140224340
 * Callers:
 *     KeRemoveQueueEx @ 0x1402224F0 (KeRemoveQueueEx.c)
 *     KeWaitForAlertByThreadId @ 0x140223DF0 (KeWaitForAlertByThreadId.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x1403CAD68 (KiWaitForAllObjects.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     KeRemovePriQueue @ 0x1403EF700 (KeRemovePriQueue.c)
 * Callees:
 *     KiProcessThreadWaitList @ 0x14023D710 (KiProcessThreadWaitList.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     KiExitThreadWait @ 0x1402470E0 (KiExitThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiInsertTimerTable @ 0x1403B6998 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x1403B6C5C (KiTimerWaitTest.c)
 *     KiComputeDueTime @ 0x1403B7DD0 (KiComputeDueTime.c)
 *     KiTraceSetTimer @ 0x1403E8F38 (KiTraceSetTimer.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1403EFFA0 (KiActivateWaiterQueueWithThreadLock.c)
 *     KiPerformWaitDeferredWork @ 0x1403F08D0 (KiPerformWaitDeferredWork.c)
 *     KiInsertPrcbWaitEntry @ 0x14040C950 (KiInsertPrcbWaitEntry.c)
 *     KiDecrementProcessStackCount @ 0x140410010 (KiDecrementProcessStackCount.c)
 *     KiIncrementConcurrencyCount @ 0x140440B30 (KiIncrementConcurrencyCount.c)
 *     PsTimerResolutionActive @ 0x14044E890 (PsTimerResolutionActive.c)
 */

__int64 __fastcall KiCommitThreadWait(LegacyAutoBoost *this, __int64 *a2, int a3, __int64 a4, int a5, _QWORD *a6)
{
  char *v7; // r14
  __int64 v8; // r8
  char v10; // r13
  int v12; // eax
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v14; // rdx
  BOOL v15; // r12d
  unsigned int v16; // esi
  char v17; // al
  __int64 v18; // r8
  __int64 v19; // r14
  __int64 *v20; // rsi
  volatile signed __int32 *v21; // rbp
  __int64 *v22; // rcx
  __int64 **v23; // rax
  int v25; // esi
  char v26; // di
  __int64 v27; // rax
  __int64 v28; // r12
  unsigned __int64 v29; // rax
  int v30; // r9d
  bool v31; // cl
  __int64 v32; // r8
  __int64 v33; // rcx
  unsigned int v34; // esi
  bool v35; // zf
  __int64 v36; // rax
  int v37; // eax
  int v38; // [rsp+30h] [rbp-58h]
  int v39; // [rsp+90h] [rbp+8h] BYREF
  int v40; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v41; // [rsp+A8h] [rbp+20h]

  v41 = a4;
  v7 = (char *)this + 256;
  v8 = 0LL;
  v39 = 0;
  v10 = 0;
  v40 = 0;
  _m_prefetchw((char *)this + 112);
  if ( a3 )
  {
    *((_DWORD *)this + 29) |= 0x200u;
    *(_DWORD *)v7 |= 0x40000080u;
  }
  v12 = *((_DWORD *)this + 30);
  if ( (v12 & 0x400000) != 0 )
    *((_DWORD *)this + 290) = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 1LL;
  *((_QWORD *)this + 26) = a2;
  v15 = *((_BYTE *)this + 391) && (v12 & 0x40) != 0 && *((char *)this + 195) < 25;
  v16 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)this + 16, 0LL) )
  {
    do
    {
      if ( (++v16 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(this, v14, v8) )
      {
        HvlNotifyLongSpinWait(v16);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *((_QWORD *)this + 8) );
  }
  v17 = *((_BYTE *)this + 112);
  if ( (v17 & 0xE7) == 0 )
  {
    *((_BYTE *)this + 112) = v17 & 0xF8 | 1;
    KiPerformWaitDeferredWork((ULONG_PTR)this);
    if ( v15 )
      KiInsertPrcbWaitEntry(this, CurrentPrcb);
    if ( (*((_DWORD *)this + 30) & 0x1000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)this + 30, 0xCu);
    v25 = v40;
    if ( (*((_DWORD *)this + 29) & 0x80000) != 0
      && (*((_DWORD *)this + 30) & 0x4000) != 0
      && !_interlockedbittestandset((volatile signed __int32 *)this + 30, 0x14u) )
    {
      v25 = 1;
    }
    v26 = 0;
    if ( a3 != 2
      || (v27 = *((unsigned int *)this + 238), !*((_BYTE *)this + 391))
      || *((_DWORD *)this + 121)
      || *((_BYTE *)this + 390) )
    {
      v28 = v41;
    }
    else
    {
      v28 = v41;
      if ( !*((_BYTE *)this + 192) )
      {
        v26 = 1;
        if ( (_DWORD)v27 )
          v28 = v27 + v41;
      }
    }
    if ( *((_BYTE *)this + 643) != 15 && *((_QWORD *)this + 29) )
      KiActivateWaiterQueueWithThreadLock(this);
    else
      *((_QWORD *)this + 8) = 0LL;
    if ( v25 )
      KiDecrementProcessStackCount(*((_QWORD *)this + 23));
    *((_BYTE *)this + 565) = 0;
    if ( !a3 )
      return KiSwapThread(this, CurrentPrcb);
    if ( a3 == 2 )
    {
      v29 = v28 + *((_QWORD *)this + 31) + MEMORY[0xFFFFF780000003B0];
      *((_QWORD *)v7 + 3) = v29;
      v30 = (unsigned __int8)(v29 >> 18);
      v38 = *(_DWORD *)v7;
      BYTE1(v38) = BYTE1(*(_DWORD *)v7) & 0xFE;
      BYTE2(v38) = v29 >> 18;
      *(_DWORD *)v7 = v38;
      if ( v26 )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 68) + 1792LL));
    }
    else
    {
      if ( !(unsigned int)KiComputeDueTime(v7, v28, 0LL, &v39) )
        goto LABEL_72;
      v30 = v39;
    }
    v31 = !KiGlobalTimerResolutionRequests && !(unsigned __int8)PsTimerResolutionActive(*((_QWORD *)this + 68));
    v7[58] = v31;
    if ( (unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, (_DWORD)v7, 0, v30, 0LL) )
    {
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      {
        LOBYTE(v32) = 1;
        KiTraceSetTimer(v7, 0LL, v32);
      }
      else
      {
        _InterlockedAnd((volatile signed __int32 *)v7, 0xFFFFFF7F);
      }
      return KiSwapThread(this, CurrentPrcb);
    }
LABEL_72:
    KiTimerWaitTest(CurrentPrcb, v7, 0LL);
    return KiSwapThread(this, CurrentPrcb);
  }
  if ( (v17 & 7) != 0 )
  {
    v18 = 0LL;
  }
  else if ( (v17 & 0x20) != 0 )
  {
    v18 = 0LL;
    *((_QWORD *)this + 25) = 256LL;
    *((_QWORD *)this + 122) = 0LL;
  }
  else
  {
    v35 = (v17 & 0x40) == 0;
    v10 = 1;
    v36 = 192LL;
    if ( v35 )
      v36 = 257LL;
    v18 = 0LL;
    *((_QWORD *)this + 25) = v36;
    *((_QWORD *)this + 122) = 0LL;
  }
  *((_BYTE *)this + 388) = 2;
  if ( *((_BYTE *)this + 643) == 15 )
  {
    v33 = *((_QWORD *)this + 29);
    if ( v33 )
      KiIncrementConcurrencyCount(v33, this, 0LL);
  }
  *((_QWORD *)this + 8) = v18;
  if ( a3 )
    *((_DWORD *)this + 29) &= ~0x200u;
  v19 = *((_QWORD *)this + 25);
  if ( a6 )
    *a6 = *((_QWORD *)this + 122);
  if ( v10 )
  {
    v34 = *((char *)this + 391);
    v40 = v18;
    while ( _interlockedbittestandset64((volatile signed __int32 *)this + 16, 0LL) )
    {
      do
        KeYieldProcessorEx(&v40);
      while ( *((_QWORD *)this + 8) );
    }
    if ( v19 == 257 )
    {
      if ( (*((_DWORD *)this + 29) & 0x10) != 0 )
      {
        v37 = *((unsigned __int8 *)this + 113);
        if ( _bittest(&v37, v34) )
        {
          *((_BYTE *)this + 113) = v37 & ~(1 << v34);
        }
        else if ( (_BYTE)v34 )
        {
          *((_BYTE *)this + 113) = v37 & 0xFE;
        }
      }
      else
      {
        _interlockedbittestandreset((volatile signed __int32 *)this + 30, 4u);
      }
    }
    else if ( *((LegacyAutoBoost **)this + 21) != (LegacyAutoBoost *)((char *)this + 168) )
    {
      *((_BYTE *)this + 194) |= 2u;
    }
    *((_QWORD *)this + 8) = 0LL;
  }
  v20 = &a2[6 * *((unsigned __int8 *)this + 587)];
  do
  {
    if ( *((_BYTE *)a2 + 17) < 5u )
    {
      v21 = (volatile signed __int32 *)a2[4];
      KiAcquireKobjectLockSafe(v21);
      if ( *((_BYTE *)a2 + 17) == 4 )
      {
        v22 = (__int64 *)*a2;
        v23 = (__int64 **)a2[1];
        if ( *(__int64 **)(*a2 + 8) != a2 || *v23 != a2 )
          __fastfail(3u);
        *v23 = v22;
        v22[1] = (__int64)v23;
      }
      _InterlockedAnd(v21, 0xFFFFFF7F);
    }
    a2 += 6;
  }
  while ( a2 != v20 );
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(CurrentPrcb, 1LL, 0LL);
  KiExitThreadWait(CurrentPrcb, (ULONG_PTR)this);
  return v19;
}
