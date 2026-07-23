/*
 * XREFs of ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x14064098C
 * Callers:
 *     SmProcessCreateRequest @ 0x140ADC4D4 (SmProcessCreateRequest.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     SmFpPreAllocate @ 0x1403E9990 (SmFpPreAllocate.c)
 *     SmFpCleanup @ 0x1403E9CB0 (SmFpCleanup.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x14047B88C (MmStoreChargeResidentAvailableForRead.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140640114 (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmCompressManagerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x140640444 (-SmCompressManagerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPR.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140640E84 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140641110 (-SmStorePrepare@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmTerminateStoreProcess @ 0x1406423FC (SmTerminateStoreProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePrivateWorkerPool @ 0x140775100 (ExAllocatePrivateWorkerPool.c)
 *     MmStoreCheckPagefiles @ 0x14077F268 (MmStoreCheckPagefiles.c)
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     SmHwAcceleratorPartitionMgrCleanup @ 0x140821A4C (SmHwAcceleratorPartitionMgrCleanup.c)
 *     SmHwAcceleratorPartitionMgrInitialize @ 0x140821B68 (SmHwAcceleratorPartitionMgrInitialize.c)
 *     SmHwAcceleratorPartitionMgrStart @ 0x140821B84 (SmHwAcceleratorPartitionMgrStart.c)
 *     MmStoreRegister @ 0x140883A7C (MmStoreRegister.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     SmRegistrationCtxStart @ 0x140B51620 (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmFirstTimeInit(struct _SM_PARTITION *a1, unsigned int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // r14
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rdi
  int MinimalProcess; // edi
  __int64 v12; // r14
  __int64 v13; // rdi
  int v14; // r9d
  __int64 v15; // r15
  bool v16; // zf
  int v17; // eax
  int v18; // r14d
  char v19; // al
  __int64 v20; // xmm1_8
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // edx
  char v25; // al
  PVOID Object; // [rsp+60h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-21h] BYREF
  __int128 v29; // [rsp+70h] [rbp-19h] BYREF
  __int64 v30; // [rsp+80h] [rbp-9h]
  _OWORD v31[3]; // [rsp+88h] [rbp-1h] BYREF

  Handle = 0LL;
  memset(v31, 0, sizeof(v31));
  v4 = (unsigned __int64 *)((char *)a1 + 2264);
  CurrentThread = KeGetCurrentThread();
  DWORD2(v29) = 1048596;
  --CurrentThread->KernelApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)a1 + 2264, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v8, (__int64)v4);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  if ( *((PVOID *)a1 + 276) != PspSystemPartition && !*((_QWORD *)a1 + 277) )
  {
    MinimalProcess = -1073741394;
    goto LABEL_49;
  }
  if ( (*((_DWORD *)a1 + 562) & 8) == 0 )
  {
    MinimalProcess = SmRegistrationCtxStart((char *)a1 + 2400);
    if ( MinimalProcess < 0 )
      goto LABEL_49;
    *((_DWORD *)a1 + 562) |= 8u;
  }
  if ( !*((_QWORD *)a1 + 284) )
  {
    if ( !(unsigned int)MmStoreCheckPagefiles(*((_QWORD *)a1 + 276)) )
    {
      MinimalProcess = -1073741637;
      goto LABEL_49;
    }
    v12 = *((_QWORD *)a1 + 276);
    v13 = *(_QWORD *)(v12 + 120);
    KiStackAttachProcess((_KPROCESS *)v13, 0, (__int64)v31);
    LOBYTE(v14) = *(_BYTE *)(v13 + 1530);
    MinimalProcess = PsCreateMinimalProcess(
                       v13,
                       (unsigned int)&unk_140E08CC0,
                       0,
                       v14,
                       0LL,
                       0,
                       16,
                       0LL,
                       *((_QWORD *)a1 + 277),
                       v12,
                       0LL,
                       (__int64)&Handle);
    KiUnstackDetachProcess((__int64)v31, 0);
    if ( MinimalProcess < 0 )
      goto LABEL_49;
    Object = 0LL;
    MinimalProcess = ObReferenceObjectByHandle(Handle, 0, 0LL, 0, &Object, 0LL);
    if ( MinimalProcess < 0 )
    {
      ZwClose(Handle);
      goto LABEL_49;
    }
    *((_QWORD *)a1 + 284) = Handle;
    *((_QWORD *)a1 + 285) = Object;
    PsDereferencePartition(v12);
  }
  v15 = *((_QWORD *)a1 + 285);
  if ( *((_DWORD *)a1 + 564) == 3 )
  {
    v16 = (*((_DWORD *)a1 + 584) & 0x1000) == 0;
    *((_DWORD *)a1 + 564) = 0;
    if ( !v16 )
    {
      MinimalProcess = SmHwAcceleratorPartitionMgrStart((char *)a1 + 2672, &PspTlsContext.WaitBlockFill11[128], v15);
      if ( MinimalProcess < 0 )
      {
        SmHwAcceleratorPartitionMgrCleanup((char *)a1 + 2672, v15);
        SmHwAcceleratorPartitionMgrInitialize((char *)a1 + 2672);
        goto LABEL_49;
      }
      *((_DWORD *)a1 + 562) |= 0x40u;
      if ( *((_DWORD *)a1 + 680) )
        *((_DWORD *)a1 + 564) = (*((_DWORD *)a1 + 686) != 1) + 1;
    }
  }
  v17 = *((_DWORD *)a1 + 562);
  if ( (v17 & 2) == 0 )
  {
    v18 = *((_DWORD *)a1 + 564);
    *((_QWORD *)a1 + 268) = *((_QWORD *)a1 + 284);
    MinimalProcess = SMKM_STORE_MGR<SM_TRAITS>::SmStorePrepare(a1);
    if ( MinimalProcess < 0
      || (*((_DWORD *)a1 + 530) & 0x20) != 0
      && (MinimalProcess = SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerStart((__int64)a1 + 1104, v18), MinimalProcess < 0) )
    {
      v20 = *((_QWORD *)a1 + 267);
      v29 = *(_OWORD *)((char *)a1 + 2120);
      v30 = v20;
      SMKM_STORE_MGR<SM_TRAITS>::SmCleanup((_SLIST_HEADER *)a1);
      SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(a1, &v29);
      SmTerminateStoreProcess(a1);
      goto LABEL_49;
    }
    v17 = *((_DWORD *)a1 + 562) | 2;
    *((_DWORD *)a1 + 562) = v17;
  }
  if ( (v17 & 0x10) == 0 )
  {
    v19 = MmStoreChargeResidentAvailableForRead(*((ULONG ***)a1 + 276), 1LL);
    *((_DWORD *)a1 + 562) ^= ((unsigned __int8)*((_DWORD *)a1 + 562) ^ (unsigned __int8)(16 * v19)) & 0x10;
    if ( (v19 & 1) == 0 )
    {
      MinimalProcess = -1073741670;
      goto LABEL_49;
    }
  }
  v21 = *((_DWORD *)a1 + 563);
  if ( v21 )
  {
    if ( a2 != v21 )
    {
      MinimalProcess = -1073741800;
      goto LABEL_49;
    }
  }
  else
  {
    LODWORD(Object) = (a2 >> 8) & 0xFFFF0 ^ 0x100003;
    v22 = (a2 >> 8) & 0xFFFF0;
    DWORD1(v29) = v22 ^ 0x100002;
    LODWORD(v29) = v22 ^ 0x100005;
    MinimalProcess = SmFpPreAllocate((PEX_SPIN_LOCK)a1 + 608, &v29, 3u);
    if ( MinimalProcess < 0 )
      goto LABEL_49;
    MinimalProcess = SmFpPreAllocate((PEX_SPIN_LOCK)a1 + 638, &Object, 1u);
    if ( MinimalProcess < 0 )
    {
      SmFpCleanup((__int64)a1 + 2432);
      memset_0((char *)a1 + 2432, 0, 0x78uLL);
      *((_BYTE *)a1 + 2440) = 1;
      *((_BYTE *)a1 + 2442) = 6;
      *((_QWORD *)a1 + 307) = (char *)a1 + 2448;
      *((_QWORD *)a1 + 306) = (char *)a1 + 2448;
      *((_QWORD *)a1 + 308) = a1;
      goto LABEL_49;
    }
    *((_DWORD *)a1 + 563) = a2;
  }
  v23 = *((_DWORD *)a1 + 562);
  if ( (v23 & 0x20) == 0 )
  {
    MinimalProcess = ExAllocatePrivateWorkerPool((char *)a1 + 2320, *((_QWORD *)a1 + 276));
    if ( MinimalProcess < 0 )
      goto LABEL_49;
    v23 = *((_DWORD *)a1 + 562) | 0x20;
    *((_DWORD *)a1 + 562) = v23;
  }
  if ( (v23 & 1) != 0 )
    goto LABEL_48;
  v24 = (*((_DWORD *)a1 + 584) >> 7) & 1;
  v25 = v24 | 2;
  if ( (*((_DWORD *)a1 + 584) & 0xC00) != 0xC00 )
    v25 = v24;
  MinimalProcess = MmStoreRegister(*((_QWORD *)a1 + 276), v24, 3072, v15, v25);
  if ( MinimalProcess >= 0 )
  {
    *((_DWORD *)a1 + 562) |= 1u;
LABEL_48:
    MinimalProcess = 0;
  }
LABEL_49:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 283, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)a1 + 283);
  KeAbPostRelease((unsigned __int64)a1 + 2264);
  KeLeaveCriticalRegion();
  return (unsigned int)MinimalProcess;
}
