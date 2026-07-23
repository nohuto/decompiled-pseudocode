/*
 * XREFs of ExpNtUpdateWnfStateData @ 0x1409C6210
 * Callers:
 *     ExWnfCrossVmCallback @ 0x140845490 (ExWnfCrossVmCallback.c)
 *     PfSnPowerBoost @ 0x140988C2C (PfSnPowerBoost.c)
 *     NtUpdateWnfStateData @ 0x1409C61D0 (NtUpdateWnfStateData.c)
 *     PfSnPowerBoostUpdate @ 0x140B15550 (PfSnPowerBoostUpdate.c)
 * Callees:
 *     PsGetSessionById @ 0x1402160B0 (PsGetSessionById.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSid @ 0x1408EFCE0 (SeCaptureSid.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x14090DC10 (ExpWnfValidatePubSubPreconditions.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1409C4A4C (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfResolveScopeInstance @ 0x1409C6D00 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfLookupNameInstance @ 0x1409C7310 (ExpWnfLookupNameInstance.c)
 *     ExpWnfWriteStateData @ 0x1409C7434 (ExpWnfWriteStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1409C81A0 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfLookupPermanentName @ 0x1409C8E98 (ExpWnfLookupPermanentName.c)
 *     ExpWnfCreateNameInstance @ 0x1409CB5E8 (ExpWnfCreateNameInstance.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  __int64 ULong64FromUser; // rbx
  __int64 v13; // r9
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r14
  int v17; // r8d
  int NameInstance; // esi
  int v19; // r14d
  __int64 v20; // r8
  char v21; // dl
  ULONG_PTR v22; // r10
  char v23; // r14
  PVOID *v24; // rax
  unsigned int ULongFromUser; // eax
  char v26; // al
  struct _KTHREAD *v27; // rax
  struct _KPROCESS *Process; // rcx
  void *v29; // r8
  int v30; // eax
  void *v31; // rsi
  _QWORD *v32; // rcx
  unsigned __int64 ExtensionTable; // rax
  unsigned int v35; // r15d
  unsigned int v36; // r15d
  PVOID v37; // rcx
  ULONG v38; // edx
  __int64 v39; // rdx
  PVOID v40; // r14
  struct _KLOCK_ENTRIES *v41; // r9
  void *v42; // rdx
  LegacyAutoBoost *v43; // rsi
  __int64 v44; // rcx
  int PreviouslyGrantedAccess; // [rsp+20h] [rbp-168h]
  unsigned int Privileges; // [rsp+28h] [rbp-160h]
  char PreviousMode; // [rsp+50h] [rbp-138h]
  NTSTATUS AccessStatus[2]; // [rsp+58h] [rbp-130h] BYREF
  char v49; // [rsp+60h] [rbp-128h]
  int v50; // [rsp+64h] [rbp-124h]
  ACCESS_MASK GrantedAccess[2]; // [rsp+68h] [rbp-120h] BYREF
  unsigned int v52; // [rsp+70h] [rbp-118h]
  int v53; // [rsp+74h] [rbp-114h]
  __int64 v54; // [rsp+78h] [rbp-110h] BYREF
  __int64 v55; // [rsp+80h] [rbp-108h] BYREF
  unsigned int v56; // [rsp+88h] [rbp-100h]
  void *Srca; // [rsp+90h] [rbp-F8h]
  struct _EX_RUNDOWN_REF *Flink; // [rsp+98h] [rbp-F0h] BYREF
  int v59[2]; // [rsp+A0h] [rbp-E8h] BYREF
  PVOID Object[2]; // [rsp+A8h] [rbp-E0h] BYREF
  PVOID P[2]; // [rsp+B8h] [rbp-D0h] BYREF
  PVOID *v62; // [rsp+C8h] [rbp-C0h]
  PEPROCESS v63; // [rsp+D0h] [rbp-B8h]
  __int128 *v64; // [rsp+D8h] [rbp-B0h]
  __int64 v65; // [rsp+E0h] [rbp-A8h]
  __int64 v66; // [rsp+E8h] [rbp-A0h] BYREF
  int v67; // [rsp+F0h] [rbp-98h]
  unsigned __int64 v68; // [rsp+F8h] [rbp-90h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+100h] [rbp-88h] BYREF
  __int128 *v70; // [rsp+120h] [rbp-68h]
  __int64 v71; // [rsp+128h] [rbp-60h] BYREF
  __int128 v72; // [rsp+130h] [rbp-58h] BYREF

  Srca = a4;
  v52 = a3;
  v65 = a2;
  *(_QWORD *)AccessStatus = a5;
  v72 = 0LL;
  *(_QWORD *)GrantedAccess = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v49 = PreviousMode;
  P[0] = 0LL;
  v9 = 0LL;
  *(_QWORD *)v59 = 0LL;
  v10 = 0LL;
  v55 = 0LL;
  v11 = 0;
  v56 = 0;
  v64 = 0LL;
  *(_OWORD *)Object = 0LL;
  v54 = 0LL;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(Src);
    v54 = ULong64FromUser;
  }
  else
  {
    RtlCopyVolatileMemory(&v54, Src, 8uLL);
    ULong64FromUser = v54;
  }
  v14 = ULong64FromUser ^ 0x41C64E6DA3BC0074LL;
  v68 = v14;
  v15 = v14 >> 6;
  v16 = v14 >> 4;
  if ( (v14 & 0xF) == 1 )
  {
    v17 = v15 & 0xF;
    v13 = (v14 >> 4) & 3;
    if ( (_DWORD)v13 != 3 && (v16 & 3) != 0 && (v13 = (unsigned int)(v13 - 1), (unsigned int)v13 >= 2)
      || v17 != 5
      && (v13 = (v14 >> 6) & 0xF, (v15 & 0xF) != 0)
      && (v13 = (unsigned int)(v13 - 1), (_DWORD)v13)
      && (v13 = (unsigned int)(v13 - 1), (_DWORD)v13)
      && (v13 = (unsigned int)(v13 - 1), (unsigned int)v13 > 1)
      || ((v14 >> 10) & 1) != 0 && ((v15 & 9) != 0 || v17 == 6) )
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
  v53 = NameInstance;
  if ( NameInstance < 0 )
  {
    v23 = PreviousMode;
    goto LABEL_71;
  }
  v19 = v16 & 3;
  v67 = v19;
  v11 = v15 & 0xF;
  v20 = (v14 >> 6) & 0xF;
  LODWORD(v54) = v11;
  v56 = v11;
  v21 = PreviousMode;
  if ( PreviousMode && v52 )
    v13 = v65;
  if ( Srca )
  {
    if ( PreviousMode )
      RtlCopyFromUser(&v72, Srca, 0x10uLL);
    else
      RtlCopyVolatileMemory(&v72, Srca, 0x10uLL);
    v64 = &v72;
    v70 = &v72;
    v21 = PreviousMode;
    v20 = v11;
  }
  v50 = 0;
  v22 = *(_QWORD *)AccessStatus;
  if ( !*(_QWORD *)AccessStatus )
  {
    *(_QWORD *)GrantedAccess = 0LL;
    v62 = 0LL;
    NameInstance = 0;
    goto LABEL_15;
  }
  if ( (_DWORD)v20 == 3 )
  {
    NameInstance = ObpReferenceObjectByHandleWithTag(
                     *(ULONG_PTR *)AccessStatus,
                     0,
                     (__int64)PsProcessType,
                     v21,
                     0x20666E57u,
                     Object,
                     0LL,
                     0LL);
    v50 = NameInstance;
    if ( NameInstance < 0 )
    {
LABEL_22:
      v22 = *(_QWORD *)AccessStatus;
      goto LABEL_15;
    }
    v24 = Object;
LABEL_21:
    v62 = v24;
    *(_QWORD *)GrantedAccess = v24;
    goto LABEL_22;
  }
  if ( !v11 )
    goto LABEL_52;
  if ( v11 != 1 )
  {
    if ( v11 == 2 )
    {
      NameInstance = SeCaptureSid(*(char **)AccessStatus, v21, v20, v13, PreviouslyGrantedAccess, 0, Object);
      v50 = NameInstance;
      if ( NameInstance < 0 )
        goto LABEL_22;
      v24 = (PVOID *)Object[0];
      goto LABEL_21;
    }
LABEL_52:
    NameInstance = -1073741811;
    v50 = -1073741811;
    goto LABEL_15;
  }
  if ( v21 )
    ULongFromUser = RtlReadULongFromUser(*(unsigned int **)AccessStatus);
  else
    ULongFromUser = **(_DWORD **)AccessStatus;
  LODWORD(Object[1]) = ULongFromUser;
  Object[0] = (PVOID)PsGetSessionById(ULongFromUser);
  if ( Object[0] )
  {
    NameInstance = 0;
    v50 = 0;
    v62 = &Object[1];
    *(_QWORD *)GrantedAccess = &Object[1];
  }
  else
  {
    NameInstance = -1073741811;
    v50 = -1073741811;
  }
  v22 = *(_QWORD *)AccessStatus;
LABEL_15:
  v53 = NameInstance;
  if ( NameInstance < 0 )
  {
    v23 = PreviousMode;
    goto LABEL_71;
  }
  v26 = PreviousMode;
  if ( PreviousMode )
  {
    AccessStatus[0] = 0;
    if ( v22 )
    {
      NameInstance = ExpWnfCheckCrossScopeAccess(v14);
      if ( NameInstance < 0 )
        goto LABEL_88;
      v26 = PreviousMode;
    }
  }
  else
  {
    AccessStatus[0] = 1;
  }
  if ( !v26 )
  {
    LODWORD(v27) = 0;
    Srca = 0LL;
    LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
    v63 = PsInitialSystemProcess;
LABEL_57:
    v29 = *(void **)GrantedAccess;
    goto LABEL_58;
  }
  v27 = KeGetCurrentThread();
  Srca = v27;
  Process = v27->ApcState.Process;
  v63 = Process;
  if ( v11 != 3 )
    goto LABEL_57;
  v29 = *(void **)GrantedAccess;
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
  v71 = 0LL;
  v66 = v14 ^ 0x41C64E6DA3BC0074LL;
  RtlCopyVolatileMemory(&v71, &v66, 8uLL);
  Flink = (struct _EX_RUNDOWN_REF *)WheapConfigTableLock.WaitBlock[1].WaitListEntry.Flink;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)WheapConfigTableLock.WaitBlock[1].WaitListEntry.Flink);
  v66 = ExtensionTable;
  if ( ExtensionTable )
  {
    Privileges = v52;
    NameInstance = guard_dispatch_icall_no_overrides(0LL, 1LL);
    ExtensionTable = v66;
  }
  else
  {
    NameInstance = -1073741822;
  }
  if ( ExtensionTable )
    ExReleaseExtensionTable(Flink);
  if ( NameInstance != -1073741822 )
    goto LABEL_88;
  LODWORD(v27) = (_DWORD)Srca;
  LODWORD(Process) = (_DWORD)v63;
  v29 = *(void **)GrantedAccess;
LABEL_59:
  NameInstance = ExpWnfResolveScopeInstance((int)v59, (int)Process, (int)v27, v11, v29);
  v9 = *(struct _EX_RUNDOWN_REF **)v59;
  if ( NameInstance < 0 )
    goto LABEL_88;
  v30 = ExpWnfLookupNameInstance(*(_QWORD *)v59, v14, &v55);
  NameInstance = v30;
  if ( v30 != -1073741772 || v19 == 3 )
  {
    if ( v30 < 0 )
    {
LABEL_87:
      v10 = v55;
      goto LABEL_88;
    }
    v10 = v55;
    if ( !AccessStatus[0] )
    {
      v31 = *(void **)(v55 + 72);
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      GrantedAccess[0] = 0;
      AccessStatus[0] = 0;
      SeCaptureSubjectContext(&SubjectContext);
      SeAccessCheck(
        v31,
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
    v32 = *(_QWORD **)(v10 + 64);
    if ( !v32 )
      goto LABEL_65;
    if ( !v64 )
    {
      NameInstance = -1073741811;
      goto LABEL_67;
    }
    v39 = *v32 - *(_QWORD *)v64;
    if ( *v32 == *(_QWORD *)v64 )
      v39 = v32[1] - *((_QWORD *)v64 + 1);
    if ( v39 )
    {
      NameInstance = -1073741811;
    }
    else
    {
LABEL_65:
      if ( v52 <= *(_DWORD *)(v10 + 56) )
        NameInstance = 0;
      else
        NameInstance = -1073741811;
    }
LABEL_67:
    if ( NameInstance >= 0 )
      goto LABEL_68;
LABEL_88:
    v23 = PreviousMode;
    goto LABEL_71;
  }
  NameInstance = ExpWnfLookupPermanentName(v14, P);
  if ( NameInstance < 0 )
    goto LABEL_87;
  v40 = P[0];
  NameInstance = ExpWnfValidatePubSubPreconditions(2u, (__int64)P[0], v52, v64, AccessStatus[0]);
  if ( NameInstance < 0 )
    goto LABEL_87;
  NameInstance = ExpWnfCreateNameInstance((_DWORD)v9, v14, (_DWORD)v40, (_DWORD)v63, (__int64)&v55);
  ExFreePoolWithTag(v40, 0x20666E57u);
  P[0] = 0LL;
  if ( NameInstance < 0 )
    goto LABEL_87;
  v10 = v55;
LABEL_68:
  v23 = PreviousMode;
  LOBYTE(Privileges) = PreviousMode;
  NameInstance = ExpWnfWriteStateData(v10, v65, v52, a6, a7, Privileges);
  v53 = NameInstance;
  if ( NameInstance >= 0 )
  {
    if ( (_DWORD)v54 == 5 )
    {
      v71 = 0LL;
      Flink = (struct _EX_RUNDOWN_REF *)(v14 ^ 0x41C64E6DA3BC0074LL);
      RtlCopyVolatileMemory(&v71, &Flink, 8uLL);
      v43 = (LegacyAutoBoost *)KeAbPreAcquire(v10 + 80, 0LL, 0LL, v41);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 80), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v10 + 80), 0, v43, (struct _KTHREAD *)(v10 + 80));
      if ( v43 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v43, v42);
        else
          *((_BYTE *)v43 + 10) = 1;
      }
      v44 = 0LL;
      if ( *(_QWORD *)(v10 + 88) != 1LL )
        v44 = *(_QWORD *)(v10 + 88);
      if ( v44 )
      {
        Srca = (void *)(v44 + 16);
        AccessStatus[0] = *(_DWORD *)(v44 + 8);
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
    ExpWnfNotifyNameSubscribers(v10, 1LL, 1LL, v49 != 0);
    NameInstance = 0;
  }
LABEL_71:
  if ( v10 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v10 + 8));
  if ( v9 )
    ExReleaseRundownProtection_0(v9 + 1);
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v11 )
  {
    v35 = v11 - 1;
    if ( v35 )
    {
      v36 = v35 - 1;
      if ( !v36 )
      {
        if ( Object[0] && v23 == 1 )
          ExFreePoolWithTag(Object[0], 0);
        return (unsigned int)NameInstance;
      }
      if ( v36 != 1 )
        return (unsigned int)NameInstance;
      v37 = Object[0];
      if ( !Object[0] )
        return (unsigned int)NameInstance;
      v38 = 543583831;
    }
    else
    {
      v37 = Object[0];
      if ( !Object[0] )
        return (unsigned int)NameInstance;
      v38 = 2035381072;
    }
    ObfDereferenceObjectWithTag(v37, v38);
  }
  return (unsigned int)NameInstance;
}
