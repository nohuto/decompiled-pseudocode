/*
 * XREFs of EmpProviderRegister @ 0x140B5B680
 * Callers:
 *     EmProviderRegister @ 0x14078FD30 (EmProviderRegister.c)
 *     HalRegisterErrataCallbacks @ 0x140C86000 (HalRegisterErrataCallbacks.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 *     EmInitSystem @ 0x140D0DE84 (EmInitSystem.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     EmpQueueRuleUpdateState @ 0x1405B72E0 (EmpQueueRuleUpdateState.c)
 *     EmpSearchCallbackDatabase @ 0x1405B7654 (EmpSearchCallbackDatabase.c)
 *     EmpSearchEntryDatabase @ 0x1405B768C (EmpSearchEntryDatabase.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EmpProviderRegister(
        void *a1,
        __int64 a2,
        unsigned int a3,
        struct _KLOCK_ENTRIES *a4,
        unsigned int a5,
        __int64 *a6)
{
  __int64 v6; // rbp
  void *v8; // r14
  unsigned int v10; // r13d
  unsigned int v11; // edi
  AutoBoost *v12; // rax
  void *v13; // rdx
  signed __int8 v14; // cf
  AutoBoost *v15; // rbx
  __int64 Pool2; // rax
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  __int64 v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 i; // r10
  __int64 v26; // r14
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // r10
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 **v34; // rcx
  __int64 *v35; // rax
  __int64 v36; // rax
  __int64 v37; // r10
  __int64 v38; // rbp
  _QWORD *v39; // rcx
  unsigned __int8 *v40; // rax
  __int64 v41; // r10
  __int64 v42; // r11
  unsigned __int8 *v43; // rcx
  __int64 v44; // rax
  void *v45; // rcx
  unsigned int v46; // edx
  _QWORD *v47; // r8
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 j; // rbp
  __int64 v54; // rdx
  _QWORD *k; // rsi
  __int64 m; // rbp
  __int64 v57; // rdx
  _QWORD *n; // rsi

  v6 = a3;
  v8 = a1;
  v10 = 0;
  v11 = 0;
  v12 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.QuantumTarget, 0LL, 0LL, a4);
  v14 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.QuantumTarget, 0LL);
  v15 = v12;
  if ( v14 )
    ExfAcquirePushLockExclusiveEx(&EmpParseLock.QuantumTarget, v12, (__int64)&EmpParseLock.QuantumTarget);
  if ( v15 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v15, v13);
    else
      *((_BYTE *)v15 + 10) = 1;
  }
  if ( !a6 || (_DWORD)v6 && !a2 || a5 && !a4 )
  {
    v11 = -1073741811;
    goto LABEL_78;
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  v19 = Pool2;
  if ( !Pool2 )
  {
    v11 = -1073741670;
    goto LABEL_78;
  }
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  *(_DWORD *)(Pool2 + 48) = 0;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_DWORD *)(Pool2 + 16) = 0;
  v20 = (_QWORD *)(Pool2 + 56);
  v20[1] = v20;
  *v20 = v20;
  if ( !(_DWORD)v6 )
    goto LABEL_32;
  v21 = ExAllocatePool2(0x100uLL);
  *(_QWORD *)(v19 + 8) = v21;
  if ( !v21 )
    goto LABEL_16;
  *(_DWORD *)(v19 + 16) = v6;
  v22 = (_QWORD *)(a2 + 8);
  v23 = v6;
  do
  {
    if ( *v22 )
      ++*(_DWORD *)(v19 + 32);
    v22 += 3;
    --v23;
  }
  while ( v23 );
  if ( *(_DWORD *)(v19 + 32) )
  {
    v24 = ExAllocatePool2(0x100uLL);
    *(_QWORD *)(v19 + 24) = v24;
    if ( !v24 )
      goto LABEL_16;
  }
  for ( i = 0LL; ; i = (unsigned int)(v29 + 1) )
  {
    if ( (unsigned int)i >= (unsigned int)v6 )
    {
      v8 = a1;
LABEL_32:
      if ( !a5 )
      {
LABEL_64:
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v19 + 16); j = (unsigned int)(j + 1) )
        {
          v54 = *(_QWORD *)(*(_QWORD *)(v19 + 8) + 8 * j);
          _InterlockedIncrement((volatile signed __int32 *)(v54 + 16));
          for ( k = *(_QWORD **)(v54 + 72); k; k = (_QWORD *)*k )
            EmpQueueRuleUpdateState(*(k - 1), 0LL, v17, v18);
        }
        for ( m = 0LL; (unsigned int)m < *(_DWORD *)(v19 + 48); m = (unsigned int)(m + 1) )
        {
          v57 = *(_QWORD *)(*(_QWORD *)(v19 + 40) + 8 * m);
          _InterlockedIncrement((volatile signed __int32 *)(v57 + 24));
          for ( n = *(_QWORD **)(v57 + 48); n; n = (_QWORD *)*n )
            EmpQueueRuleUpdateState(*(n - 1), 0LL, v17, v18);
        }
        if ( v8 )
          PsReferenceSiloContext(v8);
        *(_QWORD *)v19 = v8;
        *a6 = v19;
        goto LABEL_78;
      }
      v36 = ExAllocatePool2(0x100uLL);
      *(_QWORD *)(v19 + 40) = v36;
      if ( v36 )
      {
        *(_DWORD *)(v19 + 48) = a5;
        v37 = 0LL;
        while ( (unsigned int)v37 < a5 )
        {
          v38 = *((_QWORD *)&a4->AvailableEntryBitmap + 3 * v37);
          if ( !v38 )
            goto LABEL_44;
          v39 = (_QWORD *)*((_QWORD *)&a4->Thread + 3 * v37);
          if ( !v39 )
            goto LABEL_44;
          v40 = EmpSearchCallbackDatabase(v39);
          v43 = v40;
          if ( !v40 )
            goto LABEL_43;
          v44 = *((_QWORD *)v40 + 2);
          if ( v44 && v44 != v38 )
          {
            v11 = -1073741771;
            goto LABEL_45;
          }
          *(_QWORD *)(*(_QWORD *)(v19 + 40) + 8 * v41) = v43;
          v37 = (unsigned int)(v41 + 1);
          *((_QWORD *)v43 + 2) = *((_QWORD *)&a4->AvailableEntryBitmap + v42);
          *((_QWORD *)v43 + 4) = *((_QWORD *)&a4->Entries[0].LockState.0 + v42);
        }
        v8 = a1;
        goto LABEL_64;
      }
LABEL_16:
      v11 = -1073741670;
      goto LABEL_45;
    }
    v26 = 3 * i;
    v27 = *(_QWORD **)(a2 + 24 * i);
    if ( !v27 )
      break;
    v28 = EmpSearchEntryDatabase(v27);
    v17 = (__int64)v28;
    if ( !v28 )
    {
LABEL_43:
      v11 = -1073741275;
      goto LABEL_45;
    }
    *(_QWORD *)(*(_QWORD *)(v19 + 8) + 8 * v29) = v28;
    v30 = *(_QWORD *)(a2 + 8 * v26 + 8);
    if ( v30 )
    {
      v31 = *(_QWORD *)(v19 + 24);
      v17 += 56LL;
      v32 = 32LL * v10;
      *(_QWORD *)(v32 + v31) = v30;
      *(_QWORD *)(v32 + v31 + 8) = *(_QWORD *)(a2 + 8 * v26 + 16);
      v33 = v31 + 16;
      v34 = *(__int64 ***)(v17 + 8);
      v35 = (__int64 *)(v32 + v33);
      if ( *v34 != (__int64 *)v17 )
        goto LABEL_62;
      *v35 = v17;
      ++v10;
      v35[1] = (__int64)v34;
      *v34 = v35;
      *(_QWORD *)(v17 + 8) = v35;
    }
  }
LABEL_44:
  v11 = -1073741811;
LABEL_45:
  v45 = *(void **)(v19 + 8);
  if ( v45 )
    ExFreePoolWithTag(v45, 0x72704D45u);
  if ( *(_QWORD *)(v19 + 24) )
  {
    v46 = 0;
    if ( v10 )
    {
      while ( 1 )
      {
        v47 = (_QWORD *)(32LL * v46 + *(_QWORD *)(v19 + 24) + 16LL);
        v48 = *v47;
        if ( *(_QWORD **)(*v47 + 8LL) != v47 )
          break;
        v49 = (_QWORD *)v47[1];
        if ( (_QWORD *)*v49 != v47 )
          break;
        ++v46;
        *v49 = v48;
        *(_QWORD *)(v48 + 8) = v49;
        if ( v46 >= v10 )
          goto LABEL_52;
      }
LABEL_62:
      __fastfail(3u);
    }
LABEL_52:
    ExFreePoolWithTag(*(PVOID *)(v19 + 24), 0x72704D45u);
  }
  if ( *(_QWORD *)(v19 + 40) )
  {
    if ( a5 )
    {
      v50 = 0LL;
      v51 = a5;
      do
      {
        v52 = *(_QWORD *)(v50 + *(_QWORD *)(v19 + 40));
        if ( v52 && !*(_DWORD *)(v52 + 24) )
          *(_QWORD *)(v52 + 16) = 0LL;
        v50 += 8LL;
        --v51;
      }
      while ( v51 );
    }
    ExFreePoolWithTag(*(PVOID *)(v19 + 40), 0x72704D45u);
  }
  ExFreePoolWithTag((PVOID)v19, 0x72704D45u);
LABEL_78:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock.QuantumTarget, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock.QuantumTarget);
  KeAbPostRelease((unsigned __int64)&EmpParseLock.QuantumTarget);
  return v11;
}
