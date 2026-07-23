/*
 * XREFs of KiNormalPriorityReadyScan @ 0x1403C90A4
 * Callers:
 *     KiRetireDpcList @ 0x140337730 (KiRetireDpcList.c)
 * Callees:
 *     KiDeferredReadyThread @ 0x140230D00 (KiDeferredReadyThread.c)
 *     KiRemoveThreadFromReadyQueue @ 0x140232008 (KiRemoveThreadFromReadyQueue.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiInsertDeferredReadyList @ 0x140307900 (KiInsertDeferredReadyList.c)
 *     KiScanSharedReadyThreads @ 0x1403C93BC (KiScanSharedReadyThreads.c)
 *     KiShouldScanLocalReadyQueue @ 0x1403C98A8 (KiShouldScanLocalReadyQueue.c)
 *     KiShouldScanSharedReadyQueue @ 0x1403C98C8 (KiShouldScanSharedReadyQueue.c)
 *     KiSetPriorityBoost @ 0x1403C9908 (KiSetPriorityBoost.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1403CA394 (KiReadGuestSchedulerAssistPriority.c)
 *     EtwTraceAntiStarvationBoost @ 0x140531784 (EtwTraceAntiStarvationBoost.c)
 */

__int64 __fastcall KiNormalPriorityReadyScan(struct _KPRCB *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rcx
  int v7; // edi
  unsigned int NormalPriorityQueueIndex; // ecx
  int v9; // r13d
  int v10; // r12d
  int v11; // r11d
  unsigned int v12; // edi
  unsigned int v13; // eax
  unsigned __int8 v14; // r8
  _LIST_ENTRY *v15; // rdi
  _LIST_ENTRY *Flink; // r15
  struct _LIST_ENTRY **p_Blink; // rsi
  _LIST_ENTRY *v18; // rdx
  bool v19; // cl
  bool v20; // zf
  int v21; // r14d
  _QWORD *v22; // rsi
  int v23; // ecx
  int v24; // r13d
  volatile signed __int32 *v25; // rdi
  __int64 v26; // rcx
  char v27; // r15
  int v28; // r14d
  int GuestSchedulerAssistPriority; // eax
  int v30; // [rsp+30h] [rbp-30h]
  char v31; // [rsp+34h] [rbp-2Ch]
  int v32; // [rsp+38h] [rbp-28h]
  int v33; // [rsp+3Ch] [rbp-24h]
  __int64 v34; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v35; // [rsp+48h] [rbp-18h] BYREF
  __int128 v36; // [rsp+50h] [rbp-10h]
  int v37; // [rsp+A8h] [rbp+48h] BYREF
  int v38; // [rsp+B0h] [rbp+50h]
  _LIST_ENTRY *v39; // [rsp+B8h] [rbp+58h]

  v34 = 0LL;
  if ( (unsigned int)KiShouldScanSharedReadyQueue(a1) )
  {
    v4 = *(_QWORD *)(v2 + 36488);
    if ( (*(_DWORD *)(v4 + 8) & 0x300) != 0 )
    {
      LOBYTE(v3) = 1;
      KiScanSharedReadyThreads(v2, v4, v3);
    }
  }
  result = KiShouldScanLocalReadyQueue(a1);
  if ( (_DWORD)result )
  {
    KiAcquirePrcbLocksForIsolationUnit(v6, 0, (unsigned __int64 *)&v34);
    v7 = a1->ReadySummary & 0x300;
    if ( v7 )
    {
      NormalPriorityQueueIndex = a1->NormalPriorityQueueIndex;
      v9 = 16;
      v10 = KiNormalPriorityBoostMaximumThreadReadyCount;
      v36 = 0LL;
      v11 = MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks;
      v32 = KiCyclesPerClockQuantum * KiNormalPriorityBoostingPeriodMultiplier;
      v31 = NormalPriorityQueueIndex;
      v35 = 0LL;
      v37 = MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks;
      v12 = __ROR4__(v7, NormalPriorityQueueIndex);
      do
      {
        _BitScanForward(&v13, v12);
        v30 = v12 ^ (1 << v13);
        v14 = (v13 + NormalPriorityQueueIndex) & 0x1F;
        v38 = v14;
        v15 = &a1->DispatcherReadyListHead[v14];
        Flink = v15->Flink;
        do
        {
          p_Blink = &Flink[-14].Blink;
          v18 = Flink;
          Flink = Flink->Flink;
          v19 = 0;
          v20 = ((_DWORD)p_Blink[15] & 0x400000) == 0;
          v39 = v18;
          if ( !v20 )
          {
            GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(p_Blink, 0LL);
            v18 = v39;
            v14 = v38;
            v19 = GuestSchedulerAssistPriority != *((_DWORD *)p_Blink + 256);
            v11 = v37;
          }
          v21 = v11 - *((_DWORD *)p_Blink + 109);
          if ( v21 > 0 || v19 )
          {
            KiRemoveThreadFromReadyQueue((__int64)a1, v18, v14);
            KiInsertDeferredReadyList((__int64 *)&v35, (__int64)p_Blink);
            v11 = v37;
            if ( v21 > 0 )
              --v10;
          }
          --v9;
          if ( Flink == v15 )
            break;
          if ( !v10 )
            break;
          v14 = v38;
        }
        while ( v9 );
        v12 = v30;
        v33 = v9;
        LODWORD(v39) = v10;
        if ( !v30 )
          break;
        if ( !v10 )
          break;
        LOBYTE(NormalPriorityQueueIndex) = v31;
      }
      while ( v9 );
      v22 = v35;
      if ( v35 )
      {
        KiReleasePrcbLocksForIsolationUnit(&v34);
        v24 = v37;
        do
        {
          v25 = (volatile signed __int32 *)(v22 - 27);
          v37 = 0;
          v26 = *(v22 - 18);
          v27 = 0;
          v22 = (_QWORD *)*v22;
          v35 = (_QWORD *)v26;
          while ( _interlockedbittestandset64(v25 + 16, 0LL) )
          {
            do
              KeYieldProcessorEx(&v37);
            while ( *((_QWORD *)v25 + 8) );
          }
          v28 = *((char *)v25 + 195);
          if ( v24 - *((_DWORD *)v25 + 109) > 0 && v28 < 11 )
          {
            v27 = 1;
            KiSetPriorityBoost(0, (_DWORD)v25, 11, (_DWORD)v35, v32);
          }
          *((_QWORD *)v25 + 8) = 0LL;
          if ( v27 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
            EtwTraceAntiStarvationBoost(v25, (unsigned int)v28, 11LL);
          KiDeferredReadyThread(a1);
        }
        while ( v22 );
        KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 1, (unsigned __int64 *)&v34);
        v10 = (int)v39;
        v9 = v33;
      }
      if ( v9 && v10 )
      {
        v23 = 8;
      }
      else
      {
        v23 = 8;
        if ( (unsigned int)(v38 + 1) <= 9 )
          v23 = v38 + 1;
      }
      a1->NormalPriorityQueueIndex = v23;
    }
    a1->NormalPriorityReadyScanTick = KiNormalPriorityBoostScanLatencyTicks + MEMORY[0xFFFFF78000000320];
    return KiReleasePrcbLocksForIsolationUnit(&v34);
  }
  return result;
}
