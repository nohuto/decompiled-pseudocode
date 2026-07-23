/*
 * XREFs of CcMapAndCopyInToCache @ 0x14026C7E0
 * Callers:
 *     CcCopyWriteEx @ 0x14026C4B0 (CcCopyWriteEx.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     IoDiskIoAttributionDereference @ 0x14021EF64 (IoDiskIoAttributionDereference.c)
 *     CcForceWriteThrough @ 0x140223A00 (CcForceWriteThrough.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     IoReferenceIoAttributionFromThread @ 0x14026C040 (IoReferenceIoAttributionFromThread.c)
 *     CcWrapperMmCopyToCachedPage @ 0x1402B2310 (CcWrapperMmCopyToCachedPage.c)
 *     CcDecrementVacbActiveCount @ 0x1402BF9B0 (CcDecrementVacbActiveCount.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     CcGetVirtualAddress @ 0x1402C2D60 (CcGetVirtualAddress.c)
 *     FsRtlIsNtstatusExpected @ 0x1402C4930 (FsRtlIsNtstatusExpected.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcFreeWorkQueueEntry @ 0x1403853FC (CcFreeWorkQueueEntry.c)
 *     CcFlushCachePriv @ 0x14039A060 (CcFlushCachePriv.c)
 *     CcSetDirtyInMask @ 0x14039F350 (CcSetDirtyInMask.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MiLockSectionControlArea @ 0x140447C00 (MiLockSectionControlArea.c)
 *     CcCopyToCacheHelper @ 0x140480FF4 (CcCopyToCacheHelper.c)
 *     CcCopyReadExceptionFilter @ 0x1404EDB58 (CcCopyReadExceptionFilter.c)
 *     CcLockSystemCacheBuffer @ 0x1405288CC (CcLockSystemCacheBuffer.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall CcMapAndCopyInToCache(
        _DWORD *a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        _QWORD *a7,
        char a8,
        struct _KTHREAD *a9,
        LARGE_INTEGER *a10)
{
  unsigned int v10; // r15d
  _DWORD *v11; // r13
  int v12; // r9d
  unsigned int v13; // r14d
  __int64 v14; // rdi
  int v15; // r12d
  _SLIST_ENTRY *v16; // rbx
  bool v17; // zf
  char v18; // al
  int v20; // eax
  __int64 v21; // rax
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v23; // rax
  struct _KTHREAD *v24; // rax
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  unsigned __int64 v27; // rsi
  __int64 v28; // rbx
  _DWORD *v29; // rcx
  unsigned __int64 v30; // r14
  signed __int64 v31; // rax
  bool v32; // cc
  signed __int64 v33; // rax
  __int64 v34; // rcx
  signed __int64 v35; // rax
  signed __int64 v36; // rax
  __int64 v37; // rcx
  int v39; // eax
  __int64 VirtualAddress; // rax
  unsigned int v41; // edx
  unsigned int v42; // r15d
  unsigned int v43; // ecx
  __int64 v44; // r10
  unsigned int v45; // edx
  int v46; // eax
  int v47; // ebx
  unsigned int v48; // ecx
  NTSTATUS v49; // edi
  char v50; // r15
  BOOL v51; // r13d
  char v52; // al
  unsigned int v53; // esi
  unsigned int v54; // eax
  NTSTATUS v55; // eax
  NTSTATUS v56; // edi
  char v57; // r14
  char v58; // si
  struct _KTHREAD *v59; // rax
  char v60; // bl
  char v61; // r15
  struct _MDL *v62; // rsi
  __int64 v63; // rdx
  int v64; // eax
  unsigned int v65; // r14d
  __int64 v66; // rdi
  int v67; // r8d
  unsigned int v68; // edi
  __int64 v69; // rdx
  int v70; // r9d
  unsigned int v71; // edx
  struct _KTHREAD *v72; // rcx
  __int64 v73; // rbx
  struct _KEVENT *v74; // rcx
  unsigned int v75; // ebx
  NTSTATUS v76; // ebx
  unsigned int v77; // r8d
  struct _KTHREAD *v78; // rdx
  __int64 v79; // rsi
  struct _KEVENT *v80; // rcx
  char v81; // cl
  char v82; // al
  NTSTATUS v83; // r13d
  unsigned int v84; // r8d
  int v85; // edx
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v87; // ecx
  BOOLEAN v88; // al
  NTSTATUS v89; // ecx
  BOOLEAN v90; // al
  NTSTATUS v91; // ecx
  int v92; // [rsp+68h] [rbp-158h]
  unsigned __int8 v93; // [rsp+88h] [rbp-138h] BYREF
  char v94; // [rsp+89h] [rbp-137h]
  char v95; // [rsp+8Ah] [rbp-136h]
  bool v96; // [rsp+8Bh] [rbp-135h]
  char v97; // [rsp+8Ch] [rbp-134h]
  char v98; // [rsp+8Dh] [rbp-133h]
  char v99; // [rsp+8Eh] [rbp-132h]
  char v100; // [rsp+8Fh] [rbp-131h]
  char v101; // [rsp+90h] [rbp-130h] BYREF
  _BYTE v102[2]; // [rsp+91h] [rbp-12Fh] BYREF
  char v103; // [rsp+93h] [rbp-12Dh]
  bool v104; // [rsp+94h] [rbp-12Ch]
  unsigned int v105; // [rsp+98h] [rbp-128h]
  unsigned int v106; // [rsp+9Ch] [rbp-124h]
  unsigned int v107; // [rsp+A0h] [rbp-120h]
  unsigned int v108; // [rsp+A4h] [rbp-11Ch]
  int v109; // [rsp+A8h] [rbp-118h]
  unsigned int v110; // [rsp+ACh] [rbp-114h] BYREF
  NTSTATUS v111; // [rsp+B0h] [rbp-110h]
  int v112; // [rsp+B4h] [rbp-10Ch]
  unsigned int v113; // [rsp+B8h] [rbp-108h]
  __int64 v114; // [rsp+C0h] [rbp-100h] BYREF
  int v115; // [rsp+C8h] [rbp-F8h]
  int v116; // [rsp+CCh] [rbp-F4h]
  __int64 v117; // [rsp+D0h] [rbp-F0h]
  PVOID P; // [rsp+D8h] [rbp-E8h] BYREF
  int v119; // [rsp+E0h] [rbp-E0h]
  unsigned int v120; // [rsp+E4h] [rbp-DCh]
  unsigned int v121; // [rsp+E8h] [rbp-D8h]
  __int64 v122; // [rsp+F0h] [rbp-D0h] BYREF
  NTSTATUS Exception[4]; // [rsp+F8h] [rbp-C8h] BYREF
  __int64 v124; // [rsp+108h] [rbp-B8h]
  struct _KTHREAD *CurrentThread; // [rsp+110h] [rbp-B0h]
  unsigned int v126; // [rsp+118h] [rbp-A8h]
  int v127; // [rsp+11Ch] [rbp-A4h]
  struct _MDL *v128; // [rsp+120h] [rbp-A0h] BYREF
  __int64 v129; // [rsp+128h] [rbp-98h]
  __int64 v130; // [rsp+130h] [rbp-90h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+138h] [rbp-88h] BYREF
  BOOL v132; // [rsp+150h] [rbp-70h]
  int v133; // [rsp+154h] [rbp-6Ch]
  __int64 v134; // [rsp+158h] [rbp-68h]
  __int64 v135; // [rsp+160h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE v136; // [rsp+168h] [rbp-58h] BYREF
  __int64 retaddr; // [rsp+1C0h] [rbp+0h]
  int v139; // [rsp+1D8h] [rbp+18h]

  v139 = (int)a3;
  v10 = a4;
  v106 = a4;
  v124 = a2;
  v11 = a1;
  v126 = a4;
  v110 = 0;
  v107 = 0;
  *(_OWORD *)Exception = 0LL;
  v12 = *(_DWORD *)(a6 + 80);
  LOBYTE(v12) = (v12 & 0x10) != 0;
  v109 = v12;
  v98 = v12;
  v120 = v10;
  v13 = *a3 & 0xFFF;
  v108 = v13;
  v14 = 0LL;
  v122 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v15 = 0;
  v100 = 0;
  v95 = 0;
  v97 = 0;
  v16 = 0LL;
  P = 0LL;
  v94 = 0;
  v102[1] = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v136, 0, sizeof(v136));
  v17 = (a1[38] & 0x1000) == 0;
  v116 = a1[38] & 0x1000;
  v104 = !v17;
  v114 = *(_QWORD *)a3;
  v119 = BYTE4(CurrentThread[1].Queue) + 2 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v127 = v119;
  v18 = v12;
  v99 = v12;
  if ( !(_BYTE)v12 )
  {
    v18 = CcForceWriteThrough(a6, v10, (__int64)a1, 1);
    v99 = v18;
  }
  if ( v18 )
  {
    if ( !a8 )
      return 0;
    *a10 = KeQueryPerformanceCounter(0LL);
  }
  v20 = 6;
  if ( a8 )
    v20 = 4;
  v121 = v20;
  v21 = *((_QWORD *)v11 + 67);
  v130 = v21;
  v135 = v21;
  if ( (_BYTE)v109 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v21 + 768), &LockHandle);
    if ( (v11[38] & 0x20) != 0 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v130 + 832), &v136);
      v16 = (_SLIST_ENTRY *)*((_QWORD *)v11 + 63);
      if ( !v16 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v136);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
        RtlRaiseStatus(-1073741608);
      }
      Next = v16->Next;
      v23 = (_SLIST_ENTRY **)*((_QWORD *)&v16->Next + 1);
      if ( *(&v16->Next->Next + 1) != v16 || *v23 != v16 )
        __fastfail(3u);
      *v23 = Next;
      *((_QWORD *)&Next->Next + 1) = v23;
      *((_QWORD *)&v16->Next + 1) = 0LL;
      v16->Next = 0LL;
      *((_QWORD *)v11 + 63) = 0LL;
      v11[38] &= ~0x20u;
      v95 = 1;
      v97 = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v136);
    }
    ++v11[131];
    v100 = 1;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( v16 )
    CcFreeWorkQueueEntry(v16);
  v24 = a9;
  if ( !a9 )
  {
    v24 = KeGetCurrentThread();
    a9 = v24;
  }
  if ( (int)IoReferenceIoAttributionFromThread(v24, &P) >= 0 )
  {
    v93 = 0;
    v25 = 0LL;
    v26 = MiLockSectionControlArea(*(_QWORD *)(a6 + 40), 1LL, &v93);
    v27 = (unsigned __int64)P;
    if ( v26 )
    {
      if ( P != (PVOID)(*(_QWORD *)(v26 + 120) & 0xFFFFFFFFFFFFFFF8uLL) )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)P + 4) <= 1 )
          __fastfail(0xEu);
        v28 = *(_QWORD *)(v26 + 120);
        *(_QWORD *)(v26 + 120) = v28 ^ (v27 ^ v28) & 0xFFFFFFFFFFFFFFF8uLL;
        v25 = v28 & 0xFFFFFFFFFFFFFFF8uLL;
      }
      v29 = (_DWORD *)(v26 + 72);
      v30 = v93;
      if ( v93 == 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v29 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v29, retaddr);
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v29 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v29, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v30);
        __writecr8(v30);
      }
      if ( v25 )
      {
        v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 32), 0xFFFFFFFFFFFFFFFFuLL);
        v32 = v31 <= 1;
        v33 = v31 - 1;
        if ( v32 )
        {
          if ( v33 )
            __fastfail(0xEu);
          v34 = *(_QWORD *)(v25 + 176);
          if ( v34 )
            IoDiskIoAttributionDereference(v34);
          ExFreePoolWithTag((PVOID)v25, 0);
        }
      }
      LODWORD(v11) = (_DWORD)a1;
      v13 = v108;
    }
    v35 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 32), 0xFFFFFFFFFFFFFFFFuLL);
    v32 = v35 <= 1;
    v36 = v35 - 1;
    if ( v32 )
    {
      if ( v36 )
        __fastfail(0xEu);
      v37 = *(_QWORD *)(v27 + 176);
      if ( v37 )
        IoDiskIoAttributionDereference(v37);
      ExFreePoolWithTag((PVOID)v27, 0);
    }
    v10 = v106;
  }
  v39 = v114;
  while ( v10 )
  {
    v96 = 0;
    if ( v116 )
      a5 = 0;
    v115 = a5;
    v107 = 0;
    VirtualAddress = CcGetVirtualAddress((_DWORD)v11, v39, (unsigned int)&v122, (unsigned int)&v110, 0, 0);
    v117 = VirtualAddress;
    v41 = v110;
    if ( v110 > v10 )
      v41 = v10;
    v107 = v41;
    v42 = v10 - v41;
    v106 = v42;
    v43 = v13;
    v44 = VirtualAddress - v13;
    v117 = v44;
    v45 = v13 + v41;
    v113 = v45;
    v110 = v45;
    v46 = 1;
    HIDWORD(v129) = HIDWORD(v114);
    v47 = v114 - v13;
    LODWORD(v129) = v114 - v13;
    v94 = 0;
    LOBYTE(v43) = 0;
    v105 = v43;
    v96 = 0;
    v48 = v45;
    while ( 1 )
    {
      v93 = 0;
      v49 = 0;
      v50 = 1;
      v102[0] = 1;
      v51 = v48 > 0x1000;
      v132 = v51;
      v111 = 0;
      if ( (v46 & v115) != 0 )
      {
        if ( v129 >= *a7 )
        {
          v15 |= 1u;
          v112 = v15;
        }
        v11 = a1;
        if ( (a1[38] & 0x40) != 0 )
        {
          v15 |= 2u;
          v112 = v15;
        }
        if ( (a1[38] & 0x40000000) != 0 )
        {
          v52 = 0;
          if ( v48 <= 0x1000 )
            v52 = v45;
          if ( (((unsigned __int8)v13 | (unsigned __int8)(v52 - v13)) & 0x3F) != 0 )
          {
            v15 &= 0xFFFFFFF3;
            v112 = v15;
            LOBYTE(v42) = 1;
            v105 = v42;
            v96 = 1;
          }
          else
          {
            v15 |= 4u;
            v112 = v15;
            v42 = v105;
            if ( (_BYTE)v109 )
            {
              v15 |= 8u;
              v112 = v15;
            }
          }
        }
        else
        {
          v42 = v105;
        }
        v93 = 0;
        v53 = 4096 - v13;
        if ( v48 <= 0x1000 )
          v54 = v45 - v13;
        else
          v54 = 4096 - v13;
        v55 = CcWrapperMmCopyToCachedPage(v44, v124, v13, v54, v15, (__int64)&v93);
        v56 = v55;
        v111 = v55;
        if ( v55 < 0 )
        {
          IsNtstatusExpected = FsRtlIsNtstatusExpected(v55);
          v87 = -1073741592;
          if ( IsNtstatusExpected )
            v87 = v56;
          RtlRaiseStatus(v87);
        }
        v94 = 1;
        if ( !(_BYTE)v42 )
        {
          v42 = v93 != 0;
          v105 = v42;
          v96 = v93 != 0;
        }
      }
      else
      {
        v57 = 1;
        v101 = 1;
        v58 = 0;
        v103 = 0;
        if ( v48 > 0x1000 && (v115 & 4) != 0 )
        {
          v59 = CurrentThread;
          BYTE4(CurrentThread[1].Queue) = 1;
          if ( !LODWORD(v59[1].WaitListEntry.Flink) )
            LODWORD(v59[1].WaitListEntry.Flink) = 1;
        }
        if ( a8 && !a10->QuadPart )
        {
          MmCheckCachedPageStates(v44, 1LL, v121 | 2, &v101);
          v58 = 1;
          v103 = 1;
          v57 = v101;
          if ( !v101 )
            *a10 = KeQueryPerformanceCounter(0LL);
          v44 = v117;
        }
        if ( !v58 || !v57 )
        {
          v49 = MmCheckCachedPageStates(v44, 1LL, v121, v102);
          v50 = v102[0];
        }
        if ( !v50 && !a8 )
        {
          v60 = 0;
          v14 = v122;
          v61 = v94;
          goto LABEL_136;
        }
        v62 = 0LL;
        v128 = 0LL;
        v63 = 0LL;
        v134 = 0LL;
        LODWORD(P) = 0;
        if ( v49 < 0 )
          RtlRaiseStatus(v49);
        v64 = v116;
        v65 = v113;
        v66 = v117;
        if ( v116 )
        {
          v67 = v113;
          if ( v113 > 0x1000 )
            v67 = 4096;
          v63 = CcLockSystemCacheBuffer(v117, (unsigned int)&v128, v67, 1, (__int64)&P);
          v134 = v63;
          if ( !v63 )
            RtlRaiseStatus((NTSTATUS)P);
          v62 = v128;
          v64 = v116;
        }
        if ( !v64 )
          v63 = v66;
        v68 = v108;
        v69 = v108 + v63;
        v70 = 4096;
        if ( !v51 )
          v70 = v65;
        v93 = 0;
        LOBYTE(v92) = v104;
        v11 = a1;
        CcCopyToCacheHelper(a1, v69, v124, v70 - v108, v92, &v93);
        v94 = 1;
        v42 = v105;
        if ( !(_BYTE)v105 )
        {
          v42 = v93 != 0;
          v105 = v42;
          v96 = v93 != 0;
        }
        if ( v62 )
        {
          MmUnlockPages(v62);
          IoFreeMdl(v62);
          v128 = 0LL;
          v11 = a1;
        }
        v71 = v119;
        v72 = CurrentThread;
        BYTE4(CurrentThread[1].Queue) = v119 & 1;
        LODWORD(v72[1].WaitListEntry.Flink) = v71 >> 1;
        v53 = 4096 - v68;
      }
      v124 += v53;
      v13 = 0;
      v108 = 0;
      v133 = 0;
      if ( v113 <= 0x1000 )
        break;
      v44 = v117 + 4096;
      v117 += 4096LL;
      v45 = v113 - 4096;
      v113 = v45;
      v48 = v45;
      v110 = v45;
      v47 += 4096;
      LODWORD(v129) = v47;
      if ( v106 )
      {
        v46 = 2;
      }
      else
      {
        v46 = 4;
        if ( v45 > 0x1000 )
          v46 = 2;
      }
    }
    v94 = 0;
    v73 = *(_QWORD *)(v122 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v122 + 16)) )
    {
      v74 = *(struct _KEVENT **)(v73 + 192);
      if ( v74 )
        KeSetEvent(v74, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v73 + 552));
    }
    v14 = 0LL;
    v122 = 0LL;
    v75 = v107;
    CcSetDirtyInMask(v11, &v114, v107, a9);
    if ( (v11[38] & 0x40000000) == 0 && v120 - v106 > 0x1000000 || (v11[38] & 0x40000000) != 0 && (_BYTE)v42 )
    {
      if ( !a10->QuadPart )
        *a10 = KeQueryPerformanceCounter(0LL);
      CcFlushCachePriv(*(_QWORD *)(a6 + 40), (unsigned int)&v114, v107, 0, v109, (__int64)Exception, 0LL);
      v76 = Exception[0];
      if ( Exception[0] < 0 )
      {
        v88 = FsRtlIsNtstatusExpected(Exception[0]);
        v89 = -1073741591;
        if ( v88 )
          v89 = v76;
        RtlRaiseStatus(v89);
      }
      v75 = v107;
    }
    v10 = v106;
    a5 = v115;
    if ( v106 < 0x1000 )
    {
      if ( (v115 & 4) == 0 )
        a5 = 0;
    }
    else
    {
      a5 = v115 | 1;
    }
    v39 = v75 + v114;
    v114 += v75;
  }
  v60 = 1;
  v61 = 0;
  v94 = 0;
LABEL_136:
  v77 = v119;
  v78 = CurrentThread;
  BYTE4(CurrentThread[1].Queue) = v119 & 1;
  LODWORD(v78[1].WaitListEntry.Flink) = v77 >> 1;
  if ( v14 )
  {
    v79 = *(_QWORD *)(v14 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v14 + 16)) )
    {
      v80 = *(struct _KEVENT **)(v79 + 192);
      if ( v80 )
        KeSetEvent(v80, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v79 + 552));
    }
  }
  if ( v61 && v107 )
    CcSetDirtyInMask(a1, &v114, v107, a9);
  if ( CcRemoteFileDPInlineFlushThreshold == -1
    || (*(_DWORD *)(a6 + 80) & 0x1000000) == 0
    || (_BYTE)v109
    || a1[28] < (unsigned int)CcRemoteFileDPInlineFlushThreshold )
  {
    v82 = 0;
    v81 = v95;
  }
  else
  {
    v81 = 1;
    v82 = 1;
  }
  if ( v99 || v82 )
  {
    v83 = 0;
    Exception[0] = 0;
    if ( !(_BYTE)v109 || (a1[38] & 0x40000000) == 0 )
    {
      v84 = 0;
      if ( !v81 )
        v84 = v126;
      v85 = 0;
      if ( !v81 )
        v85 = v139;
      CcFlushCachePriv(*(_QWORD *)(a6 + 40), v85, v84, 0, v109, (__int64)Exception, 0LL);
      v83 = Exception[0];
    }
    if ( v100 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v130 + 768), &LockHandle);
      --a1[131];
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v83 = Exception[0];
    }
    if ( v83 < 0 )
    {
      v90 = FsRtlIsNtstatusExpected(v83);
      v91 = -1073741591;
      if ( v90 )
        v91 = v83;
      RtlRaiseStatus(v91);
    }
  }
  return v60;
}
