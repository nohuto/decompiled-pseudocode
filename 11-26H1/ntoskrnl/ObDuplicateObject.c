/*
 * XREFs of ObDuplicateObject @ 0x1408F6C40
 * Callers:
 *     CmpCreateEmptyHiveClone @ 0x140862384 (CmpCreateEmptyHiveClone.c)
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 *     PspCopyAndFixupParameters @ 0x1409E5AE8 (PspCopyAndFixupParameters.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A80120 (IoConvertFileHandleToKernelHandle.c)
 *     NtDuplicateObject @ 0x140A88750 (NtDuplicateObject.c)
 *     PspPropagateHandle @ 0x140ADE284 (PspPropagateHandle.c)
 *     DbgkpOpenHandles @ 0x140AEC2B4 (DbgkpOpenHandles.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140B68D40 (MiInitializePartitionSpecialPurposeMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278120 (ObpTraceObjectReferenceIfActive.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfAcquireRundownProtection @ 0x1402D2650 (ExfAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ObpIncrPointerCount @ 0x14042E6C0 (ObpIncrPointerCount.c)
 *     OBJECT_HEADER_TO_AUDIT_INFO @ 0x14043ECF0 (OBJECT_HEADER_TO_AUDIT_INFO.c)
 *     ExGetHandlePointer @ 0x14044EE00 (ExGetHandlePointer.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     KeCallbackValidationEpilogue @ 0x1404D9E98 (KeCallbackValidationEpilogue.c)
 *     KeCallbackValidationPrologue @ 0x1404E22FC (KeCallbackValidationPrologue.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObpCallPreOperationCallbacks @ 0x1408F5C04 (ObpCallPreOperationCallbacks.c)
 *     ObpDecrementHandleCount2 @ 0x1408F6920 (ObpDecrementHandleCount2.c)
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     ExpAllocateTablePagedPool @ 0x140906A9C (ExpAllocateTablePagedPool.c)
 *     ExpUpdateDebugInfo @ 0x140908210 (ExpUpdateDebugInfo.c)
 *     ExpGetHandleExtraInfo @ 0x1409084AC (ExpGetHandleExtraInfo.c)
 *     ExpFreeTablePagedPool @ 0x140908540 (ExpFreeTablePagedPool.c)
 *     ObpIncrementHandleCountEx @ 0x14090A400 (ObpIncrementHandleCountEx.c)
 *     ObpGrantAccess @ 0x14090BCA0 (ObpGrantAccess.c)
 *     SeAuditHandleCreation @ 0x14091F860 (SeAuditHandleCreation.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14092AE54 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14092AE90 (ExpLookupHandleTableEntry.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1409BD784 (ExpAllocateHandleTableEntrySlow.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1409FE320 (SeAuditingWithTokenForSubcategory.c)
 *     SeCreateAccessState @ 0x140A0FB70 (SeCreateAccessState.c)
 *     EtwTraceDuplicateHandle @ 0x140AD3AE0 (EtwTraceDuplicateHandle.c)
 *     SeAuditHandleDuplication @ 0x140B2A79C (SeAuditHandleDuplication.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObDuplicateObject(
        __int64 a1,
        void *a2,
        struct _KPROCESS *a3,
        __int64 *a4,
        int a5,
        int a6,
        char a7,
        unsigned __int8 a8)
{
  PEPROCESS v8; // rbx
  int v11; // edi
  int v12; // r13d
  struct _EX_RUNDOWN_REF *v13; // r14
  unsigned __int64 v14; // rtt
  ULONG_PTR v15; // rsi
  bool v17; // zf
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 v19; // rax
  signed __int64 *v20; // rbx
  signed __int64 v21; // r8
  volatile signed __int64 *HandlePointer; // r13
  int v23; // ecx
  int v24; // r12d
  __int64 *HandleExtraInfo; // rax
  unsigned int v26; // edx
  signed __int64 v27; // rax
  struct _KLOCK_ENTRIES *v28; // r9
  unsigned int v29; // esi
  void *v30; // rax
  struct _KPROCESS *v31; // rax
  unsigned int v32; // ebx
  PRKPROCESS v33; // r8
  struct _EX_RUNDOWN_REF *p_Blink; // rbx
  unsigned __int64 v35; // rtt
  unsigned __int64 KernelTime; // rax
  volatile signed __int64 *p_SchedulerAssistLastYieldBoostTime; // rbx
  unsigned int v38; // r15d
  int v39; // r14d
  __int64 v40; // rax
  _BYTE *v41; // r15
  int v42; // ebx
  int v43; // ebx
  char v44; // di
  char *v45; // rsi
  int v46; // r12d
  PRKPROCESS v47; // r13
  char v48; // r12
  __int64 v49; // rdi
  int v50; // ebx
  struct _KTHREAD *v51; // r13
  __int64 v52; // r14
  unsigned int *v53; // r12
  char v54; // al
  unsigned int Number; // ecx
  unsigned int v56; // eax
  int v57; // r13d
  unsigned int v58; // r15d
  unsigned int *v59; // rdi
  AutoBoost *v60; // rax
  void *v61; // rdx
  AutoBoost *v62; // rsi
  __int64 *v63; // rsi
  __int64 v64; // rax
  signed int v65; // eax
  char *v66; // rbx
  struct _KLOCK_ENTRIES *v67; // r9
  PRKPROCESS v68; // rdi
  PRKPROCESS v69; // r13
  int v70; // esi
  BOOL v71; // r12d
  PVOID *v72; // r8
  unsigned __int64 v73; // rcx
  _QWORD *v74; // rsi
  PVOID *v75; // rax
  struct _EX_RUNDOWN_REF *v76; // rdi
  __int64 v77; // rbx
  __int64 v78; // r15
  unsigned __int64 v79; // rdx
  __int64 v80; // r8
  volatile signed __int64 *v81; // rax
  volatile signed __int64 *v82; // rdi
  volatile signed __int64 v83; // rcx
  __int64 v84; // rdx
  int v85; // eax
  PRKPROCESS v86; // r14
  __int64 v87; // rcx
  int v88; // edi
  int v89; // edi
  int v90; // r13d
  _QWORD *TablePagedPool; // rax
  _QWORD *v92; // rax
  char v93; // r15
  unsigned int v94; // eax
  unsigned __int64 v95; // rdi
  AutoBoost *v96; // rax
  void *v97; // rdx
  AutoBoost *v98; // r14
  __int64 v99; // rax
  __int64 v100; // rdx
  char v101; // al
  __int64 v102; // rax
  __int64 v103; // rax
  char HandleTableEntrySlow; // r13
  unsigned int *v105; // r15
  AutoBoost *v106; // rax
  void *v107; // rdx
  AutoBoost *v108; // rdi
  signed __int32 v109[8]; // [rsp+0h] [rbp-100h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  bool v111; // [rsp+40h] [rbp-C0h]
  unsigned int v112; // [rsp+44h] [rbp-BCh] BYREF
  int v113; // [rsp+48h] [rbp-B8h]
  PVOID Object; // [rsp+50h] [rbp-B0h]
  PRKPROCESS PROCESS; // [rsp+58h] [rbp-A8h]
  __int64 v116; // [rsp+60h] [rbp-A0h]
  int v117; // [rsp+68h] [rbp-98h]
  PRKPROCESS v118; // [rsp+70h] [rbp-90h]
  unsigned int v119; // [rsp+78h] [rbp-88h]
  int v120; // [rsp+7Ch] [rbp-84h]
  unsigned __int64 v121; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v122; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h]
  __int64 v124; // [rsp+98h] [rbp-68h]
  PVOID P[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v126; // [rsp+B0h] [rbp-50h]
  struct _KTHREAD *v127; // [rsp+B8h] [rbp-48h]
  __int64 v128; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v129; // [rsp+C8h] [rbp-38h] BYREF
  PRKPROCESS v130; // [rsp+D0h] [rbp-30h]
  PRKPROCESS v131; // [rsp+D8h] [rbp-28h]
  unsigned int *v132; // [rsp+E0h] [rbp-20h]
  int v133; // [rsp+E8h] [rbp-18h] BYREF
  BOOL v134; // [rsp+ECh] [rbp-14h]
  PVOID v135; // [rsp+F0h] [rbp-10h]
  __int64 v136; // [rsp+F8h] [rbp-8h]
  __int64 v137; // [rsp+100h] [rbp+0h]
  unsigned __int64 *v138; // [rsp+108h] [rbp+8h]
  unsigned __int64 *v139; // [rsp+110h] [rbp+10h]
  __int64 *v140; // [rsp+118h] [rbp+18h]
  struct _KAPC_STATE ApcState; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v142[160]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v143[224]; // [rsp+1F0h] [rbp+F0h] BYREF

  v8 = a3;
  Handle = a2;
  PROCESS = (PRKPROCESS)a1;
  v118 = a3;
  v140 = a4;
  memset(&ApcState, 0, sizeof(ApcState));
  memset_0(v143, 0, sizeof(v143));
  v128 = 0LL;
  memset_0(v142, 0, sizeof(v142));
  v116 = 0LL;
  v112 = 0;
  *(_OWORD *)P = 0LL;
  if ( (a6 & 0x200) != 0 )
  {
    if ( !a8 )
      v8 = PsInitialSystemProcess;
    v118 = v8;
  }
  if ( a4 )
    *a4 = 0LL;
  v11 = a5;
  v12 = a7 & 2;
  v117 = v12;
  if ( (a7 & 2) == 0 && (a5 & 0xCE00000) != 0 )
    return 3221225506LL;
  if ( !v8 )
  {
    v17 = (*(_DWORD *)(a1 + 368) & 1) == 0LL;
    goto LABEL_14;
  }
  if ( (*(_DWORD *)(a1 + 368) & 1) != 0 || (v8->SecureState.EntireField & 1) != 0 )
  {
    if ( (_KPROCESS *)a1 != KeGetCurrentThread()->ApcState.Process )
      return 3221225506LL;
    v17 = v8 == KeGetCurrentThread()->ApcState.Process;
LABEL_14:
    if ( v17 )
      goto LABEL_8;
    return 3221225506LL;
  }
LABEL_8:
  v13 = (struct _EX_RUNDOWN_REF *)(a1 + 488);
  _m_prefetchw((const void *)(a1 + 488));
  v14 = *(_QWORD *)(a1 + 488) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v14 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 488), v14 + 2, v14)
    && !ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 488)) )
  {
    return 3221225738LL;
  }
  v15 = *(_QWORD *)(a1 + 768);
  if ( !v15 )
  {
    ExReleaseRundownProtection_0(v13);
    return 3221225738LL;
  }
  CurrentThread = KeGetCurrentThread();
  v19 = (unsigned __int64)Handle;
  v124 = (__int64)Handle;
  Object = CurrentThread;
  if ( (int)Handle >= 0 )
    goto LABEL_24;
  if ( Handle != (HANDLE)-1LL )
  {
    if ( Handle == (HANDLE)-2LL )
    {
      p_SchedulerAssistLastYieldBoostTime = &CurrentThread[-1].SchedulerAssistLastYieldBoostTime;
      v29 = 0;
      v116 = 0LL;
      v24 = 0x1FFFFF;
      ObpTraceObjectReferenceIfActive((__int64)&CurrentThread[-1].SchedulerAssistLastYieldBoostTime, 1, 0x6E48624Fu);
      ObpIncrPointerCount(p_SchedulerAssistLastYieldBoostTime);
LABEL_37:
      v31 = PROCESS;
      goto LABEL_38;
    }
    if ( a8 )
    {
LABEL_55:
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink);
      return 3221225480LL;
    }
    v15 = ObpKernelHandleTable;
    v19 = (unsigned __int64)Handle ^ 0xFFFFFFFF80000000uLL;
    v124 = (unsigned __int64)Handle ^ 0xFFFFFFFF80000000uLL;
LABEL_24:
    --CurrentThread->KernelApcDisable;
    if ( (v19 & 0x3FC) != 0 )
    {
      v20 = (signed __int64 *)ExpLookupHandleTableEntry(v15, v19);
      if ( v20 )
      {
        do
        {
          while ( 1 )
          {
            _m_prefetchw(v20);
            v21 = *v20;
            if ( (*v20 & 1) != 0 )
              break;
            if ( !v21 )
            {
              CurrentThread = (struct _KTHREAD *)Object;
              goto LABEL_54;
            }
            ExpBlockOnLockedHandleEntry(v15, v20, v21);
          }
        }
        while ( v21 != _InterlockedCompareExchange64(v20, v21 - 1, v21) );
        HandlePointer = (volatile signed __int64 *)ExGetHandlePointer(v20);
        v23 = *((_DWORD *)v20 + 2);
        v24 = v23 & 0x1FFFFFF;
        if ( *(_DWORD *)(v15 + 4)
          && (HandleExtraInfo = (__int64 *)ExpGetHandleExtraInfo(v15, v124), v23 = *((_DWORD *)v20 + 2), HandleExtraInfo) )
        {
          v116 = *HandleExtraInfo;
        }
        else
        {
          v116 = 0LL;
        }
        v26 = ((__int64)*(unsigned int *)v20 >> 17) & 7 | 8;
        if ( (v23 & 0x2000000) == 0 )
          v26 = ((__int64)*(unsigned int *)v20 >> 17) & 7;
        v119 = v26;
        v27 = _InterlockedIncrement64(HandlePointer);
        if ( v27 <= 1 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(HandlePointer + 6), 0x10uLL, v27);
        _InterlockedIncrement64(v20);
        _InterlockedOr(v109, 0);
        if ( *(_QWORD *)(v15 + 48) )
          ExfUnblockPushLock((volatile __int64 *)(v15 + 48), 0LL);
        KeLeaveCriticalRegionThread((__int64)Object);
        ObpTraceObjectReferenceIfActive((__int64)HandlePointer, 1, 0x6E48624Fu);
        v29 = v119;
        v30 = (void *)(HandlePointer + 6);
        v12 = v117;
        Object = v30;
        goto LABEL_37;
      }
    }
LABEL_54:
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    goto LABEL_55;
  }
  v29 = 0;
  v116 = 0LL;
  v24 = 0x1FFFFF;
  ObpTraceObjectReferenceIfActive((__int64)&PROCESS[-1].ExtendedFeatureDisableMask, 1, 0x6E48624Fu);
  ObpIncrPointerCount((volatile signed __int64 *)&PROCESS[-1].ExtendedFeatureDisableMask);
  v31 = PROCESS;
  Object = PROCESS;
LABEL_38:
  v32 = 0;
  if ( (v29 & 4) == 0 )
    LODWORD(v116) = 0;
  v33 = v118;
  if ( !v118 )
  {
    if ( (a7 & 1) != 0 )
    {
      KeStackAttachProcess(v31, &ApcState);
      NtClose(Handle);
      KiUnstackDetachProcess((__int64)&ApcState, 0);
    }
    else
    {
      v32 = -1073741811;
    }
    ExReleaseRundownProtection_0(v13);
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return v32;
  }
  p_Blink = (struct _EX_RUNDOWN_REF *)&v118[1].ProfileListHead.Blink;
  _m_prefetchw(&v118[1].ProfileListHead.Blink);
  v35 = (unsigned __int64)v118[1].ProfileListHead.Blink & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v35 != _InterlockedCompareExchange64((volatile signed __int64 *)&v118[1].ProfileListHead.Blink, v35 + 2, v35) )
  {
    if ( !ExfAcquireRundownProtection((PEX_RUNDOWN_REF)&v33[1].ProfileListHead.Blink) )
    {
LABEL_46:
      if ( (a7 & 1) != 0 )
      {
        KeStackAttachProcess(PROCESS, &ApcState);
        NtClose(Handle);
        KiUnstackDetachProcess((__int64)&ApcState, 0);
      }
      ExReleaseRundownProtection_0(v13);
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      return 3221225738LL;
    }
    v33 = v118;
  }
  KernelTime = v33[1].KernelTime;
  v132 = (unsigned int *)KernelTime;
  if ( !KernelTime )
  {
    ExReleaseRundownProtection_0(p_Blink);
    goto LABEL_46;
  }
  v111 = KernelTime == ObpKernelHandleTable;
  if ( v12 )
    v11 = v24;
  if ( (a7 & 4) != 0 )
    v38 = v29;
  else
    v38 = v29 & 0xC | a6 & 0xFFFFFDFF;
  v39 = v38 | 8;
  if ( (a7 & 8) == 0 )
    v39 = v38;
  v126 = (__int64)Object - 48;
  v40 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v126 + 24) ^ (unsigned __int64)BYTE1(v126)];
  v124 = v40;
  if ( (v11 & 0xF0000000) != 0 )
  {
    if ( v11 < 0 )
      v11 |= *(_DWORD *)(v40 + 76);
    if ( (v11 & 0x40000000) != 0 )
      v11 |= *(_DWORD *)(v40 + 80);
    if ( (v11 & 0x20000000) != 0 )
      v11 |= *(_DWORD *)(v40 + 84);
    if ( (v11 & 0x10000000) != 0 )
      v11 |= *(_DWORD *)(v40 + 88);
    v11 &= 0xFFFFFFFu;
  }
  v41 = 0LL;
  v42 = *(_DWORD *)(v40 + 92) | 0x1000000;
  v122 = 0LL;
  v43 = v11 & v42;
  v44 = 0;
  v112 = v43;
  if ( (~v24 & v43) == 0 )
  {
    v45 = (char *)Object;
LABEL_83:
    LOBYTE(BugCheckParameter4) = a8;
    v46 = ObpIncrementHandleCountEx(2LL, &v112, v33, v45, BugCheckParameter4, v39, 0LL);
    v113 = v46;
    goto LABEL_84;
  }
  if ( (v29 & 8) != 0 || *(_UNKNOWN **)(v40 + 152) != &SeDefaultObjectMethod )
  {
    v45 = (char *)Object;
    v46 = -1073741790;
    v113 = -1073741790;
    goto LABEL_87;
  }
  if ( KeGetCurrentThread()->ApcState.Process != v33 )
  {
    KeStackAttachProcess(v33, &ApcState);
    v44 = 1;
  }
  SeCreateAccessState(v142, v143, v112, v124 + 76);
  v45 = (char *)Object;
  v41 = v142;
  v122 = v142;
  v113 = ObpGrantAccess(2LL, Object, v142, a8, v39, &v112);
  v46 = v113;
  if ( v113 >= 0 )
  {
    v33 = v118;
    goto LABEL_83;
  }
LABEL_84:
  if ( v44 )
    KiUnstackDetachProcess((__int64)&ApcState, 0);
  v43 = v112;
LABEL_87:
  v47 = PROCESS;
  if ( (a7 & 1) != 0 )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    NtClose(Handle);
    KiUnstackDetachProcess((__int64)&ApcState, 0);
    v43 = v112;
  }
  if ( v46 < 0 )
  {
    if ( v41 )
      SeDeleteAccessState(v41);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v47[1].ProfileListHead.Blink);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v118[1].ProfileListHead.Blink);
    ObfDereferenceObjectWithTag(v45, 0x6E48624Fu);
    return (unsigned int)v46;
  }
  v117 = v39;
  v48 = v39;
  if ( v41 )
  {
    v17 = v41[10] == 0;
    v117 = v39;
    if ( !v17 )
    {
      v102 = *((_QWORD *)v41 + 9);
      v48 = v39 | 4;
      v117 = v39 | 4;
      LODWORD(v116) = *(_DWORD *)(v102 + 28);
    }
  }
  P[1] = P;
  P[0] = P;
  if ( (*(_BYTE *)(v124 + 66) & 0x40) != 0 && *(_QWORD *)(v124 + 200) != v124 + 200 )
  {
    v86 = v118;
    v87 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v45 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v45 - 48) >> 8)];
    v88 = *(_DWORD *)(v87 + 96);
    v138 = &v129;
    v89 = v43 & v88;
    v133 = 2;
    v134 = v111;
    v135 = v45;
    v137 = 0LL;
    v136 = v87;
    HIDWORD(v129) = v43;
    LODWORD(v129) = v43;
    v130 = v47;
    v131 = v118;
    v90 = ObpCallPreOperationCallbacks(v87, (__int64)&v133, P);
    v113 = v90;
    if ( v90 < 0 || v111 )
    {
      if ( v90 < 0 )
      {
        ObpDecrementHandleCount2(v86, v126, 0LL, v28);
        if ( v41 )
          SeDeleteAccessState(v41);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v86[1].ProfileListHead.Blink);
        ObfDereferenceObjectWithTag(v45, 0x6E48624Fu);
        return (unsigned int)v90;
      }
      v113 = v90;
      if ( v111 )
      {
        v43 = v112;
        goto LABEL_92;
      }
    }
    else
    {
      v43 &= v89 | v129;
    }
    v112 = v43;
  }
LABEL_92:
  v49 = v126;
  v130 = 0LL;
  v50 = v43 & 0x1FFFFFF;
  v129 = (v126 << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)(v48 & 7) << 17);
  if ( (v48 & 8) != 0 )
    v50 |= 0x2000000u;
  v51 = KeGetCurrentThread();
  v52 = 0LL;
  v53 = v132;
  v128 = v129 | 1;
  --v51->KernelApcDisable;
  LODWORD(v130) = v50;
  v54 = *((_BYTE *)v53 + 44);
  v127 = v51;
  if ( (v54 & 4) == 0 )
  {
    if ( (v54 & 1) != 0 )
      Number = 0;
    else
      Number = KeGetPcr()->Prcb.Number;
    v56 = ExpFreeListCount;
    v57 = Number;
    v120 = ExpFreeListCount;
    v119 = Number;
    while ( 2 )
    {
      v58 = 0;
      LODWORD(v132) = *v53;
      while ( v58 < v56 )
      {
        v59 = &v53[16 * v57 + 16];
        if ( *((_QWORD *)v59 + 1) )
        {
          v60 = (AutoBoost *)KeAbPreAcquire((__int64)&v53[16 * v57 + 16], 0LL, 0LL, v28);
          v62 = v60;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v59, 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&v53[16 * v57 + 16], v60, (__int64)&v53[16 * v57 + 16]);
          if ( v62 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v62, v61);
            else
              *((_BYTE *)v62 + 10) = 1;
          }
          v63 = (__int64 *)*((_QWORD *)v59 + 1);
          if ( v63 )
          {
            v64 = v63[1];
            *((_QWORD *)v59 + 1) = v64;
            if ( !v64 )
              *((_QWORD *)v59 + 2) = 0LL;
            v65 = ++v59[6];
            if ( v65 > (int)v59[7] )
              v59[7] = v65;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v59, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&v53[16 * v57 + 16]);
          KeAbPostRelease((unsigned __int64)&v53[16 * v57 + 16]);
          if ( v63 )
          {
            v52 = *(_QWORD *)(((unsigned __int64)v63 & 0xFFFFFFFFFFFFF000uLL) + 8)
                + 4 * ((__int64)((__int64)v63 - ((unsigned __int64)v63 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
            if ( !v116 )
            {
LABEL_115:
              v51 = v127;
              if ( *((_QWORD *)v53 + 12) )
                ExpUpdateDebugInfo(v53, v127, v52, 1LL);
              v66 = (char *)Object;
              v41 = v122;
              v49 = v126;
              v63[1] = (__int64)v130;
              *v63 = v128;
              Object = v66;
              goto LABEL_118;
            }
            v121 = v52 & 0xFFFFFFFFFFFFFC03uLL;
            v78 = (unsigned __int8)((unsigned int)v52 >> 2);
            v79 = v52 & 0xFFFFFFFFFFFFFC00uLL;
            if ( (v52 & 0xFFFFFFFFFFFFFC00uLL) < *v53 )
            {
              v80 = *((_QWORD *)v53 + 1);
              if ( (v80 & 3) == 1 )
              {
                v81 = *(volatile signed __int64 **)(v80 + 8 * (v79 >> 10) - 1);
                goto LABEL_142;
              }
              if ( (v80 & 3) != 0 )
              {
                v81 = *(volatile signed __int64 **)(*(_QWORD *)(v80 + 8 * (v79 >> 19) - 2) + 8 * ((v79 >> 10) & 0x1FF));
LABEL_142:
                v82 = v81;
              }
              else
              {
                v82 = (volatile signed __int64 *)(v80 + 4 * v79);
              }
              if ( v82 )
              {
                v83 = *v82;
                if ( *v82 )
                  goto LABEL_145;
                TablePagedPool = (_QWORD *)ExpAllocateTablePagedPool(*((_QWORD *)v53 + 2), 2048LL);
                if ( TablePagedPool )
                {
                  if ( !_InterlockedCompareExchange64(v82, (signed __int64)TablePagedPool, 0LL) )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)v53 + 1);
                    TablePagedPool[v78] = v116;
                    goto LABEL_115;
                  }
                  ExpFreeTablePagedPool(*((_QWORD *)v53 + 2), TablePagedPool, 0x800uLL);
                  v83 = *v82;
                  if ( *v82 )
                  {
LABEL_145:
                    *(_QWORD *)(v83 + 8 * v78) = v116;
                    goto LABEL_115;
                  }
                }
              }
            }
            v116 = v52;
            v17 = v53[1] == 0;
            LODWORD(v116) = v52 & 0xFFFFFFFC;
            if ( !v17 )
            {
              v92 = (_QWORD *)ExpGetHandleExtraInfo(v53, v116);
              if ( v92 )
                *v92 = 0LL;
            }
            v63[1] = 0LL;
            v93 = v53[11] & 1;
            if ( v93 )
              v94 = 0;
            else
              v94 = KeGetPcr()->Prcb.Number;
            v95 = (unsigned __int64)&v53[16 * v94 + 16];
            v96 = (AutoBoost *)KeAbPreAcquire(v95, 0LL, 0LL, v28);
            v98 = v96;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v95, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v95, v96, v95);
            if ( v98 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v98, v97);
              else
                *((_BYTE *)v98 + 10) = 1;
            }
            if ( v93 )
            {
              v103 = *(_QWORD *)(v95 + 16);
              if ( v103 )
                *(_QWORD *)(v103 + 8) = v63;
              else
                *(_QWORD *)(v95 + 8) = v63;
              *(_QWORD *)(v95 + 16) = v63;
            }
            else
            {
              v99 = *(_QWORD *)(v95 + 8);
              v63[1] = v99;
              if ( !v99 )
                *(_QWORD *)(v95 + 16) = v63;
              *(_QWORD *)(v95 + 8) = v63;
            }
            --*(_DWORD *)(v95 + 24);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v95, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v95);
            KeAbPostRelease(v95);
            v66 = (char *)Object;
            v52 = 0LL;
            v51 = v127;
            v41 = v122;
            v49 = v126;
            goto LABEL_118;
          }
        }
        v85 = v57 + 1;
        ++v58;
        v57 = 0;
        if ( v85 != v120 )
          v57 = v85;
        v56 = v120;
      }
      LODWORD(v121) = v119;
      HandleTableEntrySlow = 1;
      v105 = &v53[16 * v119 + 16];
      v106 = (AutoBoost *)KeAbPreAcquire((__int64)(v53 + 14), 0LL, 0LL, v28);
      v108 = v106;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v53 + 14, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v53 + 7, v106, (__int64)(v53 + 14));
      if ( v108 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v108, v107);
        else
          *((_BYTE *)v108 + 10) = 1;
      }
      if ( (_DWORD)v132 == *v53 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v53, v105);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v53 + 7);
      KeAbPostRelease((unsigned __int64)(v53 + 14));
      if ( HandleTableEntrySlow )
      {
        v57 = v121;
        v56 = v120;
        continue;
      }
      break;
    }
    v51 = v127;
    v41 = v122;
    v49 = v126;
  }
  v66 = (char *)Object;
LABEL_118:
  KeLeaveCriticalRegionThread((__int64)v51);
  if ( v52 )
  {
    if ( v41 )
    {
      OBJECT_HEADER_TO_AUDIT_INFO(v49);
      SeAuditHandleCreation((__int64)v41);
    }
    if ( (v117 & 4) != 0 )
    {
      if ( v41 )
      {
        v100 = *((_QWORD *)v41 + 4);
        if ( !v100 )
          v100 = *((_QWORD *)v41 + 6);
      }
      else
      {
        v100 = 0LL;
      }
      v101 = SeAuditingWithTokenForSubcategory(124LL, v100);
      v68 = v118;
      v69 = PROCESS;
      if ( v101 )
        SeAuditHandleDuplication(Handle, v52, PROCESS, v118);
    }
    else
    {
      v68 = v118;
      v69 = PROCESS;
    }
    v70 = v113;
  }
  else
  {
    v84 = v49;
    v68 = v118;
    ObpDecrementHandleCount2(v118, v84, 0LL, v67);
    ObfDereferenceObjectWithTag(v66, 0x6E48624Fu);
    v69 = PROCESS;
    v70 = -1073741670;
    v113 = -1073741670;
  }
  v71 = v111;
  if ( v111 )
    v52 |= 0xFFFFFFFF80000000uLL;
  if ( v140 )
    *v140 = v52;
  if ( v41 )
    SeDeleteAccessState(v41);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v69[1].ProfileListHead.Blink);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v68[1].ProfileListHead.Blink);
  v72 = (PVOID *)P[0];
  if ( P[0] != P )
  {
    v133 = 2;
    v137 = 0LL;
    v135 = v66;
    v134 = v71;
    v139 = &v121;
    v73 = (unsigned __int8)*(v66 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v66 - 48) >> 8);
    v138 = (unsigned __int64 *)(unsigned int)v70;
    v122 = 0LL;
    v136 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v73];
    LODWORD(v121) = v112;
    while ( v72 != P )
    {
      v74 = P[1];
      v75 = (PVOID *)*((_QWORD *)P[1] + 1);
      if ( *(PVOID **)P[1] != P || *v75 != P[1] )
        __fastfail(3u);
      P[1] = *((PVOID *)P[1] + 1);
      *v75 = P;
      v76 = (struct _EX_RUNDOWN_REF *)v74[2];
      v137 = v74[3];
      v77 = *(_QWORD *)(v76[3].Count + 8);
      KeCallbackValidationPrologue((__int64)&v122);
      guard_dispatch_icall_no_overrides(v77, (__int64)&v133);
      KeCallbackValidationEpilogue((__int64)&v122, v76[6].Count, 0x102u);
      ExReleaseRundownProtection_0(v76 + 7);
      ExFreePoolWithTag(v74, 0);
      v72 = (PVOID *)P[0];
    }
    ObfDereferenceObjectWithTag(v135, 0x6243624Fu);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    LODWORD(v66) = (_DWORD)Object;
    v68 = v118;
    v70 = v113;
  }
  if ( (xmmword_140FC0C10 & 0x40) != 0 && v70 >= 0 )
    EtwTraceDuplicateHandle(
      (_DWORD)Handle,
      v52,
      (_DWORD)v66,
      v69[1].Header.WaitListHead.Flink,
      v68[1].Header.WaitListHead.Flink,
      v124);
  return (unsigned int)v70;
}
