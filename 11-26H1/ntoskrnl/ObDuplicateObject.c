/*
 * XREFs of ObDuplicateObject @ 0x1408F0680
 * Callers:
 *     CmpCreateEmptyHiveClone @ 0x14085C094 (CmpCreateEmptyHiveClone.c)
 *     CmpCreateHive @ 0x1408B5E6C (CmpCreateHive.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A77400 (IoConvertFileHandleToKernelHandle.c)
 *     NtDuplicateObject @ 0x140A828E0 (NtDuplicateObject.c)
 *     PspCopyAndFixupParameters @ 0x140A9AAB8 (PspCopyAndFixupParameters.c)
 *     PspPropagateHandle @ 0x140AE0C54 (PspPropagateHandle.c)
 *     DbgkpOpenHandles @ 0x140AE97C4 (DbgkpOpenHandles.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140B65CA0 (MiInitializePartitionSpecialPurposeMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObpTraceObjectReferenceIfActive @ 0x140278BB0 (ObpTraceObjectReferenceIfActive.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     ExfAcquireRundownProtection @ 0x1402F05D0 (ExfAcquireRundownProtection.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ObpIncrPointerCount @ 0x14043BE10 (ObpIncrPointerCount.c)
 *     OBJECT_HEADER_TO_AUDIT_INFO @ 0x1404461F0 (OBJECT_HEADER_TO_AUDIT_INFO.c)
 *     ExGetHandlePointer @ 0x140457590 (ExGetHandlePointer.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     KeCallbackValidationEpilogue @ 0x1404E07B8 (KeCallbackValidationEpilogue.c)
 *     KeCallbackValidationPrologue @ 0x1404E921C (KeCallbackValidationPrologue.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObpCallPreOperationCallbacks @ 0x1408EF644 (ObpCallPreOperationCallbacks.c)
 *     ObpDecrementHandleCount2 @ 0x1408F0360 (ObpDecrementHandleCount2.c)
 *     SeDeleteAccessState @ 0x1408F16E0 (SeDeleteAccessState.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1408FAEC4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1408FAF00 (ExpLookupHandleTableEntry.c)
 *     ExpAllocateTablePagedPool @ 0x14092AF6C (ExpAllocateTablePagedPool.c)
 *     ExpUpdateDebugInfo @ 0x14092C6E0 (ExpUpdateDebugInfo.c)
 *     ExpGetHandleExtraInfo @ 0x14092C97C (ExpGetHandleExtraInfo.c)
 *     ExpFreeTablePagedPool @ 0x14092CA10 (ExpFreeTablePagedPool.c)
 *     ObpIncrementHandleCountEx @ 0x14092E8D0 (ObpIncrementHandleCountEx.c)
 *     ObpGrantAccess @ 0x140930170 (ObpGrantAccess.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140972494 (ExpAllocateHandleTableEntrySlow.c)
 *     SeAuditHandleDuplication @ 0x1409F9428 (SeAuditHandleDuplication.c)
 *     SeAuditHandleCreation @ 0x1409FAC60 (SeAuditHandleCreation.c)
 *     SeCreateAccessState @ 0x140A10980 (SeCreateAccessState.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140A435C0 (SeAuditingWithTokenForSubcategory.c)
 *     EtwTraceDuplicateHandle @ 0x140AD7038 (EtwTraceDuplicateHandle.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  __int64 v11; // rdx
  signed __int64 v12; // r8
  int v13; // edi
  int v14; // r13d
  struct _EX_RUNDOWN_REF *v15; // r14
  unsigned __int64 v16; // rtt
  ULONG_PTR v17; // rsi
  bool v19; // zf
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 v21; // rax
  signed __int64 *v22; // rbx
  __int64 v23; // r8
  volatile signed __int64 *HandlePointer; // r13
  int v25; // ecx
  int v26; // r12d
  __int64 *HandleExtraInfo; // rax
  __int64 v28; // rdx
  signed __int64 v29; // rax
  struct _KLOCK_ENTRIES *v30; // r9
  unsigned int v31; // esi
  void *v32; // rax
  struct _KPROCESS *v33; // rax
  unsigned int v34; // ebx
  __int64 v35; // r8
  struct _EX_RUNDOWN_REF *p_Blink; // rbx
  unsigned __int64 v37; // rtt
  unsigned int *v38; // rax
  volatile signed __int64 *p_SchedulerAssistLastYieldBoostTime; // rbx
  unsigned int v40; // r15d
  int v41; // r14d
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  _BYTE *v44; // r15
  int v45; // ebx
  int v46; // ebx
  char v47; // di
  char *v48; // rsi
  int v49; // r12d
  PRKPROCESS v50; // r13
  char v51; // r12
  __int64 v52; // rdi
  int v53; // ebx
  struct _KTHREAD *v54; // r13
  __int64 v55; // r14
  unsigned int *v56; // r12
  char v57; // al
  unsigned int Number; // ecx
  unsigned int v59; // eax
  int v60; // r13d
  unsigned int v61; // r15d
  unsigned int *v62; // rdi
  AutoBoost *v63; // rax
  void *v64; // rdx
  AutoBoost *v65; // rsi
  __int64 *v66; // rsi
  __int64 v67; // rax
  signed int v68; // eax
  char *v69; // rbx
  struct _KLOCK_ENTRIES *v70; // r9
  PRKPROCESS v71; // rdi
  PRKPROCESS v72; // r13
  int v73; // esi
  BOOL v74; // r12d
  PVOID *v75; // r8
  unsigned __int64 v76; // rcx
  _QWORD *v77; // rsi
  PVOID *v78; // rax
  struct _EX_RUNDOWN_REF *v79; // rdi
  __int64 v80; // rbx
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r15
  volatile signed __int64 *v84; // rax
  volatile signed __int64 *v85; // rdi
  volatile signed __int64 v86; // rcx
  __int64 v87; // rdx
  int v88; // eax
  PRKPROCESS v89; // r14
  __int64 v90; // rcx
  int v91; // edi
  int v92; // edi
  int v93; // r13d
  _QWORD *TablePagedPool; // rax
  _QWORD *v95; // rax
  char v96; // r15
  unsigned int v97; // eax
  unsigned __int64 v98; // rdi
  AutoBoost *v99; // rax
  void *v100; // rdx
  AutoBoost *v101; // r14
  __int64 v102; // rax
  __int64 v103; // rdx
  char v104; // al
  __int64 v105; // rax
  __int64 v106; // rax
  char HandleTableEntrySlow; // r13
  unsigned int *v108; // r15
  AutoBoost *v109; // rax
  void *v110; // rdx
  AutoBoost *v111; // rdi
  signed __int32 v112[8]; // [rsp+0h] [rbp-100h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  bool v114; // [rsp+40h] [rbp-C0h]
  unsigned int v115; // [rsp+44h] [rbp-BCh] BYREF
  int v116; // [rsp+48h] [rbp-B8h]
  PVOID Object; // [rsp+50h] [rbp-B0h]
  PRKPROCESS PROCESS; // [rsp+58h] [rbp-A8h]
  __int64 v119; // [rsp+60h] [rbp-A0h]
  int v120; // [rsp+68h] [rbp-98h]
  PRKPROCESS v121; // [rsp+70h] [rbp-90h]
  unsigned int v122; // [rsp+78h] [rbp-88h]
  int v123; // [rsp+7Ch] [rbp-84h]
  unsigned __int64 v124; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v125; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h]
  __int64 v127; // [rsp+98h] [rbp-68h]
  PVOID P[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v129; // [rsp+B0h] [rbp-50h]
  struct _KTHREAD *v130; // [rsp+B8h] [rbp-48h]
  __int64 v131; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v132; // [rsp+C8h] [rbp-38h] BYREF
  PRKPROCESS v133; // [rsp+D0h] [rbp-30h]
  PRKPROCESS v134; // [rsp+D8h] [rbp-28h]
  unsigned int *v135; // [rsp+E0h] [rbp-20h]
  int v136; // [rsp+E8h] [rbp-18h] BYREF
  BOOL v137; // [rsp+ECh] [rbp-14h]
  PVOID v138; // [rsp+F0h] [rbp-10h]
  __int64 v139; // [rsp+F8h] [rbp-8h]
  __int64 v140; // [rsp+100h] [rbp+0h]
  unsigned __int64 *v141; // [rsp+108h] [rbp+8h]
  unsigned __int64 *v142; // [rsp+110h] [rbp+10h]
  __int64 *v143; // [rsp+118h] [rbp+18h]
  struct _KAPC_STATE ApcState; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v145[160]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v146[224]; // [rsp+1F0h] [rbp+F0h] BYREF

  v8 = a3;
  Handle = a2;
  PROCESS = (PRKPROCESS)a1;
  v121 = a3;
  v143 = a4;
  memset(&ApcState, 0, sizeof(ApcState));
  memset_0(v146, 0, sizeof(v146));
  v131 = 0LL;
  memset_0(v145, 0, sizeof(v145));
  v119 = 0LL;
  v115 = 0;
  *(_OWORD *)P = 0LL;
  if ( (a6 & 0x200) != 0 )
  {
    if ( !a8 )
      v8 = PsInitialSystemProcess;
    v121 = v8;
  }
  if ( a4 )
    *a4 = 0LL;
  v13 = a5;
  v14 = a7 & 2;
  v120 = v14;
  if ( (a7 & 2) == 0 && (a5 & 0xCE00000) != 0 )
    return 3221225506LL;
  if ( !v8 )
  {
    v19 = (*(_DWORD *)(a1 + 368) & 1) == 0LL;
    goto LABEL_14;
  }
  if ( (*(_DWORD *)(a1 + 368) & 1) != 0 || (v8->SecureState.EntireField & 1) != 0 )
  {
    if ( (_KPROCESS *)a1 != KeGetCurrentThread()->ApcState.Process )
      return 3221225506LL;
    v19 = v8 == KeGetCurrentThread()->ApcState.Process;
LABEL_14:
    if ( v19 )
      goto LABEL_8;
    return 3221225506LL;
  }
LABEL_8:
  v15 = (struct _EX_RUNDOWN_REF *)(a1 + 488);
  _m_prefetchw((const void *)(a1 + 488));
  v16 = *(_QWORD *)(a1 + 488) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v16 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 488), v16 + 2, v16)
    && !ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 488)) )
  {
    return 3221225738LL;
  }
  v17 = *(_QWORD *)(a1 + 768);
  if ( !v17 )
  {
    ExReleaseRundownProtection_0(v15);
    return 3221225738LL;
  }
  CurrentThread = KeGetCurrentThread();
  v21 = (unsigned __int64)Handle;
  v127 = (__int64)Handle;
  Object = CurrentThread;
  if ( (int)Handle >= 0 )
    goto LABEL_24;
  if ( Handle != (HANDLE)-1LL )
  {
    if ( Handle == (HANDLE)-2LL )
    {
      p_SchedulerAssistLastYieldBoostTime = &CurrentThread[-1].SchedulerAssistLastYieldBoostTime;
      v31 = 0;
      v119 = 0LL;
      v26 = 0x1FFFFF;
      ObpTraceObjectReferenceIfActive((__int64)&CurrentThread[-1].SchedulerAssistLastYieldBoostTime, 1, 0x6E48624Fu);
      ObpIncrPointerCount(p_SchedulerAssistLastYieldBoostTime);
LABEL_37:
      v33 = PROCESS;
      goto LABEL_38;
    }
    if ( a8 )
    {
LABEL_55:
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink);
      return 3221225480LL;
    }
    v17 = ObpKernelHandleTable;
    v21 = (unsigned __int64)Handle ^ 0xFFFFFFFF80000000uLL;
    v127 = (unsigned __int64)Handle ^ 0xFFFFFFFF80000000uLL;
LABEL_24:
    --CurrentThread->KernelApcDisable;
    if ( (v21 & 0x3FC) != 0 )
    {
      v22 = (signed __int64 *)ExpLookupHandleTableEntry(v17, v21);
      if ( v22 )
      {
        do
        {
          while ( 1 )
          {
            _m_prefetchw(v22);
            v12 = *v22;
            if ( (*v22 & 1) != 0 )
              break;
            if ( !v12 )
            {
              CurrentThread = (struct _KTHREAD *)Object;
              goto LABEL_54;
            }
            ExpBlockOnLockedHandleEntry(v17, v22, v12);
          }
        }
        while ( v12 != _InterlockedCompareExchange64(v22, v12 - 1, v12) );
        HandlePointer = (volatile signed __int64 *)ExGetHandlePointer(v22);
        v25 = *((_DWORD *)v22 + 2);
        v26 = v25 & 0x1FFFFFF;
        if ( *(_DWORD *)(v17 + 4)
          && (HandleExtraInfo = (__int64 *)ExpGetHandleExtraInfo(v17, v127), v25 = *((_DWORD *)v22 + 2), HandleExtraInfo) )
        {
          v119 = *HandleExtraInfo;
        }
        else
        {
          v119 = 0LL;
        }
        v28 = ((__int64)*(unsigned int *)v22 >> 17) & 7 | 8;
        if ( (v25 & 0x2000000) == 0 )
          v28 = ((__int64)*(unsigned int *)v22 >> 17) & 7;
        v122 = v28;
        v29 = _InterlockedIncrement64(HandlePointer);
        if ( v29 <= 1 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(HandlePointer + 6), 0x10uLL, v29);
        _InterlockedIncrement64(v22);
        _InterlockedOr(v112, 0);
        if ( *(_QWORD *)(v17 + 48) )
          ExfUnblockPushLock((volatile __int64 *)(v17 + 48), 0LL);
        KeLeaveCriticalRegionThread((__int64)Object, v28, v23);
        ObpTraceObjectReferenceIfActive((__int64)HandlePointer, 1, 0x6E48624Fu);
        v31 = v122;
        v32 = (void *)(HandlePointer + 6);
        v14 = v120;
        Object = v32;
        goto LABEL_37;
      }
    }
LABEL_54:
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v11, v12);
    goto LABEL_55;
  }
  v31 = 0;
  v119 = 0LL;
  v26 = 0x1FFFFF;
  ObpTraceObjectReferenceIfActive((__int64)&PROCESS[-1].ExtendedFeatureDisableMask, 1, 0x6E48624Fu);
  ObpIncrPointerCount((volatile signed __int64 *)&PROCESS[-1].ExtendedFeatureDisableMask);
  v33 = PROCESS;
  Object = PROCESS;
LABEL_38:
  v34 = 0;
  if ( (v31 & 4) == 0 )
    LODWORD(v119) = 0;
  v35 = (__int64)v121;
  if ( !v121 )
  {
    if ( (a7 & 1) != 0 )
    {
      KeStackAttachProcess(v33, &ApcState);
      NtClose(Handle);
      KiUnstackDetachProcess((__int64)&ApcState, 0);
    }
    else
    {
      v34 = -1073741811;
    }
    ExReleaseRundownProtection_0(v15);
    ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
    return v34;
  }
  p_Blink = (struct _EX_RUNDOWN_REF *)&v121[1].ProfileListHead.Blink;
  _m_prefetchw(&v121[1].ProfileListHead.Blink);
  v37 = (unsigned __int64)v121[1].ProfileListHead.Blink & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v37 != _InterlockedCompareExchange64((volatile signed __int64 *)&v121[1].ProfileListHead.Blink, v37 + 2, v37) )
  {
    if ( !ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v35 + 488)) )
    {
LABEL_46:
      if ( (a7 & 1) != 0 )
      {
        KeStackAttachProcess(PROCESS, &ApcState);
        NtClose(Handle);
        KiUnstackDetachProcess((__int64)&ApcState, 0);
      }
      ExReleaseRundownProtection_0(v15);
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      return 3221225738LL;
    }
    v35 = (__int64)v121;
  }
  v38 = *(unsigned int **)(v35 + 768);
  v135 = v38;
  if ( !v38 )
  {
    ExReleaseRundownProtection_0(p_Blink);
    goto LABEL_46;
  }
  v114 = v38 == (unsigned int *)ObpKernelHandleTable;
  if ( v14 )
    v13 = v26;
  if ( (a7 & 4) != 0 )
    v40 = v31;
  else
    v40 = v31 & 0xC | a6 & 0xFFFFFDFF;
  v41 = v40 | 8;
  if ( (a7 & 8) == 0 )
    v41 = v40;
  v42 = (unsigned __int64)Object - 48;
  v129 = v42;
  v43 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v42 + 24) ^ (unsigned __int64)BYTE1(v42)];
  v127 = v43;
  if ( (v13 & 0xF0000000) != 0 )
  {
    if ( v13 < 0 )
      v13 |= *(_DWORD *)(v43 + 76);
    if ( (v13 & 0x40000000) != 0 )
      v13 |= *(_DWORD *)(v43 + 80);
    if ( (v13 & 0x20000000) != 0 )
      v13 |= *(_DWORD *)(v43 + 84);
    if ( (v13 & 0x10000000) != 0 )
      v13 |= *(_DWORD *)(v43 + 88);
    v13 &= 0xFFFFFFFu;
  }
  v44 = 0LL;
  v45 = *(_DWORD *)(v43 + 92) | 0x1000000;
  v125 = 0LL;
  v46 = v13 & v45;
  v47 = 0;
  v115 = v46;
  if ( (~v26 & v46) == 0 )
  {
    v48 = (char *)Object;
LABEL_83:
    LOBYTE(BugCheckParameter4) = a8;
    v49 = ObpIncrementHandleCountEx(2LL, &v115, v35, v48, BugCheckParameter4, v41, 0LL);
    v116 = v49;
    goto LABEL_84;
  }
  if ( (v31 & 8) != 0 || *(_UNKNOWN **)(v43 + 152) != &SeDefaultObjectMethod )
  {
    v48 = (char *)Object;
    v49 = -1073741790;
    v116 = -1073741790;
    goto LABEL_87;
  }
  if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)v35 )
  {
    KeStackAttachProcess((PRKPROCESS)v35, &ApcState);
    v47 = 1;
  }
  SeCreateAccessState(v145, v146, v115, v127 + 76);
  v48 = (char *)Object;
  v44 = v145;
  v125 = v145;
  v116 = ObpGrantAccess(2LL, Object, v145, a8, v41, &v115);
  v49 = v116;
  if ( v116 >= 0 )
  {
    v35 = (__int64)v121;
    goto LABEL_83;
  }
LABEL_84:
  if ( v47 )
    KiUnstackDetachProcess((__int64)&ApcState, 0);
  v46 = v115;
LABEL_87:
  v50 = PROCESS;
  if ( (a7 & 1) != 0 )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    NtClose(Handle);
    KiUnstackDetachProcess((__int64)&ApcState, 0);
    v46 = v115;
  }
  if ( v49 < 0 )
  {
    if ( v44 )
      SeDeleteAccessState(v44);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v50[1].ProfileListHead.Blink);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v121[1].ProfileListHead.Blink);
    ObfDereferenceObjectWithTag(v48, 0x6E48624Fu);
    return (unsigned int)v49;
  }
  v120 = v41;
  v51 = v41;
  if ( v44 )
  {
    v19 = v44[10] == 0;
    v120 = v41;
    if ( !v19 )
    {
      v105 = *((_QWORD *)v44 + 9);
      v51 = v41 | 4;
      v120 = v41 | 4;
      LODWORD(v119) = *(_DWORD *)(v105 + 28);
    }
  }
  P[1] = P;
  P[0] = P;
  if ( (*(_BYTE *)(v127 + 66) & 0x40) != 0 && *(_QWORD *)(v127 + 200) != v127 + 200 )
  {
    v89 = v121;
    v90 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v48 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v48 - 48) >> 8)];
    v91 = *(_DWORD *)(v90 + 96);
    v141 = &v132;
    v92 = v46 & v91;
    v136 = 2;
    v137 = v114;
    v138 = v48;
    v140 = 0LL;
    v139 = v90;
    HIDWORD(v132) = v46;
    LODWORD(v132) = v46;
    v133 = v50;
    v134 = v121;
    v93 = ObpCallPreOperationCallbacks(v90, (__int64)&v136, P);
    v116 = v93;
    if ( v93 < 0 || v114 )
    {
      if ( v93 < 0 )
      {
        ObpDecrementHandleCount2(v89, v129, 0LL, v30);
        if ( v44 )
          SeDeleteAccessState(v44);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v89[1].ProfileListHead.Blink);
        ObfDereferenceObjectWithTag(v48, 0x6E48624Fu);
        return (unsigned int)v93;
      }
      v116 = v93;
      if ( v114 )
      {
        v46 = v115;
        goto LABEL_92;
      }
    }
    else
    {
      v46 &= v92 | v132;
    }
    v115 = v46;
  }
LABEL_92:
  v52 = v129;
  v133 = 0LL;
  v53 = v46 & 0x1FFFFFF;
  v132 = (v129 << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)(v51 & 7) << 17);
  if ( (v51 & 8) != 0 )
    v53 |= 0x2000000u;
  v54 = KeGetCurrentThread();
  v55 = 0LL;
  v56 = v135;
  v131 = v132 | 1;
  --v54->KernelApcDisable;
  LODWORD(v133) = v53;
  v57 = *((_BYTE *)v56 + 44);
  v130 = v54;
  if ( (v57 & 4) == 0 )
  {
    if ( (v57 & 1) != 0 )
      Number = 0;
    else
      Number = KeGetPcr()->Prcb.Number;
    v59 = ExpFreeListCount;
    v60 = Number;
    v123 = ExpFreeListCount;
    v122 = Number;
    while ( 2 )
    {
      v61 = 0;
      LODWORD(v135) = *v56;
      while ( v61 < v59 )
      {
        v62 = &v56[16 * v60 + 16];
        if ( *((_QWORD *)v62 + 1) )
        {
          v63 = (AutoBoost *)KeAbPreAcquire((__int64)&v56[16 * v60 + 16], 0LL, 0LL, v30);
          v65 = v63;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v62, 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&v56[16 * v60 + 16], v63, (__int64)&v56[16 * v60 + 16]);
          if ( v65 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v65, v64);
            else
              *((_BYTE *)v65 + 10) = 1;
          }
          v66 = (__int64 *)*((_QWORD *)v62 + 1);
          if ( v66 )
          {
            v67 = v66[1];
            *((_QWORD *)v62 + 1) = v67;
            if ( !v67 )
              *((_QWORD *)v62 + 2) = 0LL;
            v68 = ++v62[6];
            if ( v68 > (int)v62[7] )
              v62[7] = v68;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v62, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&v56[16 * v60 + 16]);
          KeAbPostRelease((unsigned __int64)&v56[16 * v60 + 16]);
          if ( v66 )
          {
            v55 = *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFF000uLL) + 8)
                + 4 * ((__int64)((__int64)v66 - ((unsigned __int64)v66 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
            if ( !v119 )
            {
LABEL_115:
              v54 = v130;
              if ( *((_QWORD *)v56 + 12) )
                ExpUpdateDebugInfo(v56, v130, v55, 1LL);
              v69 = (char *)Object;
              v44 = v125;
              v52 = v129;
              v66[1] = (__int64)v133;
              *v66 = v131;
              Object = v69;
              goto LABEL_118;
            }
            v124 = v55 & 0xFFFFFFFFFFFFFC03uLL;
            v83 = (unsigned __int8)((unsigned int)v55 >> 2);
            v42 = v55 & 0xFFFFFFFFFFFFFC00uLL;
            if ( (v55 & 0xFFFFFFFFFFFFFC00uLL) < *v56 )
            {
              v35 = *((_QWORD *)v56 + 1);
              if ( (v35 & 3) == 1 )
              {
                v84 = *(volatile signed __int64 **)(v35 + 8 * (v42 >> 10) - 1);
                goto LABEL_142;
              }
              if ( (v35 & 3) != 0 )
              {
                v84 = *(volatile signed __int64 **)(*(_QWORD *)(v35 + 8 * (v42 >> 19) - 2) + 8 * ((v42 >> 10) & 0x1FF));
LABEL_142:
                v42 = 0LL;
                v85 = v84;
              }
              else
              {
                v85 = (volatile signed __int64 *)(v35 + 4 * v42);
              }
              if ( v85 )
              {
                v86 = *v85;
                if ( *v85 )
                  goto LABEL_145;
                TablePagedPool = (_QWORD *)ExpAllocateTablePagedPool(*((_QWORD *)v56 + 2), 2048LL);
                if ( TablePagedPool )
                {
                  if ( !_InterlockedCompareExchange64(v85, (signed __int64)TablePagedPool, 0LL) )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)v56 + 1);
                    TablePagedPool[v83] = v119;
                    goto LABEL_115;
                  }
                  ExpFreeTablePagedPool(*((_QWORD *)v56 + 2), TablePagedPool, 0x800uLL);
                  v86 = *v85;
                  if ( *v85 )
                  {
LABEL_145:
                    *(_QWORD *)(v86 + 8 * v83) = v119;
                    goto LABEL_115;
                  }
                }
              }
            }
            v119 = v55;
            v19 = v56[1] == 0;
            LODWORD(v119) = v55 & 0xFFFFFFFC;
            if ( !v19 )
            {
              v95 = (_QWORD *)ExpGetHandleExtraInfo(v56, v119);
              if ( v95 )
                *v95 = 0LL;
            }
            v66[1] = 0LL;
            v96 = v56[11] & 1;
            if ( v96 )
              v97 = 0;
            else
              v97 = KeGetPcr()->Prcb.Number;
            v98 = (unsigned __int64)&v56[16 * v97 + 16];
            v99 = (AutoBoost *)KeAbPreAcquire(v98, 0LL, 0LL, v30);
            v101 = v99;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v98, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v98, v99, v98);
            if ( v101 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v101, v100);
              else
                *((_BYTE *)v101 + 10) = 1;
            }
            if ( v96 )
            {
              v106 = *(_QWORD *)(v98 + 16);
              if ( v106 )
                *(_QWORD *)(v106 + 8) = v66;
              else
                *(_QWORD *)(v98 + 8) = v66;
              *(_QWORD *)(v98 + 16) = v66;
            }
            else
            {
              v102 = *(_QWORD *)(v98 + 8);
              v66[1] = v102;
              if ( !v102 )
                *(_QWORD *)(v98 + 16) = v66;
              *(_QWORD *)(v98 + 8) = v66;
            }
            --*(_DWORD *)(v98 + 24);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v98, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v98);
            KeAbPostRelease(v98);
            v69 = (char *)Object;
            v55 = 0LL;
            v54 = v130;
            v44 = v125;
            v52 = v129;
            goto LABEL_118;
          }
        }
        v88 = v60 + 1;
        ++v61;
        v60 = 0;
        if ( v88 != v123 )
          v60 = v88;
        v59 = v123;
      }
      LODWORD(v124) = v122;
      HandleTableEntrySlow = 1;
      v108 = &v56[16 * v122 + 16];
      v109 = (AutoBoost *)KeAbPreAcquire((__int64)(v56 + 14), 0LL, 0LL, v30);
      v111 = v109;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v56 + 14, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v56 + 7, v109, (__int64)(v56 + 14));
      if ( v111 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v111, v110);
        else
          *((_BYTE *)v111 + 10) = 1;
      }
      if ( (_DWORD)v135 == *v56 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(v56, v108);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v56 + 7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v56 + 7);
      KeAbPostRelease((unsigned __int64)(v56 + 14));
      if ( HandleTableEntrySlow )
      {
        v60 = v124;
        v59 = v123;
        continue;
      }
      break;
    }
    v54 = v130;
    v44 = v125;
    v52 = v129;
  }
  v69 = (char *)Object;
LABEL_118:
  KeLeaveCriticalRegionThread((__int64)v54, v42, v35);
  if ( v55 )
  {
    if ( v44 )
    {
      OBJECT_HEADER_TO_AUDIT_INFO(v52);
      SeAuditHandleCreation((__int64)v44);
    }
    if ( (v120 & 4) != 0 )
    {
      if ( v44 )
      {
        v103 = *((_QWORD *)v44 + 4);
        if ( !v103 )
          v103 = *((_QWORD *)v44 + 6);
      }
      else
      {
        v103 = 0LL;
      }
      v104 = SeAuditingWithTokenForSubcategory(124LL, v103);
      v71 = v121;
      v72 = PROCESS;
      if ( v104 )
        SeAuditHandleDuplication(Handle, v55, PROCESS, v121);
    }
    else
    {
      v71 = v121;
      v72 = PROCESS;
    }
    v73 = v116;
  }
  else
  {
    v87 = v52;
    v71 = v121;
    ObpDecrementHandleCount2(v121, v87, 0LL, v70);
    ObfDereferenceObjectWithTag(v69, 0x6E48624Fu);
    v72 = PROCESS;
    v73 = -1073741670;
    v116 = -1073741670;
  }
  v74 = v114;
  if ( v114 )
    v55 |= 0xFFFFFFFF80000000uLL;
  if ( v143 )
    *v143 = v55;
  if ( v44 )
    SeDeleteAccessState(v44);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v72[1].ProfileListHead.Blink);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v71[1].ProfileListHead.Blink);
  v75 = (PVOID *)P[0];
  if ( P[0] != P )
  {
    v136 = 2;
    v140 = 0LL;
    v138 = v69;
    v137 = v74;
    v142 = &v124;
    v76 = (unsigned __int8)*(v69 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v69 - 48) >> 8);
    v141 = (unsigned __int64 *)(unsigned int)v73;
    v125 = 0LL;
    v139 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v76];
    LODWORD(v124) = v115;
    while ( v75 != P )
    {
      v77 = P[1];
      v78 = (PVOID *)*((_QWORD *)P[1] + 1);
      if ( *(PVOID **)P[1] != P || *v78 != P[1] )
        __fastfail(3u);
      P[1] = *((PVOID *)P[1] + 1);
      *v78 = P;
      v79 = (struct _EX_RUNDOWN_REF *)v77[2];
      v140 = v77[3];
      v80 = *(_QWORD *)(v79[3].Count + 8);
      KeCallbackValidationPrologue((__int64)&v125);
      guard_dispatch_icall_no_overrides(v80, (__int64)&v136);
      KeCallbackValidationEpilogue((__int64)&v125, v79[6].Count, 0x102u);
      ExReleaseRundownProtection_0(v79 + 7);
      ExFreePoolWithTag(v77, 0);
      v75 = (PVOID *)P[0];
    }
    ObfDereferenceObjectWithTag(v138, 0x6243624Fu);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v81, v82);
    LODWORD(v69) = (_DWORD)Object;
    v71 = v121;
    v73 = v116;
  }
  if ( (xmmword_140FBFC10 & 0x40) != 0 && v73 >= 0 )
    EtwTraceDuplicateHandle(
      (_DWORD)Handle,
      v55,
      (_DWORD)v69,
      v72[1].Header.WaitListHead.Flink,
      v71[1].Header.WaitListHead.Flink,
      v127);
  return (unsigned int)v73;
}
