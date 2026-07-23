/*
 * XREFs of SmHwAcceleratorPartitionMgrGetDescriptor @ 0x14024D000
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14024CA30 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_.c)
 *     SmStoreDecompressBuffer @ 0x140392390 (SmStoreDecompressBuffer.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x140278050 (KeAbPreWait.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     MmGetNextNode @ 0x140456D80 (MmGetNextNode.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall SmHwAcceleratorPartitionMgrGetDescriptor(__int64 a1, char a2, unsigned int a3)
{
  _BOOL8 v4; // rax
  __int64 v6; // r15
  __int64 v7; // rsi
  struct _KTHREAD *v8; // r14
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v11; // r12
  int v12; // r13d
  __int64 v13; // rbx
  unsigned int v14; // r9d
  __int64 v15; // rdx
  unsigned int NextNode; // eax
  _SLIST_HEADER *v17; // rcx
  _SLIST_HEADER *i; // rax
  PSLIST_ENTRY v19; // rax
  _DWORD *v20; // r13
  int v21; // r13d
  struct _KTHREAD *v22; // rax
  __int64 v23; // rax
  unsigned int v24; // r9d
  __int64 v25; // r13
  __int64 v26; // rdx
  int v27; // r8d
  __int64 v28; // rax
  LegacyAutoBoost *v29; // r13
  struct _KTHREAD *v30; // rax
  unsigned int v31; // r9d
  __int64 v32; // r13
  __int64 v33; // rdx
  PSLIST_ENTRY v34; // rsi
  __int64 v35; // rax
  volatile unsigned __int8 *v36; // rdx
  unsigned int v37; // r9d
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-78h] BYREF
  _SLIST_HEADER *v39; // [rsp+38h] [rbp-70h]
  _SLIST_HEADER *v40; // [rsp+40h] [rbp-68h]
  _SLIST_ENTRY *v41; // [rsp+48h] [rbp-60h]
  __int128 Object; // [rsp+50h] [rbp-58h] BYREF
  __int128 v43; // [rsp+60h] [rbp-48h] BYREF
  int v44; // [rsp+B0h] [rbp+8h]
  int v45; // [rsp+B8h] [rbp+10h]
  int v46; // [rsp+B8h] [rbp+10h]
  int v47; // [rsp+C8h] [rbp+20h] BYREF

  Timeout.QuadPart = 0LL;
  v4 = (a2 & 1) == 0;
  Object = 0LL;
  v43 = 0LL;
  v6 = *(_QWORD *)(a1 + 8 * v4 + 32);
  v7 = a1 + 4 * v4;
  v8 = (struct _KTHREAD *)(a1 + 56 + 8 * v4);
  if ( !*(_DWORD *)(v7 + 48) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = (volatile signed __int64 *)(a1 + 24);
  --CurrentThread->KernelApcDisable;
  v12 = 0;
  v45 = 0;
  v13 = KeAbPreAcquire((struct _KTHREAD *)(a1 + 24), 0LL);
  v15 = 17LL;
  if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx(v11, 0LL, v13, v11);
    v15 = 17LL;
  }
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v15) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v13 + 33), (volatile unsigned __int8 *)v15, 1u, v14);
    }
    else
    {
      *(_BYTE *)(v13 + 10) = 1;
    }
  }
  v41 = 0LL;
LABEL_12:
  if ( !*(_DWORD *)(v7 + 48) )
    goto LABEL_56;
  v44 = 1;
  NextNode = a3;
  v47 = 0;
LABEL_14:
  v17 = (_SLIST_HEADER *)(v6 + 16LL * NextNode);
  v40 = v17;
  for ( i = (_SLIST_HEADER *)v17->Alignment; ; i = (_SLIST_HEADER *)v39->Alignment )
  {
    v39 = i;
    if ( i == v17 )
    {
      if ( (a2 & 4) == 0 )
      {
        NextNode = MmGetNextNode(a3, &v47);
        v21 = v44;
        if ( (_SLIST_HEADER *)v40->Alignment != v40 )
          v21 = 0;
        v44 = v21;
        if ( NextNode != -1 )
          goto LABEL_14;
      }
      if ( (a2 & 2) != 0 )
      {
        v12 = v45;
LABEL_56:
        v34 = v41;
        goto LABEL_57;
      }
      if ( v45 )
      {
        HIDWORD(Object) = 0;
        *((_QWORD *)&v43 + 1) = &v43;
        WORD4(Object) = 0;
        *(_QWORD *)&v43 = &v43;
        BYTE10(Object) = 6;
        *(_QWORD *)&Object = *(_QWORD *)&v8->Header.Lock;
        *(_QWORD *)&v8->Header.Lock = &Object;
        v28 = KeAbPreAcquire(v8, 0LL);
        v29 = (LegacyAutoBoost *)v28;
        if ( v28 )
          KeAbPreWait(v28);
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v11);
        KeAbPostRelease((struct _KTHREAD *)v11);
        KeLeaveCriticalRegionThread(KeGetCurrentThread());
        v46 = 0;
        for ( Timeout.QuadPart = -3000000000LL; KeWaitForSingleObject((char *)&Object + 8, WrKernel, 0, 0, &Timeout); ++v46 )
          ;
        if ( v29 )
        {
          KeAbPreAcquire(v8, v29);
          KeAbPostReleaseEx(v8);
        }
        v45 = 0;
        v30 = KeGetCurrentThread();
        --v30->KernelApcDisable;
        v32 = KeAbPreAcquire((struct _KTHREAD *)v11, 0LL);
        v33 = 17LL;
        if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
        {
          ExfAcquirePushLockSharedEx(v11, 0LL, v32, v11);
          v33 = 17LL;
        }
        if ( v32 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
          {
            LOBYTE(v33) = 2;
            AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v32 + 33), (volatile unsigned __int8 *)v33, 1u, v31);
            v12 = 0;
            goto LABEL_12;
          }
          *(_BYTE *)(v32 + 10) = 1;
        }
        v12 = 0;
        goto LABEL_12;
      }
      if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v11);
      KeAbPostRelease((struct _KTHREAD *)v11);
      KeLeaveCriticalRegionThread(KeGetCurrentThread());
      v22 = KeGetCurrentThread();
      v45 = 1;
      --v22->KernelApcDisable;
      v23 = KeAbPreAcquire((struct _KTHREAD *)v11, 0LL);
      v25 = v23;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
        ExfAcquirePushLockExclusiveEx(v11, v23, v11);
      v26 = 17LL;
      if ( v25 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
        {
          LOBYTE(v26) = 2;
          AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v25 + 33), (volatile unsigned __int8 *)v26, 1u, v24);
          v12 = v27;
          goto LABEL_12;
        }
        *(_BYTE *)(v25 + 10) = 1;
      }
      v12 = 1;
      goto LABEL_12;
    }
    v19 = RtlpInterlockedPopEntrySList(i + 1);
    v20 = v19;
    if ( v19 )
      break;
    v17 = v40;
  }
  v34 = v19;
  if ( (a2 & 2) == 0 )
  {
    v35 = KeAbPreAcquire(v8, 0LL);
    if ( v35 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v36) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v35 + 33), v36, 1u, v37);
      }
      else
      {
        *(_BYTE *)(v35 + 10) = 1;
      }
      *v20 |= 1u;
    }
  }
  if ( v44 )
    *v20 |= 2u;
  v12 = v45;
LABEL_57:
  if ( v12 )
  {
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v11);
  }
  else if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
  {
    ExfReleasePushLockShared(v11);
  }
  KeAbPostRelease((struct _KTHREAD *)v11);
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  return v34;
}
