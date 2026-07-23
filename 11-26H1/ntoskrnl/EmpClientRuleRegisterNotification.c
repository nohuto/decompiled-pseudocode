/*
 * XREFs of EmpClientRuleRegisterNotification @ 0x14078F814
 * Callers:
 *     EmClientRuleRegisterNotification @ 0x14078F7F0 (EmClientRuleRegisterNotification.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     EmpSearchTargetRuleList @ 0x14047A4FC (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x14047D298 (EmpSearchRuleDatabase.c)
 *     EmpQueueRuleUpdateState @ 0x1405B72E0 (EmpQueueRuleUpdateState.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EmpClientRuleRegisterNotification(void *a1, __int64 a2, unsigned int a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r14
  unsigned int v8; // edi
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rbx
  _KTHREAD *Pool2; // rsi
  __int64 v13; // rax
  __int64 i; // rbp
  __int64 v15; // r11
  _QWORD *v16; // rcx
  struct _LIST_ENTRY **v17; // rax
  volatile signed __int32 *v18; // rax
  struct _KLOCK_ENTRIES *v19; // r9
  __int64 v20; // r10
  __int64 v21; // r11
  __int64 v22; // rdx
  struct _LIST_ENTRY **v23; // rcx
  struct _LIST_ENTRY *v24; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  volatile signed __int32 *v28; // rax

  v4 = a3;
  v8 = 0;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.QuantumTarget, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.QuantumTarget, 0LL) )
    ExfAcquirePushLockExclusiveEx(&EmpParseLock.QuantumTarget, v9, (__int64)&EmpParseLock.QuantumTarget);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( a4 && (_DWORD)v4 && a2 )
  {
    Pool2 = (_KTHREAD *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v13 = ExAllocatePool2(0x100uLL);
      Pool2->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v13;
      if ( v13 )
      {
        LODWORD(Pool2->Header.WaitListHead.Blink) = v4;
        for ( i = 0LL; (unsigned int)i < (unsigned int)v4; i = (unsigned int)(i + 1) )
        {
          v15 = (unsigned int)i + 2 * i;
          v16 = *(_QWORD **)(a2 + 8 * v15);
          if ( !v16 || !*(_QWORD *)(a2 + 8 * v15 + 8) )
          {
            v8 = -1073741811;
            goto LABEL_27;
          }
          v17 = EmpSearchRuleDatabase(v16);
          if ( !v17 || (v18 = (volatile signed __int32 *)EmpSearchTargetRuleList((__int64)v17)) == 0LL )
          {
            v8 = -1073741275;
            goto LABEL_27;
          }
          v22 = (unsigned int)i + 4 * i;
          *((_QWORD *)&Pool2->Header.WaitListHead.Flink->Flink + v22) = v18;
          *((_QWORD *)&Pool2->Header.WaitListHead.Flink->Blink + v22) = *(_QWORD *)(a2 + 8 * v21 + 8);
          *((_QWORD *)&Pool2->Header.WaitListHead.Flink[1].Flink + v22) = *(_QWORD *)(a2 + 8 * v21 + 16);
          v23 = &Pool2->Header.WaitListHead.Flink[1].Blink + v22;
          v24 = *(struct _LIST_ENTRY **)(v20 + 88);
          if ( v24->Flink != (struct _LIST_ENTRY *)(v20 + 80) )
            __fastfail(3u);
          *v23 = (struct _LIST_ENTRY *)(v20 + 80);
          v23[1] = v24;
          v24->Flink = (struct _LIST_ENTRY *)v23;
          *(_QWORD *)(v20 + 88) = v23;
          if ( _InterlockedIncrement(v18) == 1 )
            EmpQueueRuleUpdateState(v20, 0LL, (__int64)v18, v19);
        }
        if ( a1 )
          PsReferenceSiloContext(a1);
        *(_QWORD *)&Pool2->Header.Lock = a1;
        a4->Thread = Pool2;
      }
      else
      {
        v8 = -1073741670;
LABEL_27:
        Flink = Pool2->Header.WaitListHead.Flink;
        if ( Flink )
        {
          v26 = 0LL;
          v27 = v4;
          do
          {
            v28 = *(volatile signed __int32 **)((char *)&Flink->Flink + v26);
            if ( v28 )
            {
              _InterlockedAdd(v28, 0xFFFFFFFF);
              Flink = Pool2->Header.WaitListHead.Flink;
            }
            v26 += 40LL;
            --v27;
          }
          while ( v27 );
          ExFreePoolWithTag(Flink, 0x6C634D45u);
        }
        ExFreePoolWithTag(Pool2, 0x6C634D45u);
      }
    }
    else
    {
      v8 = -1073741670;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock.QuantumTarget, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock.QuantumTarget);
  KeAbPostRelease((unsigned __int64)&EmpParseLock.QuantumTarget);
  return v8;
}
