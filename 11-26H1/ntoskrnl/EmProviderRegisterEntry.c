/*
 * XREFs of EmProviderRegisterEntry @ 0x14078FD70
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     EmpQueueRuleUpdateState @ 0x1405B72E0 (EmpQueueRuleUpdateState.c)
 *     EmpSearchEntryDatabase @ 0x1405B768C (EmpSearchEntryDatabase.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EmProviderRegisterEntry(__int64 a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v8; // rdi
  int v9; // ebx
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rsi
  _QWORD *v13; // rbp
  __int64 i; // rdx
  _QWORD *v15; // r8
  __int64 v16; // rcx
  __int64 Pool2; // rax
  void *v18; // rax
  __int64 v19; // r8
  struct _KLOCK_ENTRIES *v20; // r9
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rsi
  void *v26; // rcx

  v8 = 0LL;
  v9 = 0;
  v10 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.QuantumTarget, 0LL, 0LL, a4);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.QuantumTarget, 0LL) )
    ExfAcquirePushLockExclusiveEx(&EmpParseLock.QuantumTarget, v10, (__int64)&EmpParseLock.QuantumTarget);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  if ( a2 && a1 && a3 && a4 && *(_QWORD *)a3 && *(_DWORD *)(a3 + 8) )
  {
    v13 = EmpSearchEntryDatabase(a2);
    if ( !v13 )
    {
      v9 = -1073741275;
      goto LABEL_32;
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
    {
      v15 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 8 * i);
      v16 = *v15 - *a2;
      if ( *v15 == *a2 )
        v16 = v15[1] - a2[1];
      if ( !v16 )
      {
        Pool2 = ExAllocatePool2(0x100uLL);
        v8 = Pool2;
        if ( Pool2
          && (*(_QWORD *)Pool2 = v13,
              *(_DWORD *)(Pool2 + 16) = *(_DWORD *)(a3 + 8),
              v18 = (void *)ExAllocatePool2(0x100uLL),
              (*(_QWORD *)(v8 + 8) = v18) != 0LL) )
        {
          memmove(v18, *(const void **)a3, *(unsigned int *)(v8 + 16));
          v21 = *(_QWORD **)(a1 + 64);
          v22 = (_QWORD *)(v8 + 40);
          if ( *v21 != a1 + 56
            || (*v22 = a1 + 56,
                *(_QWORD *)(v8 + 48) = v21,
                *v21 = v22,
                *(_QWORD *)(a1 + 64) = v22,
                v23 = (_QWORD *)v13[6],
                v24 = (_QWORD *)(v8 + 24),
                (_QWORD *)*v23 != v13 + 5) )
          {
            __fastfail(3u);
          }
          *v24 = v13 + 5;
          *(_QWORD *)(v8 + 32) = v23;
          *v23 = v24;
          v13[6] = v24;
          v25 = (_QWORD *)v13[9];
          v13[4] = v24;
          while ( v25 )
          {
            EmpQueueRuleUpdateState(*(v25 - 1), (__int64)v13, v19, v20);
            v25 = (_QWORD *)*v25;
          }
          a4->Thread = (_KTHREAD *)v8;
        }
        else
        {
          v9 = -1073741670;
        }
        goto LABEL_32;
      }
    }
  }
  v9 = -1073741811;
LABEL_32:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock.QuantumTarget, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock.QuantumTarget);
  KeAbPostRelease((unsigned __int64)&EmpParseLock.QuantumTarget);
  if ( v9 < 0 && v8 )
  {
    v26 = *(void **)(v8 + 8);
    if ( v26 )
      ExFreePoolWithTag(v26, 0x72704D45u);
    ExFreePoolWithTag((PVOID)v8, 0x72704D45u);
  }
  return (unsigned int)v9;
}
