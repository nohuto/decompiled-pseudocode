/*
 * XREFs of KiRcuFlushCompleted @ 0x140503B7C
 * Callers:
 *     KiCheckWaitNext @ 0x1402200D0 (KiCheckWaitNext.c)
 *     KiRcuCheckQuiescent @ 0x140221E10 (KiRcuCheckQuiescent.c)
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KiRcuFlushCompletedDpcRoutine @ 0x140503B60 (KiRcuFlushCompletedDpcRoutine.c)
 *     KiRcuStartGracePeriod @ 0x1405242A4 (KiRcuStartGracePeriod.c)
 *     KiRcuFlushCompletedWorkerRoutine @ 0x1405F0100 (KiRcuFlushCompletedWorkerRoutine.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402642B0 (KeGetEffectiveIrql.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxTryToAcquireSpinLock @ 0x140330C68 (KxTryToAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     KeSignalGate @ 0x1403C2AD0 (KeSignalGate.c)
 *     KiSrcuCompareGraceSequence @ 0x1404D9AC0 (KiSrcuCompareGraceSequence.c)
 *     KiRcuRebalance @ 0x1405F014C (KiRcuRebalance.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall KiRcuFlushCompleted(int a1)
{
  unsigned __int8 EffectiveIrql; // al
  unsigned __int64 v3; // rbx
  int v4; // edi
  __int64 v5; // r11
  __int64 *i; // r8
  __int64 v7; // r8
  _QWORD **v8; // r9
  __int64 *v9; // r10
  __int64 v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // [rsp+30h] [rbp-18h] BYREF
  _QWORD **v18; // [rsp+38h] [rbp-10h]

  EffectiveIrql = KeGetEffectiveIrql();
  v3 = EffectiveIrql;
  if ( EffectiveIrql > 2u )
  {
    KiInsertQueueDpc((ULONG_PTR)&dword_140F24F40, 0LL, 0LL, 0LL, 0);
    return;
  }
  v4 = 0;
  v18 = &v17;
  v17 = &v17;
  if ( a1 )
    v4 = KiRcuRebalance();
  if ( (unsigned __int8)v3 < 2u )
  {
    KeAcquireSpinLockRaiseToDpc(&qword_140F24F18);
  }
  else if ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&qword_140F24F18) )
  {
LABEL_34:
    _InterlockedOr(&dword_140F24FA0, 2u);
    if ( _InterlockedCompareExchange(&dword_140F24FA0, 3, 2) == 2 )
      ExQueueWorkItem(&stru_140F24F80, CriticalWorkQueue);
    return;
  }
  v5 = qword_140F24F20;
  for ( i = (__int64 *)qword_140F24F30;
        i != &qword_140F24F30 && (int)KiSrcuCompareGraceSequence(v5, i[2]) >= 0;
        i = *(__int64 **)v7 )
  {
    if ( v3 > (*(_QWORD *)(v7 + 24) & 3uLL) )
      v4 = 1;
    if ( a1 || (*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFFCuLL) <= 8 )
    {
      v10 = *v9;
      v11 = (_QWORD *)(v7 + 8);
      v7 = *(_QWORD *)(v7 + 8);
      if ( *(_QWORD ***)(*v9 + 8) != v8
        || *(_QWORD ***)v7 != v8
        || (*(_QWORD *)v7 = v10, *(_QWORD *)(v10 + 8) = v7, v12 = v18, *v18 != &v17) )
      {
LABEL_32:
        __fastfail(3u);
      }
      *v11 = v18;
      *v9 = (__int64)&v17;
      *v12 = v8;
      v18 = v8;
    }
    else
    {
      v4 = 1;
    }
  }
  if ( (unsigned __int8)v3 < 2u )
    KeReleaseSpinLock(&qword_140F24F18, v3);
  else
    KxReleaseSpinLock(&qword_140F24F18);
  while ( 1 )
  {
    v14 = v17;
    if ( v17 == &v17 )
      break;
    v15 = *v17;
    if ( *(_QWORD **)(*v17 + 8LL) != v17 )
      goto LABEL_32;
    v16 = (_QWORD *)v17[1];
    if ( (_QWORD *)*v16 != v17 )
      goto LABEL_32;
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    if ( v14[3] >> 2 == 1LL )
    {
      KeSignalGate(v14[4], 0LL, v13);
    }
    else if ( v14[3] >> 2 == 3LL )
    {
      ExFreePoolWithTag((PVOID)v14[4], 0);
    }
    else
    {
      guard_dispatch_icall_no_overrides(v14[4], v14[5]);
    }
  }
  if ( v4 )
    goto LABEL_34;
}
