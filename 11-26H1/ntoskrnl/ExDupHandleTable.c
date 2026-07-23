/*
 * XREFs of ExDupHandleTable @ 0x1409BD030
 * Callers:
 *     ObInitProcess @ 0x1409BCC28 (ObInitProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExGetHandlePointer @ 0x14044EE00 (ExGetHandlePointer.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExpUpdateDebugInfo @ 0x140908210 (ExpUpdateDebugInfo.c)
 *     ExpGetHandleExtraInfo @ 0x1409084AC (ExpGetHandleExtraInfo.c)
 *     ObpIncrementHandleCountEx @ 0x14090A400 (ObpIncrementHandleCountEx.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14092AE54 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14092AE90 (ExpLookupHandleTableEntry.c)
 *     ExCreateHandleTable @ 0x1409BCDDC (ExCreateHandleTable.c)
 *     ExpAllocateHandleTable @ 0x1409BCEF8 (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1409BD784 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpFreeHandleTable @ 0x1409BE364 (ExpFreeHandleTable.c)
 *     ExUnlockHandleTableEntry @ 0x140A4DFE0 (ExUnlockHandleTableEntry.c)
 *     ExpSetHandleExtraInfo @ 0x140A950FC (ExpSetHandleExtraInfo.c)
 *     EtwTraceDuplicateHandle @ 0x140AD3AE0 (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ExDupHandleTable(ULONG_PTR a1, volatile __int64 *a2, unsigned int a3, _BYTE *a4, PVOID *a5)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  PVOID *v7; // r13
  _BYTE *v8; // r12
  unsigned int v9; // r15d
  unsigned int *v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // rdx
  int v15; // r8d
  __int64 v16; // rax
  _BYTE *v17; // rcx
  unsigned int v19; // r11d
  int v20; // ebp
  _QWORD *v21; // r14
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r9
  __int64 v24; // r10
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r13
  __int64 v30; // r13
  unsigned int j; // esi
  char *v32; // rax
  _QWORD *v33; // rcx
  __int64 v34; // r12
  __int64 *v35; // r15
  _BYTE *v36; // rcx
  AutoBoost *v37; // rax
  void *v38; // rdx
  AutoBoost *v39; // rbx
  _KSWAPPABLE_PAGE **AutoBoostThreadState; // rdx
  _KSWAPPABLE_PAGE ***v41; // rax
  __int64 v42; // r8
  _DWORD *HandleExtraInfo; // rax
  __int64 v44; // r10
  struct _KLOCK_ENTRIES *v45; // r13
  int v46; // eax
  _QWORD *v47; // rcx
  unsigned int i; // edx
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // rax
  __int64 HandleTable; // rax
  signed __int32 v52[8]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v53; // [rsp+40h] [rbp-88h]
  int v54; // [rsp+44h] [rbp-84h] BYREF
  __int64 v55; // [rsp+48h] [rbp-80h]
  __int64 v56; // [rsp+50h] [rbp-78h]
  unsigned __int64 v57; // [rsp+58h] [rbp-70h]
  unsigned __int64 HandlePointer; // [rsp+60h] [rbp-68h]
  char *v59; // [rsp+68h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-58h]
  ULONG_PTR BugCheckParameter1; // [rsp+D0h] [rbp+8h]

  BugCheckParameter1 = a1;
  v5 = *(unsigned int *)a2;
  v6 = 0LL;
  v7 = a5;
  v8 = a4;
  v57 = v5;
  v9 = a3;
  v10 = (unsigned int *)a2;
  v11 = (unsigned int)v5;
  *a5 = 0LL;
  if ( a3 )
  {
    if ( (*a4 & 3) != 0 )
      return 3221225485LL;
    for ( i = 1; i < v9; ++i )
    {
      v49 = *(_QWORD *)&a4[8 * i];
      if ( (v49 & 3) != 0 || v49 <= *(_QWORD *)&a4[8 * i - 8] )
        return 3221225485LL;
    }
    v50 = *(_QWORD *)&a4[8 * v9 - 8];
    if ( v50 >= v11 )
      return 3221225485LL;
    v11 = v50 + 4;
LABEL_14:
    a1 = BugCheckParameter1;
    v57 = v11;
  }
  else if ( (_DWORD)v5 )
  {
    while ( 2 )
    {
      v13 = ExpLookupHandleTableEntry(v10, v11 - 1024);
      v14 = 4080LL;
      v15 = 255;
      while ( 1 )
      {
        if ( (*(_DWORD *)(v14 + v13) & 0x40000) != 0 )
          goto LABEL_14;
        if ( (*(_DWORD *)(v14 + v13 - 16) & 0x40000) != 0 )
          break;
        if ( (*(_DWORD *)(v14 + v13 - 32) & 0x40000) != 0 )
        {
          v15 -= 2;
          goto LABEL_12;
        }
        if ( (*(_DWORD *)(v14 + v13 - 48) & 0x40000) != 0 )
        {
          v15 -= 3;
          goto LABEL_12;
        }
        if ( (*(_DWORD *)(v14 + v13 - 64) & 0x40000) != 0 )
        {
          v15 -= 4;
          goto LABEL_12;
        }
        v14 -= 80LL;
        v15 -= 5;
        if ( !v15 )
          goto LABEL_12;
      }
      --v15;
LABEL_12:
      if ( !v15 )
      {
        v11 = v12;
        if ( v12 )
          continue;
      }
      goto LABEL_14;
    }
  }
  if ( !v11 )
  {
    HandleTable = ExCreateHandleTable(a1, 1);
    *a5 = (PVOID)HandleTable;
    if ( HandleTable )
      return 0LL;
    return 3221225626LL;
  }
  v16 = ExpAllocateHandleTable(a1, 0);
  *a5 = (PVOID)v16;
  if ( !v16 )
    return 3221225626LL;
  while ( 1 )
  {
    v17 = *a5;
    if ( *(unsigned int *)*a5 >= v11 )
      break;
    if ( !(unsigned __int8)ExpAllocateHandleTableEntrySlow(v17, 0LL) )
    {
      ExpFreeHandleTable(*a5);
      *a5 = 0LL;
      return 3221225626LL;
    }
  }
  v17[44] |= 8u;
  v19 = 0;
  v20 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v59 = (char *)*a5;
  v53 = 0;
  v21 = v59 + 72;
  do
  {
    v22 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
    v23 = (v6 & 0xFFFFFFFFFFFFFFFCuLL) >> 10;
    v24 = 4 * (v6 & 0x3FC);
    if ( (v6 & 0xFFFFFFFFFFFFFFFCuLL) < *v10 )
    {
      v25 = *((_QWORD *)v10 + 1);
      if ( (v25 & 3) == 1 )
      {
        v26 = *(_QWORD *)(v25 + 8 * v23 - 1);
      }
      else
      {
        if ( (v25 & 3) == 0 )
        {
          v27 = v25 + 4 * v22;
          goto LABEL_26;
        }
        v26 = *(_QWORD *)(*(_QWORD *)(v25 + 8 * ((v6 & 0xFFFFFFFFFFFFFFFCuLL) >> 19) - 2)
                        + 8 * (((v6 & 0xFFFFFFFFFFFFFFFCuLL) >> 10) & 0x1FF));
      }
      v27 = v24 + v26;
LABEL_26:
      v56 = v27;
      goto LABEL_27;
    }
    v56 = 0LL;
LABEL_27:
    if ( v22 >= *(unsigned int *)*v7 )
    {
      v30 = 0LL;
      goto LABEL_31;
    }
    v28 = *((_QWORD *)*v7 + 1);
    if ( (v28 & 3) == 1 )
    {
      v29 = *(_QWORD *)(v28 + 8 * v23 - 1);
    }
    else
    {
      if ( (v28 & 3) == 0 )
      {
        v30 = v28 + 4 * v22;
        goto LABEL_31;
      }
      v23 = ((v6 & 0xFFFFFFFFFFFFFFFCuLL) >> 10) & 0x1FF;
      v29 = *(_QWORD *)(*(_QWORD *)(v28 + 8 * ((v6 & 0xFFFFFFFFFFFFFFFCuLL) >> 19) - 2) + 8 * v23);
    }
    v30 = v24 + v29;
LABEL_31:
    v55 = v30;
    for ( j = 1; j < 0x100; ++j )
    {
      if ( v20 < 0 )
      {
        memset_0((void *)(16LL * j + v30), 0, 4096 - 16LL * j);
        v19 = v53;
        break;
      }
      if ( v9 && *(_QWORD *)&v8[8 * v19] != v6 + 4 * j )
        goto LABEL_36;
      v34 = 16LL * j;
      v35 = (__int64 *)(v34 + v56);
      if ( (*(_DWORD *)(v34 + v56) & 0x40000) == 0 )
      {
LABEL_39:
        v9 = a3;
        if ( a3 )
          v20 = -1073741811;
        goto LABEL_36;
      }
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v35);
          v42 = *v35;
          if ( (*v35 & 1) != 0 )
            break;
          if ( !v42 )
            goto LABEL_39;
          ExpBlockOnLockedHandleEntry((__int64)a2, v35, v42);
        }
      }
      while ( v42 != _InterlockedCompareExchange64(v35, v42 - 1, v42) );
      if ( (*(_DWORD *)v35 & 0x40000) == 0 )
      {
        ExUnlockHandleTableEntry(a2, v35);
        v9 = a3;
        if ( a3 )
          v20 = -1073741811;
        goto LABEL_36;
      }
      *(_OWORD *)(v34 + v30) = *(_OWORD *)v35;
      *(_QWORD *)(v34 + v30) &= 0xFFFFFFFFFFFE0001uLL;
      *(_QWORD *)(v34 + v30) |= 1uLL;
      if ( *((_DWORD *)a2 + 1)
        && (HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo((unsigned int *)a2, v6 + 4 * j)) != 0LL
        && (*HandleExtraInfo || HandleExtraInfo[1])
        && (v20 = ExpSetHandleExtraInfo(v44, v6 + 4 * j, HandleExtraInfo), v20 < 0) )
      {
        ExUnlockHandleTableEntry(a2, v35);
      }
      else
      {
        v54 = 0;
        HandlePointer = ExGetHandlePointer(v35);
        v45 = (struct _KLOCK_ENTRIES *)(HandlePointer + 48);
        ObfReferenceObjectWithTag((PVOID)(HandlePointer + 48), 0x6E48624Fu);
        v54 = v35[1] & 0x1FFFFFF;
        _InterlockedIncrement64(v35);
        _InterlockedOr(v52, 0);
        if ( *((_QWORD *)a2 + 6) )
          ExfUnblockPushLock(a2 + 6, 0LL);
        v20 = ObpIncrementHandleCountEx(3u, (__int64)&v54, (struct _KPROCESS *)BugCheckParameter1, v45, 0, 0, 0LL);
        if ( v20 >= 0 )
        {
          if ( (xmmword_140FC0C10 & 0x40) != 0 )
            EtwTraceDuplicateHandle(
              v6 + 4 * j,
              v6 + 4 * j,
              (_DWORD)v45,
              *(_DWORD *)(BugCheckParameter1 + 720),
              *(_DWORD *)(BugCheckParameter1 + 464),
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)]);
          v30 = v55;
          v46 = v20;
          goto LABEL_73;
        }
        ObfDereferenceObject(v45);
        v30 = v55;
        if ( !a4 )
          v20 = 263;
      }
      v46 = v20;
      *(_OWORD *)(v34 + v30) = 0LL;
      if ( v20 < 0 )
      {
        v9 = a3;
        goto LABEL_36;
      }
LABEL_73:
      v9 = a3;
      if ( v46 == 263 )
      {
        v20 = 0;
LABEL_36:
        v32 = v59;
        v33 = (_QWORD *)(v30 + 16LL * j);
        *v21 = v33;
        *((_QWORD *)v32 + 10) = v33;
        v21 = v33 + 1;
        *v33 = 0LL;
        goto LABEL_37;
      }
      v47 = *a5;
      ++*((_DWORD *)*a5 + 22);
      if ( a3 )
      {
        v22 = v53;
        if ( v53 < a3 - 1 )
          v22 = ++v53;
      }
      if ( v47[12] )
        ExpUpdateDebugInfo((__int64)v47, (__int64)KeGetCurrentThread(), v6 + 4 * j, 1);
LABEL_37:
      v19 = v53;
      v8 = a4;
    }
    v10 = (unsigned int *)a2;
    v6 += 1024LL;
    v7 = a5;
  }
  while ( v6 < v57 );
  v36 = *a5;
  *v21 = 0LL;
  if ( v20 < 0 )
  {
    v36[44] |= 4u;
    *((_QWORD *)v36 + 4) = v36 + 24;
    *((_QWORD *)v36 + 3) = v36 + 24;
  }
  else
  {
    *((_DWORD *)v36 + 23) = *((_DWORD *)v36 + 22);
    v37 = (AutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.StackBase, 0LL, 0LL, (struct _KLOCK_ENTRIES *)v23);
    v39 = v37;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock.StackBase, 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PspSiloMonitorLock.StackBase,
        v37,
        (__int64)&PspSiloMonitorLock.StackBase);
    if ( v39 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v39, v38);
      else
        *((_BYTE *)v39 + 10) = 1;
    }
    AutoBoostThreadState = (_KSWAPPABLE_PAGE **)PspSiloMonitorLock.AutoBoostThreadState;
    v41 = (_KSWAPPABLE_PAGE ***)((char *)*a5 + 24);
    if ( *(struct _KTHREAD **)PspSiloMonitorLock.AutoBoostThreadState != (struct _KTHREAD *)&PspSiloMonitorLock.SchedulerSharedSwappablePage )
      __fastfail(3u);
    *v41 = &PspSiloMonitorLock.SchedulerSharedSwappablePage;
    v41[1] = AutoBoostThreadState;
    *AutoBoostThreadState = (_KSWAPPABLE_PAGE *)v41;
    PspSiloMonitorLock.AutoBoostThreadState = v41;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock.StackBase, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.StackBase);
    KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.StackBase);
    v20 = 0;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v22);
  return (unsigned int)v20;
}
