/*
 * XREFs of CcInitializeCacheMapInternal @ 0x1403E4420
 * Callers:
 *     CcInitializeCacheMap @ 0x1403E43C0 (CcInitializeCacheMap.c)
 *     CcInitializeCacheMapEx2 @ 0x1403E43F0 (CcInitializeCacheMapEx2.c)
 *     CcInitializeCacheMapEx @ 0x1405B2FF0 (CcInitializeCacheMapEx.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     FsRtlIsNtstatusExpected @ 0x1402C4930 (FsRtlIsNtstatusExpected.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsGetPagePriorityThread @ 0x1403843A0 (PsGetPagePriorityThread.c)
 *     CcInitializeVolumeCacheMap @ 0x14038713C (CcInitializeVolumeCacheMap.c)
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     CcDeleteSharedCacheMap @ 0x14039D950 (CcDeleteSharedCacheMap.c)
 *     CcFreeSharedCacheMapIgnoreNull @ 0x14039DE34 (CcFreeSharedCacheMapIgnoreNull.c)
 *     CcGetPrivateVolumeCacheMap @ 0x14039DEA0 (CcGetPrivateVolumeCacheMap.c)
 *     CcFreePrivateCacheMapIgnoreNull @ 0x14039E94C (CcFreePrivateCacheMapIgnoreNull.c)
 *     CcNotifyWriteBehindInternal @ 0x1403E39CC (CcNotifyWriteBehindInternal.c)
 *     CcNotifyWriteBehindVolume @ 0x1403E3A34 (CcNotifyWriteBehindVolume.c)
 *     ExAllocateFromLookasideListEx @ 0x1403E50D0 (ExAllocateFromLookasideListEx.c)
 *     CcGetPartitionWithCreate @ 0x1403E5118 (CcGetPartitionWithCreate.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x1403E51AC (CcCreatePrivateVolumeCacheMap.c)
 *     MmDisableModifiedWriteOfSection @ 0x1403E54E0 (MmDisableModifiedWriteOfSection.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1403E624C (CcInsertIntoCleanSharedCacheMapList.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObDeleteCapturedInsertInfo @ 0x14093D2D0 (ObDeleteCapturedInsertInfo.c)
 *     MmCreateCacheManagerSection @ 0x14098B458 (MmCreateCacheManagerSection.c)
 *     CcCreateVacbArray @ 0x140A87358 (CcCreateVacbArray.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 */

void __fastcall CcInitializeCacheMapInternal(
        __int64 Object,
        __m128i *a2,
        char a3,
        _WORD *a4,
        _WORD *a5,
        __int64 a6,
        int a7)
{
  struct _KTHREAD *CurrentThread; // r8
  int v9; // ecx
  _DWORD *v10; // r14
  NTSTATUS PrivateVolumeCacheMap; // esi
  __int64 v12; // rbx
  void *v13; // r13
  __m128i v14; // xmm1
  char *v15; // r12
  int v16; // ecx
  bool v17; // zf
  __int64 v18; // rax
  unsigned int v19; // ecx
  _DWORD *v20; // rdi
  NTSTATUS v21; // eax
  NTSTATUS v22; // r12d
  __int64 v23; // rax
  int v24; // ecx
  int v25; // eax
  unsigned int v26; // ecx
  _WORD *v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rbx
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r12
  _QWORD *v35; // rcx
  int v36; // eax
  int Blink_high; // eax
  __int64 v38; // rax
  int v39; // r15d
  struct _KEVENT *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  _WORD *v43; // r12
  int v44; // r15d
  __int64 v45; // rcx
  unsigned __int8 PagePriorityThread; // al
  __int64 v47; // r8
  int v48; // ecx
  int v49; // edx
  _QWORD *v50; // rax
  _QWORD *v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // r8
  int v54; // r12d
  int v55; // eax
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // r8
  int v59; // eax
  char *PoolWithTag; // rax
  _QWORD *v61; // rax
  NTSTATUS v62; // r15d
  __int64 *v63; // rcx
  __int64 v64; // rax
  __int64 **v65; // rdx
  _QWORD *v66; // rax
  struct _KEVENT *v67; // rcx
  _QWORD *v68; // rbx
  struct _KEVENT *v69; // rcx
  char v70; // [rsp+38h] [rbp-81h]
  int v71; // [rsp+3Ch] [rbp-7Dh]
  unsigned int v72; // [rsp+40h] [rbp-79h]
  struct _KLOCK_QUEUE_HANDLE v73; // [rsp+48h] [rbp-71h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-59h] BYREF
  void *v75; // [rsp+78h] [rbp-41h] BYREF
  PVOID Entry; // [rsp+80h] [rbp-39h]
  unsigned int v77; // [rsp+88h] [rbp-31h]
  int v78; // [rsp+8Ch] [rbp-2Dh]
  int v79; // [rsp+90h] [rbp-29h]
  __m128i v80; // [rsp+98h] [rbp-21h]
  __int64 v81; // [rsp+A8h] [rbp-11h]
  _KPROCESS *Process; // [rsp+B0h] [rbp-9h]
  struct _KTHREAD *v83; // [rsp+B8h] [rbp-1h]
  int v87; // [rsp+120h] [rbp+67h]

  CurrentThread = KeGetCurrentThread();
  v77 = 0;
  v9 = -2;
  v71 = 0;
  v72 = 0;
  Process = CurrentThread->ApcState.Process;
  v10 = 0LL;
  Entry = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  PrivateVolumeCacheMap = 0;
  *(_QWORD *)&v73.OldIrql = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v83 = CurrentThread;
  if ( !CcDbgDisableDAX )
    v9 = a7;
  v79 = v9;
  v75 = 0LL;
  v70 = 0;
  LockHandle.LockQueue = 0LL;
  v73.LockQueue = 0LL;
  if ( a4 && a5 || a5 && (*a5 != 1 || a5[1] != 40) )
    RtlRaiseStatus(-1073741811);
  v14 = *a2;
  v15 = (char *)(Object + 40);
  v16 = _mm_cvtsi128_si32(*a2);
  v17 = a2->m128i_i64[0] == 0;
  v81 = a2[1].m128i_i64[0];
  if ( v17 )
    v16 = 1;
  v78 = CurrentThread->MiscFlags & 0x400;
  v80 = v14;
  v80.m128i_i32[0] = v16;
  v18 = v80.m128i_i64[0] + 0x3FFFF;
  LODWORD(v18) = (v16 + 0x3FFFF) & 0xFFFC0000;
  v80.m128i_i64[0] = v18;
  if ( *(_QWORD *)(*(_QWORD *)(Object + 40) + 8LL) )
    goto LABEL_29;
  while ( 1 )
  {
    v10 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)&CcSharedCacheMapLookasideList);
    memset_0(v10, 0, 0x268uLL);
    v19 = v77 | 1;
    v20 = v10;
    if ( (v79 & 1) == 0 )
      v19 = v77;
    v77 = v19;
    v21 = MmCreateCacheManagerSection(&v75, v80.m128i_i64[0], v19, Object);
    v22 = v21;
    if ( v21 == -1073740277 )
    {
      KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
      PrivateVolumeCacheMap = -1073740277;
      if ( CcSectionDeletionSequencePhase3 != CcSectionDeletionSequencePhase1 )
        PrivateVolumeCacheMap = -1073700856;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      goto LABEL_76;
    }
    if ( v21 < 0 )
    {
      PrivateVolumeCacheMap = -1073741590;
      if ( FsRtlIsNtstatusExpected(v21) )
        PrivateVolumeCacheMap = v22;
LABEL_76:
      v44 = 0;
      goto LABEL_77;
    }
    v13 = v75;
    ObDeleteCapturedInsertInfo(v75);
    v12 = CcGetPartitionWithCreate(*(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock
                                                         + 8LL
                                                         * (*(_DWORD *)(**(_QWORD **)(Object + 40) + 60LL) & 0x3FF))
                                             + 256LL));
    if ( !v12 )
      goto LABEL_130;
    *v10 = 40370943;
    v10[139] = -1;
    v10[140] = -1;
    *((_QWORD *)v10 + 12) = Object & -(__int64)(Object != 0);
    *((_QWORD *)v10 + 1) = v80.m128i_i64[1];
    v23 = v81;
    *((_QWORD *)v10 + 5) = v81;
    *((_QWORD *)v10 + 6) = v23;
    v10[130] = HIDWORD(Process[1].CpuPartitionList.Blink);
    *((_QWORD *)v10 + 67) = v12;
    v10[152] = 0x40000;
    PrivateVolumeCacheMap = CcInitializeVolumeCacheMap(Object, (volatile signed __int64 **)v10 + 64);
    if ( PrivateVolumeCacheMap < 0
      || CcEnablePerVolumeLazyWriter
      && (PrivateVolumeCacheMap = CcCreatePrivateVolumeCacheMap(v12, v10, v10 + 150), PrivateVolumeCacheMap < 0) )
    {
      v44 = 0;
LABEL_77:
      v13 = v75;
LABEL_78:
      v52 = v72;
      v53 = 0LL;
      v54 = v44;
      v55 = v44;
      if ( !v20 )
      {
LABEL_79:
        if ( v55 )
          KeReleaseInStackQueuedSpinLock(&v73);
        if ( v44 )
LABEL_82:
          KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_83:
        CcFreeSharedCacheMapIgnoreNull((PSLIST_ENTRY)v10, v52, v53);
        CcFreePrivateCacheMapIgnoreNull(Entry);
        if ( v13 )
          ObDereferenceObjectDeferDeleteWithTag(v13, 0x746C6644u);
        if ( PrivateVolumeCacheMap < 0 )
        {
          if ( v70 )
            KeDelayExecutionThread(0, 0, &Cc10Milliseconds);
          RtlRaiseStatus(PrivateVolumeCacheMap);
        }
        return;
      }
      v70 = 0;
      if ( v44 )
      {
LABEL_88:
        v87 = v54;
        if ( v12 )
        {
          v87 = v54;
          if ( !v54 )
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v12 + 768), &v73);
            v87 = 1;
          }
        }
        if ( !v72 && !v20[28] && v20[1] )
          CcInsertIntoCleanSharedCacheMapList(v20);
        v56 = *((_QWORD *)v20 + 35);
        while ( v56 )
        {
          v68 = (_QWORD *)(v56 & 0xFFFFFFFFFFFFFFFEuLL);
          v69 = (struct _KEVENT *)(v68 + 1);
          v56 = *v68;
          KeSetEvent(v69, 0, 0);
        }
        *((_QWORD *)v20 + 35) = 0LL;
        v20[38] &= ~0x10000u;
        v55 = v87;
        goto LABEL_79;
      }
LABEL_113:
      KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
      v44 = 1;
      goto LABEL_88;
    }
    v10[72] = 1;
    *((_QWORD *)v10 + 37) = 0LL;
    v10[76] = 0;
    *((_WORD *)v10 + 156) = 1;
    *((_BYTE *)v10 + 314) = 6;
    v10[79] = 0;
    *((_QWORD *)v10 + 41) = v10 + 80;
    *((_QWORD *)v10 + 40) = v10 + 80;
    *((_QWORD *)v10 + 13) = 0LL;
    if ( a3 )
      v10[38] |= 4u;
    if ( (*(_DWORD *)(Object + 80) & 0x20) != 0 )
      v10[38] |= 0x40u;
    if ( !v78 )
      v10[38] |= 0x200000u;
    *((_QWORD *)v10 + 3) = v10 + 4;
    v15 = (char *)(Object + 40);
    *((_QWORD *)v10 + 2) = v10 + 4;
    v24 = v10[39];
    *((_QWORD *)v10 + 28) = a6;
    v25 = v24 | 1;
    v26 = v24 & 0xFFFFFFFE;
    if ( !a4 )
      v26 = v25;
    v27 = a4;
    if ( !a4 )
      v27 = a5;
    v10[39] = v26;
    *((_QWORD *)v10 + 27) = v27;
    v13 = v75;
    *((_QWORD *)v10 + 30) = v10 + 58;
    *((_QWORD *)v10 + 29) = v10 + 58;
LABEL_29:
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    if ( *(_QWORD *)(Object + 48) )
      break;
    v20 = *(_DWORD **)(*(_QWORD *)v15 + 8LL);
    if ( v20 )
    {
      v12 = *((_QWORD *)v20 + 67);
      v32 = CcGetPrivateVolumeCacheMap(*(_QWORD *)(*(_QWORD *)v15 + 8LL));
      v33 = *(_QWORD *)(Object + 208);
      v34 = v32;
      if ( v33 )
      {
        v35 = *(_QWORD **)(v33 + 72);
        if ( v35 )
        {
          if ( *v35 != *(_QWORD *)(v12 + 8) )
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 768), &v73);
            v59 = v20[1];
            if ( !v59 || v59 == v20[136] )
            {
              PrivateVolumeCacheMap = -1073741608;
              if ( CcEnablePerVolumeLazyWriter )
              {
                CcNotifyWriteBehindVolume(v34, *(_BYTE *)(v34 + 1172) != 0 ? 16 : 4);
                if ( !*(_BYTE *)(v34 + 1172) )
                  *(_BYTE *)(v34 + 985) = 1;
              }
              else
              {
                CcNotifyWriteBehindInternal(v12, *(_BYTE *)(v12 + 1292) != 0 ? 16 : 4);
                if ( !*(_BYTE *)(v12 + 1292) )
                  *(_BYTE *)(v12 + 1049) = 1;
              }
              v70 = 1;
            }
            else
            {
              PrivateVolumeCacheMap = -1073740277;
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v73);
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v54 = 0;
            goto LABEL_113;
          }
        }
      }
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 768), &v73);
      if ( (*(_DWORD *)(Object + 80) & 0x20) == 0 )
        v20[38] &= ~0x40u;
      v36 = v20[38];
      if ( (v36 & 0x200000) != 0 && v78 )
        v20[38] = v36 & 0xFFDFFFFF;
      Blink_high = HIDWORD(Process[1].CpuPartitionList.Blink);
      if ( Blink_high )
        v20[130] = Blink_high;
LABEL_42:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v73);
      v12 = *((_QWORD *)v20 + 67);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v12 + 768), &v73);
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (v20[38] & 0x80000) != 0 )
      {
        DbgPrint("CC: Reusing shared cache map that is already marked for deletion!\n");
        __debugbreak();
      }
      v20[38] &= ~0x10u;
      if ( *((_QWORD *)v20 + 11) || (v20[38] & 0x100) != 0 )
      {
        if ( (v20[38] & 0x100) != 0 )
        {
          if ( !*((_QWORD *)v20 + 23) )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x76456343u);
            *((_QWORD *)v20 + 23) = PoolWithTag;
            if ( !PoolWithTag )
            {
              KeReleaseInStackQueuedSpinLock(&v73);
              KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_130:
              PrivateVolumeCacheMap = -1073741670;
              v44 = 0;
              goto LABEL_78;
            }
            *(_WORD *)PoolWithTag = 0;
            PoolWithTag[2] = 6;
            *((_DWORD *)PoolWithTag + 1) = 0;
            v61 = PoolWithTag + 8;
            v61[1] = v61;
            *v61 = v61;
          }
          ++v20[1];
          KeReleaseInStackQueuedSpinLock(&v73);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          KeWaitForSingleObject(*((PVOID *)v20 + 23), Executive, 0, 0, 0LL);
          v62 = v20[40];
          if ( v62 < 0 )
          {
            PrivateVolumeCacheMap = -1073741590;
            if ( FsRtlIsNtstatusExpected(v62) )
              PrivateVolumeCacheMap = v62;
            goto LABEL_51;
          }
LABEL_61:
          CcFreeSharedCacheMapIgnoreNull((PSLIST_ENTRY)v10, v41, v42);
          v10 = 0LL;
          v43 = v20 + 96;
          if ( *((_WORD *)v20 + 192) )
            goto LABEL_67;
          while ( 1 )
          {
            v44 = 1;
            KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v12 + 768), &v73);
            if ( *(_QWORD *)(Object + 48) )
              break;
            if ( !*v43 )
              goto LABEL_64;
            if ( Entry )
            {
              v43 = Entry;
              Entry = 0LL;
LABEL_64:
              memset_0(v43, 0, 0x78uLL);
              v45 = (__int64)v83;
              *((_QWORD *)v43 + 1) = Object;
              *v43 = 766;
              *((_DWORD *)v43 + 1) = 4095;
              PagePriorityThread = PsGetPagePriorityThread(v45);
              v48 = *(_DWORD *)v43;
              v49 = *(_DWORD *)v43 ^ (PagePriorityThread << 18);
              *((_QWORD *)v43 + 10) = 0LL;
              v50 = v43 + 48;
              *(_DWORD *)v43 = v48 ^ v49 & 0x1C0000;
              v51 = (_QWORD *)*((_QWORD *)v20 + 30);
              if ( (_DWORD *)*v51 == v20 + 58 )
              {
                *v50 = v20 + 58;
                *((_QWORD *)v43 + 13) = v51;
                *v51 = v50;
                *((_QWORD *)v20 + 30) = v50;
                *(_QWORD *)(v47 + 48) = v43;
                goto LABEL_78;
              }
LABEL_33:
              __fastfail(3u);
            }
            KeReleaseInStackQueuedSpinLock(&v73);
            KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_67:
            Entry = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)&CcPrivateCacheMapLookasideList);
            if ( !Entry )
            {
              Entry = 0LL;
              v39 = 0;
              v70 = 0;
              v10 = 0LL;
              PrivateVolumeCacheMap = -1073741670;
              goto LABEL_69;
            }
          }
          if ( v20[1] <= 1u )
            KeBugCheckEx(0x34u, 0xA30uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          --v20[1];
          v20 = 0LL;
          goto LABEL_78;
        }
        ++v20[1];
        KeReleaseInStackQueuedSpinLock(&v73);
      }
      else
      {
        ++v20[1];
        v20[38] |= 0x100u;
        v38 = *((_QWORD *)v20 + 23);
        if ( v38 )
        {
          *(_WORD *)v38 = 0;
          *(_BYTE *)(v38 + 2) = 6;
          *(_DWORD *)(v38 + 4) = 0;
          v66 = (_QWORD *)(v38 + 8);
          v66[1] = v66;
          *v66 = v66;
        }
        KeReleaseInStackQueuedSpinLock(&v73);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v71 = 1;
        if ( *((_QWORD *)v20 + 22) )
        {
          PrivateVolumeCacheMap = -1073741811;
          goto LABEL_51;
        }
        if ( !v13 )
          KeBugCheckEx(0x34u, 0x8E4uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        *((_QWORD *)v20 + 22) = v13;
        v13 = 0LL;
        if ( (*(_BYTE *)(*(_QWORD *)(Object + 24) + 6LL) & 1) == 0 && !*(_QWORD *)(Object + 32) )
        {
          MmDisableModifiedWriteOfSection(*(_QWORD *)(Object + 40));
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 768), &v73);
          v20[38] |= 0x200u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v73);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        PrivateVolumeCacheMap = CcCreateVacbArray(v20, v80.m128i_i64[0]);
        if ( PrivateVolumeCacheMap < 0 )
        {
LABEL_51:
          v39 = v71;
LABEL_69:
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v12 + 768), &v73);
          if ( v39 )
          {
            v67 = (struct _KEVENT *)*((_QWORD *)v20 + 23);
            if ( v67 )
              KeSetEvent(v67, 0, 0);
            v20[38] &= ~0x100u;
          }
          if ( --v20[1] || (v20[38] & 0x20) != 0 || v20[28] )
          {
            KeReleaseInStackQueuedSpinLock(&v73);
            goto LABEL_82;
          }
          CcDeleteSharedCacheMap((PSLIST_ENTRY)v20, &LockHandle, &v73, 0, 0LL);
          goto LABEL_83;
        }
        if ( (v79 & 1) != 0 )
        {
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 768), &v73);
          v20[38] |= 0x40000000u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v73);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 + 768), &v73);
        v40 = (struct _KEVENT *)*((_QWORD *)v20 + 23);
        v20[38] &= ~0x100u;
        if ( v40 )
          KeSetEvent(v40, 0, 0);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v73);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      goto LABEL_61;
    }
    if ( v10 )
    {
      v20 = v10;
      v10 = 0LL;
      v28 = *((_QWORD *)v20 + 67);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v28 + 768), &v73);
      v29 = v28 + 640;
      v30 = v20 + 34;
      v31 = *(_QWORD **)(v29 + 8);
      if ( *v31 != v29 )
        goto LABEL_33;
      *((_QWORD *)v20 + 18) = v31;
      *v30 = v29;
      *v31 = v30;
      v17 = CcEnablePerVolumeLazyWriter == 0;
      *(_QWORD *)(v29 + 8) = v30;
      if ( !v17 )
      {
        v63 = (__int64 *)(v20 + 142);
        v64 = *((_QWORD *)v20 + 75) + 608LL;
        v65 = *(__int64 ***)(*((_QWORD *)v20 + 75) + 616LL);
        if ( *v65 != (__int64 *)v64 )
          goto LABEL_33;
        *v63 = v64;
        v15 = (char *)(Object + 40);
        *((_QWORD *)v20 + 72) = v65;
        *v65 = v63;
        *(_QWORD *)(v64 + 8) = v63;
      }
      v72 = 1;
      *(_QWORD *)(*(_QWORD *)v15 + 8LL) = v20;
      ObfReferenceObjectWithTag((PVOID)Object, 0x746C6644u);
      goto LABEL_42;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  CcFreeSharedCacheMapIgnoreNull((PSLIST_ENTRY)v10, v57, v58);
  if ( v13 )
    ObDereferenceObjectDeferDeleteWithTag(v13, 0x746C6644u);
}
