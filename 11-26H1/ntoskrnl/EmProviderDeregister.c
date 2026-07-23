/*
 * XREFs of EmProviderDeregister @ 0x14078FAA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     EmpProviderDeregisterEntry @ 0x1405B7250 (EmpProviderDeregisterEntry.c)
 *     EmpQueueRuleUpdateState @ 0x1405B72E0 (EmpQueueRuleUpdateState.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EmProviderDeregister(char *P, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v5; // rax
  void *v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  signed __int8 v9; // cf
  AutoBoost *v10; // rbx
  unsigned int i; // edx
  _QWORD *v12; // r8
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 j; // rbp
  _QWORD *k; // rsi
  char *v17; // rsi
  char *v18; // rcx
  __int64 m; // rsi
  _QWORD *n; // r14
  void *v21; // rcx

  if ( P )
  {
    v5 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.QuantumTarget, 0LL, 0LL, a4);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.QuantumTarget, 0LL);
    v10 = v5;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&EmpParseLock.QuantumTarget, v5, (__int64)&EmpParseLock.QuantumTarget);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v6);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    if ( *((_QWORD *)P + 3) )
    {
      for ( i = 0; i < *((_DWORD *)P + 8); *(_QWORD *)(v13 + 8) = v14 )
      {
        v12 = (_QWORD *)(32LL * i + *((_QWORD *)P + 3) + 16LL);
        v13 = *v12;
        if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v14 = (_QWORD *)v12[1], (_QWORD *)*v14 != v12) )
          __fastfail(3u);
        *v14 = v13;
        ++i;
      }
      ExFreePoolWithTag(*((PVOID *)P + 3), 0x72704D45u);
    }
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)P + 4); j = (unsigned int)(j + 1) )
    {
      if ( _InterlockedExchangeAdd(
             (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)P + 1) + 8 * j) + 16LL),
             0xFFFFFFFF) == 1 )
      {
        for ( k = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)P + 1) + 8 * j) + 72LL); k; k = (_QWORD *)*k )
          EmpQueueRuleUpdateState(*(k - 1), 0LL, v7, v8);
      }
    }
    v17 = (char *)*((_QWORD *)P + 7);
    while ( v17 != P + 56 )
    {
      v18 = v17 - 40;
      v17 = *(char **)v17;
      EmpProviderDeregisterEntry(v18);
    }
    for ( m = 0LL; (unsigned int)m < *((_DWORD *)P + 12); m = (unsigned int)(m + 1) )
    {
      if ( _InterlockedExchangeAdd(
             (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)P + 5) + 8 * m) + 24LL),
             0xFFFFFFFF) == 1 )
      {
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 5) + 8 * m) + 16LL) = 0LL;
        for ( n = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)P + 5) + 8 * m) + 48LL); n; n = (_QWORD *)*n )
          EmpQueueRuleUpdateState(*(n - 1), 0LL, v7, v8);
      }
    }
    if ( *(_QWORD *)P )
      ObfDereferenceObject(*(PVOID *)P);
    v21 = (void *)*((_QWORD *)P + 5);
    if ( v21 )
      ExFreePoolWithTag(v21, 0x72704D45u);
    ExFreePoolWithTag(P, 0x72704D45u);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock.QuantumTarget, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock.QuantumTarget);
    KeAbPostRelease((unsigned __int64)&EmpParseLock.QuantumTarget);
  }
}
