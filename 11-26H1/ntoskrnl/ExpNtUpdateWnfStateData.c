/*
 * XREFs of ExpNtUpdateWnfStateData @ 0x14094A8A0
 * Callers:
 *     ExWnfCrossVmCallback @ 0x14083F250 (ExWnfCrossVmCallback.c)
 *     NtUpdateWnfStateData @ 0x14094A860 (NtUpdateWnfStateData.c)
 *     PfSnPowerBoost @ 0x1409B7C4C (PfSnPowerBoost.c)
 *     PfSnPowerBoostUpdate @ 0x140B13A90 (PfSnPowerBoostUpdate.c)
 * Callees:
 *     PsGetSessionById @ 0x140215D80 (PsGetSessionById.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseExtensionTable @ 0x14048FC18 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14049B7B0 (ExGetExtensionTable.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSid @ 0x1408E9720 (SeCaptureSid.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x140932040 (ExpWnfValidatePubSubPreconditions.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1409490DC (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfResolveScopeInstance @ 0x14094B390 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfLookupNameInstance @ 0x14094B9A0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfWriteStateData @ 0x14094BAC4 (ExpWnfWriteStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x14094C830 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfLookupPermanentName @ 0x14094D528 (ExpWnfLookupPermanentName.c)
 *     ExpWnfCreateNameInstance @ 0x14094FCA8 (ExpWnfCreateNameInstance.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpNtUpdateWnfStateData(
        void *Src,
        __int64 a2,
        unsigned int a3,
        void *a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        int a8)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v9; // r12
  __int64 v10; // r13
  unsigned int v11; // r15d
  __int64 v12; // rdx
  __int64 ULong64FromUser; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r14
  int NameInstance; // esi
  int v20; // r14d
  ULONG_PTR v21; // r10
  unsigned __int8 v22; // r14
  PVOID *v23; // rax
  unsigned int ULongFromUser; // eax
  unsigned __int8 v25; // al
  struct _KTHREAD *v26; // rax
  struct _KPROCESS *Process; // rcx
  int v28; // eax
  void *v29; // rsi
  _QWORD *v30; // rcx
  unsigned __int64 ExtensionTable; // rax
  unsigned int v33; // r15d
  unsigned int v34; // r15d
  PVOID v35; // rcx
  ULONG v36; // edx
  PVOID v37; // r14
  struct _KLOCK_ENTRIES *v38; // r9
  void *v39; // rdx
  LegacyAutoBoost *v40; // rsi
  __int64 v41; // rcx
  int PreviouslyGrantedAccess; // [rsp+20h] [rbp-168h]
  unsigned int Privileges; // [rsp+28h] [rbp-160h]
  unsigned __int8 PreviousMode; // [rsp+50h] [rbp-138h]
  NTSTATUS AccessStatus[2]; // [rsp+58h] [rbp-130h] BYREF
  unsigned __int8 v46; // [rsp+60h] [rbp-128h]
  int v47; // [rsp+64h] [rbp-124h]
  ACCESS_MASK GrantedAccess[2]; // [rsp+68h] [rbp-120h] BYREF
  unsigned int v49; // [rsp+70h] [rbp-118h]
  int v50; // [rsp+74h] [rbp-114h]
  __int64 v51; // [rsp+78h] [rbp-110h] BYREF
  __int64 v52; // [rsp+80h] [rbp-108h] BYREF
  unsigned int v53; // [rsp+88h] [rbp-100h]
  void *Srca; // [rsp+90h] [rbp-F8h]
  struct _EX_RUNDOWN_REF *Flink; // [rsp+98h] [rbp-F0h] BYREF
  int v56[2]; // [rsp+A0h] [rbp-E8h] BYREF
  PVOID Object[2]; // [rsp+A8h] [rbp-E0h] BYREF
  PVOID P[2]; // [rsp+B8h] [rbp-D0h] BYREF
  PVOID *v59; // [rsp+C8h] [rbp-C0h]
  PEPROCESS v60; // [rsp+D0h] [rbp-B8h]
  __int128 *v61; // [rsp+D8h] [rbp-B0h]
  __int64 v62; // [rsp+E0h] [rbp-A8h]
  __int64 v63; // [rsp+E8h] [rbp-A0h] BYREF
  int v64; // [rsp+F0h] [rbp-98h]
  unsigned __int64 v65; // [rsp+F8h] [rbp-90h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+100h] [rbp-88h] BYREF
  __int128 *v67; // [rsp+120h] [rbp-68h]
  __int64 v68; // [rsp+128h] [rbp-60h] BYREF
  __int128 v69; // [rsp+130h] [rbp-58h] BYREF

  Srca = a4;
  v49 = a3;
  v62 = a2;
  *(_QWORD *)AccessStatus = a5;
  v69 = 0LL;
  *(_QWORD *)GrantedAccess = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v46 = PreviousMode;
  P[0] = 0LL;
  v9 = 0LL;
  *(_QWORD *)v56 = 0LL;
  v10 = 0LL;
  v52 = 0LL;
  v11 = 0;
  v53 = 0;
  v61 = 0LL;
  *(_OWORD *)Object = 0LL;
  v51 = 0LL;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(Src);
    v51 = ULong64FromUser;
  }
  else
  {
    RtlCopyVolatileMemory(&v51, Src, 8uLL);
    ULong64FromUser = v51;
  }
  v16 = ULong64FromUser ^ 0x41C64E6DA3BC0074LL;
  v65 = v16;
  v17 = v16 >> 6;
  v18 = v16 >> 4;
  if ( (v16 & 0xF) == 1 )
  {
    v14 = (v16 >> 6) & 0xF;
    v15 = (v16 >> 4) & 3;
    v12 = (v16 >> 10) & 1;
    if ( (_DWORD)v15 != 3 && (v18 & 3) != 0 && (v15 = (unsigned int)(v15 - 1), (unsigned int)v15 >= 2)
      || (_DWORD)v14 != 5
      && (v15 = (v16 >> 6) & 0xF, (v17 & 0xF) != 0)
      && (v15 = (unsigned int)(v14 - 1), (_DWORD)v14 != 1)
      && (v15 = (unsigned int)(v14 - 2), (_DWORD)v14 != 2)
      && (v15 = (unsigned int)(v14 - 3), (unsigned int)v15 > 1)
      || (_DWORD)v12 && ((v17 & 9) != 0 || (_DWORD)v14 == 6) )
    {
      NameInstance = -1073741811;
    }
    else
    {
      NameInstance = 0;
    }
  }
  else
  {
    NameInstance = -1073741811;
  }
  v50 = NameInstance;
  if ( NameInstance < 0 )
  {
    v22 = PreviousMode;
    goto LABEL_71;
  }
  v20 = v18 & 3;
  v64 = v20;
  v11 = v17 & 0xF;
  v14 = (v16 >> 6) & 0xF;
  LODWORD(v51) = v11;
  v53 = v11;
  v12 = PreviousMode;
  if ( PreviousMode && v49 )
    v15 = v62;
  if ( Srca )
  {
    if ( PreviousMode )
      RtlCopyFromUser(&v69, Srca, 0x10uLL);
    else
      RtlCopyVolatileMemory(&v69, Srca, 0x10uLL);
    v61 = &v69;
    v67 = &v69;
    v12 = PreviousMode;
    v14 = v11;
  }
  v47 = 0;
  v21 = *(_QWORD *)AccessStatus;
  if ( !*(_QWORD *)AccessStatus )
  {
    *(_QWORD *)GrantedAccess = 0LL;
    v59 = 0LL;
    NameInstance = 0;
    goto LABEL_15;
  }
  if ( (_DWORD)v14 == 3 )
  {
    NameInstance = ObpReferenceObjectByHandleWithTag(
                     *(ULONG_PTR *)AccessStatus,
                     0LL,
                     PsProcessType,
                     v12,
                     0x20666E57u,
                     Object,
                     0LL,
                     0LL);
    v47 = NameInstance;
    if ( NameInstance < 0 )
    {
LABEL_22:
      v21 = *(_QWORD *)AccessStatus;
      goto LABEL_15;
    }
    v23 = Object;
LABEL_21:
    v59 = v23;
    *(_QWORD *)GrantedAccess = v23;
    goto LABEL_22;
  }
  if ( !v11 )
    goto LABEL_52;
  if ( v11 != 1 )
  {
    if ( v11 == 2 )
    {
      NameInstance = SeCaptureSid(*(char **)AccessStatus, v12, v14, v15, PreviouslyGrantedAccess, 0, Object);
      v47 = NameInstance;
      if ( NameInstance < 0 )
        goto LABEL_22;
      v23 = (PVOID *)Object[0];
      goto LABEL_21;
    }
LABEL_52:
    NameInstance = -1073741811;
    v47 = -1073741811;
    goto LABEL_15;
  }
  if ( (_BYTE)v12 )
    ULongFromUser = RtlReadULongFromUser(*(unsigned int **)AccessStatus);
  else
    ULongFromUser = **(_DWORD **)AccessStatus;
  LODWORD(Object[1]) = ULongFromUser;
  Object[0] = (PVOID)PsGetSessionById(ULongFromUser);
  if ( Object[0] )
  {
    NameInstance = 0;
    v47 = 0;
    v59 = &Object[1];
    *(_QWORD *)GrantedAccess = &Object[1];
  }
  else
  {
    NameInstance = -1073741811;
    v47 = -1073741811;
  }
  v21 = *(_QWORD *)AccessStatus;
LABEL_15:
  v50 = NameInstance;
  if ( NameInstance < 0 )
  {
    v22 = PreviousMode;
    goto LABEL_71;
  }
  v25 = PreviousMode;
  if ( PreviousMode )
  {
    AccessStatus[0] = 0;
    if ( v21 )
    {
      NameInstance = ExpWnfCheckCrossScopeAccess(v16);
      if ( NameInstance < 0 )
        goto LABEL_88;
      v25 = PreviousMode;
    }
  }
  else
  {
    AccessStatus[0] = 1;
  }
  v12 = v11;
  if ( !v25 )
  {
    LODWORD(v26) = 0;
    Srca = 0LL;
    LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
    v60 = PsInitialSystemProcess;
LABEL_57:
    v14 = *(_QWORD *)GrantedAccess;
    goto LABEL_58;
  }
  v26 = KeGetCurrentThread();
  Srca = v26;
  Process = v26->ApcState.Process;
  v60 = Process;
  if ( v11 != 3 )
    goto LABEL_57;
  v14 = *(_QWORD *)GrantedAccess;
  if ( !*(_QWORD *)GrantedAccess || Process == **(struct _KPROCESS ***)GrantedAccess )
    goto LABEL_101;
LABEL_58:
  if ( v11 != 5 || !a8 )
    goto LABEL_59;
  if ( a7 )
  {
LABEL_101:
    NameInstance = -1073741811;
    goto LABEL_88;
  }
  v68 = 0LL;
  v63 = v16 ^ 0x41C64E6DA3BC0074LL;
  RtlCopyVolatileMemory(&v68, &v63, 8uLL);
  Flink = (struct _EX_RUNDOWN_REF *)WheapConfigTableLock.WaitBlock[1].WaitListEntry.Flink;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)WheapConfigTableLock.WaitBlock[1].WaitListEntry.Flink);
  v63 = ExtensionTable;
  if ( ExtensionTable )
  {
    Privileges = v49;
    NameInstance = guard_dispatch_icall_no_overrides(0LL, 1LL);
    ExtensionTable = v63;
  }
  else
  {
    NameInstance = -1073741822;
  }
  if ( ExtensionTable )
    ExReleaseExtensionTable(Flink);
  if ( NameInstance != -1073741822 )
    goto LABEL_88;
  LODWORD(v26) = (_DWORD)Srca;
  LODWORD(Process) = (_DWORD)v60;
  v14 = *(_QWORD *)GrantedAccess;
LABEL_59:
  NameInstance = ExpWnfResolveScopeInstance((int)v56, (int)Process, (int)v26, v11, (void *)v14);
  v9 = *(struct _EX_RUNDOWN_REF **)v56;
  if ( NameInstance < 0 )
    goto LABEL_88;
  v28 = ExpWnfLookupNameInstance(*(_QWORD *)v56, v16, &v52);
  NameInstance = v28;
  if ( v28 != -1073741772 || v20 == 3 )
  {
    if ( v28 < 0 )
    {
LABEL_87:
      v10 = v52;
      goto LABEL_88;
    }
    v10 = v52;
    if ( !AccessStatus[0] )
    {
      v29 = *(void **)(v52 + 72);
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      GrantedAccess[0] = 0;
      AccessStatus[0] = 0;
      SeCaptureSubjectContext(&SubjectContext);
      SeAccessCheck(
        v29,
        &SubjectContext,
        0,
        2u,
        0,
        0LL,
        (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
        1,
        GrantedAccess,
        AccessStatus);
      SeReleaseSubjectContext(&SubjectContext);
      NameInstance = AccessStatus[0];
      if ( AccessStatus[0] < 0 )
        goto LABEL_88;
    }
    v30 = *(_QWORD **)(v10 + 64);
    if ( !v30 )
      goto LABEL_65;
    v14 = (__int64)v61;
    if ( !v61 )
    {
      NameInstance = -1073741811;
      goto LABEL_67;
    }
    v12 = *v30 - *(_QWORD *)v61;
    if ( *v30 == *(_QWORD *)v61 )
      v12 = v30[1] - *((_QWORD *)v61 + 1);
    if ( v12 )
    {
      NameInstance = -1073741811;
    }
    else
    {
LABEL_65:
      if ( v49 <= *(_DWORD *)(v10 + 56) )
        NameInstance = 0;
      else
        NameInstance = -1073741811;
    }
LABEL_67:
    if ( NameInstance >= 0 )
      goto LABEL_68;
LABEL_88:
    v22 = PreviousMode;
    goto LABEL_71;
  }
  NameInstance = ExpWnfLookupPermanentName(v16, P);
  if ( NameInstance < 0 )
    goto LABEL_87;
  v37 = P[0];
  NameInstance = ExpWnfValidatePubSubPreconditions(2u, (__int64)P[0], v49, v61, AccessStatus[0]);
  if ( NameInstance < 0 )
    goto LABEL_87;
  NameInstance = ExpWnfCreateNameInstance((_DWORD)v9, v16, (_DWORD)v37, (_DWORD)v60, (__int64)&v52);
  ExFreePoolWithTag(v37, 0x20666E57u);
  P[0] = 0LL;
  if ( NameInstance < 0 )
    goto LABEL_87;
  v10 = v52;
LABEL_68:
  v22 = PreviousMode;
  LOBYTE(Privileges) = PreviousMode;
  NameInstance = ExpWnfWriteStateData(v10, v62, v49, a6, a7, Privileges);
  v50 = NameInstance;
  if ( NameInstance >= 0 )
  {
    if ( (_DWORD)v51 == 5 )
    {
      v68 = 0LL;
      Flink = (struct _EX_RUNDOWN_REF *)(v16 ^ 0x41C64E6DA3BC0074LL);
      RtlCopyVolatileMemory(&v68, &Flink, 8uLL);
      v40 = (LegacyAutoBoost *)KeAbPreAcquire(v10 + 80, 0LL, 0LL, v38);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 80), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v10 + 80), 0, v40, (struct _KTHREAD *)(v10 + 80));
      if ( v40 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v40, v39);
        else
          *((_BYTE *)v40 + 10) = 1;
      }
      v41 = 0LL;
      if ( *(_QWORD *)(v10 + 88) != 1LL )
        v41 = *(_QWORD *)(v10 + 88);
      if ( v41 )
      {
        Srca = (void *)(v41 + 16);
        AccessStatus[0] = *(_DWORD *)(v41 + 8);
      }
      else
      {
        Srca = 0LL;
        AccessStatus[0] = 0;
      }
      GrantedAccess[0] = *(_DWORD *)(v10 + 96);
      Flink = (struct _EX_RUNDOWN_REF *)WheapConfigTableLock.WaitBlock[0].SparePtr;
      if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)WheapConfigTableLock.WaitBlock[0].SparePtr) )
      {
        guard_dispatch_icall_no_overrides(0LL, 0LL);
        ExReleaseExtensionTable(Flink);
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 80), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v10 + 80));
      KeAbPostRelease(v10 + 80);
    }
    ExpWnfNotifyNameSubscribers(v10, 1LL, 1LL, v46 != 0);
    NameInstance = 0;
  }
LABEL_71:
  if ( v10 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v10 + 8));
  if ( v9 )
    ExReleaseRundownProtection_0(v9 + 1);
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v14);
  if ( v11 )
  {
    v33 = v11 - 1;
    if ( v33 )
    {
      v34 = v33 - 1;
      if ( !v34 )
      {
        if ( Object[0] && v22 == 1 )
          ExFreePoolWithTag(Object[0], 0);
        return (unsigned int)NameInstance;
      }
      if ( v34 != 1 )
        return (unsigned int)NameInstance;
      v35 = Object[0];
      if ( !Object[0] )
        return (unsigned int)NameInstance;
      v36 = 543583831;
    }
    else
    {
      v35 = Object[0];
      if ( !Object[0] )
        return (unsigned int)NameInstance;
      v36 = 2035381072;
    }
    ObfDereferenceObjectWithTag(v35, v36);
  }
  return (unsigned int)NameInstance;
}
