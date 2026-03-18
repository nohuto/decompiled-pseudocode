/*
 * XREFs of ObpCreateHandle @ 0x14092CA60
 * Callers:
 *     ObOpenObjectByNameEx @ 0x1408FCDF0 (ObOpenObjectByNameEx.c)
 *     ObOpenObjectByPointer @ 0x14092AFF0 (ObOpenObjectByPointer.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140269BD0 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     ExfAcquireRundownProtection @ 0x1402F05D0 (ExfAcquireRundownProtection.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     SeComputeCreatorDeniedRights @ 0x1403BDDA0 (SeComputeCreatorDeniedRights.c)
 *     SepSidInTokenSidHash @ 0x1403C06B0 (SepSidInTokenSidHash.c)
 *     SepPrivilegeCheck @ 0x14042F0A0 (SepPrivilegeCheck.c)
 *     OBJECT_HEADER_TO_HANDLE_INFO @ 0x1404444D0 (OBJECT_HEADER_TO_HANDLE_INFO.c)
 *     ObReferenceObjectExWithTag @ 0x14044E6F0 (ObReferenceObjectExWithTag.c)
 *     PsGetCurrentThreadProcessId @ 0x1404575B0 (PsGetCurrentThreadProcessId.c)
 *     PsAttachSiloToCurrentThread @ 0x14046CE80 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140476400 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140476BF0 (PsGetProcessServerSilo.c)
 *     ObDereferenceObjectExWithTag @ 0x14047DD60 (ObDereferenceObjectExWithTag.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     KeCallbackValidationEpilogue @ 0x1404E07B8 (KeCallbackValidationEpilogue.c)
 *     KeCallbackValidationPrologue @ 0x1404E921C (KeCallbackValidationPrologue.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwDuplicateObject @ 0x140723B70 (ZwDuplicateObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1408ED22C (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ObpInsertOrLocateNamedObject @ 0x1408EEAF0 (ObpInsertOrLocateNamedObject.c)
 *     ObpCallPreOperationCallbacks @ 0x1408EF644 (ObpCallPreOperationCallbacks.c)
 *     ObpDecrementHandleCount2 @ 0x1408F0360 (ObpDecrementHandleCount2.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ObpDeleteNameCheck @ 0x1408FC8F0 (ObpDeleteNameCheck.c)
 *     SeAppendPrivileges @ 0x140903960 (SeAppendPrivileges.c)
 *     SepConcatenatePrivileges @ 0x140904FC0 (SepConcatenatePrivileges.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140905024 (ObpReferenceSecurityDescriptorSlow.c)
 *     ObpSetObjectAuditInfo @ 0x140926204 (ObpSetObjectAuditInfo.c)
 *     ExpAllocateTablePagedPool @ 0x14092AF6C (ExpAllocateTablePagedPool.c)
 *     ExpUpdateDebugInfo @ 0x14092C6E0 (ExpUpdateDebugInfo.c)
 *     ExpGetHandleExtraInfo @ 0x14092C97C (ExpGetHandleExtraInfo.c)
 *     ExpFreeTablePagedPool @ 0x14092CA10 (ExpFreeTablePagedPool.c)
 *     ObpIncrementHandleCountEx @ 0x14092E8D0 (ObpIncrementHandleCountEx.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14092F1E0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14092F570 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ObDereferenceSecurityDescriptor @ 0x140931DF0 (ObDereferenceSecurityDescriptor.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140932AB0 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140972494 (ExpAllocateHandleTableEntrySlow.c)
 *     ObpCreateSymbolicLinkName @ 0x1409E185C (ObpCreateSymbolicLinkName.c)
 *     SepFilterPrivilegeAudits @ 0x1409F7460 (SepFilterPrivilegeAudits.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409FAF0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409FB6F8 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1409FB810 (SepAdtClassifyObjectIntoSubCategory.c)
 *     ObHandleRevocationBlockAddObject @ 0x140A47564 (ObHandleRevocationBlockAddObject.c)
 *     EtwpTraceHandle @ 0x140A81CA4 (EtwpTraceHandle.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  KPROCESSOR_MODE AccessMode; // r12
  ULONG_PTR v17; // rdi
  unsigned __int64 v18; // rcx
  char *v19; // r13
  signed __int64 v20; // rdx
  signed __int64 v21; // rax
  signed __int64 v22; // rbx
  unsigned int v23; // edx
  __int64 Pool2; // rbx
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
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  signed __int64 v43; // rax
  signed __int64 v44; // rtt
  struct _LIST_ENTRY *v45; // rdi
  struct _LIST_ENTRY *Flink; // r12
  struct _KTHREAD *v47; // r13
  char v48; // r15
  struct _KLOCK_ENTRIES *v49; // r9
  PVOID v50; // r14
  unsigned __int64 v51; // rdx
  __int64 p_SchedulerAssistLastYieldBoostTime; // r13
  PPRIVILEGE_SET v53; // rbx
  int v54; // eax
  __int64 v55; // r8
  signed __int64 v56; // rdx
  signed __int64 v57; // rax
  signed __int64 v58; // rbx
  unsigned int v59; // edx
  unsigned __int64 v60; // rbx
  int v61; // edi
  signed __int64 v62; // rax
  signed __int64 v63; // rtt
  __int64 v64; // rax
  NTSTATUS v65; // eax
  struct _LIST_ENTRY *v66; // r14
  int v67; // r8d
  __int64 v68; // r15
  __int64 v69; // r8
  char v70; // al
  ACCESS_MASK Number; // edx
  ACCESS_MASK v72; // ecx
  unsigned int v73; // r14d
  unsigned __int64 v74; // rbx
  AutoBoost *v75; // rax
  void *v76; // rdx
  AutoBoost *v77; // rdi
  PVOID *v78; // rdi
  PVOID v79; // rax
  int v80; // eax
  _QWORD *v81; // r10
  struct _KTHREAD *v82; // rbx
  struct _KLOCK_ENTRIES *v83; // r9
  char v84; // al
  struct _LIST_ENTRY *v85; // rbx
  __int64 v86; // rax
  __int64 v87; // r12
  char v88; // r13
  struct _LIST_ENTRY *v89; // r14
  PVOID v90; // rdi
  unsigned int v91; // ebx
  _DWORD *v92; // rcx
  PPRIVILEGE_SET v93; // r13
  unsigned __int64 v94; // rbx
  bool v95; // al
  __int64 *v96; // r12
  PVOID *v97; // r8
  unsigned __int64 v98; // rcx
  PVOID v99; // rsi
  PVOID *v100; // rax
  struct _EX_RUNDOWN_REF *v101; // rdi
  __int64 v102; // rbx
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // r14
  volatile signed __int64 *v106; // rax
  volatile signed __int64 *v107; // rbx
  volatile signed __int64 v108; // rcx
  _DWORD *v109; // rbx
  signed int v110; // eax
  signed __int64 v111; // rdx
  signed __int64 v112; // rax
  signed __int64 v113; // rdi
  unsigned int v114; // edx
  unsigned __int64 v115; // rdi
  signed __int64 v116; // rax
  signed __int64 v117; // rtt
  struct _EX_RUNDOWN_REF *p_Blink; // rdi
  unsigned __int64 v119; // rtt
  BOOLEAN v120; // al
  _DWORD *v121; // rax
  __int64 v122; // rdx
  unsigned __int64 v123; // rcx
  __int64 v124; // rbx
  signed __int64 v125; // rdi
  char v126; // r12
  PRKPROCESS v127; // r10
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  __int64 v129; // r8
  PRKPROCESS v130; // rbx
  unsigned int v132; // ebx
  __int64 v133; // rcx
  int v134; // edi
  int v135; // edi
  _QWORD *TablePagedPool; // rax
  bool v137; // zf
  _QWORD *HandleExtraInfo; // rax
  unsigned int v139; // eax
  char v140; // r15
  unsigned __int64 v141; // rbx
  AutoBoost *v142; // rax
  void *v143; // rdx
  AutoBoost *v144; // r14
  void *v145; // rax
  unsigned __int64 v146; // rdi
  struct _KTHREAD *v147; // rcx
  PERESOURCE *v148; // rsi
  struct _KTHREAD *v149; // rax
  __int64 v150; // rdx
  __int64 v151; // r8
  __int64 v152; // rdx
  __int64 v153; // r8
  __int64 v154; // rdx
  __int64 v155; // rax
  char v156; // di
  void *v157; // r8
  struct _LIST_ENTRY *v158; // r12
  struct _LIST_ENTRY *v159; // r14
  struct _LIST_ENTRY *Blink; // r10
  int v161; // r12d
  struct _LIST_ENTRY *v162; // rax
  int v163; // ecx
  struct _KTHREAD *v164; // rax
  AutoBoost *v165; // rax
  void *v166; // rdx
  AutoBoost *v167; // r12
  signed __int64 v168; // r10
  __int64 v169; // rax
  _DWORD *v170; // r8
  signed __int64 v171; // rax
  signed __int64 v172; // rdx
  __int64 v173; // rtt
  __int64 v174; // rdx
  __int64 v175; // r8
  __int64 v176; // rax
  __int64 *v177; // rdi
  __int64 v178; // rcx
  __int64 v179; // rbx
  __int64 v180; // rax
  void *v181; // rsi
  PVOID v182; // rsi
  PSE_EXPORTS v183; // r14
  char *v184; // rbx
  unsigned __int64 *v185; // rbx
  __int64 v186; // r14
  AutoBoost *v187; // rax
  void *v188; // rdx
  AutoBoost *v189; // rdi
  volatile signed __int64 *v190; // rbx
  char HandleTableEntrySlow; // di
  int *v192; // rax
  int v193; // ecx
  unsigned int v194; // r15d
  _DWORD *v195; // rdi
  _DWORD *v196; // rdx
  __int64 v197; // rdx
  __int64 v198; // r8
  unsigned __int64 CurrentThreadProcessId; // rbx
  int v200; // edx
  ACCESS_MASK v201; // eax
  ACCESS_MASK *PreviouslyGrantedAccess; // [rsp+20h] [rbp-100h]
  bool v203; // [rsp+A0h] [rbp-80h]
  char v204; // [rsp+A1h] [rbp-7Fh]
  char v205; // [rsp+A2h] [rbp-7Eh]
  unsigned int v206; // [rsp+A4h] [rbp-7Ch] BYREF
  char v207; // [rsp+A8h] [rbp-78h]
  unsigned int v208; // [rsp+ACh] [rbp-74h]
  PVOID P; // [rsp+B0h] [rbp-70h] BYREF
  PVOID Object; // [rsp+B8h] [rbp-68h]
  ACCESS_MASK v211; // [rsp+C0h] [rbp-60h] BYREF
  PRKPROCESS PROCESS; // [rsp+C8h] [rbp-58h]
  NTSTATUS AccessStatus; // [rsp+D0h] [rbp-50h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+D8h] [rbp-48h] BYREF
  unsigned __int16 v215; // [rsp+E0h] [rbp-40h]
  struct _LIST_ENTRY *v216; // [rsp+E8h] [rbp-38h]
  HANDLE TargetHandle; // [rsp+F0h] [rbp-30h] BYREF
  PVOID v218; // [rsp+F8h] [rbp-28h] BYREF
  unsigned int v219; // [rsp+100h] [rbp-20h]
  PPRIVILEGE_SET Privileges; // [rsp+108h] [rbp-18h] BYREF
  int v221[2]; // [rsp+110h] [rbp-10h] BYREF
  struct _KTHREAD *v222; // [rsp+118h] [rbp-8h] BYREF
  PVOID v223; // [rsp+120h] [rbp+0h]
  PVOID v224[2]; // [rsp+128h] [rbp+8h] BYREF
  __int64 *v225; // [rsp+138h] [rbp+18h] BYREF
  PVOID *v226; // [rsp+140h] [rbp+20h]
  _BYTE v227[24]; // [rsp+148h] [rbp+28h] BYREF
  struct _KAPC_STATE v228; // [rsp+160h] [rbp+40h] BYREF

  v216 = a8;
  v226 = a10;
  v225 = a11;
  v223 = 0LL;
  v222 = 0LL;
  v205 = 0;
  v207 = 0;
  v206 = 0;
  v221[0] = 0;
  v221[1] = a9;
  Object = a2;
  v219 = a1;
  LODWORD(TargetHandle) = a6;
  *(_OWORD *)v224 = 0LL;
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
      v119 = (unsigned __int64)v14[1].ProfileListHead.Blink & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v119 == _InterlockedCompareExchange64(
                     (volatile signed __int64 *)&v14[1].ProfileListHead.Blink,
                     v119 + 2,
                     v119)
        || (v120 = ExfAcquireRundownProtection((PEX_RUNDOWN_REF)&v14[1].ProfileListHead.Blink), v14 = PROCESS, v120) )
      {
        KernelTime = (void *)v14[1].KernelTime;
        P = KernelTime;
        if ( KernelTime )
        {
          a1 = v219;
          v207 = 1;
          goto LABEL_5;
        }
        ExReleaseRundownProtection_0(p_Blink);
      }
      return (unsigned int)-1073741558;
    }
    KernelTime = (void *)KeGetCurrentThread()->ApcState.Process[1].KernelTime;
    a1 = v219;
  }
  P = KernelTime;
LABEL_5:
  v203 = KernelTime == (void *)ObpKernelHandleTable;
  if ( !a4 || KernelTime == (void *)ObpKernelHandleTable && !*(_DWORD *)(a4 + 24) )
  {
    if ( (a3 & 0x2000000) != 0 )
      a3 = a3 & 0xEDFFFFFF | 0x10000000;
    if ( (a3 & 0xF0000000) != 0 )
    {
      v121 = (_DWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8)];
      if ( a3 < 0 )
        a3 |= v121[19];
      if ( (a3 & 0x40000000) != 0 )
        a3 |= v121[20];
      if ( (a3 & 0x20000000) != 0 )
        a3 |= v121[21];
      if ( (a3 & 0x10000000) != 0 )
        a3 |= v121[22];
      a3 &= 0xFFFFFFFu;
    }
    v206 = a3;
    goto LABEL_48;
  }
  AccessMode = 1;
  AccessStatus = 0;
  if ( (a6 & 0x400) == 0 )
    AccessMode = a7;
  if ( a1 - 1 <= 1 )
  {
    v17 = (ULONG_PTR)(a2 - 48);
    GrantedAccess = 0;
    Privileges = 0LL;
    v18 = (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8);
    v211 = 0;
    v208 = 0;
    v19 = (char *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v18];
    v218 = v19;
    if ( *((__int64 (__fastcall **)(__int64, int, ULONG *, struct _KLOCK_ENTRIES *, ULONG *, __int64 *, int, __int64))v19
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
      if ( v23 <= 1 && Pool2 )
        Pool2 = ObpReferenceSecurityDescriptorSlow(v17, v23, Pool2, 0LL);
      v204 = 0;
      if ( !Pool2 && ((v19[66] & 8) != 0 || (*(_BYTE *)(v17 + 26) & 2) != 0) )
        KeBugCheckEx(0x189u, v17, (ULONG_PTR)v19, 1uLL, 0LL);
      NamedObject = 0;
      goto LABEL_21;
    }
    v208 = 447;
    v211 = ObpDefaultSecurityDescriptorLength;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      PreviouslyGrantedAccess = &v211;
      v204 = 1;
      NamedObject = guard_dispatch_icall_no_overrides((__int64)Object, 1LL);
      if ( NamedObject == -1073741789 )
      {
        ExFreePoolWithTag((PVOID)Pool2, 0);
        ObpDefaultSecurityDescriptorLength = v211;
        Pool2 = ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
        {
          NamedObject = -1073741670;
          goto LABEL_45;
        }
        PreviouslyGrantedAccess = &v211;
        v204 = 1;
        NamedObject = guard_dispatch_icall_no_overrides((__int64)Object, 1LL);
      }
      if ( NamedObject >= 0 )
      {
LABEL_21:
        if ( !Pool2 )
        {
          *(_DWORD *)(a4 + 20) |= *(_DWORD *)(a4 + 16);
          v14 = PROCESS;
          v206 = *(_DWORD *)(a4 + 20);
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
                &Privileges,
                (PGENERIC_MAPPING)(v19 + 76),
                AccessMode,
                &GrantedAccess,
                &AccessStatus);
        v29 = Privileges;
        v30 = v28;
        LOBYTE(v215) = v28;
        if ( Privileges )
        {
          v31 = *(PVOID **)(a4 + 72);
          v32 = *v31;
          v33 = *(_DWORD *)*v31;
          if ( Privileges->PrivilegeCount + v33 > 3 )
          {
            v194 = 8;
            v195 = (_DWORD *)ExAllocatePool2(0x100uLL);
            if ( v195 )
            {
              v196 = *v31;
              if ( *v31 )
              {
                if ( *v196 )
                  v194 = 12 * *v196 + 8;
              }
              else
              {
                v194 = 0;
              }
              memmove(v195, v196, v194);
              SepConcatenatePrivileges(v195, v197, &v29->PrivilegeCount);
              if ( *(_BYTE *)(a4 + 11) )
                ExFreePoolWithTag(*v31, 0);
              *v31 = v195;
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
            memmove((char *)v32 + v34, Privileges->Privilege, 12 * Privileges->PrivilegeCount);
            *v32 += v29->PrivilegeCount;
          }
          CmSiFreeMemory(Privileges);
          v30 = v215;
          v19 = (char *)v218;
        }
        if ( v30 )
        {
          v35 = GrantedAccess;
          *(_DWORD *)(a4 + 20) |= GrantedAccess;
          *(_DWORD *)(a4 + 16) &= ~(v35 | 0x2000000);
        }
        if ( AccessMode )
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
            AccessMode,
            0LL,
            (PBOOLEAN)(a4 + 10));
        }
        else
        {
          v37 = Object;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(a4 + 48) + 48LL));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v38, v39);
        v40 = *(_QWORD *)(a4 + 32);
        if ( v40 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v40 + 48));
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v41, v42);
        }
        if ( v204 )
        {
          ExFreePoolWithTag((PVOID)Pool2, 0);
        }
        else
        {
          _m_prefetchw(v37 - 1);
          v43 = *(v37 - 1);
          while ( (Pool2 ^ (unsigned __int64)v43) < 0xF )
          {
            v44 = v43;
            v43 = _InterlockedCompareExchange64(v37 - 1, v43 + 1, v43);
            if ( v44 == v43 )
              goto LABEL_41;
          }
          ObDereferenceSecurityDescriptor(Pool2, 1LL);
        }
LABEL_41:
        if ( v30 )
        {
LABEL_42:
          v14 = PROCESS;
          v206 = *(_DWORD *)(a4 + 20);
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
      v130 = PROCESS;
      goto LABEL_207;
    }
    v14 = PROCESS;
    goto LABEL_48;
  }
  v109 = (_DWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8)];
  v110 = *(_DWORD *)(a4 + 16);
  if ( (v110 & 0x2000000) != 0 )
  {
    v110 = v110 & 0xEDFFFFFF | 0x10000000;
    *(_DWORD *)(a4 + 16) = v110;
  }
  if ( (v110 & 0xF0000000) != 0 )
  {
    if ( v110 < 0 )
      v110 |= v109[19];
    if ( (v110 & 0x40000000) != 0 )
      v110 |= v109[20];
    if ( (v110 & 0x20000000) != 0 )
      v110 |= v109[21];
    if ( (v110 & 0x10000000) != 0 )
      v110 |= v109[22];
    v110 &= 0xFFFFFFFu;
    *(_DWORD *)(a4 + 16) = v110;
  }
  if ( (v110 & 0x1000000) != 0 )
  {
    v177 = (__int64 *)(a4 + 32);
    *(LUID *)&v227[8] = SeSecurityPrivilege;
    *(_QWORD *)v227 = 0x100000001LL;
    *(_DWORD *)&v227[16] = 0;
    if ( AccessMode )
    {
      v178 = *v177;
      if ( *v177 )
      {
        if ( *(int *)(a4 + 40) < 2 )
          goto LABEL_317;
      }
      else
      {
        v178 = *(_QWORD *)(a4 + 48);
      }
      if ( !SepPrivilegeCheck(v178, (__int64)&v227[8], 1u, 1, AccessMode) )
      {
LABEL_317:
        v179 = *v177;
        v180 = *v177;
        if ( !*v177 )
          v180 = *(_QWORD *)(a4 + 48);
        v181 = **(void ***)(v180 + 152);
        if ( !RtlEqualSid(*(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags, v181) )
        {
          if ( (v183 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v181))
            && !RtlEqualSid(v183->SeLocalServiceSid, v181)
            || (unsigned __int8)SepFilterPrivilegeAudits(1LL, v227) )
          {
            SepAdtPrivilegedServiceAuditAlarm(
              (_DWORD)v177,
              (unsigned int)&SeSubsystemName,
              0,
              v179,
              v177[2],
              (__int64)v227,
              0);
          }
        }
        NamedObject = -1073741727;
        goto LABEL_206;
      }
    }
    *(_DWORD *)(a4 + 16) &= ~0x1000000u;
    *(_DWORD *)(a4 + 20) |= 0x1000000u;
    SeAppendPrivileges((PACCESS_STATE)a4, (PPRIVILEGE_SET)v227);
  }
  *(_DWORD *)(a4 + 20) |= *(_DWORD *)(a4 + 16);
  *(_DWORD *)(a4 + 16) = 0;
  *(_DWORD *)(a4 + 20) &= v109[23] | 0x1000000;
  _m_prefetchw(a2 - 8);
  v111 = *((_QWORD *)a2 - 1);
  if ( (v111 & 0xF) != 0 )
  {
    do
    {
      v112 = _InterlockedCompareExchange64((volatile signed __int64 *)a2 - 1, v111 - 1, v111);
      if ( v111 == v112 )
        break;
      v111 = v112;
    }
    while ( (v112 & 0xF) != 0 );
  }
  v113 = v111;
  v114 = v111 & 0xF;
  v115 = v113 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v114 <= 1 && v115 )
    v115 = ObpReferenceSecurityDescriptorSlow((__int64)(a2 - 48), v114, v115, 0LL);
  *(_DWORD *)(a4 + 20) &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                           (struct _SECURITY_SUBJECT_CONTEXT *)(a4 + 32),
                                           a4,
                                           *(_DWORD *)(a4 + 20),
                                           (unsigned int *)v115);
  if ( !v115 )
    goto LABEL_42;
  _m_prefetchw(a2 - 8);
  v116 = *((_QWORD *)a2 - 1);
  while ( (v115 ^ v116) < 0xF )
  {
    v117 = v116;
    v116 = _InterlockedCompareExchange64((volatile signed __int64 *)a2 - 1, v116 + 1, v116);
    if ( v117 == v116 )
      goto LABEL_42;
  }
  ObDereferenceSecurityDescriptor(v115, 1LL);
  v14 = PROCESS;
  v206 = *(_DWORD *)(a4 + 20);
LABEL_48:
  v45 = v216;
  Flink = 0LL;
  v218 = 0LL;
  if ( v216 )
  {
    Flink = v216[2].Flink;
    v218 = Flink;
  }
  v47 = (struct _KTHREAD *)Object;
  v48 = (char)TargetHandle;
  LOBYTE(PreviouslyGrantedAccess) = a7;
  NamedObject = ObpIncrementHandleCountEx(
                  v219,
                  &v206,
                  v14,
                  Object,
                  (_DWORD)PreviouslyGrantedAccess,
                  (_DWORD)TargetHandle,
                  Flink);
  if ( NamedObject < 0 )
    goto LABEL_206;
  if ( !a4 )
  {
    v50 = v223;
    goto LABEL_56;
  }
  if ( !v45 )
  {
    v50 = v223;
    goto LABEL_54;
  }
  v130 = PROCESS;
  NamedObject = ObpInsertOrLocateNamedObject(
                  PROCESS,
                  (char *)v47,
                  (__int64)&v206,
                  (_OWORD *)a4,
                  a7,
                  v45,
                  (PVOID *)&v222);
  if ( NamedObject >= 0 )
  {
    v50 = v222;
    if ( v222 == v47 )
    {
      v50 = 0LL;
    }
    else
    {
      v47 = v222;
      Object = v222;
      v205 = 1;
    }
LABEL_54:
    if ( *(_BYTE *)(a4 + 10) )
      v48 |= 4u;
LABEL_56:
    v51 = 0x140000000uLL;
    p_SchedulerAssistLastYieldBoostTime = (__int64)&v47[-1].SchedulerAssistLastYieldBoostTime;
    v53 = (PPRIVILEGE_SET)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(p_SchedulerAssistLastYieldBoostTime
                                                                                                + 24) ^ (unsigned __int64)BYTE1(p_SchedulerAssistLastYieldBoostTime)];
    Privileges = v53;
    v54 = v53[4].Privilege[0].Luid.HighPart | 0x1000000;
    v55 = v54 & v206;
    v206 &= v54;
    if ( a4 )
    {
      _m_prefetchw((const void *)(p_SchedulerAssistLastYieldBoostTime + 40));
      v56 = *(_QWORD *)(p_SchedulerAssistLastYieldBoostTime + 40);
      if ( (v56 & 0xF) != 0 )
      {
        do
        {
          v57 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(p_SchedulerAssistLastYieldBoostTime + 40),
                  v56 - 1,
                  v56);
          if ( v56 == v57 )
            break;
          v56 = v57;
        }
        while ( (v57 & 0xF) != 0 );
      }
      v58 = v56;
      v59 = v56 & 0xF;
      v60 = v58 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v59 <= 1 && v60 )
        v60 = ObpReferenceSecurityDescriptorSlow(p_SchedulerAssistLastYieldBoostTime, v59, v60, v49);
      v61 = SeComputeCreatorDeniedRights((struct _SECURITY_SUBJECT_CONTEXT *)(a4 + 32), a4, v206, (unsigned int *)v60);
      if ( v60 )
      {
        _m_prefetchw((const void *)(p_SchedulerAssistLastYieldBoostTime + 40));
        v62 = *(_QWORD *)(p_SchedulerAssistLastYieldBoostTime + 40);
        while ( (v60 ^ v62) < 0xF )
        {
          v63 = v62;
          v62 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(p_SchedulerAssistLastYieldBoostTime + 40),
                  v62 + 1,
                  v62);
          if ( v63 == v62 )
            goto LABEL_66;
        }
        ObDereferenceSecurityDescriptor(v60, 1LL);
      }
LABEL_66:
      v64 = *(_QWORD *)(a4 + 72);
      v55 = ~v61 & v206;
      v45 = v216;
      v53 = Privileges;
      v206 = v55;
      *(_DWORD *)(a4 + 20) = v55;
      v65 = *(_DWORD *)(v64 + 28);
      v221[0] = v65;
    }
    else
    {
      v65 = v221[0];
    }
    AccessStatus = v65;
    if ( a5 )
    {
      ObReferenceObjectExWithTag((ULONG_PTR)Object, a5, 0x746C6644u);
      v55 = v206;
    }
    if ( v50 )
    {
      ObfDereferenceObject(v50);
      v55 = v206;
    }
    v66 = (struct _LIST_ENTRY *)Object;
    if ( v45 && !v205 && v53 == ObpSymbolicLinkObjectType )
    {
      ObpCreateSymbolicLinkName(Object, v51, v55);
      LODWORD(v55) = v206;
    }
    v224[1] = v224;
    v224[0] = v224;
    if ( (v53[3].Control & 0x400000) != 0 && *(PPRIVILEGE_SET *)&v53[10].PrivilegeCount != &v53[10] )
    {
      v132 = v55;
      v133 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v66[-2].Blink) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v66 - 48) >> 8)];
      v134 = *(_DWORD *)(v133 + 96);
      v228.Process = (_KPROCESS *)v227;
      v135 = v55 & v134;
      *(_DWORD *)&v227[4] = v55;
      HIDWORD(v228.ApcListHead[0].Flink) = v203;
      *(_DWORD *)v227 = v55;
      *(_OWORD *)&v227[8] = 0LL;
      LODWORD(v228.ApcListHead[0].Flink) = 1;
      v228.ApcListHead[0].Blink = v66;
      v228.ApcListHead[1] = (_LIST_ENTRY)(unsigned __int64)v133;
      NamedObject = ObpCallPreOperationCallbacks(v133, (__int64)&v228, v224);
      if ( NamedObject < 0 || v203 )
      {
        if ( NamedObject < 0 )
        {
          v122 = 0LL;
          v123 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(p_SchedulerAssistLastYieldBoostTime + 24) ^ (unsigned __int64)BYTE1(p_SchedulerAssistLastYieldBoostTime);
          memset(&v228, 0, sizeof(v228));
          v124 = ObTypeIndexTable[v123];
          if ( (*(_BYTE *)(v124 + 66) & 0x10) != 0 || (*(_BYTE *)(p_SchedulerAssistLastYieldBoostTime + 27) & 8) != 0 )
          {
            v164 = KeGetCurrentThread();
            --v164->KernelApcDisable;
            v165 = (AutoBoost *)KeAbPreAcquire(p_SchedulerAssistLastYieldBoostTime + 16, 0LL, 0LL, v49);
            v167 = v165;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(p_SchedulerAssistLastYieldBoostTime + 16), 0LL) )
              ExfAcquirePushLockExclusiveEx(
                (unsigned __int64 *)(p_SchedulerAssistLastYieldBoostTime + 16),
                v165,
                p_SchedulerAssistLastYieldBoostTime + 16);
            if ( v167 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v167, v166);
              else
                *((_BYTE *)v167 + 10) = 1;
            }
            v125 = *(_QWORD *)(p_SchedulerAssistLastYieldBoostTime + 8);
            if ( _InterlockedExchangeAdd64(
                   (volatile signed __int64 *)(p_SchedulerAssistLastYieldBoostTime + 8),
                   0xFFFFFFFFFFFFFFFFuLL) == 1
              && (*(_BYTE *)(p_SchedulerAssistLastYieldBoostTime + 27) & 8) != 0 )
            {
              v168 = 0LL;
              *(_QWORD *)(p_SchedulerAssistLastYieldBoostTime
                        - ObpInfoMaskToOffset[*(_BYTE *)(p_SchedulerAssistLastYieldBoostTime + 26) & 0x1F]) = 0LL;
            }
            else
            {
              v168 = 0LL;
            }
            if ( (*(_BYTE *)(v124 + 66) & 0x10) != 0 )
            {
              v169 = OBJECT_HEADER_TO_HANDLE_INFO(p_SchedulerAssistLastYieldBoostTime);
              v170 = (_DWORD *)v169;
              if ( (*(_BYTE *)(p_SchedulerAssistLastYieldBoostTime + 27) & 0x40) != 0 )
              {
                *(_DWORD *)(v169 + 8) ^= (*(_DWORD *)(v169 + 8) ^ (*(_DWORD *)(v169 + 8) - 1)) & 0xFFFFFF;
              }
              else
              {
                v192 = *(int **)v169;
                v193 = *v192;
                v170 = v192 + 2;
                while ( v193 )
                {
                  if ( (v170[2] & 0xFFFFFF) != 0 && *(PRKPROCESS *)v170 == PROCESS )
                  {
                    v170[2] ^= (v170[2] ^ (v170[2] - 1)) & 0xFFFFFF;
                    break;
                  }
                  v170 += 4;
                  --v193;
                }
              }
              if ( !*((_BYTE *)v170 + 11) && (v170[2] & 0xFFFFFF) == 0 )
                *(_QWORD *)v170 = v168;
            }
            _m_prefetchw((const void *)(p_SchedulerAssistLastYieldBoostTime + 16));
            v171 = *(_QWORD *)(p_SchedulerAssistLastYieldBoostTime + 16);
            v172 = v171 - 16;
            if ( (v171 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v172 = v168;
            if ( (v171 & 2) != 0
              || (v173 = *(_QWORD *)(p_SchedulerAssistLastYieldBoostTime + 16),
                  v173 != _InterlockedCompareExchange64(
                            (volatile signed __int64 *)(p_SchedulerAssistLastYieldBoostTime + 16),
                            v172,
                            v171)) )
            {
              ExfReleasePushLock((_QWORD *)(p_SchedulerAssistLastYieldBoostTime + 16));
            }
            KeAbPostRelease(p_SchedulerAssistLastYieldBoostTime + 16);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v174, v175);
            v122 = 0LL;
          }
          else
          {
            v125 = _InterlockedExchangeAdd64(
                     (volatile signed __int64 *)(p_SchedulerAssistLastYieldBoostTime + 8),
                     0xFFFFFFFFFFFFFFFFuLL);
          }
          if ( *(_QWORD *)(v124 + 128) )
          {
            v126 = 0;
            v127 = PROCESS;
            v216 = 0LL;
            if ( KeGetCurrentThread()->ApcState.Process != PROCESS )
            {
              v126 = 1;
              ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)PROCESS);
              v216 = PsAttachSiloToCurrentThread(ProcessServerSilo);
              KeStackAttachProcess(PROCESS, &v228);
              v127 = PROCESS;
            }
            guard_dispatch_icall_no_overrides((__int64)v127, p_SchedulerAssistLastYieldBoostTime + 48);
            if ( v126 )
            {
              KiUnstackDetachProcess((__int64)&v228, 0);
              PsDetachSiloFromCurrentThread(v216);
            }
          }
          if ( v125 == 1 )
            ObpDeleteNameCheck(p_SchedulerAssistLastYieldBoostTime, v122, v129, v49);
          _InterlockedDecrement((volatile signed __int32 *)(v124 + 48));
          if ( a5 )
            ObDereferenceObjectExWithTag((ULONG_PTR)Object, a5, 0x746C6644u);
          goto LABEL_206;
        }
        if ( v203 )
        {
          LODWORD(v55) = v206;
          goto LABEL_73;
        }
      }
      else
      {
        v132 &= v135 | *(_DWORD *)v227;
      }
      v206 = v132;
      LODWORD(v55) = v132;
      if ( a4 )
        *(_DWORD *)(a4 + 20) = v132;
    }
LABEL_73:
    *(_QWORD *)&v227[8] = 0LL;
    v67 = v55 & 0x1FFFFFF;
    *(_QWORD *)v227 = (p_SchedulerAssistLastYieldBoostTime << 16) & 0xFFFFFFFFFFF1FFFFuLL | ((unsigned __int64)(v48 & 7) << 17);
    if ( (v48 & 8) != 0 )
      v67 |= 0x2000000u;
    v68 = 0LL;
    *(_DWORD *)&v227[8] = v67;
    v69 = (__int64)P;
    v223 = (PVOID)(*(_QWORD *)v227 | 1LL);
    v222 = KeGetCurrentThread();
    --v222->KernelApcDisable;
    v70 = *(_BYTE *)(v69 + 44);
    if ( (v70 & 4) == 0 )
    {
      if ( (v70 & 1) != 0 )
        Number = 0;
      else
        Number = KeGetPcr()->Prcb.Number;
      v72 = Number;
      v208 = ExpFreeListCount;
      GrantedAccess = Number;
      v211 = Number;
LABEL_79:
      v73 = 0;
      LODWORD(TargetHandle) = *(_DWORD *)v69;
      while ( 1 )
      {
        if ( v73 >= v208 )
        {
          v185 = (unsigned __int64 *)(v69 + 56);
          LOBYTE(v215) = 1;
          v211 = GrantedAccess;
          v186 = v69 + ((GrantedAccess + 1LL) << 6);
          v187 = (AutoBoost *)KeAbPreAcquire(v69 + 56, 0LL, 0LL, v49);
          v189 = v187;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v185, 0LL) )
            ExfAcquirePushLockExclusiveEx(v185, v187, (__int64)v185);
          if ( v189 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v189, v188);
            else
              *((_BYTE *)v189 + 10) = 1;
          }
          v190 = (volatile signed __int64 *)P;
          if ( (_DWORD)TargetHandle == *(_DWORD *)P )
            HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(P, v186);
          else
            HandleTableEntrySlow = v215;
          if ( (_InterlockedExchangeAdd64(v190 + 7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v190 + 7);
          KeAbPostRelease((unsigned __int64)(v190 + 7));
          if ( HandleTableEntrySlow )
          {
            v72 = v211;
            v69 = (__int64)v190;
            goto LABEL_79;
          }
          v82 = v222;
          goto LABEL_101;
        }
        v74 = v69 + ((v72 + 1LL) << 6);
        if ( *(_QWORD *)(v74 + 8) )
        {
          v75 = (AutoBoost *)KeAbPreAcquire(v74, 0LL, 0LL, v49);
          v77 = v75;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v74, 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v74, v75, v74);
          if ( v77 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v77, v76);
            else
              *((_BYTE *)v77 + 10) = 1;
          }
          v78 = *(PVOID **)(v74 + 8);
          if ( v78 )
          {
            v79 = v78[1];
            *(_QWORD *)(v74 + 8) = v79;
            if ( !v79 )
              *(_QWORD *)(v74 + 16) = 0LL;
            v80 = ++*(_DWORD *)(v74 + 24);
            if ( v80 > *(_DWORD *)(v74 + 28) )
              *(_DWORD *)(v74 + 28) = v80;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v74, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v74);
          KeAbPostRelease(v74);
          if ( v78 )
          {
            v68 = *(_QWORD *)(((unsigned __int64)v78 & 0xFFFFFFFFFFFFF000uLL) + 8)
                + 4 * ((__int64)((__int64)v78 - ((unsigned __int64)v78 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
            if ( !AccessStatus && !a9 )
            {
              v81 = P;
LABEL_98:
              v82 = v222;
              if ( v81[12] )
                ExpUpdateDebugInfo((__int64)v81, (__int64)v222, v68, 1);
              v78[1] = *(PVOID *)&v227[8];
              *v78 = v223;
              goto LABEL_101;
            }
            v81 = P;
            v105 = (unsigned __int8)((unsigned int)v68 >> 2);
            v216 = (struct _LIST_ENTRY *)(v68 & 0xFFFFFFFFFFFFFC03uLL);
            v51 = v68 & 0xFFFFFFFFFFFFFC00uLL;
            if ( (v68 & 0xFFFFFFFFFFFFFC00uLL) < *(unsigned int *)P )
            {
              v69 = *((_QWORD *)P + 1);
              if ( (v69 & 3) == 1 )
              {
                v106 = *(volatile signed __int64 **)(v69 + 8 * (v51 >> 10) - 1);
                goto LABEL_141;
              }
              if ( (v69 & 3) != 0 )
              {
                v106 = *(volatile signed __int64 **)(*(_QWORD *)(v69 + 8 * (v51 >> 19) - 2) + 8 * ((v51 >> 10) & 0x1FF));
LABEL_141:
                v51 = 0LL;
                v107 = v106;
              }
              else
              {
                v107 = (volatile signed __int64 *)(v69 + 4 * v51);
              }
              if ( v107 )
              {
                v108 = *v107;
                if ( *v107 )
                {
LABEL_144:
                  *(_QWORD *)(v108 + 8 * v105) = *(_QWORD *)v221;
                  goto LABEL_98;
                }
                TablePagedPool = ExpAllocateTablePagedPool(*((_QWORD *)P + 2), 0x800uLL);
                if ( TablePagedPool )
                {
                  if ( !_InterlockedCompareExchange64(v107, (signed __int64)TablePagedPool, 0LL) )
                  {
                    v81 = P;
                    _InterlockedIncrement((volatile signed __int32 *)P + 1);
                    TablePagedPool[v105] = *(_QWORD *)v221;
                    goto LABEL_98;
                  }
                  ExpFreeTablePagedPool(*((_QWORD *)P + 2), TablePagedPool, 0x800uLL);
                  v108 = *v107;
                  v81 = P;
                  if ( *v107 )
                    goto LABEL_144;
                }
                else
                {
                  v81 = P;
                }
              }
            }
            v216 = (struct _LIST_ENTRY *)v68;
            v137 = *((_DWORD *)v81 + 1) == 0;
            LODWORD(v216) = v68 & 0xFFFFFFFC;
            if ( !v137 )
            {
              HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo((unsigned int *)v81, (__int64)v216);
              if ( HandleExtraInfo )
                *HandleExtraInfo = 0LL;
            }
            v139 = 0;
            v78[1] = 0LL;
            v140 = *((_BYTE *)v81 + 44) & 1;
            if ( !v140 )
              v139 = KeGetPcr()->Prcb.Number;
            v141 = (unsigned __int64)&v81[8 * v139 + 8];
            v142 = (AutoBoost *)KeAbPreAcquire(v141, 0LL, 0LL, v49);
            v144 = v142;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v141, 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v141, v142, v141);
            if ( v144 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v144, v143);
              else
                *((_BYTE *)v144 + 10) = 1;
            }
            if ( v140 )
            {
              v176 = *(_QWORD *)(v141 + 16);
              if ( v176 )
                *(_QWORD *)(v176 + 8) = v78;
              else
                *(_QWORD *)(v141 + 8) = v78;
              *(_QWORD *)(v141 + 16) = v78;
            }
            else
            {
              v145 = *(void **)(v141 + 8);
              v78[1] = v145;
              if ( !v145 )
                *(_QWORD *)(v141 + 16) = v78;
              *(_QWORD *)(v141 + 8) = v78;
            }
            --*(_DWORD *)(v141 + 24);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v141, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v141);
            KeAbPostRelease(v141);
            v68 = 0LL;
            break;
          }
          v72 = v211;
          v69 = (__int64)P;
        }
        v201 = v72 + 1;
        ++v73;
        v72 = 0;
        if ( v201 != v208 )
          v72 = v201;
        v211 = v72;
      }
    }
    v82 = v222;
LABEL_101:
    KeLeaveCriticalRegionThread((__int64)v82, v51, v69);
    if ( !v68 )
    {
      ObpDecrementHandleCount2(PROCESS, p_SchedulerAssistLastYieldBoostTime, 0LL, v83);
      if ( a5 )
        ObDereferenceObjectExWithTag((ULONG_PTR)Object, a5, 0x6E48624Fu);
      v93 = Privileges;
      NamedObject = -1073741670;
      v95 = v203;
      v96 = v225;
      goto LABEL_127;
    }
    if ( ObpTraceFlags && a5 )
    {
      v184 = (char *)Object - 48;
      ObpPushStackInfo((__int64)Object - 48, 1, 0x6E48624Fu);
      ObpPushStackInfo((__int64)v184, -1, 0x746C6644u);
    }
    if ( !a4 )
    {
      v93 = Privileges;
LABEL_123:
      if ( a5 && v226 )
        *v226 = Object;
      v95 = v203;
      NamedObject = v205 != 0 ? 0x40000000 : 0;
      if ( v203 )
        v68 |= 0xFFFFFFFF80000000uLL;
      v96 = v225;
      *v225 = v68;
LABEL_127:
      v97 = (PVOID *)v224[0];
      if ( v224[0] != v224 )
      {
        *(_QWORD *)&v228.InProgressFlags = &TargetHandle;
        LODWORD(v228.ApcListHead[0].Flink) = 1;
        HIDWORD(v228.ApcListHead[0].Flink) = v95;
        v98 = (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
        v228.ApcListHead[0].Blink = (struct _LIST_ENTRY *)Object;
        v228.ApcListHead[1].Blink = 0LL;
        v228.Process = (_KPROCESS *)(unsigned int)NamedObject;
        v225 = 0LL;
        v228.ApcListHead[1].Flink = (struct _LIST_ENTRY *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v98];
        LODWORD(TargetHandle) = v206;
        while ( v97 != v224 )
        {
          v99 = v224[1];
          v100 = (PVOID *)*((_QWORD *)v224[1] + 1);
          if ( *(PVOID **)v224[1] != v224 || *v100 != v224[1] )
            __fastfail(3u);
          v224[1] = *((PVOID *)v224[1] + 1);
          *v100 = v224;
          v101 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v99 + 2);
          v228.ApcListHead[1].Blink = (struct _LIST_ENTRY *)*((_QWORD *)v99 + 3);
          v102 = *(_QWORD *)(v101[3].Count + 8);
          KeCallbackValidationPrologue((__int64)&v225);
          guard_dispatch_icall_no_overrides(v102, (__int64)&v228);
          KeCallbackValidationEpilogue((__int64)&v225, v101[6].Count, 0x102u);
          ExReleaseRundownProtection_0(v101 + 7);
          ExFreePoolWithTag(v99, 0);
          v97 = (PVOID *)v224[0];
        }
        ObfDereferenceObjectWithTag(v228.ApcListHead[0].Blink, 0x6243624Fu);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v103, v104);
      }
      if ( (xmmword_140FBFC10 & 0x40) != 0 && NamedObject >= 0 )
        EtwpTraceHandle(4384LL, *v96, Object, v93);
      goto LABEL_206;
    }
    v84 = *(_BYTE *)(p_SchedulerAssistLastYieldBoostTime + 26);
    v85 = 0LL;
    P = 0LL;
    if ( (v84 & 0x20) == 0 || (v86 = ObpInfoMaskToOffset[v84 & 0x3F], p_SchedulerAssistLastYieldBoostTime == v86) )
    {
      if ( Flink )
        v85 = Flink;
      goto LABEL_108;
    }
    v89 = *(struct _LIST_ENTRY **)(p_SchedulerAssistLastYieldBoostTime - v86);
    if ( v89 )
    {
      v87 = *(_QWORD *)(a4 + 72);
      TargetHandle = 0LL;
      v88 = 0;
      v90 = 0LL;
      *(_QWORD *)v221 = v68;
      goto LABEL_111;
    }
    if ( Flink )
    {
      ObpSetObjectAuditInfo(p_SchedulerAssistLastYieldBoostTime, &v218, 0);
      v87 = *(_QWORD *)(a4 + 72);
      TargetHandle = 0LL;
      v88 = 0;
      v90 = 0LL;
      *(_QWORD *)v221 = v68;
LABEL_109:
      v89 = *(struct _LIST_ENTRY **)(v87 + 56);
      if ( !v89 )
        v89 = *(struct _LIST_ENTRY **)(a4 + 64);
LABEL_111:
      if ( *(_BYTE *)(a4 + 9) )
      {
        if ( *(_BYTE *)(a4 + 124) )
        {
          SepAdtPrivilegeObjectAuditAlarm(
            (unsigned int)&SeSubsystemName,
            a4 + 144,
            a4 + 128,
            v68,
            *(_QWORD *)(a4 + 32),
            *(_QWORD *)(a4 + 48),
            *(_QWORD *)(a4 + 56),
            *(_DWORD *)(a4 + 20),
            *(_QWORD *)v87,
            1);
LABEL_113:
          v91 = v219;
          *(_BYTE *)(a4 + 10) = v88;
          if ( !v91 )
          {
            v92 = **(_DWORD ***)(a4 + 72);
            if ( v92 )
            {
              if ( *v92 && KeGetCurrentThread()->PreviousMode )
                SepAdtPrivilegeObjectAuditAlarm(
                  (unsigned int)&SeSubsystemName,
                  0,
                  0,
                  v68,
                  *(_QWORD *)(a4 + 32),
                  *(_QWORD *)(a4 + 48),
                  *(_QWORD *)(a4 + 56),
                  *(_DWORD *)(a4 + 20),
                  (__int64)v92,
                  1);
            }
          }
          if ( P )
            ExFreePoolWithTag(P, 0);
          v93 = Privileges;
          if ( !v91 && (Privileges == (PPRIVILEGE_SET)CmKeyObjectType || Privileges == (PPRIVILEGE_SET)IoFileObjectType) )
          {
            v94 = *(_QWORD *)(a4 + 32);
            if ( v94 )
            {
              v146 = *(_QWORD *)(a4 + 48);
              v147 = KeGetCurrentThread();
              v148 = (PERESOURCE *)(v146 + 48);
              --v147->KernelApcDisable;
              if ( v146 >= v94 )
              {
                ExAcquireResourceSharedLite(*(PERESOURCE *)(v94 + 48), 1u);
              }
              else
              {
                ExAcquireResourceSharedLite(*v148, 1u);
                v148 = (PERESOURCE *)(v94 + 48);
              }
              v149 = KeGetCurrentThread();
              --v149->KernelApcDisable;
              ExAcquireResourceSharedLite(*v148, 1u);
              if ( (*(_DWORD *)(v94 + 200) & 0x4000) != 0
                && *(int *)(v94 + 196) >= 2
                && !RtlEqualSid(**(PSID **)(v146 + 152), **(PSID **)(v94 + 152)) )
              {
                v182 = Object;
                if ( OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO((__int64)Object - 48) )
                {
                  if ( SepSidInTokenSidHash(
                         v146 + 808,
                         0LL,
                         (unsigned __int8 *)SepRmCapTableLock.AutoBoostThreadState,
                         0,
                         1,
                         0) )
                  {
                    ObHandleRevocationBlockAddObject(*(_QWORD *)(v94 + 216) + 136LL, v182);
                  }
                }
              }
              ExReleaseResourceLite(*(PERESOURCE *)(v146 + 48));
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v150, v151);
              ExReleaseResourceLite(*(PERESOURCE *)(v94 + 48));
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v152, v153);
            }
          }
          goto LABEL_123;
        }
      }
      else if ( !*(_BYTE *)(v87 + 216) )
      {
        goto LABEL_113;
      }
      if ( ZwDuplicateObject(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             (HANDLE)v68,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &TargetHandle,
             0,
             0x200u,
             2u) >= 0 )
      {
        v218 = 0LL;
        ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &v218, 0LL);
        v90 = v218;
      }
      LOBYTE(v198) = 1;
      v215 = SepAdtClassifyObjectIntoSubCategory(v90, a4 + 144, v198, 0LL);
      if ( v90 )
        ObfDereferenceObject(v90);
      if ( TargetHandle )
      {
        ZwClose(TargetHandle);
        TargetHandle = 0LL;
      }
      CurrentThreadProcessId = PsGetCurrentThreadProcessId();
      v88 = SepAdtOpenObjectAuditAlarm(
              v215,
              (int)&SeSubsystemName,
              (int)v221,
              (int)a4 + 144,
              a4 + 128,
              v89,
              *(_QWORD *)(a4 + 32),
              *(_QWORD *)(a4 + 48),
              *(_DWORD *)(a4 + 24),
              *(_DWORD *)(a4 + 20),
              *(_QWORD *)v87,
              1,
              CurrentThreadProcessId,
              2,
              0LL,
              0,
              0LL,
              v87 + 32,
              a4);
      SepAdtStagingEvent(
        v215,
        v200,
        (unsigned int)v221,
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
    v154 = (unsigned __int8)*((char *)Object - 24);
    if ( ((unsigned __int8)v154 ^ (unsigned __int8)(ObHeaderCookie ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) == *((_BYTE *)IoFileObjectType + 40)
      && (*(_DWORD *)(*((_QWORD *)Object + 1) + 52LL) & 0x10) != 0 )
    {
LABEL_108:
      v87 = *(_QWORD *)(a4 + 72);
      v88 = 0;
      *(_QWORD *)v221 = v68;
      TargetHandle = 0LL;
      v89 = v85;
      v90 = 0LL;
      if ( v85 )
        goto LABEL_111;
      goto LABEL_109;
    }
    v155 = *(_QWORD *)(a4 + 72);
    v156 = 0;
    if ( v155 )
    {
      v157 = *(void **)(v155 + 56);
      if ( v157 )
      {
        v163 = ObpAllocateAndQuerySecurityDescriptorInfo((__int64)Object, 0x20u, v157, &P);
        v156 = 1;
        v162 = (struct _LIST_ENTRY *)P;
        goto LABEL_277;
      }
    }
    GrantedAccess = 32;
    v208 = ObpDefaultSecurityDescriptorLength;
    v158 = (struct _LIST_ENTRY *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v154 ^ (unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    v216 = v158;
    v159 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
    if ( !v159 )
    {
      v162 = (struct _LIST_ENTRY *)P;
      v163 = -1073741670;
      goto LABEL_277;
    }
    Blink = v158[9].Blink;
    v218 = (char *)&v158[4].Blink + 4;
    v223 = Blink;
    v161 = guard_dispatch_icall_no_overrides((__int64)Object, 1LL);
    if ( v161 == -1073741789 )
    {
      ExFreePoolWithTag(v159, 0x7153624Fu);
      v159 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
      if ( !v159 )
      {
        v162 = (struct _LIST_ENTRY *)P;
        v163 = -1073741670;
        goto LABEL_277;
      }
      v161 = guard_dispatch_icall_no_overrides((__int64)Object, 1LL);
    }
    if ( v161 < 0 )
    {
      ExFreePoolWithTag(v159, 0x7153624Fu);
      v162 = (struct _LIST_ENTRY *)P;
    }
    else
    {
      v162 = v159;
      P = v159;
    }
    v163 = v161;
LABEL_277:
    if ( v163 >= 0 )
    {
      v85 = v162;
      ObpSetObjectAuditInfo(p_SchedulerAssistLastYieldBoostTime, &P, v156);
    }
    goto LABEL_108;
  }
LABEL_207:
  if ( v207 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v130[1].ProfileListHead.Blink);
  return (unsigned int)NamedObject;
}
