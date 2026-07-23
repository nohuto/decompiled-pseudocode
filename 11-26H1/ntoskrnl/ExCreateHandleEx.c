/*
 * XREFs of ExCreateHandleEx @ 0x140907CD0
 * Callers:
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14077D3D0 (AlpcpAllocateMessageFromExtendedTables.c)
 *     ObCompleteObjectDuplication @ 0x1409BB650 (ObCompleteObjectDuplication.c)
 *     NtCreateJobObject @ 0x140A7F420 (NtCreateJobObject.c)
 *     AlpcpAllocateMessageFunction @ 0x140A9BC40 (AlpcpAllocateMessageFunction.c)
 *     ExCreateHandle @ 0x140AAACB4 (ExCreateHandle.c)
 *     RtlpInsertStringAtom @ 0x140AACBA8 (RtlpInsertStringAtom.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExpAllocateTablePagedPool @ 0x140906A9C (ExpAllocateTablePagedPool.c)
 *     ExpUpdateDebugInfo @ 0x140908210 (ExpUpdateDebugInfo.c)
 *     ExpGetHandleExtraInfo @ 0x1409084AC (ExpGetHandleExtraInfo.c)
 *     ExpFreeTablePagedPool @ 0x140908540 (ExpFreeTablePagedPool.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1409BD784 (ExpAllocateHandleTableEntrySlow.c)
 */

__int64 __fastcall ExCreateHandleEx(unsigned int *a1, __int64 a2, int a3, struct _KLOCK_ENTRIES *a4, _DWORD *a5)
{
  int v5; // r8d
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rbx
  char v9; // al
  unsigned int Number; // r13d
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned __int64 v14; // rsi
  AutoBoost *v15; // rax
  void *v16; // rdx
  AutoBoost *v17; // r14
  signed __int64 v18; // r14
  __int64 v19; // rax
  int v20; // eax
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  volatile signed __int64 *v24; // rax
  volatile signed __int64 *v25; // r13
  volatile signed __int64 v26; // rdx
  void *TablePagedPool; // rax
  _QWORD *HandleExtraInfo; // rax
  char v29; // r12
  unsigned int v30; // eax
  unsigned __int64 *v31; // rbx
  AutoBoost *v32; // rax
  void *v33; // rdx
  AutoBoost *v34; // rsi
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  volatile signed __int64 *v37; // rsi
  AutoBoost *v38; // rax
  void *v39; // rdx
  AutoBoost *v40; // r14
  char HandleTableEntrySlow; // r14
  unsigned int v42; // eax
  int v43; // [rsp+20h] [rbp-58h]
  unsigned __int64 v44; // [rsp+28h] [rbp-50h]
  __int64 v45; // [rsp+30h] [rbp-48h]
  int v46; // [rsp+80h] [rbp+8h]
  __int64 v47; // [rsp+80h] [rbp+8h]
  unsigned int v48; // [rsp+88h] [rbp+10h]
  unsigned int v49; // [rsp+90h] [rbp+18h]

  HIDWORD(v45) = 0;
  v5 = a3 & 0x1FFFFFF;
  v44 = (a2 << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)((unsigned __int8)a4 & 7) << 17);
  if ( ((unsigned __int8)a4 & 8) != 0 )
    v5 |= 0x2000000u;
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  LODWORD(v45) = v5;
  --CurrentThread->KernelApcDisable;
  v9 = *((_BYTE *)a1 + 44);
  if ( (v9 & 4) != 0 )
    goto LABEL_29;
  if ( (v9 & 1) != 0 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v11 = ExpFreeListCount;
  v46 = ExpFreeListCount;
LABEL_7:
  v12 = Number;
  v43 = *a1;
  v13 = 0;
  while ( 1 )
  {
    v48 = v12;
    v49 = v13;
    if ( v13 >= v11 )
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
        v11 = v46;
        goto LABEL_7;
      }
      goto LABEL_29;
    }
    v14 = (unsigned __int64)&a1[16 * v12 + 16];
    if ( *(_QWORD *)(v14 + 8) )
      break;
LABEL_83:
    v42 = v12 + 1;
    ++v13;
    v12 = 0;
    if ( v42 != v46 )
      v12 = v42;
    v11 = v46;
  }
  v15 = (AutoBoost *)KeAbPreAcquire(v14, 0LL, 0LL, a4);
  v17 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v14, v15, v14);
  if ( v17 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v17, v16);
    else
      *((_BYTE *)v17 + 10) = 1;
  }
  v18 = *(_QWORD *)(v14 + 8);
  if ( v18 )
  {
    v19 = *(_QWORD *)(v18 + 8);
    *(_QWORD *)(v14 + 8) = v19;
    if ( !v19 )
      *(_QWORD *)(v14 + 16) = 0LL;
    v20 = ++*(_DWORD *)(v14 + 24);
    if ( v20 > *(_DWORD *)(v14 + 28) )
      *(_DWORD *)(v14 + 28) = v20;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v14);
  KeAbPostRelease(v14);
  if ( !v18 )
  {
    v13 = v49;
    v12 = v48;
    goto LABEL_83;
  }
  v8 = *(_QWORD *)((v18 & 0xFFFFFFFFFFFFF000uLL) + 8) + 4 * ((__int64)(v18 - (v18 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  if ( !a5 || !*a5 && !a5[1] )
    goto LABEL_26;
  v22 = v8 & 0xFFFFFFFFFFFFFC00uLL;
  if ( (v8 & 0xFFFFFFFFFFFFFC00uLL) < *a1 )
  {
    v23 = *((_QWORD *)a1 + 1);
    if ( (v23 & 3) == 1 )
    {
      v24 = *(volatile signed __int64 **)(v23 + 8 * (v22 >> 10) - 1);
      goto LABEL_33;
    }
    if ( (v23 & 3) != 0 )
    {
      v24 = *(volatile signed __int64 **)(*(_QWORD *)(v23 + 8 * (v22 >> 19) - 2) + 8 * ((v22 >> 10) & 0x1FF));
LABEL_33:
      v25 = v24;
    }
    else
    {
      v25 = (volatile signed __int64 *)(v23 + 4 * v22);
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
          *(_QWORD *)(v26 + 8LL * (unsigned __int8)((unsigned int)v8 >> 2)) = *(_QWORD *)a5;
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)a1 + 1);
          *((_QWORD *)TablePagedPool + (unsigned __int8)((unsigned int)v8 >> 2)) = *(_QWORD *)a5;
        }
LABEL_26:
        if ( *((_QWORD *)a1 + 12) )
          ExpUpdateDebugInfo(a1, CurrentThread, v8, 1LL);
        *(_QWORD *)(v18 + 8) = v45;
        *(_QWORD *)v18 = v44 | 1;
        goto LABEL_29;
      }
    }
  }
LABEL_43:
  HIDWORD(v47) = HIDWORD(v8);
  if ( a1[1] )
  {
    LODWORD(v47) = v8 & 0xFFFFFFFC;
    HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(a1, v47);
    if ( HandleExtraInfo )
      *HandleExtraInfo = 0LL;
  }
  *(_QWORD *)(v18 + 8) = 0LL;
  v29 = a1[11] & 1;
  if ( v29 )
    v30 = 0;
  else
    v30 = KeGetPcr()->Prcb.Number;
  v31 = (unsigned __int64 *)&a1[16 * v30 + 16];
  v32 = (AutoBoost *)KeAbPreAcquire((__int64)v31, 0LL, 0LL, a4);
  v34 = v32;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v31, 0LL) )
    ExfAcquirePushLockExclusiveEx(v31, v32, (__int64)v31);
  if ( v34 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v34, v33);
    else
      *((_BYTE *)v34 + 10) = 1;
  }
  if ( v29 )
  {
    v36 = v31[2];
    if ( v36 )
      *(_QWORD *)(v36 + 8) = v18;
    else
      v31[1] = v18;
    v31[2] = v18;
  }
  else
  {
    v35 = v31[1];
    *(_QWORD *)(v18 + 8) = v35;
    if ( !v35 )
      v31[2] = v18;
    v31[1] = v18;
  }
  --*((_DWORD *)v31 + 6);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v31, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v31);
  KeAbPostRelease((unsigned __int64)v31);
  v8 = 0LL;
LABEL_29:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v8;
}
