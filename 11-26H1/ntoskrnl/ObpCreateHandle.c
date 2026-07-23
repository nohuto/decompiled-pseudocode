/*
 * XREFs of ObpCreateHandle @ 0x140908590
 * Callers:
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269140 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfAcquireRundownProtection @ 0x1402D2650 (ExfAcquireRundownProtection.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     SeComputeCreatorDeniedRights @ 0x1403C7CA0 (SeComputeCreatorDeniedRights.c)
 *     SepSidInTokenSidHash @ 0x1403CA5B0 (SepSidInTokenSidHash.c)
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     SepPrivilegeCheck @ 0x14041BFB0 (SepPrivilegeCheck.c)
 *     OBJECT_HEADER_TO_HANDLE_INFO @ 0x14043CFE0 (OBJECT_HEADER_TO_HANDLE_INFO.c)
 *     ObReferenceObjectExWithTag @ 0x140446820 (ObReferenceObjectExWithTag.c)
 *     PsGetCurrentThreadProcessId @ 0x14044EE20 (PsGetCurrentThreadProcessId.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     ObDereferenceObjectExWithTag @ 0x1404776D0 (ObDereferenceObjectExWithTag.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     KeCallbackValidationEpilogue @ 0x1404D9E98 (KeCallbackValidationEpilogue.c)
 *     KeCallbackValidationPrologue @ 0x1404E22FC (KeCallbackValidationPrologue.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwDuplicateObject @ 0x140728740 (ZwDuplicateObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1408F37EC (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ObpInsertOrLocateNamedObject @ 0x1408F50B0 (ObpInsertOrLocateNamedObject.c)
 *     ObpCallPreOperationCallbacks @ 0x1408F5C04 (ObpCallPreOperationCallbacks.c)
 *     ObpDecrementHandleCount2 @ 0x1408F6920 (ObpDecrementHandleCount2.c)
 *     ObpSetObjectAuditInfo @ 0x140901D14 (ObpSetObjectAuditInfo.c)
 *     ExpAllocateTablePagedPool @ 0x140906A9C (ExpAllocateTablePagedPool.c)
 *     ExpUpdateDebugInfo @ 0x140908210 (ExpUpdateDebugInfo.c)
 *     ExpGetHandleExtraInfo @ 0x1409084AC (ExpGetHandleExtraInfo.c)
 *     ExpFreeTablePagedPool @ 0x140908540 (ExpFreeTablePagedPool.c)
 *     ObpIncrementHandleCountEx @ 0x14090A400 (ObpIncrementHandleCountEx.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14090AD10 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14090B0A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObDereferenceSecurityDescriptor @ 0x14090D9C0 (ObDereferenceSecurityDescriptor.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14090E660 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091FB0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409202F8 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140920410 (SepAdtClassifyObjectIntoSubCategory.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObpDeleteNameCheck @ 0x14092C880 (ObpDeleteNameCheck.c)
 *     SeAppendPrivileges @ 0x1409338F0 (SeAppendPrivileges.c)
 *     SepConcatenatePrivileges @ 0x140934F50 (SepConcatenatePrivileges.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140934FB4 (ObpReferenceSecurityDescriptorSlow.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1409BD784 (ExpAllocateHandleTableEntrySlow.c)
 *     ObpCreateSymbolicLinkName @ 0x1409DE86C (ObpCreateSymbolicLinkName.c)
 *     ObHandleRevocationBlockAddObject @ 0x140A50854 (ObHandleRevocationBlockAddObject.c)
 *     SepFilterPrivilegeAudits @ 0x140A5FFB0 (SepFilterPrivilegeAudits.c)
 *     EtwpTraceHandle @ 0x140A87B14 (EtwpTraceHandle.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCreateHandle(
        unsigned int a1,
        char *a2,
        signed int a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned __int8 a7,
        struct _LIST_ENTRY *a8,
        int a9,
        PVOID *a10,
        __int64 *a11)
{
  _KPROCESS *v14; // r8
  void *KernelTime; // r15
  KPROCESSOR_MODE v16; // r12
  ULONG_PTR v17; // rdi
  unsigned __int64 v18; // rcx
  char *v19; // r13
  signed __int64 v20; // rdx
  signed __int64 v21; // rax
  signed __int64 v22; // rbx
  signed __int64 v23; // rdx
  unsigned __int64 Pool2; // rbx
  NTSTATUS NamedObject; // r14d
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v27; // rax
  BOOLEAN v28; // al
  PPRIVILEGE_SET v29; // r14
  BOOLEAN v30; // di
  PVOID *v31; // r13
  _DWORD *v32; // rdi
  int v33; // ecx
  unsigned int v34; // r15d
  ACCESS_MASK v35; // ecx
  UNICODE_STRING *v36; // rcx
  _QWORD *v37; // r13
  __int64 v38; // rcx
  signed __int64 v39; // rax
  signed __int64 v40; // rtt
  struct _LIST_ENTRY *v41; // rdi
  struct _LIST_ENTRY *Flink; // r12
  struct _KTHREAD *v43; // r13
  char v44; // r15
  struct _KLOCK_ENTRIES *v45; // r9
  PVOID v46; // r14
  unsigned __int64 v47; // rdx
  __int64 p_SchedulerAssistLastYieldBoostTime; // r13
  PPRIVILEGE_SET v49; // rbx
  int v50; // eax
  __int64 v51; // r8
  signed __int64 v52; // rdx
  signed __int64 v53; // rax
  signed __int64 v54; // rbx
  signed __int64 v55; // rdx
  unsigned __int64 v56; // rbx
  int v57; // edi
  signed __int64 v58; // rax
  signed __int64 v59; // rtt
  __int64 v60; // rax
  NTSTATUS v61; // eax
  struct _LIST_ENTRY *v62; // r14
  int v63; // r8d
  __int64 v64; // r15
  char *v65; // r8
  char v66; // al
  ACCESS_MASK Number; // edx
  ACCESS_MASK v68; // ecx
  unsigned int v69; // r14d
  unsigned __int64 v70; // rbx
  AutoBoost *v71; // rax
  void *v72; // rdx
  AutoBoost *v73; // rdi
  PVOID *v74; // rdi
  PVOID v75; // rax
  int v76; // eax
  _QWORD *v77; // r10
  struct _KTHREAD *v78; // rbx
  struct _KLOCK_ENTRIES *v79; // r9
  char v80; // al
  struct _LIST_ENTRY *v81; // rbx
  __int64 v82; // rax
  __int64 v83; // r12
  char v84; // r13
  struct _LIST_ENTRY *v85; // r14
  PVOID v86; // rdi
  unsigned int v87; // ebx
  _DWORD *v88; // rcx
  PPRIVILEGE_SET v89; // r13
  unsigned __int64 v90; // rbx
  bool v91; // al
  __int64 *v92; // r12
  PVOID *v93; // r8
  unsigned __int64 v94; // rcx
  PVOID v95; // rsi
  PVOID *v96; // rax
  struct _EX_RUNDOWN_REF *v97; // rdi
  __int64 v98; // rbx
  __int64 v99; // r14
  unsigned __int64 v100; // rdx
  __int64 v101; // r8
  volatile signed __int64 *v102; // rax
  volatile signed __int64 *v103; // rbx
  volatile signed __int64 v104; // rcx
  _DWORD *v105; // rbx
  signed int v106; // eax
  signed __int64 v107; // rdx
  signed __int64 v108; // rax
  signed __int64 v109; // rdi
  signed __int64 v110; // rdx
  unsigned __int64 v111; // rdi
  signed __int64 v112; // rax
  signed __int64 v113; // rtt
  struct _EX_RUNDOWN_REF *p_Blink; // rdi
  unsigned __int64 v115; // rtt
  BOOLEAN v116; // al
  _DWORD *v117; // rax
  unsigned __int64 v118; // rcx
  __int64 v119; // rbx
  signed __int64 v120; // rdi
  char v121; // r12
  PRKPROCESS v122; // r10
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  PRKPROCESS v124; // rbx
  unsigned int v126; // ebx
  __int64 v127; // rcx
  int v128; // edi
  int v129; // edi
  _QWORD *TablePagedPool; // rax
  bool v131; // zf
  _QWORD *HandleExtraInfo; // rax
  unsigned int v133; // eax
  char v134; // r15
  unsigned __int64 v135; // rbx
  AutoBoost *v136; // rax
  void *v137; // rdx
  AutoBoost *v138; // r14
  void *v139; // rax
  unsigned __int64 v140; // rdi
  struct _KTHREAD *v141; // rcx
  PERESOURCE *v142; // rsi
  struct _KTHREAD *v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rax
  char v146; // di
  void *v147; // r8
  __int64 v148; // r12
  struct _LIST_ENTRY *v149; // r14
  void *v150; // r10
  int v151; // r12d
  struct _LIST_ENTRY *v152; // rax
  int v153; // ecx
  struct _KTHREAD *v154; // rax
  AutoBoost *v155; // rax
  void *v156; // rdx
  AutoBoost *v157; // r12
  signed __int64 v158; // r10
  __int64 v159; // rax
  _DWORD *v160; // r8
  signed __int64 v161; // rax
  signed __int64 v162; // rdx
  __int64 v163; // rtt
  __int64 v164; // rax
  __int64 *v165; // rdi
  __int64 v166; // rcx
  __int64 v167; // rbx
  __int64 v168; // rax
  void *v169; // rsi
  PVOID v170; // rsi
  PSE_EXPORTS v171; // r14
  char *v172; // rbx
  unsigned __int64 *v173; // rbx
  char *v174; // r14
  AutoBoost *v175; // rax
  void *v176; // rdx
  AutoBoost *v177; // rdi
  volatile signed __int64 *v178; // rbx
  char HandleTableEntrySlow; // di
  int *v180; // rax
  int v181; // ecx
  unsigned int v182; // r15d
  void *v183; // rdi
  _DWORD *v184; // rdx
  __int64 v185; // rdx
  __int64 v186; // r8
  unsigned __int64 CurrentThreadProcessId; // rbx
  int v188; // edx
  ACCESS_MASK v189; // eax
  ACCESS_MASK *PreviouslyGrantedAccess; // [rsp+20h] [rbp-100h]
  unsigned int *PreviouslyGrantedAccessa; // [rsp+20h] [rbp-100h]
  PPRIVILEGE_SET *Privileges; // [rsp+28h] [rbp-F8h]
  int GenericMapping; // [rsp+30h] [rbp-F0h]
  PVOID AccessMode; // [rsp+38h] [rbp-E8h]
  int GrantedAccess; // [rsp+40h] [rbp-E0h]
  bool v196; // [rsp+A0h] [rbp-80h]
  char v197; // [rsp+A1h] [rbp-7Fh]
  char v198; // [rsp+A2h] [rbp-7Eh]
  unsigned int v199; // [rsp+A4h] [rbp-7Ch] BYREF
  char v200; // [rsp+A8h] [rbp-78h]
  unsigned int v201; // [rsp+ACh] [rbp-74h] BYREF
  PVOID P; // [rsp+B0h] [rbp-70h] BYREF
  PVOID Object; // [rsp+B8h] [rbp-68h]
  ACCESS_MASK v204; // [rsp+C0h] [rbp-60h] BYREF
  PRKPROCESS PROCESS; // [rsp+C8h] [rbp-58h]
  NTSTATUS AccessStatus; // [rsp+D0h] [rbp-50h] BYREF
  ACCESS_MASK v207; // [rsp+D8h] [rbp-48h] BYREF
  unsigned __int16 v208; // [rsp+E0h] [rbp-40h]
  struct _LIST_ENTRY *v209; // [rsp+E8h] [rbp-38h]
  HANDLE TargetHandle; // [rsp+F0h] [rbp-30h] BYREF
  PVOID v211; // [rsp+F8h] [rbp-28h] BYREF
  unsigned int v212; // [rsp+100h] [rbp-20h]
  PPRIVILEGE_SET v213; // [rsp+108h] [rbp-18h] BYREF
  int v214[2]; // [rsp+110h] [rbp-10h] BYREF
  struct _KTHREAD *v215; // [rsp+118h] [rbp-8h] BYREF
  PVOID v216; // [rsp+120h] [rbp+0h]
  PVOID v217[2]; // [rsp+128h] [rbp+8h] BYREF
  __int64 *v218; // [rsp+138h] [rbp+18h] BYREF
  PVOID *v219; // [rsp+140h] [rbp+20h]
  _BYTE v220[24]; // [rsp+148h] [rbp+28h] BYREF
  struct _KAPC_STATE v221; // [rsp+160h] [rbp+40h] BYREF

  v209 = a8;
  v219 = a10;
  v218 = a11;
  v216 = 0LL;
  v215 = 0LL;
  v198 = 0;
  v200 = 0;
  v199 = 0;
  v214[0] = 0;
  v214[1] = a9;
  Object = a2;
  v212 = a1;
  LODWORD(TargetHandle) = a6;
  *(_OWORD *)v217 = 0LL;
  v14 = KeGetCurrentThread()->ApcState.Process;
  PROCESS = v14;
  if ( (a6 & 0x200) != 0 )
  {
    v14 = PsInitialSystemProcess;
    KernelTime = (void *)ObpKernelHandleTable;
    PROCESS = PsInitialSystemProcess;
  }
  else
  {
    if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    {
      P = 0LL;
      p_Blink = (struct _EX_RUNDOWN_REF *)&v14[1].ProfileListHead.Blink;
      _m_prefetchw(&v14[1].ProfileListHead.Blink);
      v115 = (unsigned __int64)v14[1].ProfileListHead.Blink & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v115 == _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&v14[1].ProfileListHead.Blink,
                     v115 + 2,
                     v115)
        || (v116 = ExfAcquireRundownProtection((PEX_RUNDOWN_REF)&v14[1].ProfileListHead.Blink), v14 = PROCESS, v116) )
      {
        KernelTime = (void *)v14[1].KernelTime;
        P = KernelTime;
        if ( KernelTime )
        {
          a1 = v212;
          v200 = 1;
          goto LABEL_5;
        }
        ExReleaseRundownProtection_0(p_Blink);
      }
      return (unsigned int)-1073741558;
    }
    KernelTime = (void *)KeGetCurrentThread()->ApcState.Process[1].KernelTime;
    a1 = v212;
  }
  P = KernelTime;
LABEL_5:
  v196 = KernelTime == (void *)ObpKernelHandleTable;
  if ( !a4 || KernelTime == (void *)ObpKernelHandleTable && !*(_DWORD *)(a4 + 24) )
  {
    if ( (a3 & 0x2000000) != 0 )
      a3 = a3 & 0xEDFFFFFF | 0x10000000;
    if ( (a3 & 0xF0000000) != 0 )
    {
      v117 = (_DWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8)];
      if ( a3 < 0 )
        a3 |= v117[19];
      if ( (a3 & 0x40000000) != 0 )
        a3 |= v117[20];
      if ( (a3 & 0x20000000) != 0 )
        a3 |= v117[21];
      if ( (a3 & 0x10000000) != 0 )
        a3 |= v117[22];
      a3 &= 0xFFFFFFFu;
    }
    v199 = a3;
    goto LABEL_48;
  }
  v16 = 1;
  AccessStatus = 0;
  if ( (a6 & 0x400) == 0 )
    v16 = a7;
  if ( a1 - 1 <= 1 )
  {
    v17 = (ULONG_PTR)(a2 - 48);
    v207 = 0;
    v213 = 0LL;
    v18 = (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8);
    v204 = 0;
    v201 = 0;
    v19 = (char *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v18];
    v211 = v19;
    if ( *((__int64 (__fastcall **)(__int64, int, DWORD *, struct _KLOCK_ENTRIES *, ULONG *, __int64 *, int, __int64))v19
         + 19) == SeDefaultObjectMethod )
    {
      _m_prefetchw((const void *)(v17 + 40));
      v20 = *(_QWORD *)(v17 + 40);
      if ( (v20 & 0xF) != 0 )
      {
        do
        {
          v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 40), v20 - 1, v20);
          if ( v20 == v21 )
            break;
          v20 = v21;
        }
        while ( (v21 & 0xF) != 0 );
      }
      v22 = v20;
      v23 = v20 & 0xF;
      Pool2 = v22 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (unsigned int)v23 <= 1 && Pool2 )
        Pool2 = ObpReferenceSecurityDescriptorSlow(v17, v23, Pool2);
      v197 = 0;
      if ( !Pool2 && ((v19[66] & 8) != 0 || (*(_BYTE *)(v17 + 26) & 2) != 0) )
        KeBugCheckEx(0x189u, v17, (ULONG_PTR)v19, 1uLL, 0LL);
      NamedObject = 0;
      goto LABEL_21;
    }
    v201 = 447;
    v204 = ObpDefaultSecurityDescriptorLength;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      LOBYTE(GrantedAccess) = v16;
      AccessMode = v19 + 76;
      PreviouslyGrantedAccess = &v204;
      v197 = 1;
      NamedObject = guard_dispatch_icall_no_overrides((__int64)Object, 1LL);
      if ( NamedObject == -1073741789 )
      {
        ExFreePoolWithTag((PVOID)Pool2, 0);
        ObpDefaultSecurityDescriptorLength = v204;
        Pool2 = ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
        {
          NamedObject = -1073741670;
          goto LABEL_45;
        }
        LOBYTE(GrantedAccess) = v16;
        AccessMode = v19 + 76;
        PreviouslyGrantedAccess = &v204;
        v197 = 1;
        NamedObject = guard_dispatch_icall_no_overrides((__int64)Object, 1LL);
      }
      if ( NamedObject >= 0 )
      {
LABEL_21:
        if ( !Pool2 )
        {
          *(_DWORD *)(a4 + 20) |= *(_DWORD *)(a4 + 16);
          v14 = PROCESS;
          v199 = *(_DWORD *)(a4 + 20);
          *(_DWORD *)(a4 + 16) = 0;
          AccessStatus = NamedObject;
          goto LABEL_48;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL), 1u);
        if ( *(_QWORD *)(a4 + 32) )
        {
          v27 = KeGetCurrentThread();
          --v27->KernelApcDisable;
          ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 32) + 48LL), 1u);
        }
        v28 = SeAccessCheck(
                (PSECURITY_DESCRIPTOR)Pool2,
                (PSECURITY_SUBJECT_CONTEXT)(a4 + 32),
                1u,
                *(_DWORD *)(a4 + 16),
                *(_DWORD *)(a4 + 20),
                &v213,
                (PGENERIC_MAPPING)(v19 + 76),
                v16,
                &v207,
                &AccessStatus);
        v29 = v213;
        v30 = v28;
        LOBYTE(v208) = v28;
        if ( v213 )
        {
          v31 = *(PVOID **)(a4 + 72);
          v32 = *v31;
          v33 = *(_DWORD *)*v31;
          if ( v213->PrivilegeCount + v33 > 3 )
          {
            v182 = 8;
            v183 = (void *)ExAllocatePool2(0x100uLL);
            if ( v183 )
            {
              v184 = *v31;
              if ( *v31 )
              {
                if ( *v184 )
                  v182 = 12 * *v184 + 8;
              }
              else
              {
                v182 = 0;
              }
              memmove(v183, v184, v182);
              SepConcatenatePrivileges(v183, v185, v29);
              if ( *(_BYTE *)(a4 + 11) )
                ExFreePoolWithTag(*v31, 0);
              *v31 = v183;
              *(_BYTE *)(a4 + 11) = 1;
            }
          }
          else
          {
            if ( v32 )
            {
              if ( v33 )
                v34 = 12 * v33 + 8;
              else
                v34 = 8;
            }
            else
            {
              v34 = 0;
            }
            memmove((char *)v32 + v34, v213->Privilege, 12 * v213->PrivilegeCount);
            *v32 += v29->PrivilegeCount;
          }
          CmSiFreeMemory(v213);
          v30 = v208;
          v19 = (char *)v211;
        }
        if ( v30 )
        {
          v35 = v207;
          *(_DWORD *)(a4 + 20) |= v207;
          *(_DWORD *)(a4 + 16) &= ~(v35 | 0x2000000);
        }
        if ( v16 )
        {
          v36 = (UNICODE_STRING *)(v19 + 16);
          v37 = Object;
          SeOpenObjectAuditAlarmWithTransaction(
            v36,
            Object,
            0LL,
            (PSECURITY_DESCRIPTOR)Pool2,
            (PACCESS_STATE)a4,
            0,
            v30,
            v16,
            0LL,
            (PBOOLEAN)(a4 + 10));
        }
        else
        {
          v37 = Object;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v38 = *(_QWORD *)(a4 + 32);
        if ( v38 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v38 + 48));
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
        if ( v197 )
        {
          ExFreePoolWithTag((PVOID)Pool2, 0);
        }
        else
        {
          _m_prefetchw(v37 - 1);
          v39 = *(v37 - 1);
          while ( (Pool2 ^ v39) < 0xF )
          {
            v40 = v39;
            v39 = _InterlockedCompareExchange64(v37 - 1, v39 + 1, v39);
            if ( v40 == v39 )
              goto LABEL_41;
          }
          ObDereferenceSecurityDescriptor(Pool2, 1LL);
        }
LABEL_41:
        if ( v30 )
        {
LABEL_42:
          v14 = PROCESS;
          v199 = *(_DWORD *)(a4 + 20);
          goto LABEL_48;
        }
        NamedObject = AccessStatus;
        goto LABEL_46;
      }
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    else
    {
      NamedObject = -1073741670;
    }
LABEL_45:
    AccessStatus = NamedObject;
LABEL_46:
    if ( NamedObject < 0 )
    {
LABEL_206:
      v124 = PROCESS;
      goto LABEL_207;
    }
    v14 = PROCESS;
    goto LABEL_48;
  }
  v105 = (_DWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8)];
  v106 = *(_DWORD *)(a4 + 16);
  if ( (v106 & 0x2000000) != 0 )
  {
    v106 = v106 & 0xEDFFFFFF | 0x10000000;
    *(_DWORD *)(a4 + 16) = v106;
  }
  if ( (v106 & 0xF0000000) != 0 )
  {
    if ( v106 < 0 )
      v106 |= v105[19];
    if ( (v106 & 0x40000000) != 0 )
      v106 |= v105[20];
    if ( (v106 & 0x20000000) != 0 )
      v106 |= v105[21];
    if ( (v106 & 0x10000000) != 0 )
      v106 |= v105[22];
    v106 &= 0xFFFFFFFu;
    *(_DWORD *)(a4 + 16) = v106;
  }
  if ( (v106 & 0x1000000) != 0 )
  {
    v165 = (__int64 *)(a4 + 32);
    *(LUID *)&v220[8] = SeSecurityPrivilege;
    *(_QWORD *)v220 = 0x100000001LL;
    *(_DWORD *)&v220[16] = 0;
    if ( v16 )
    {
      v166 = *v165;
      if ( *v165 )
      {
        if ( *(int *)(a4 + 40) < 2 )
          goto LABEL_317;
      }
      else
      {
        v166 = *(_QWORD *)(a4 + 48);
      }
      if ( !SepPrivilegeCheck(v166, (__int64)&v220[8], 1u, 1, v16) )
      {
LABEL_317:
        v167 = *v165;
        v168 = *v165;
        if ( !*v165 )
          v168 = *(_QWORD *)(a4 + 48);
        v169 = **(void ***)(v168 + 152);
        if ( !RtlEqualSid(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4), v169) )
        {
          if ( (v171 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v169))
            && !RtlEqualSid(v171->SeLocalServiceSid, v169)
            || (unsigned __int8)SepFilterPrivilegeAudits(1LL, v220) )
          {
            SepAdtPrivilegedServiceAuditAlarm(
              (_DWORD)v165,
              (unsigned int)&SeSubsystemName,
              0,
              v167,
              v165[2],
              (__int64)v220,
              0);
          }
        }
        NamedObject = -1073741727;
        goto LABEL_206;
      }
    }
    *(_DWORD *)(a4 + 16) &= ~0x1000000u;
    *(_DWORD *)(a4 + 20) |= 0x1000000u;
    SeAppendPrivileges((PACCESS_STATE)a4, (PPRIVILEGE_SET)v220);
  }
  *(_DWORD *)(a4 + 20) |= *(_DWORD *)(a4 + 16);
  *(_DWORD *)(a4 + 16) = 0;
  *(_DWORD *)(a4 + 20) &= v105[23] | 0x1000000;
  _m_prefetchw(a2 - 8);
  v107 = *((_QWORD *)a2 - 1);
  if ( (v107 & 0xF) != 0 )
  {
    do
    {
      v108 = _InterlockedCompareExchange64((volatile signed __int64 *)a2 - 1, v107 - 1, v107);
      if ( v107 == v108 )
        break;
      v107 = v108;
    }
    while ( (v108 & 0xF) != 0 );
  }
  v109 = v107;
  v110 = v107 & 0xF;
  v111 = v109 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (unsigned int)v110 <= 1 && v111 )
    v111 = ObpReferenceSecurityDescriptorSlow(a2 - 48, v110, v111);
  *(_DWORD *)(a4 + 20) &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                           (struct _SECURITY_SUBJECT_CONTEXT *)(a4 + 32),
                                           a4,
                                           *(_DWORD *)(a4 + 20),
                                           (unsigned int *)v111);
  if ( !v111 )
    goto LABEL_42;
  _m_prefetchw(a2 - 8);
  v112 = *((_QWORD *)a2 - 1);
  while ( (v111 ^ v112) < 0xF )
  {
    v113 = v112;
    v112 = _InterlockedCompareExchange64((volatile signed __int64 *)a2 - 1, v112 + 1, v112);
    if ( v113 == v112 )
      goto LABEL_42;
  }
  ObDereferenceSecurityDescriptor(v111, 1LL);
  v14 = PROCESS;
  v199 = *(_DWORD *)(a4 + 20);
LABEL_48:
  v41 = v209;
  Flink = 0LL;
  v211 = 0LL;
  if ( v209 )
  {
    Flink = v209[2].Flink;
    v211 = Flink;
  }
  v43 = (struct _KTHREAD *)Object;
  v44 = (char)TargetHandle;
  LOBYTE(PreviouslyGrantedAccess) = a7;
  NamedObject = ObpIncrementHandleCountEx(
                  v212,
                  &v199,
                  v14,
                  Object,
                  (_DWORD)PreviouslyGrantedAccess,
                  (_DWORD)TargetHandle,
                  Flink);
  if ( NamedObject < 0 )
    goto LABEL_206;
  if ( !a4 )
  {
    v46 = v216;
    goto LABEL_56;
  }
  if ( !v41 )
  {
    v46 = v216;
    goto LABEL_54;
  }
  v124 = PROCESS;
  NamedObject = ObpInsertOrLocateNamedObject(
                  PROCESS,
                  (char *)v43,
                  (__int64)&v199,
                  (_OWORD *)a4,
                  a7,
                  v41,
                  (PVOID *)&v215);
  if ( NamedObject >= 0 )
  {
    v46 = v215;
    if ( v215 == v43 )
    {
      v46 = 0LL;
    }
    else
    {
      v43 = v215;
      Object = v215;
      v198 = 1;
    }
LABEL_54:
    if ( *(_BYTE *)(a4 + 10) )
      v44 |= 4u;
LABEL_56:
    v47 = 0x140000000uLL;
    p_SchedulerAssistLastYieldBoostTime = (__int64)&v43[-1].SchedulerAssistLastYieldBoostTime;
    v49 = (PPRIVILEGE_SET)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(p_SchedulerAssistLastYieldBoostTime
                                                                                                + 24) ^ (unsigned __int64)BYTE1(p_SchedulerAssistLastYieldBoostTime)];
    v213 = v49;
    v50 = v49[4].Privilege[0].Luid.HighPart | 0x1000000;
    v51 = v50 & v199;
    v199 &= v50;
    if ( a4 )
    {
      _m_prefetchw((const void *)(p_SchedulerAssistLastYieldBoostTime + 40));
      v52 = *(_QWORD *)(p_SchedulerAssistLastYieldBoostTime + 40);
      if ( (v52 & 0xF) != 0 )
      {
        do
        {
          v53 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(p_SchedulerAssistLastYieldBoostTime + 40),
                  v52 - 1,
                  v52);
          if ( v52 == v53 )
            break;
          v52 = v53;
        }
        while ( (v53 & 0xF) != 0 );
      }
      v54 = v52;
      v55 = v52 & 0xF;
      v56 = v54 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (unsigned int)v55 <= 1 && v56 )
        v56 = ObpReferenceSecurityDescriptorSlow(p_SchedulerAssistLastYieldBoostTime, v55, v56);
      v57 = SeComputeCreatorDeniedRights((struct _SECURITY_SUBJECT_CONTEXT *)(a4 + 32), a4, v199, (unsigned int *)v56);
      if ( v56 )
      {
        _m_prefetchw((const void *)(p_SchedulerAssistLastYieldBoostTime + 40));
        v58 = *(_QWORD *)(p_SchedulerAssistLastYieldBoostTime + 40);
        while ( (v56 ^ v58) < 0xF )
        {
          v59 = v58;
          v58 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(p_SchedulerAssistLastYieldBoostTime + 40),
                  v58 + 1,
                  v58);
          if ( v59 == v58 )
            goto LABEL_66;
        }
        ObDereferenceSecurityDescriptor(v56, 1LL);
      }
LABEL_66:
      v60 = *(_QWORD *)(a4 + 72);
      v51 = ~v57 & v199;
      v41 = v209;
      v49 = v213;
      v199 = v51;
      *(_DWORD *)(a4 + 20) = v51;
      v61 = *(_DWORD *)(v60 + 28);
      v214[0] = v61;
    }
    else
    {
      v61 = v214[0];
    }
    AccessStatus = v61;
    if ( a5 )
    {
      ObReferenceObjectExWithTag((ULONG_PTR)Object, a5, 0x746C6644u);
      v51 = v199;
    }
    if ( v46 )
    {
      ObfDereferenceObject(v46);
      v51 = v199;
    }
    v62 = (struct _LIST_ENTRY *)Object;
    if ( v41 && !v198 && v49 == ObpSymbolicLinkObjectType )
    {
      ObpCreateSymbolicLinkName(Object, v47, v51);
      LODWORD(v51) = v199;
    }
    v217[1] = v217;
    v217[0] = v217;
    if ( (v49[3].Control & 0x400000) != 0 && *(PPRIVILEGE_SET *)&v49[10].PrivilegeCount != &v49[10] )
    {
      v126 = v51;
      v127 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v62[-2].Blink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v62 - 48) >> 8)];
      v128 = *(_DWORD *)(v127 + 96);
      v221.Process = (_KPROCESS *)v220;
      v129 = v51 & v128;
      *(_DWORD *)&v220[4] = v51;
      HIDWORD(v221.ApcListHead[0].Flink) = v196;
      *(_DWORD *)v220 = v51;
      *(_OWORD *)&v220[8] = 0LL;
      LODWORD(v221.ApcListHead[0].Flink) = 1;
      v221.ApcListHead[0].Blink = v62;
      v221.ApcListHead[1] = (_LIST_ENTRY)(unsigned __int64)v127;
      NamedObject = ObpCallPreOperationCallbacks(v127, (__int64)&v221, v217);
      if ( NamedObject < 0 || v196 )
      {
        if ( NamedObject < 0 )
        {
          v118 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(p_SchedulerAssistLastYieldBoostTime + 24) ^ (unsigned __int64)BYTE1(p_SchedulerAssistLastYieldBoostTime);
          memset(&v221, 0, sizeof(v221));
          v119 = ObTypeIndexTable[v118];
          if ( (*(_BYTE *)(v119 + 66) & 0x10) != 0 || (*(_BYTE *)(p_SchedulerAssistLastYieldBoostTime + 27) & 8) != 0 )
          {
            v154 = KeGetCurrentThread();
            --v154->KernelApcDisable;
            v155 = (AutoBoost *)KeAbPreAcquire(p_SchedulerAssistLastYieldBoostTime + 16, 0LL, 0LL, v45);
            v157 = v155;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(p_SchedulerAssistLastYieldBoostTime + 16), 0LL) )
              ExfAcquirePushLockExclusiveEx(
                (unsigned __int64 *)(p_SchedulerAssistLastYieldBoostTime + 16),
                v155,
                p_SchedulerAssistLastYieldBoostTime + 16);
            if ( v157 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v157, v156);
              else
                *((_BYTE *)v157 + 10) = 1;
            }
            v120 = *(_QWORD *)(p_SchedulerAssistLastYieldBoostTime + 8);
            if ( _InterlockedExchangeAdd64(
                   (volatile signed __int64 *)(p_SchedulerAssistLastYieldBoostTime + 8),
                   0xFFFFFFFFFFFFFFFFuLL) == 1
              && (*(_BYTE *)(p_SchedulerAssistLastYieldBoostTime + 27) & 8) != 0 )
            {
              v158 = 0LL;
              *(_QWORD *)(p_SchedulerAssistLastYieldBoostTime
                        - ObpInfoMaskToOffset[*(_BYTE *)(p_SchedulerAssistLastYieldBoostTime + 26) & 0x1F]) = 0LL;
            }
            else
            {
              v158 = 0LL;
            }
            if ( (*(_BYTE *)(v119 + 66) & 0x10) != 0 )
            {
              v159 = OBJECT_HEADER_TO_HANDLE_INFO(p_SchedulerAssistLastYieldBoostTime);
              v160 = (_DWORD *)v159;
              if ( (*(_BYTE *)(p_SchedulerAssistLastYieldBoostTime + 27) & 0x40) != 0 )
              {
                *(_DWORD *)(v159 + 8) ^= (*(_DWORD *)(v159 + 8) ^ (*(_DWORD *)(v159 + 8) - 1)) & 0xFFFFFF;
              }
              else
              {
                v180 = *(int **)v159;
                v181 = *v180;
                v160 = v180 + 2;
                while ( v181 )
                {
                  if ( (v160[2] & 0xFFFFFF) != 0 && *(PRKPROCESS *)v160 == PROCESS )
                  {
                    v160[2] ^= (v160[2] ^ (v160[2] - 1)) & 0xFFFFFF;
                    break;
                  }
                  v160 += 4;
                  --v181;
                }
              }
              if ( !*((_BYTE *)v160 + 11) && (v160[2] & 0xFFFFFF) == 0 )
                *(_QWORD *)v160 = v158;
            }
            _m_prefetchw((const void *)(p_SchedulerAssistLastYieldBoostTime + 16));
            v161 = *(_QWORD *)(p_SchedulerAssistLastYieldBoostTime + 16);
            v162 = v161 - 16;
            if ( (v161 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v162 = v158;
            if ( (v161 & 2) != 0
              || (v163 = *(_QWORD *)(p_SchedulerAssistLastYieldBoostTime + 16),
                  v163 != _InterlockedCompareExchange64(
                            (volatile signed __int64 *)(p_SchedulerAssistLastYieldBoostTime + 16),
                            v162,
                            v161)) )
            {
              ExfReleasePushLock((_QWORD *)(p_SchedulerAssistLastYieldBoostTime + 16));
            }
            KeAbPostRelease(p_SchedulerAssistLastYieldBoostTime + 16);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
          else
          {
            v120 = _InterlockedExchangeAdd64(
                     (volatile signed __int64 *)(p_SchedulerAssistLastYieldBoostTime + 8),
                     0xFFFFFFFFFFFFFFFFuLL);
          }
          if ( *(_QWORD *)(v119 + 128) )
          {
            v121 = 0;
            v122 = PROCESS;
            v209 = 0LL;
            if ( KeGetCurrentThread()->ApcState.Process != PROCESS )
            {
              v121 = 1;
              ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)PROCESS);
              v209 = PsAttachSiloToCurrentThread(ProcessServerSilo);
              KeStackAttachProcess(PROCESS, &v221);
              v122 = PROCESS;
            }
            guard_dispatch_icall_no_overrides((__int64)v122, p_SchedulerAssistLastYieldBoostTime + 48);
            if ( v121 )
            {
              KiUnstackDetachProcess((__int64)&v221, 0);
              PsDetachSiloFromCurrentThread(v209);
            }
          }
          if ( v120 == 1 )
            ObpDeleteNameCheck(p_SchedulerAssistLastYieldBoostTime);
          _InterlockedDecrement((volatile signed __int32 *)(v119 + 48));
          if ( a5 )
            ObDereferenceObjectExWithTag((ULONG_PTR)Object, a5, 0x746C6644u);
          goto LABEL_206;
        }
        if ( v196 )
        {
          LODWORD(v51) = v199;
          goto LABEL_73;
        }
      }
      else
      {
        v126 &= v129 | *(_DWORD *)v220;
      }
      v199 = v126;
      LODWORD(v51) = v126;
      if ( a4 )
        *(_DWORD *)(a4 + 20) = v126;
    }
LABEL_73:
    *(_QWORD *)&v220[8] = 0LL;
    v63 = v51 & 0x1FFFFFF;
    *(_QWORD *)v220 = (p_SchedulerAssistLastYieldBoostTime << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)(v44 & 7) << 17);
    if ( (v44 & 8) != 0 )
      v63 |= 0x2000000u;
    v64 = 0LL;
    *(_DWORD *)&v220[8] = v63;
    v65 = (char *)P;
    v216 = (PVOID)(*(_QWORD *)v220 | 1LL);
    v215 = KeGetCurrentThread();
    --v215->KernelApcDisable;
    v66 = v65[44];
    if ( (v66 & 4) == 0 )
    {
      if ( (v66 & 1) != 0 )
        Number = 0;
      else
        Number = KeGetPcr()->Prcb.Number;
      v68 = Number;
      v201 = ExpFreeListCount;
      v207 = Number;
      v204 = Number;
LABEL_79:
      v69 = 0;
      LODWORD(TargetHandle) = *(_DWORD *)v65;
      while ( 1 )
      {
        if ( v69 >= v201 )
        {
          v173 = (unsigned __int64 *)(v65 + 56);
          LOBYTE(v208) = 1;
          v204 = v207;
          v174 = &v65[64 * v207 + 64];
          v175 = (AutoBoost *)KeAbPreAcquire((__int64)(v65 + 56), 0LL, 0LL, v45);
          v177 = v175;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v173, 0LL) )
            ExfAcquirePushLockExclusiveEx(v173, v175, (__int64)v173);
          if ( v177 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v177, v176);
            else
              *((_BYTE *)v177 + 10) = 1;
          }
          v178 = (volatile signed __int64 *)P;
          if ( (_DWORD)TargetHandle == *(_DWORD *)P )
            HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(P, v174);
          else
            HandleTableEntrySlow = v208;
          if ( (_InterlockedExchangeAdd64(v178 + 7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v178 + 7);
          KeAbPostRelease((unsigned __int64)(v178 + 7));
          if ( HandleTableEntrySlow )
          {
            v68 = v204;
            v65 = (char *)v178;
            goto LABEL_79;
          }
          v78 = v215;
          goto LABEL_101;
        }
        v70 = (unsigned __int64)&v65[64 * v68 + 64];
        if ( *(_QWORD *)(v70 + 8) )
        {
          v71 = (AutoBoost *)KeAbPreAcquire(v70, 0LL, 0LL, v45);
          v73 = v71;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v70, 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v70, v71, v70);
          if ( v73 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v73, v72);
            else
              *((_BYTE *)v73 + 10) = 1;
          }
          v74 = *(PVOID **)(v70 + 8);
          if ( v74 )
          {
            v75 = v74[1];
            *(_QWORD *)(v70 + 8) = v75;
            if ( !v75 )
              *(_QWORD *)(v70 + 16) = 0LL;
            v76 = ++*(_DWORD *)(v70 + 24);
            if ( v76 > *(_DWORD *)(v70 + 28) )
              *(_DWORD *)(v70 + 28) = v76;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v70);
          KeAbPostRelease(v70);
          if ( v74 )
          {
            v64 = *(_QWORD *)(((unsigned __int64)v74 & 0xFFFFFFFFFFFFF000uLL) + 8)
                + 4 * ((__int64)((__int64)v74 - ((unsigned __int64)v74 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
            if ( !AccessStatus && !a9 )
            {
              v77 = P;
LABEL_98:
              v78 = v215;
              if ( v77[12] )
                ExpUpdateDebugInfo((__int64)v77, (__int64)v215, v64, 1);
              v74[1] = *(PVOID *)&v220[8];
              *v74 = v216;
              goto LABEL_101;
            }
            v77 = P;
            v99 = (unsigned __int8)((unsigned int)v64 >> 2);
            v209 = (struct _LIST_ENTRY *)(v64 & 0xFFFFFFFFFFFFFC03uLL);
            v100 = v64 & 0xFFFFFFFFFFFFFC00uLL;
            if ( (v64 & 0xFFFFFFFFFFFFFC00uLL) < *(unsigned int *)P )
            {
              v101 = *((_QWORD *)P + 1);
              if ( (v101 & 3) == 1 )
              {
                v102 = *(volatile signed __int64 **)(v101 + 8 * (v100 >> 10) - 1);
                goto LABEL_141;
              }
              if ( (v101 & 3) != 0 )
              {
                v102 = *(volatile signed __int64 **)(*(_QWORD *)(v101 + 8 * (v100 >> 19) - 2)
                                                   + 8 * ((v100 >> 10) & 0x1FF));
LABEL_141:
                v103 = v102;
              }
              else
              {
                v103 = (volatile signed __int64 *)(v101 + 4 * v100);
              }
              if ( v103 )
              {
                v104 = *v103;
                if ( *v103 )
                {
LABEL_144:
                  *(_QWORD *)(v104 + 8 * v99) = *(_QWORD *)v214;
                  goto LABEL_98;
                }
                TablePagedPool = ExpAllocateTablePagedPool(*((_QWORD *)P + 2), 0x800uLL);
                if ( TablePagedPool )
                {
                  if ( !_InterlockedCompareExchange64(v103, (signed __int64)TablePagedPool, 0LL) )
                  {
                    v77 = P;
                    _InterlockedIncrement((volatile signed __int32 *)P + 1);
                    TablePagedPool[v99] = *(_QWORD *)v214;
                    goto LABEL_98;
                  }
                  ExpFreeTablePagedPool(*((_QWORD *)P + 2), TablePagedPool, 0x800uLL);
                  v104 = *v103;
                  v77 = P;
                  if ( *v103 )
                    goto LABEL_144;
                }
                else
                {
                  v77 = P;
                }
              }
            }
            v209 = (struct _LIST_ENTRY *)v64;
            v131 = *((_DWORD *)v77 + 1) == 0;
            LODWORD(v209) = v64 & 0xFFFFFFFC;
            if ( !v131 )
            {
              HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo((unsigned int *)v77, (__int64)v209);
              if ( HandleExtraInfo )
                *HandleExtraInfo = 0LL;
            }
            v133 = 0;
            v74[1] = 0LL;
            v134 = *((_BYTE *)v77 + 44) & 1;
            if ( !v134 )
              v133 = KeGetPcr()->Prcb.Number;
            v135 = (unsigned __int64)&v77[8 * v133 + 8];
            v136 = (AutoBoost *)KeAbPreAcquire(v135, 0LL, 0LL, v45);
            v138 = v136;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v135, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v135, v136, v135);
            if ( v138 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v138, v137);
              else
                *((_BYTE *)v138 + 10) = 1;
            }
            if ( v134 )
            {
              v164 = *(_QWORD *)(v135 + 16);
              if ( v164 )
                *(_QWORD *)(v164 + 8) = v74;
              else
                *(_QWORD *)(v135 + 8) = v74;
              *(_QWORD *)(v135 + 16) = v74;
            }
            else
            {
              v139 = *(void **)(v135 + 8);
              v74[1] = v139;
              if ( !v139 )
                *(_QWORD *)(v135 + 16) = v74;
              *(_QWORD *)(v135 + 8) = v74;
            }
            --*(_DWORD *)(v135 + 24);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v135);
            KeAbPostRelease(v135);
            v64 = 0LL;
            break;
          }
          v68 = v204;
          v65 = (char *)P;
        }
        v189 = v68 + 1;
        ++v69;
        v68 = 0;
        if ( v189 != v201 )
          v68 = v189;
        v204 = v68;
      }
    }
    v78 = v215;
LABEL_101:
    KeLeaveCriticalRegionThread((__int64)v78);
    if ( !v64 )
    {
      ObpDecrementHandleCount2(PROCESS, p_SchedulerAssistLastYieldBoostTime, 0LL, v79);
      if ( a5 )
        ObDereferenceObjectExWithTag((ULONG_PTR)Object, a5, 0x6E48624Fu);
      v89 = v213;
      NamedObject = -1073741670;
      v91 = v196;
      v92 = v218;
      goto LABEL_127;
    }
    if ( ObpTraceFlags && a5 )
    {
      v172 = (char *)Object - 48;
      ObpPushStackInfo((__int64)Object - 48, 1, 0x6E48624Fu);
      ObpPushStackInfo((__int64)v172, -1, 0x746C6644u);
    }
    if ( !a4 )
    {
      v89 = v213;
LABEL_123:
      if ( a5 && v219 )
        *v219 = Object;
      v91 = v196;
      NamedObject = v198 != 0 ? 0x40000000 : 0;
      if ( v196 )
        v64 |= 0xFFFFFFFF80000000uLL;
      v92 = v218;
      *v218 = v64;
LABEL_127:
      v93 = (PVOID *)v217[0];
      if ( v217[0] != v217 )
      {
        *(_QWORD *)&v221.InProgressFlags = &TargetHandle;
        LODWORD(v221.ApcListHead[0].Flink) = 1;
        HIDWORD(v221.ApcListHead[0].Flink) = v91;
        v94 = (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
        v221.ApcListHead[0].Blink = (struct _LIST_ENTRY *)Object;
        v221.ApcListHead[1].Blink = 0LL;
        v221.Process = (_KPROCESS *)(unsigned int)NamedObject;
        v218 = 0LL;
        v221.ApcListHead[1].Flink = (struct _LIST_ENTRY *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v94];
        LODWORD(TargetHandle) = v199;
        while ( v93 != v217 )
        {
          v95 = v217[1];
          v96 = (PVOID *)*((_QWORD *)v217[1] + 1);
          if ( *(PVOID **)v217[1] != v217 || *v96 != v217[1] )
            __fastfail(3u);
          v217[1] = *((PVOID *)v217[1] + 1);
          *v96 = v217;
          v97 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v95 + 2);
          v221.ApcListHead[1].Blink = (struct _LIST_ENTRY *)*((_QWORD *)v95 + 3);
          v98 = *(_QWORD *)(v97[3].Count + 8);
          KeCallbackValidationPrologue((__int64)&v218);
          guard_dispatch_icall_no_overrides(v98, (__int64)&v221);
          KeCallbackValidationEpilogue((__int64)&v218, v97[6].Count, 0x102u);
          ExReleaseRundownProtection_0(v97 + 7);
          ExFreePoolWithTag(v95, 0);
          v93 = (PVOID *)v217[0];
        }
        ObfDereferenceObjectWithTag(v221.ApcListHead[0].Blink, 0x6243624Fu);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      if ( (xmmword_140FC0C10 & 0x40) != 0 && NamedObject >= 0 )
        EtwpTraceHandle(
          4384LL,
          *v92,
          Object,
          v89,
          PreviouslyGrantedAccessa,
          Privileges,
          GenericMapping,
          AccessMode,
          GrantedAccess);
      goto LABEL_206;
    }
    v80 = *(_BYTE *)(p_SchedulerAssistLastYieldBoostTime + 26);
    v81 = 0LL;
    P = 0LL;
    if ( (v80 & 0x20) == 0 || (v82 = ObpInfoMaskToOffset[v80 & 0x3F], p_SchedulerAssistLastYieldBoostTime == v82) )
    {
      if ( Flink )
        v81 = Flink;
      goto LABEL_108;
    }
    v85 = *(struct _LIST_ENTRY **)(p_SchedulerAssistLastYieldBoostTime - v82);
    if ( v85 )
    {
      v83 = *(_QWORD *)(a4 + 72);
      TargetHandle = 0LL;
      v84 = 0;
      v86 = 0LL;
      *(_QWORD *)v214 = v64;
      goto LABEL_111;
    }
    if ( Flink )
    {
      ObpSetObjectAuditInfo(p_SchedulerAssistLastYieldBoostTime, &v211, 0);
      v83 = *(_QWORD *)(a4 + 72);
      TargetHandle = 0LL;
      v84 = 0;
      v86 = 0LL;
      *(_QWORD *)v214 = v64;
LABEL_109:
      v85 = *(struct _LIST_ENTRY **)(v83 + 56);
      if ( !v85 )
        v85 = *(struct _LIST_ENTRY **)(a4 + 64);
LABEL_111:
      if ( *(_BYTE *)(a4 + 9) )
      {
        if ( *(_BYTE *)(a4 + 124) )
        {
          SepAdtPrivilegeObjectAuditAlarm(
            (unsigned int)&SeSubsystemName,
            a4 + 144,
            a4 + 128,
            v64,
            *(_QWORD *)(a4 + 32),
            *(_QWORD *)(a4 + 48),
            *(_QWORD *)(a4 + 56),
            *(_DWORD *)(a4 + 20),
            *(_QWORD *)v83,
            1);
LABEL_113:
          v87 = v212;
          *(_BYTE *)(a4 + 10) = v84;
          if ( !v87 )
          {
            v88 = **(_DWORD ***)(a4 + 72);
            if ( v88 )
            {
              if ( *v88 && KeGetCurrentThread()->PreviousMode )
                SepAdtPrivilegeObjectAuditAlarm(
                  (unsigned int)&SeSubsystemName,
                  0,
                  0,
                  v64,
                  *(_QWORD *)(a4 + 32),
                  *(_QWORD *)(a4 + 48),
                  *(_QWORD *)(a4 + 56),
                  *(_DWORD *)(a4 + 20),
                  (__int64)v88,
                  1);
            }
          }
          if ( P )
            ExFreePoolWithTag(P, 0);
          v89 = v213;
          if ( !v87 && (v213 == (PPRIVILEGE_SET)CmKeyObjectType || v213 == (PPRIVILEGE_SET)IoFileObjectType) )
          {
            v90 = *(_QWORD *)(a4 + 32);
            if ( v90 )
            {
              v140 = *(_QWORD *)(a4 + 48);
              v141 = KeGetCurrentThread();
              v142 = (PERESOURCE *)(v140 + 48);
              --v141->KernelApcDisable;
              if ( v140 >= v90 )
              {
                ExAcquireResourceSharedLite(*(PERESOURCE *)(v90 + 48), 1u);
              }
              else
              {
                ExAcquireResourceSharedLite(*v142, 1u);
                v142 = (PERESOURCE *)(v90 + 48);
              }
              v143 = KeGetCurrentThread();
              --v143->KernelApcDisable;
              ExAcquireResourceSharedLite(*v142, 1u);
              if ( (*(_DWORD *)(v90 + 200) & 0x4000) != 0
                && *(int *)(v90 + 196) >= 2
                && !RtlEqualSid(**(PSID **)(v140 + 152), **(PSID **)(v90 + 152)) )
              {
                v170 = Object;
                if ( OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO((__int64)Object - 48) )
                {
                  if ( SepSidInTokenSidHash(
                         v140 + 808,
                         0LL,
                         (unsigned __int8 *)SeConstrainedImpersonationCapabilitySid,
                         0,
                         1,
                         0) )
                  {
                    ObHandleRevocationBlockAddObject(*(_QWORD *)(v90 + 216) + 136LL, v170);
                  }
                }
              }
              ExReleaseResourceLite(*(PERESOURCE *)(v140 + 48));
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              ExReleaseResourceLite(*(PERESOURCE *)(v90 + 48));
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            }
          }
          goto LABEL_123;
        }
      }
      else if ( !*(_BYTE *)(v83 + 216) )
      {
        goto LABEL_113;
      }
      if ( ZwDuplicateObject(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             (HANDLE)v64,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &TargetHandle,
             0,
             0x200u,
             2u) >= 0 )
      {
        v211 = 0LL;
        ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &v211, 0LL);
        v86 = v211;
      }
      LOBYTE(v186) = 1;
      v208 = SepAdtClassifyObjectIntoSubCategory(v86, a4 + 144, v186, 0LL);
      if ( v86 )
        ObfDereferenceObject(v86);
      if ( TargetHandle )
      {
        ZwClose(TargetHandle);
        TargetHandle = 0LL;
      }
      CurrentThreadProcessId = PsGetCurrentThreadProcessId();
      v84 = SepAdtOpenObjectAuditAlarm(
              v208,
              (int)&SeSubsystemName,
              (int)v214,
              (int)a4 + 144,
              a4 + 128,
              v85,
              *(_QWORD *)(a4 + 32),
              *(_QWORD *)(a4 + 48),
              *(_DWORD *)(a4 + 24),
              *(_DWORD *)(a4 + 20),
              *(_QWORD *)v83,
              1,
              CurrentThreadProcessId,
              2,
              0LL,
              0,
              0LL,
              v83 + 32,
              a4);
      SepAdtStagingEvent(
        v208,
        v188,
        (unsigned int)v214,
        a4 + 144,
        a4 + 128,
        *(_QWORD *)(a4 + 32),
        *(_QWORD *)(a4 + 48),
        *(_DWORD *)(a4 + 24),
        *(_DWORD *)(a4 + 20),
        1,
        CurrentThreadProcessId,
        a4);
      goto LABEL_113;
    }
    v144 = (unsigned __int8)*((char *)Object - 24);
    if ( ((unsigned __int8)v144 ^ (unsigned __int8)(ObHeaderCookie ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) == *((_BYTE *)IoFileObjectType + 40)
      && (*(_DWORD *)(*((_QWORD *)Object + 1) + 52LL) & 0x10) != 0 )
    {
LABEL_108:
      v83 = *(_QWORD *)(a4 + 72);
      v84 = 0;
      *(_QWORD *)v214 = v64;
      TargetHandle = 0LL;
      v85 = v81;
      v86 = 0LL;
      if ( v81 )
        goto LABEL_111;
      goto LABEL_109;
    }
    v145 = *(_QWORD *)(a4 + 72);
    v146 = 0;
    if ( v145 )
    {
      v147 = *(void **)(v145 + 56);
      if ( v147 )
      {
        v153 = ObpAllocateAndQuerySecurityDescriptorInfo((__int64)Object, 0x20u, v147, &P);
        v146 = 1;
        v152 = (struct _LIST_ENTRY *)P;
        goto LABEL_277;
      }
    }
    v207 = 32;
    v201 = ObpDefaultSecurityDescriptorLength;
    v148 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v144 ^ (unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    v209 = (struct _LIST_ENTRY *)v148;
    v149 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
    if ( !v149 )
    {
      v152 = (struct _LIST_ENTRY *)P;
      v153 = -1073741670;
      goto LABEL_277;
    }
    v150 = *(void **)(v148 + 152);
    LOBYTE(GrantedAccess) = 0;
    AccessMode = (PVOID)(v148 + 76);
    v211 = (PVOID)(v148 + 76);
    GenericMapping = *(_DWORD *)(v148 + 100);
    Privileges = (PPRIVILEGE_SET *)((char *)Object - 8);
    PreviouslyGrantedAccessa = &v201;
    v216 = v150;
    v151 = guard_dispatch_icall_no_overrides((__int64)Object, 1LL);
    if ( v151 == -1073741789 )
    {
      ExFreePoolWithTag(v149, 0x7153624Fu);
      v149 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
      if ( !v149 )
      {
        v152 = (struct _LIST_ENTRY *)P;
        v153 = -1073741670;
        goto LABEL_277;
      }
      LOBYTE(GrantedAccess) = 0;
      AccessMode = v211;
      GenericMapping = HIDWORD(v209[6].Flink);
      Privileges = (PPRIVILEGE_SET *)((char *)Object - 8);
      PreviouslyGrantedAccessa = &v201;
      v151 = guard_dispatch_icall_no_overrides((__int64)Object, 1LL);
    }
    if ( v151 < 0 )
    {
      ExFreePoolWithTag(v149, 0x7153624Fu);
      v152 = (struct _LIST_ENTRY *)P;
    }
    else
    {
      v152 = v149;
      P = v149;
    }
    v153 = v151;
LABEL_277:
    if ( v153 >= 0 )
    {
      v81 = v152;
      ObpSetObjectAuditInfo(p_SchedulerAssistLastYieldBoostTime, &P, v146);
    }
    goto LABEL_108;
  }
LABEL_207:
  if ( v200 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v124[1].ProfileListHead.Blink);
  return (unsigned int)NamedObject;
}
