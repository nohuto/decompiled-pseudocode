/*
 * XREFs of ExCreateHandleEx @ 0x14092C1A0
 * Callers:
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14077A4A0 (AlpcpAllocateMessageFromExtendedTables.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     ObCompleteObjectDuplication @ 0x1409714E0 (ObCompleteObjectDuplication.c)
 *     NtCreateJobObject @ 0x140A76700 (NtCreateJobObject.c)
 *     AlpcpAllocateMessageFunction @ 0x140A97AC0 (AlpcpAllocateMessageFunction.c)
 *     ExCreateHandle @ 0x140AACBF8 (ExCreateHandle.c)
 *     RtlpInsertStringAtom @ 0x140AAEF58 (RtlpInsertStringAtom.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExpAllocateTablePagedPool @ 0x14092AF6C (ExpAllocateTablePagedPool.c)
 *     ExpUpdateDebugInfo @ 0x14092C6E0 (ExpUpdateDebugInfo.c)
 *     ExpGetHandleExtraInfo @ 0x14092C97C (ExpGetHandleExtraInfo.c)
 *     ExpFreeTablePagedPool @ 0x14092CA10 (ExpFreeTablePagedPool.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140972494 (ExpAllocateHandleTableEntrySlow.c)
 */

__int64 __fastcall ExCreateHandleEx(unsigned int *a1, __int64 a2, int a3, struct _KLOCK_ENTRIES *a4, _DWORD *a5)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v9; // rbx
  char v10; // al
  unsigned int Number; // r13d
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned __int64 v15; // rsi
  AutoBoost *v16; // rax
  void *v17; // rdx
  AutoBoost *v18; // r14
  unsigned __int64 *v19; // r14
  __int64 v20; // rax
  int v21; // eax
  unsigned __int64 v23; // rdx
  volatile signed __int64 *v24; // rax
  volatile signed __int64 *v25; // r13
  volatile signed __int64 v26; // rdx
  void *TablePagedPool; // rax
  _QWORD *HandleExtraInfo; // rax
  char v29; // r12
  unsigned int v30; // eax
  unsigned __int64 v31; // rbx
  AutoBoost *v32; // rax
  void *v33; // rdx
  AutoBoost *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  volatile signed __int64 *v37; // rsi
  AutoBoost *v38; // rax
  void *v39; // rdx
  AutoBoost *v40; // r14
  char HandleTableEntrySlow; // r14
  unsigned int v42; // eax
  int v43; // [rsp+20h] [rbp-58h]
  unsigned __int64 v44; // [rsp+28h] [rbp-50h]
  unsigned __int64 v45; // [rsp+30h] [rbp-48h]
  int v46; // [rsp+80h] [rbp+8h]
  __int64 v47; // [rsp+80h] [rbp+8h]
  unsigned int v48; // [rsp+88h] [rbp+10h]
  unsigned int v49; // [rsp+90h] [rbp+18h]

  HIDWORD(v45) = 0;
  v5 = (a2 << 16) & 0xFFFFFFFFFFF1FFFFuLL;
  v6 = a3 & 0x1FFFFFF;
  v44 = v5 | ((unsigned __int64)((unsigned __int8)a4 & 7) << 17);
  if ( ((unsigned __int8)a4 & 8) != 0 )
    LODWORD(v6) = v6 | 0x2000000;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  LODWORD(v45) = v6;
  --CurrentThread->KernelApcDisable;
  v10 = *((_BYTE *)a1 + 44);
  if ( (v10 & 4) != 0 )
    goto LABEL_29;
  if ( (v10 & 1) != 0 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v12 = ExpFreeListCount;
  v46 = ExpFreeListCount;
LABEL_7:
  v13 = Number;
  v43 = *a1;
  v14 = 0;
  while ( 1 )
  {
    v48 = v13;
    v49 = v14;
    if ( v14 >= v12 )
    {
      v37 = (volatile signed __int64 *)(a1 + 14);
      v38 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 14), 0LL, 0LL, a4);
      v40 = v38;
      if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 14, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1 + 7, v38, (__int64)(a1 + 14));
      if ( v40 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v40, v39);
        else
          *((_BYTE *)v40 + 10) = 1;
      }
      if ( v43 == *a1 )
      {
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(a1, &a1[16 * Number + 16]);
        v37 = (volatile signed __int64 *)(a1 + 14);
      }
      else
      {
        HandleTableEntrySlow = 1;
      }
      if ( (_InterlockedExchangeAdd64(v37, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v37);
      KeAbPostRelease((unsigned __int64)v37);
      if ( HandleTableEntrySlow )
      {
        v12 = v46;
        goto LABEL_7;
      }
      goto LABEL_29;
    }
    v15 = (unsigned __int64)&a1[16 * v13 + 16];
    if ( *(_QWORD *)(v15 + 8) )
      break;
LABEL_83:
    v42 = v13 + 1;
    ++v14;
    v13 = 0;
    if ( v42 != v46 )
      v13 = v42;
    v12 = v46;
  }
  v16 = (AutoBoost *)KeAbPreAcquire(v15, 0LL, 0LL, a4);
  v18 = v16;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v15, v16, v15);
  if ( v18 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v18, v17);
    else
      *((_BYTE *)v18 + 10) = 1;
  }
  v19 = *(unsigned __int64 **)(v15 + 8);
  if ( v19 )
  {
    v20 = v19[1];
    *(_QWORD *)(v15 + 8) = v20;
    if ( !v20 )
      *(_QWORD *)(v15 + 16) = 0LL;
    v21 = ++*(_DWORD *)(v15 + 24);
    if ( v21 > *(_DWORD *)(v15 + 28) )
      *(_DWORD *)(v15 + 28) = v21;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v15);
  KeAbPostRelease(v15);
  if ( !v19 )
  {
    v14 = v49;
    v13 = v48;
    goto LABEL_83;
  }
  v9 = *(_QWORD *)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFF000uLL) + 8)
     + 4 * ((__int64)((__int64)v19 - ((unsigned __int64)v19 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  if ( !a5 || !*a5 && !a5[1] )
    goto LABEL_26;
  v23 = v9 & 0xFFFFFFFFFFFFFC00uLL;
  if ( (v9 & 0xFFFFFFFFFFFFFC00uLL) < *a1 )
  {
    v6 = *((_QWORD *)a1 + 1);
    if ( (v6 & 3) == 1 )
    {
      v24 = *(volatile signed __int64 **)(v6 + 8 * (v23 >> 10) - 1);
      goto LABEL_33;
    }
    if ( (v6 & 3) != 0 )
    {
      v24 = *(volatile signed __int64 **)(*(_QWORD *)(v6 + 8 * (v23 >> 19) - 2) + 8 * ((v23 >> 10) & 0x1FF));
LABEL_33:
      v25 = v24;
    }
    else
    {
      v25 = (volatile signed __int64 *)(v6 + 4 * v23);
    }
    if ( v25 )
    {
      v26 = *v25;
      if ( *v25 )
        goto LABEL_36;
      TablePagedPool = ExpAllocateTablePagedPool(*((_QWORD *)a1 + 2), 0x800uLL);
      if ( TablePagedPool )
      {
        if ( _InterlockedCompareExchange64(v25, (signed __int64)TablePagedPool, 0LL) )
        {
          ExpFreeTablePagedPool(*((_QWORD *)a1 + 2), TablePagedPool, 0x800uLL);
          v26 = *v25;
          if ( !*v25 )
            goto LABEL_43;
LABEL_36:
          *(_QWORD *)(v26 + 8LL * (unsigned __int8)((unsigned int)v9 >> 2)) = *(_QWORD *)a5;
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)a1 + 1);
          *((_QWORD *)TablePagedPool + (unsigned __int8)((unsigned int)v9 >> 2)) = *(_QWORD *)a5;
        }
LABEL_26:
        if ( *((_QWORD *)a1 + 12) )
          ExpUpdateDebugInfo(a1, CurrentThread, v9, 1LL);
        v5 = v45;
        v19[1] = v45;
        *v19 = v44 | 1;
        goto LABEL_29;
      }
    }
  }
LABEL_43:
  HIDWORD(v47) = HIDWORD(v9);
  if ( a1[1] )
  {
    LODWORD(v47) = v9 & 0xFFFFFFFC;
    HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(a1, v47);
    if ( HandleExtraInfo )
      *HandleExtraInfo = 0LL;
  }
  v19[1] = 0LL;
  v29 = a1[11] & 1;
  if ( v29 )
    v30 = 0;
  else
    v30 = KeGetPcr()->Prcb.Number;
  v31 = (unsigned __int64)&a1[16 * v30 + 16];
  v32 = (AutoBoost *)KeAbPreAcquire(v31, 0LL, 0LL, a4);
  v34 = v32;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v31, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v31, v32, v31);
  if ( v34 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v34, v33);
    else
      *((_BYTE *)v34 + 10) = 1;
  }
  if ( v29 )
  {
    v36 = *(_QWORD *)(v31 + 16);
    if ( v36 )
      *(_QWORD *)(v36 + 8) = v19;
    else
      *(_QWORD *)(v31 + 8) = v19;
    *(_QWORD *)(v31 + 16) = v19;
  }
  else
  {
    v35 = *(_QWORD *)(v31 + 8);
    v19[1] = v35;
    if ( !v35 )
      *(_QWORD *)(v31 + 16) = v19;
    *(_QWORD *)(v31 + 8) = v19;
  }
  --*(_DWORD *)(v31 + 24);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v31, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v31);
  KeAbPostRelease(v31);
  v9 = 0LL;
LABEL_29:
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v5, v6);
  return v9;
}
