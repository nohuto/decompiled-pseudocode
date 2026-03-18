/*
 * XREFs of IopParseDevice @ 0x1409008C0
 * Callers:
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     IopParseFile @ 0x140A80B90 (IopParseFile.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     PsIsServerSilo @ 0x140216838 (PsIsServerSilo.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     SeFastTraverseCheck @ 0x14025EE28 (SeFastTraverseCheck.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 *     IoFreeIrp @ 0x140268860 (IoFreeIrp.c)
 *     IopAllocateIrpExReturn @ 0x14026C640 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026CA30 (IoGetRelatedDeviceObject.c)
 *     IopGetDevicePDO @ 0x14026F1F0 (IopGetDevicePDO.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     IopDecrementDeviceObjectRef @ 0x1402B2B50 (IopDecrementDeviceObjectRef.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     IopQueueThreadIrp @ 0x14032F090 (IopQueueThreadIrp.c)
 *     IopDequeueIrpFromThread @ 0x14032F1A0 (IopDequeueIrpFromThread.c)
 *     MmIsDriverVerifying @ 0x1403B79E0 (MmIsDriverVerifying.c)
 *     IopDeleteFileObjectExtension @ 0x1403DB7A0 (IopDeleteFileObjectExtension.c)
 *     PsReleaseSiloHardReference @ 0x1403DBC10 (PsReleaseSiloHardReference.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1403EB2A0 (IopVerifyDeviceObjectOnStack.c)
 *     RtlCopyUnicodeString @ 0x140419A90 (RtlCopyUnicodeString.c)
 *     SepPrivilegeCheck @ 0x14042F0A0 (SepPrivilegeCheck.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     PsGetCurrentProcessSessionId @ 0x140437260 (PsGetCurrentProcessSessionId.c)
 *     IopCheckSessionDeviceAccess @ 0x140446F40 (IopCheckSessionDeviceAccess.c)
 *     IopCheckVpbMounted @ 0x14044A8C8 (IopCheckVpbMounted.c)
 *     IopIncrementVpbRefCount @ 0x14044AA10 (IopIncrementVpbRefCount.c)
 *     IoGetAttachedDevice @ 0x14044F180 (IoGetAttachedDevice.c)
 *     RtlGetActiveConsoleId @ 0x140450F30 (RtlGetActiveConsoleId.c)
 *     IopGetSetSpecificExtension @ 0x140455360 (IopGetSetSpecificExtension.c)
 *     ObReferenceObjectByPointer @ 0x14045F750 (ObReferenceObjectByPointer.c)
 *     IoGetSilo @ 0x14045FAB0 (IoGetSilo.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     IopDereferenceVpbAndFree @ 0x140469EB0 (IopDereferenceVpbAndFree.c)
 *     IopAllocateFileObjectExtensionSlow @ 0x14046BB40 (IopAllocateFileObjectExtensionSlow.c)
 *     PsIsHostSilo @ 0x14046E630 (PsIsHostSilo.c)
 *     IopSymlinkGetECP @ 0x14048345C (IopSymlinkGetECP.c)
 *     PsGetServerSiloServiceSessionId @ 0x140487140 (PsGetServerSiloServiceSessionId.c)
 *     PsAcquireSiloHardReference @ 0x14048F400 (PsAcquireSiloHardReference.c)
 *     IoSetActivityIdThread @ 0x140491810 (IoSetActivityIdThread.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     IopCreateSecurityCheck @ 0x1404A387C (IopCreateSecurityCheck.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x1404AF6B0 (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopCheckStackForTransactionSupport @ 0x1404F312C (IopCheckStackForTransactionSupport.c)
 *     IopAllowRemoteDASD @ 0x1405052F8 (IopAllowRemoteDASD.c)
 *     IopCheckDeviceAndDriver @ 0x14051BCF0 (IopCheckDeviceAndDriver.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     IopCheckAndUpdateStopOnSymlinkEcp @ 0x14077A420 (IopCheckAndUpdateStopOnSymlinkEcp.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     SeLockSubjectContext @ 0x1408EE720 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408EE780 (SeUnlockSubjectContext.c)
 *     IopQueryInformation @ 0x140903288 (IopQueryInformation.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1409034B4 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1409035A0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IoCancelFileOpen @ 0x140903830 (IoCancelFileOpen.c)
 *     SeAppendPrivileges @ 0x140903960 (SeAppendPrivileges.c)
 *     IopSymlinkCreateECP @ 0x140903B80 (IopSymlinkCreateECP.c)
 *     IopSymlinkProcessReparse @ 0x1409041CC (IopSymlinkProcessReparse.c)
 *     IopSymlinkUpdateECP @ 0x140904868 (IopSymlinkUpdateECP.c)
 *     SepConcatenatePrivileges @ 0x140904FC0 (SepConcatenatePrivileges.c)
 *     SeTokenIsAdmin @ 0x140920530 (SeTokenIsAdmin.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14092F570 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     IopAllocRealFileObject @ 0x1409337E0 (IopAllocRealFileObject.c)
 *     IopRetrieveTransactionParameters @ 0x1409342BC (IopRetrieveTransactionParameters.c)
 *     PsGetParentSilo @ 0x140978D70 (PsGetParentSilo.c)
 *     IopQueryXxxInformation @ 0x1409B8C10 (IopQueryXxxInformation.c)
 *     IopCloseFile @ 0x140A1EFA0 (IopCloseFile.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x140AC8AC8 (IopSymlinkEnforceEnabledTypes.c)
 *     IopCancelAlertedRequest @ 0x140B1F1D4 (IopCancelAlertedRequest.c)
 *     IopGetNetworkOpenInformation @ 0x140B50AAC (IopGetNetworkOpenInformation.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     VfFastIoCheckState @ 0x140C47F24 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140C4824C (VfFastIoSnapState.c)
 */

__int64 __fastcall IopParseDevice(
        struct _DEVICE_OBJECT *BugCheckParameter2,
        POBJECT_TYPE *a2,
        struct _ACCESS_STATE *a3,
        char a4,
        int a5,
        UNICODE_STRING *a6,
        const UNICODE_STRING *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        _QWORD *a11)
{
  char v11; // di
  PACCESS_STATE v12; // rsi
  struct _DEVICE_OBJECT *AttachedDevice; // r13
  _QWORD *v14; // r12
  unsigned __int8 v15; // bl
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 result; // rax
  int RemainingDesiredAccess; // eax
  int OriginalDesiredAccess; // eax
  ACCESS_MASK v23; // r12d
  char v24; // r9
  int v25; // edx
  char v26; // r8
  ULONG Flags; // ecx
  int v28; // r13d
  int v29; // edi
  __int64 PrimaryToken; // rcx
  PVOID *v31; // r12
  _DWORD *v32; // rsi
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // r8d
  char v37; // bl
  ULONG Characteristics; // eax
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rsi
  __int64 v40; // rdx
  __int64 v41; // r8
  PERESOURCE *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  char v45; // al
  unsigned __int8 v46; // bl
  __int64 v47; // r8
  __int64 v48; // r12
  __int64 v49; // rdx
  __int64 v50; // rax
  ULONG_PTR v51; // rsi
  __int64 v52; // rdx
  int v53; // eax
  PACCESS_STATE v54; // rdi
  __int64 Irp; // rax
  __int64 v56; // rsi
  unsigned int v57; // edx
  PPRIVILEGE_SET v58; // rdi
  int v59; // eax
  char v60; // al
  struct _FILE_OBJECT *v61; // r12
  __int64 v62; // rax
  struct _LIST_ENTRY *v63; // rax
  const UNICODE_STRING *v64; // r13
  unsigned __int16 Length; // ax
  __int64 v66; // rax
  PPRIVILEGE_SET v67; // r13
  __int64 v68; // rdx
  int v69; // ecx
  ULONG_PTR v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // r8
  ULONG_PTR v73; // rax
  int Flink; // edi
  __int64 ClientToken; // rcx
  PVOID *AuxData; // r12
  _DWORD *v77; // rsi
  int v78; // ecx
  __int64 v79; // rcx
  wchar_t *Buffer; // rcx
  const UNICODE_STRING *v81; // rdi
  unsigned __int16 v82; // ax
  __int64 v83; // rax
  __int64 v84; // rdx
  ULONG_PTR v85; // r12
  struct _DEVICE_OBJECT *v86; // rdi
  __int64 v87; // rdx
  PVOID v88; // rbx
  _QWORD *v89; // rdi
  NTSTATUS SetSpecificExtension; // edi
  __int64 v91; // rdi
  __int64 RelatedFileObject; // rcx
  unsigned __int64 DeviceType; // rax
  NTSTATUS v94; // eax
  __int64 v95; // rdx
  __int64 v96; // r8
  struct _LIST_ENTRY *FileObjectExtension; // rax
  __int64 v98; // rdx
  __int64 v99; // r8
  __int64 v100; // rdx
  __int64 v101; // r8
  PVOID v102; // rcx
  bool v103; // si
  PACCESS_STATE v104; // rdi
  char v105; // bl
  bool v106; // zf
  ACCESS_MASK v107; // eax
  __int64 v108; // rdx
  __int64 v109; // r8
  ULONG_PTR v110; // rdi
  BOOLEAN v111; // di
  __int64 v112; // rdx
  __int64 v113; // r8
  struct _LIST_ENTRY *v114; // rdi
  NTSTATUS v115; // eax
  struct _LIST_ENTRY *v116; // r13
  int v117; // ecx
  struct _ECP_LIST *v118; // r8
  NTSTATUS v119; // eax
  __int64 v120; // rdx
  __int64 v121; // rcx
  NTSTATUS v122; // r13d
  int v123; // ecx
  struct _ECP_LIST *v124; // r8
  NTSTATUS v125; // eax
  int v126; // edi
  bool v127; // r13
  PDEVICE_OBJECT v128; // rdi
  ULONG_PTR v129; // rcx
  __int64 v130; // rdx
  __int64 v131; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  char v133; // si
  struct _DRIVER_OBJECT *DriverObject; // rdi
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  ULONG_PTR FastIoQueryBasicInfo; // rbx
  void *v137; // rdi
  void *v138; // rbx
  void *v139; // rcx
  __int64 v140; // rax
  int v141; // ecx
  NTSTATUS v142; // eax
  _DWORD *v143; // rdi
  __int64 v144; // rax
  char v145; // cl
  struct _FILE_OBJECT *v146; // rax
  unsigned __int64 v147; // rcx
  __int64 MostRecentlyUsedName; // rax
  NTSTATUS updated; // eax
  struct _LIST_ENTRY *v150; // rdi
  ULONG v151; // eax
  bool v152; // al
  __int64 v153; // rdx
  __int64 v154; // r8
  __int64 v155; // rdi
  unsigned __int64 v156; // rax
  __int64 v157; // rcx
  unsigned __int64 v158; // rax
  __int64 v159; // rcx
  PUNICODE_STRING v160; // rcx
  wchar_t *v161; // rsi
  wchar_t *v162; // rcx
  __int64 v163; // rax
  ULONG_PTR v164; // rsi
  __int64 v165; // rdx
  __int64 v166; // r8
  ULONG_PTR v167; // rdx
  __int64 v168; // r8
  int v169; // ecx
  unsigned __int64 v170; // rax
  unsigned int v172; // ecx
  int v173; // ecx
  int v174; // ecx
  __int64 Silo; // rax
  void *v176; // rdi
  _DWORD *v177; // rdx
  unsigned int v178; // eax
  __int64 v179; // rdx
  __int64 v180; // rax
  __int64 *v181; // rdi
  __int64 *v182; // rcx
  __int64 v183; // rax
  int v184; // eax
  __int64 v185; // rdx
  __int64 v186; // r8
  struct _LIST_ENTRY *CurrentIrql; // r8
  char v188; // al
  void *Pool2; // rdi
  _DWORD *v190; // rdx
  unsigned int v191; // eax
  __int64 v192; // rdx
  __int64 v193; // rdx
  __int64 v194; // r8
  __int64 v195; // rdx
  __int64 v196; // r8
  unsigned __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // edi
  _DWORD *DevicePDO; // rax
  void *v200; // rdi
  __int64 v201; // rdx
  void *v202; // rcx
  __int64 v203; // r10
  ULONG_PTR Vpb; // rcx
  __int64 v205; // rdi
  void *v206; // rax
  int ActiveConsoleId; // edi
  unsigned __int64 v208; // rax
  int v209; // edi
  __int64 v210; // rax
  void *v211; // r13
  PACCESS_STATE v212; // rcx
  __int64 v213; // rbx
  PACCESS_TOKEN v214; // rcx
  __int64 v215; // rcx
  NTSTATUS XxxInformation; // eax
  void *v217; // rbx
  ULONG_PTR v218; // rdi
  NTSTATUS v219; // eax
  int PreviouslyGrantedAccess; // [rsp+20h] [rbp-188h]
  char v222[3]; // [rsp+61h] [rbp-147h] BYREF
  NTSTATUS AccessStatus; // [rsp+64h] [rbp-144h] BYREF
  char v224; // [rsp+68h] [rbp-140h]
  char v225; // [rsp+69h] [rbp-13Fh]
  PACCESS_STATE AccessState; // [rsp+70h] [rbp-138h]
  ULONG_PTR BugCheckParameter1; // [rsp+78h] [rbp-130h]
  NTSTATUS v228[2]; // [rsp+80h] [rbp-128h] BYREF
  unsigned int v229; // [rsp+88h] [rbp-120h]
  int v230; // [rsp+8Ch] [rbp-11Ch]
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp-118h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+98h] [rbp-110h]
  __int64 v233; // [rsp+A0h] [rbp-108h]
  PPRIVILEGE_SET Privileges; // [rsp+A8h] [rbp-100h] BYREF
  struct _ECP_LIST *v235; // [rsp+B0h] [rbp-F8h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-F0h]
  PUNICODE_STRING AbsoluteObjectName; // [rsp+C0h] [rbp-E8h]
  PPRIVILEGE_SET v238; // [rsp+C8h] [rbp-E0h] BYREF
  PVOID Object; // [rsp+D0h] [rbp-D8h] BYREF
  char v240; // [rsp+D8h] [rbp-D0h]
  _DWORD Size[3]; // [rsp+DCh] [rbp-CCh] BYREF
  PVOID P; // [rsp+E8h] [rbp-C0h]
  int v243; // [rsp+F0h] [rbp-B8h]
  _QWORD *v244; // [rsp+F8h] [rbp-B0h]
  ULONG_PTR BugCheckParameter4[2]; // [rsp+100h] [rbp-A8h] BYREF
  __int64 v246; // [rsp+110h] [rbp-98h]
  ULONG_PTR v247; // [rsp+118h] [rbp-90h]
  ULONG_PTR BugCheckParameter2a; // [rsp+120h] [rbp-88h]
  UNICODE_STRING ObjectTypeName; // [rsp+128h] [rbp-80h] BYREF
  __int128 v250; // [rsp+138h] [rbp-70h] BYREF
  __int64 v251; // [rsp+148h] [rbp-60h]
  void *v252; // [rsp+150h] [rbp-58h]
  struct _LIST_ENTRY Src; // [rsp+158h] [rbp-50h] BYREF
  int v254; // [rsp+168h] [rbp-40h]

  v11 = a4;
  v12 = a3;
  AccessState = a3;
  AttachedDevice = BugCheckParameter2;
  v247 = (ULONG_PTR)BugCheckParameter2;
  AbsoluteObjectName = a6;
  SourceString = a7;
  BugCheckParameter2a = a8;
  v246 = a10;
  v14 = a11;
  v244 = a11;
  GrantedAccess = 0;
  AccessStatus = 0;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  v250 = 0LL;
  v251 = 0LL;
  v243 = 0;
  LOBYTE(v230) = 0;
  memset(Size, 0, sizeof(Size));
  ObjectTypeName = 0LL;
  Privileges = 0LL;
  P = 0LL;
  v235 = 0LL;
  if ( a2 != IoFileObjectType )
    return 3221225508LL;
  CurrentThread = KeGetCurrentThread();
  v15 = 4;
  RtlInitUnicodeString(&ObjectTypeName, L"File");
  while ( 1 )
  {
    v16 = 0x10000110040LL;
    v17 = 0x1080020004LL;
    v18 = 2684354563LL;
    *v14 = 0LL;
    Object = 0LL;
    if ( !a8 || *(_WORD *)a8 != 8 || *(_WORD *)(a8 + 2) != 224 )
      return 3221225508LL;
    BugCheckParameter1 = (ULONG_PTR)AttachedDevice;
    if ( *(_DWORD *)(a8 + 32) == 1 )
    {
      *(_DWORD *)(a8 + 32) = -1096154543;
      v206 = (void *)v247;
      *(_QWORD *)(a8 + 40) = v247;
      *(_DWORD *)(a8 + 16) = 0;
      PsReferenceSiloContext(v206);
      return 0LL;
    }
    if ( (*(_DWORD *)(a8 + 152) & 0x10) != 0 )
    {
      v147 = *(unsigned int *)(v247 + 72);
      if ( *(_QWORD *)(a8 + 24) == 2684354563LL )
      {
        if ( (_DWORD)v147 != 7 && ((unsigned int)v147 > 0x24 || !_bittest64(&v17, v147)) )
          goto LABEL_601;
      }
      else
      {
        LOBYTE(v18) = (_DWORD)v147 == 7 || (unsigned int)v147 <= 0x24 && _bittest64(&v17, v147);
        v152 = (unsigned int)v147 <= 0x28 && _bittest64(&v16, v147) || (_DWORD)v147 == 54 || (_DWORD)v147 == 53;
        if ( !(_BYTE)v18 && !v152 )
        {
LABEL_601:
          *(_DWORD *)(a8 + 16) = -1073741192;
          return 3221226104LL;
        }
        result = IopSymlinkEnforceEnabledTypes(*(_BYTE *)(a8 + 152) & 8, v18, *(_QWORD *)(a8 + 168), 0x10000110040LL);
        AccessStatus = result;
        if ( (int)result < 0 )
          goto LABEL_220;
      }
    }
    v19 = *(_QWORD *)(a8 + 40);
    if ( v19 )
    {
      AttachedDevice = *(struct _DEVICE_OBJECT **)(v19 + 8);
      BugCheckParameter1 = (ULONG_PTR)AttachedDevice;
    }
    if ( AttachedDevice->DeviceType == 7 )
    {
      v73 = (ULONG_PTR)AttachedDevice;
      do
      {
        if ( *(_QWORD *)(v73 + 56) )
          break;
        v73 = *(_QWORD *)(v73 + 24);
      }
      while ( v73 );
      if ( v73 && (struct _DEVICE_OBJECT *)v73 != AttachedDevice )
      {
        AttachedDevice = (struct _DEVICE_OBJECT *)v73;
        BugCheckParameter1 = v73;
        *(_DWORD *)(a8 + 152) |= 2u;
      }
    }
    result = IopCheckDeviceAndDriver(a8, (ULONG_PTR)AttachedDevice);
    AccessStatus = result;
    if ( (int)result < 0 )
      goto LABEL_220;
    if ( (AttachedDevice->DeviceObjectExtension->ExtensionFlags & 0x400) != 0 && !*(_QWORD *)(a8 + 40) )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
      if ( ServerSiloServiceSessionId != (unsigned int)PsGetCurrentProcessSessionId()
        || IopSessionZeroAccessCheckEnabled && (*(_DWORD *)(a8 + 64) & 0x40000) == 0 )
      {
        DevicePDO = IopGetDevicePDO((__int64)AttachedDevice);
        v200 = DevicePDO;
        if ( DevicePDO )
        {
          if ( !IopCheckSessionDeviceAccess((__int64)DevicePDO) )
          {
            ObfDereferenceObject(v200);
            IopDecrementDeviceObjectRef((ULONG_PTR)AttachedDevice, 0LL, 0LL);
            *(_DWORD *)(a8 + 16) = -1073741790;
            return 3221225506LL;
          }
          ObfDereferenceObject(v200);
        }
      }
      v11 = a4;
    }
    RemainingDesiredAccess = v12->RemainingDesiredAccess;
    if ( RemainingDesiredAccess < 0 )
      RemainingDesiredAccess |= *((_DWORD *)IoFileObjectType + 19);
    if ( (RemainingDesiredAccess & 0x40000000) != 0 )
      RemainingDesiredAccess |= *((_DWORD *)IoFileObjectType + 20);
    if ( (RemainingDesiredAccess & 0x20000000) != 0 )
      RemainingDesiredAccess |= *((_DWORD *)IoFileObjectType + 21);
    if ( (RemainingDesiredAccess & 0x10000000) != 0 )
      RemainingDesiredAccess |= *((_DWORD *)IoFileObjectType + 22);
    v12->RemainingDesiredAccess = RemainingDesiredAccess & 0xFFFFFFF;
    OriginalDesiredAccess = v12->OriginalDesiredAccess;
    if ( OriginalDesiredAccess < 0 )
      OriginalDesiredAccess |= *((_DWORD *)IoFileObjectType + 19);
    if ( (OriginalDesiredAccess & 0x40000000) != 0 )
      OriginalDesiredAccess |= *((_DWORD *)IoFileObjectType + 20);
    if ( (OriginalDesiredAccess & 0x20000000) != 0 )
      OriginalDesiredAccess |= *((_DWORD *)IoFileObjectType + 21);
    if ( (OriginalDesiredAccess & 0x10000000) != 0 )
      OriginalDesiredAccess |= *((_DWORD *)IoFileObjectType + 22);
    v12->OriginalDesiredAccess = OriginalDesiredAccess & 0xFFFFFFF;
    *(_OWORD *)((char *)v12->AuxData + 8) = *(_OWORD *)((char *)IoFileObjectType + 76);
    v23 = v12->RemainingDesiredAccess;
    v229 = v23;
    v24 = v11 || (*(_DWORD *)(a8 + 84) & 1) != 0;
    v224 = v24;
    v25 = *(_DWORD *)(a8 + 88);
    Src = 0LL;
    v254 = 0;
    v225 = 0;
    v26 = 0;
    Flags = v12->Flags;
    if ( (Flags & 0x100) == 0 && (*(_DWORD *)(a8 + 64) & 0x4000) != 0 )
    {
      v12->Flags = Flags | 0x100;
      v28 = v23;
      if ( (v23 & 0x2000000) != 0 )
        v28 = v23 | 0x11F01BF;
      if ( ((v25 - 1) & 0xFFFFFFF9) != 0 || v25 == 7 )
      {
        v26 = 1;
        goto LABEL_51;
      }
      v228[0] = v28 & 0x11200A9;
      if ( (v28 & 0x11200A9) == 0 )
      {
LABEL_51:
        if ( (v28 & 0x11F0116) == 0 && !v26 )
        {
LABEL_53:
          AttachedDevice = (struct _DEVICE_OBJECT *)BugCheckParameter1;
          v23 = v229;
          v11 = a4;
          if ( !v225 )
            *(_DWORD *)(a8 + 64) &= ~0x4000u;
          goto LABEL_55;
        }
        Flink = 1;
        Src.Flink = (struct _LIST_ENTRY *)0x100000001LL;
        Src.Blink = (struct _LIST_ENTRY *)SeRestorePrivilege;
        v254 = 0;
        if ( v24 )
        {
          ClientToken = (__int64)v12->SubjectSecurityContext.ClientToken;
          if ( ClientToken )
          {
            if ( v12->SubjectSecurityContext.ImpersonationLevel < SecurityImpersonation )
              goto LABEL_53;
          }
          else
          {
            ClientToken = (__int64)v12->SubjectSecurityContext.PrimaryToken;
          }
          if ( !SepPrivilegeCheck(ClientToken, (__int64)&Src.Blink, 1u, 1, v24) )
            goto LABEL_53;
          Flink = (int)Src.Flink;
        }
        v225 = 1;
        AuxData = (PVOID *)v12->AuxData;
        v77 = *AuxData;
        v78 = *(_DWORD *)*AuxData;
        if ( (unsigned int)(Flink + v78) > 3 )
        {
          Pool2 = (void *)ExAllocatePool2(0x100uLL);
          if ( Pool2 )
          {
            v190 = *AuxData;
            if ( *AuxData )
            {
              if ( *v190 )
                v191 = 12 * *v190 + 8;
              else
                v191 = 8;
            }
            else
            {
              v191 = 0;
            }
            memmove(Pool2, v190, v191);
            SepConcatenatePrivileges(Pool2, v192, &Src);
            v12 = AccessState;
            if ( AccessState->PrivilegesAllocated )
              ExFreePoolWithTag(*AuxData, 0);
            *AuxData = Pool2;
            v12->PrivilegesAllocated = 1;
            goto LABEL_152;
          }
        }
        else
        {
          if ( v77 )
          {
            if ( v78 )
              v79 = (unsigned int)(12 * v78 + 8);
            else
              v79 = 8LL;
          }
          else
          {
            v79 = 0LL;
          }
          memmove((char *)v77 + v79, &Src.Blink, (unsigned int)(12 * Flink));
          *v77 += Flink;
        }
        v12 = AccessState;
LABEL_152:
        v12->PreviouslyGrantedAccess |= v28 & 0x11F0116;
        v12->RemainingDesiredAccess &= 0xFEE0FEE9;
        v12->Flags |= 4u;
        goto LABEL_53;
      }
      v29 = 1;
      Src.Flink = (struct _LIST_ENTRY *)0x100000001LL;
      Src.Blink = (struct _LIST_ENTRY *)SeBackupPrivilege;
      v254 = 0;
      if ( v24 )
      {
        PrimaryToken = (__int64)v12->SubjectSecurityContext.ClientToken;
        if ( PrimaryToken )
        {
          if ( v12->SubjectSecurityContext.ImpersonationLevel < SecurityImpersonation )
            goto LABEL_51;
        }
        else
        {
          PrimaryToken = (__int64)v12->SubjectSecurityContext.PrimaryToken;
        }
        if ( !SepPrivilegeCheck(PrimaryToken, (__int64)&Src.Blink, 1u, 1, v24) )
          goto LABEL_50;
        v29 = (int)Src.Flink;
      }
      v225 = 1;
      v31 = (PVOID *)v12->AuxData;
      v32 = *v31;
      v33 = *(_DWORD *)*v31;
      if ( (unsigned int)(v29 + v33) > 3 )
      {
        v176 = (void *)ExAllocatePool2(0x100uLL);
        if ( v176 )
        {
          v177 = *v31;
          if ( *v31 )
          {
            if ( *v177 )
              v178 = 12 * *v177 + 8;
            else
              v178 = 8;
          }
          else
          {
            v178 = 0;
          }
          memmove(v176, v177, v178);
          SepConcatenatePrivileges(v176, v179, &Src);
          v12 = AccessState;
          if ( AccessState->PrivilegesAllocated )
            ExFreePoolWithTag(*v31, 0);
          *v31 = v176;
          v12->PrivilegesAllocated = 1;
          goto LABEL_49;
        }
      }
      else
      {
        if ( v32 )
        {
          if ( v33 )
            v34 = (unsigned int)(12 * v33 + 8);
          else
            v34 = 8LL;
        }
        else
        {
          v34 = 0LL;
        }
        memmove((char *)v32 + v34, &Src.Blink, (unsigned int)(12 * v29));
        *v32 += v29;
      }
      v12 = AccessState;
LABEL_49:
      v12->PreviouslyGrantedAccess |= v228[0];
      v12->RemainingDesiredAccess &= 0xFEEDFF56;
      v28 &= 0xFEEDFF56;
      v12->Flags |= 2u;
LABEL_50:
      v24 = v224;
      v26 = 0;
      goto LABEL_51;
    }
LABEL_55:
    if ( *(_BYTE *)(a8 + 136) && !SourceString->Length || (v12->Flags & 0x100) != 0 )
    {
      v23 |= v12->PreviouslyGrantedAccess;
      v229 = v23;
    }
    v35 = *(_QWORD *)(a8 + 40);
    LOBYTE(v36) = v230;
    if ( v35 && (*(_DWORD *)(v35 + 80) & 0x400000) != 0 )
    {
      v36 = (unsigned __int8)v230;
      if ( !SourceString->Length )
        v36 = 1;
      v230 = v36;
    }
    if ( !v11 && (*(_DWORD *)(a8 + 84) & 1) == 0 || v35 && !(_BYTE)v36 || *(_BYTE *)(a8 + 136) )
      goto LABEL_73;
    v37 = v15 & 0xDF;
    Characteristics = AttachedDevice->Characteristics;
    if ( SourceString->Length )
    {
      if ( (Characteristics & 0x20100) != 0x20000 && v11 )
      {
        v222[0] = 0;
        p_SubjectSecurityContext = &v12->SubjectSecurityContext;
        SeIsAppContainerOrIdentifyLevelContext(p_SubjectSecurityContext);
        if ( v222[0] )
        {
          v238 = Privileges;
          v228[0] = 0;
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite((PERESOURCE)&IopSessionNotificationLock.WaitBlockFill11[168], 1u);
          SeLockSubjectContext(p_SubjectSecurityContext);
          v111 = SeAccessCheck(
                   AttachedDevice->SecurityDescriptor,
                   p_SubjectSecurityContext,
                   1u,
                   v23 | 0x20,
                   0,
                   &v238,
                   (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                   1,
                   &GrantedAccess,
                   v228);
          if ( v238 )
          {
            SeAppendPrivileges(AccessState, v238);
            CmSiFreeMemory(v238);
          }
          SeUnlockSubjectContext(p_SubjectSecurityContext);
          ExReleaseResourceLite((PERESOURCE)&IopSessionNotificationLock.WaitBlockFill11[168]);
          KeLeaveCriticalRegionThread((__int64)CurrentThread, v112, v113);
          v15 = (v111 ^ v37) & 1 ^ v37;
          v12 = AccessState;
          goto LABEL_68;
        }
        v12 = AccessState;
      }
      if ( (v12->Flags & 1) != 0 )
      {
        v15 = v37 | 1;
        goto LABEL_68;
      }
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite((PERESOURCE)&IopSessionNotificationLock.WaitBlockFill11[168], 1u);
      v188 = SeFastTraverseCheck((__int64)AttachedDevice->SecurityDescriptor, (__int64)v12, 32);
      v15 = (v37 ^ v188) & 1 ^ v37;
      if ( (v188 & 1) == 0 )
      {
        Privileges = 0LL;
        SeLockSubjectContext(&v12->SubjectSecurityContext);
        v15 = (v15 | 0x20) ^ (SeAccessCheck(
                                AttachedDevice->SecurityDescriptor,
                                &v12->SubjectSecurityContext,
                                1u,
                                0x20u,
                                0,
                                &Privileges,
                                (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                1,
                                &GrantedAccess,
                                &AccessStatus) ^ (v15 | 0x20)) & 1;
        v12 = AccessState;
        if ( Privileges )
        {
          SeAppendPrivileges(AccessState, Privileges);
          CmSiFreeMemory(Privileges);
        }
      }
    }
    else
    {
      v103 = 0;
      if ( (Characteristics & 0x40001) != 0 && (v23 & 0xFFEDFF7F) != 0 )
      {
        ActiveConsoleId = RtlGetActiveConsoleId();
        if ( ActiveConsoleId != (unsigned int)PsGetCurrentProcessSessionId() )
        {
          v208 = PsGetCurrentServerSilo();
          v209 = PsGetServerSiloServiceSessionId(v208);
          if ( v209 != (unsigned int)PsGetCurrentProcessSessionId() && !IopAllowRemoteDASD() )
            v103 = 1;
        }
      }
      Privileges = 0LL;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite((PERESOURCE)&IopSessionNotificationLock.WaitBlockFill11[168], 1u);
      v104 = AccessState;
      SeLockSubjectContext(&AccessState->SubjectSecurityContext);
      v105 = v37 | 0x20;
      v106 = !v103;
      v12 = v104;
      if ( v106 )
        goto LABEL_225;
      v214 = v104->SubjectSecurityContext.ClientToken;
      if ( !v214 )
        v214 = v104->SubjectSecurityContext.PrimaryToken;
      if ( SeTokenIsAdmin(v214) )
      {
LABEL_225:
        v15 = (v105 ^ SeAccessCheck(
                        AttachedDevice->SecurityDescriptor,
                        &v104->SubjectSecurityContext,
                        (v105 & 0x20) != 0,
                        v23,
                        0,
                        &Privileges,
                        (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                        1,
                        &GrantedAccess,
                        &AccessStatus)) & 1 ^ v105;
        if ( Privileges )
        {
          SeAppendPrivileges(v104, Privileges);
          CmSiFreeMemory(Privileges);
        }
        if ( (v15 & 1) != 0 )
        {
          v107 = GrantedAccess;
          v104->PreviouslyGrantedAccess |= GrantedAccess;
          v104->RemainingDesiredAccess &= ~(v107 | 0x2000000);
          *(_BYTE *)(a8 + 136) = 1;
        }
      }
      else
      {
        v15 = v105 & 0xFE;
        AccessStatus = -1073741790;
      }
      SeOpenObjectAuditAlarmWithTransaction(
        &ObjectTypeName,
        AttachedDevice,
        AbsoluteObjectName,
        AttachedDevice->SecurityDescriptor,
        v104,
        0,
        v15 & 1,
        1,
        0LL,
        &v104->GenerateOnClose);
    }
    ExReleaseResourceLite((PERESOURCE)&IopSessionNotificationLock.WaitBlockFill11[168]);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v108, v109);
LABEL_68:
    if ( (v15 & 0x20) != 0 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v12->SubjectSecurityContext.PrimaryToken + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v40, v41);
      v42 = (PERESOURCE *)v12->SubjectSecurityContext.ClientToken;
      if ( v42 )
      {
        ExReleaseResourceLite(v42[6]);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v43, v44);
      }
    }
    if ( (v15 & 1) == 0 )
      goto LABEL_428;
    v11 = a4;
LABEL_73:
    v45 = *(_BYTE *)(a8 + 137) || *(_BYTE *)(a8 + 138) ? 64 : 0;
    v46 = v45 | v15 & 0xBF;
    v47 = (__int64)SourceString;
    if ( SourceString->Length || *(_QWORD *)(a8 + 40) || ((unsigned __int8)~(v46 >> 6) & ((v23 & 0xFEE1FF7F) == 0)) == 0 )
      v15 = v46 & 0xF7;
    else
      v15 = v46 | 8;
    v48 = 0LL;
    v233 = 0LL;
    v49 = *(_QWORD *)(a8 + 40);
    if ( !v49 || (*(_DWORD *)(v49 + 80) & 0x800) != 0 )
    {
      *(_QWORD *)v228 = AttachedDevice;
      if ( *(_QWORD *)(BugCheckParameter1 + 56) && (v15 & 8) == 0 )
      {
        AttachedDevice = (struct _DEVICE_OBJECT *)BugCheckParameter1;
        if ( (*(_DWORD *)(BugCheckParameter1 + 52) & 0x100) != 0
          && (*(_DWORD *)(*(_QWORD *)(BugCheckParameter1 + 312) + 32LL) & 0x800) == 0
          && (v11 || (*(_DWORD *)(a8 + 84) & 1) != 0)
          && (v49 || SourceString->Length)
          && !(_BYTE)v230 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  BugCheckParameter1,
                  (void *)BugCheckParameter1,
                  v12,
                  v229,
                  *(_DWORD *)(a8 + 88),
                  0LL,
                  &GrantedAccess,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_428;
          v47 = (__int64)SourceString;
        }
        v50 = IopCheckVpbMounted(a8, (ULONG_PTR)AttachedDevice, v47, &AccessStatus);
        v48 = v50;
        v233 = v50;
        if ( !v50 )
          return (unsigned int)AccessStatus;
        AttachedDevice = *(struct _DEVICE_OBJECT **)(v50 + 8);
        *(_QWORD *)v228 = AttachedDevice;
      }
      if ( (*(_DWORD *)(a8 + 152) & 1) != 0 )
      {
        v15 |= 2u;
      }
      else if ( AttachedDevice->AttachedDevice )
      {
        AttachedDevice = IoGetAttachedDevice(AttachedDevice);
        *(_QWORD *)v228 = AttachedDevice;
      }
    }
    else
    {
      AttachedDevice = (struct _DEVICE_OBJECT *)v247;
      *(_QWORD *)v228 = v247;
      v110 = *(_QWORD *)(v49 + 16);
      if ( v110 )
      {
        v48 = *(_QWORD *)(v49 + 16);
        v233 = v48;
        if ( (*(_DWORD *)(BugCheckParameter1 + 52) & 0x100) != 0
          && (*(_DWORD *)(*(_QWORD *)(BugCheckParameter1 + 312) + 32LL) & 0x800) == 0
          && (a4 || (*(_DWORD *)(a8 + 84) & 1) != 0)
          && !(_BYTE)v230 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  BugCheckParameter1,
                  (void *)BugCheckParameter1,
                  v12,
                  v229,
                  *(_DWORD *)(a8 + 88),
                  0LL,
                  &GrantedAccess,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
          {
            AttachedDevice = (struct _DEVICE_OBJECT *)BugCheckParameter1;
            goto LABEL_428;
          }
        }
        IopIncrementVpbRefCount(v110, 1);
      }
      if ( (*(_DWORD *)(a8 + 152) & 1) != 0 )
      {
        if ( v48 )
        {
          AttachedDevice = *(struct _DEVICE_OBJECT **)(v48 + 8);
          *(_QWORD *)v228 = AttachedDevice;
        }
        v15 |= 2u;
      }
    }
    v51 = BugCheckParameter1;
    v52 = *(unsigned int *)(BugCheckParameter1 + 52);
    if ( (v52 & 0x40001) != 0
      && (*(_DWORD *)(BugCheckParameter1 + 48) & 0x600100) == 0
      && (*(_DWORD *)(BugCheckParameter1 + 52) & 0x100) == 0 )
    {
      v222[0] = 0;
      SeIsAppContainerOrIdentifyLevelContext(&AccessState->SubjectSecurityContext);
      if ( v222[0] )
      {
        if ( !v48 )
          goto LABEL_427;
        if ( (*(_DWORD *)(*(_QWORD *)(v48 + 8) + 48LL) & 0x20000) == 0 )
          break;
      }
    }
    if ( (v15 & 2) == 0 )
      goto LABEL_91;
    if ( (v15 & 8) != 0
      || (DeviceType = AttachedDevice->DeviceType, (_DWORD)DeviceType != 8)
      && ((unsigned int)DeviceType > 0x35 || (v215 = 0x20000100121008LL, !_bittest64(&v215, DeviceType))) )
    {
      v94 = -1073741811;
      goto LABEL_183;
    }
    LOBYTE(v47) = 1;
    if ( IopVerifyDeviceObjectOnStack((__int64)AttachedDevice, *(_QWORD *)(a8 + 176), (volatile __int64 *)v47) )
    {
      AttachedDevice = *(struct _DEVICE_OBJECT **)(a8 + 176);
      *(_QWORD *)v228 = AttachedDevice;
      v94 = 0;
      goto LABEL_183;
    }
    v180 = *(_QWORD *)(a8 + 168);
    if ( v180 )
    {
      v181 = 0LL;
      v52 = v180 + 8;
      v182 = *(__int64 **)(v180 + 8);
      v47 = 3221226021LL;
      while ( v182 != (__int64 *)v52 )
      {
        v183 = v182[2] - *(_QWORD *)&GUID_ECP_IO_DEVICE_HINT.Data1;
        if ( !v183 )
          v183 = v182[3] - *(_QWORD *)GUID_ECP_IO_DEVICE_HINT.Data4;
        if ( !v183 )
        {
          *((_DWORD *)v182 + 10) |= 4u;
          v47 = 0LL;
          v181 = v182 + 8;
          break;
        }
        v182 = (__int64 *)*v182;
      }
      if ( (int)v47 >= 0 )
      {
        if ( *((_WORD *)v181 + 5) < SourceString->Length )
        {
          *((_WORD *)v181 + 4) = SourceString->Length;
          v94 = -1073740650;
          goto LABEL_183;
        }
        PsReferenceSiloContext(AttachedDevice);
        *v181 = (__int64)AttachedDevice;
        RtlCopyUnicodeString((PUNICODE_STRING)(v181 + 1), SourceString);
        *((_DWORD *)v181 - 6) |= 8u;
      }
    }
    v184 = *(_DWORD *)(a8 + 152);
    if ( (v184 & 0x10) != 0 )
    {
      *(_DWORD *)(a8 + 152) = v184 & 0xFFFFFFEF;
      v94 = -1073740952;
    }
    else
    {
      v94 = -1073740951;
    }
LABEL_183:
    AccessStatus = v94;
    if ( v94 < 0 )
    {
      if ( v48 )
        IopDereferenceVpbAndFree(v48, v52, v47);
      IopDecrementDeviceObjectRef(v51, 0LL, 0LL);
      return (unsigned int)AccessStatus;
    }
LABEL_91:
    v53 = *(_DWORD *)(a8 + 152);
    if ( (v53 & 0x10) != 0 )
      *(_DWORD *)(a8 + 152) = v53 & 0xFFFFFFEF;
    if ( ((AttachedDevice->Characteristics & 0x100) != 0
       || IopRequireDeviceAccessCheck && (*(_DWORD *)(v51 + 52) & 0x100000) != 0)
      && (a4 || (*(_DWORD *)(a8 + 84) & 1) != 0)
      && (*(_QWORD *)(a8 + 40) || SourceString->Length) )
    {
      v54 = AccessState;
      if ( !(_BYTE)v230 )
      {
        Privileges = 0LL;
        if ( !IopCreateSecurityCheck(
                v51,
                AttachedDevice,
                AccessState,
                v229,
                *(_DWORD *)(a8 + 88),
                0LL,
                &GrantedAccess,
                AbsoluteObjectName,
                &ObjectTypeName,
                (__int64)CurrentThread,
                1) )
        {
          IopDecrementDeviceObjectRef(v51, 0LL, 0LL);
          if ( v48 )
            IopDereferenceVpbAndFree(v48, v98, v99);
          return 3221225506LL;
        }
      }
    }
    else
    {
      v54 = AccessState;
    }
    Irp = IopAllocateIrpExReturn((__int64)AttachedDevice, (unsigned __int8)AttachedDevice->StackSize, 0LL);
    v56 = Irp;
    if ( !Irp )
    {
      IopDecrementDeviceObjectRef(BugCheckParameter1, 0LL, 0LL);
      if ( v48 )
        IopDereferenceVpbAndFree(v48, v95, v96);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = a4;
    *(_DWORD *)(Irp + 16) = 2180;
    *(_QWORD *)&v250 = a9;
    *((_QWORD *)&v250 + 1) = v54;
    v57 = v229;
    LODWORD(v251) = v229;
    HIDWORD(v251) = *(_DWORD *)(a8 + 64);
    v58 = (PPRIVILEGE_SET)(*(_QWORD *)(Irp + 184) - 72LL);
    v238 = v58;
    HIBYTE(v58->PrivilegeCount) = 0;
    v59 = *(_DWORD *)(a8 + 120);
    if ( v59 )
    {
      if ( v59 == 1 )
        LOBYTE(v58->PrivilegeCount) = 1;
      else
        LOBYTE(v58->PrivilegeCount) = 19;
      *(_QWORD *)&v58[1].Privilege[0].Luid.HighPart = *(_QWORD *)(a8 + 128);
    }
    else
    {
      LOBYTE(v58->PrivilegeCount) = 0;
      v58[1].Privilege[0].Luid.HighPart = *(_DWORD *)(a8 + 80);
      v60 = *(_BYTE *)(a8 + 84);
      BYTE2(v58->PrivilegeCount) = v60;
      if ( (a5 & 0x40) == 0 )
        BYTE2(v58->PrivilegeCount) = v60 | 0x80;
    }
    *(_QWORD *)(v56 + 88) = *(_QWORD *)(a8 + 56);
    *(_QWORD *)(v56 + 24) = *(_QWORD *)(a8 + 72);
    v58->Privilege[0].Attributes = *(_DWORD *)(a8 + 64) & 0xFFFFFF | (*(_DWORD *)(a8 + 88) << 24);
    LOWORD(v58[1].Control) = *(_WORD *)(a8 + 68);
    HIWORD(v58[1].Control) = *(_WORD *)(a8 + 70);
    v58->Privilege[0].Luid = (LUID)&v250;
    *(_QWORD *)(v56 + 112) = *(_QWORD *)(a8 + 168);
    *(_QWORD *)(v56 + 72) = BugCheckParameter4;
    *(_QWORD *)(v56 + 8) = 0LL;
    *(_BYTE *)(v56 + 65) = 0;
    *(_BYTE *)(v56 + 68) = 0;
    *(_QWORD *)(v56 + 80) = 0LL;
    *(_QWORD *)(v56 + 104) = 0LL;
    *(_QWORD *)(v56 + 160) = 0LL;
    if ( !*(_BYTE *)(a8 + 137) )
    {
      AccessStatus = IopAllocRealFileObject(
                       (unsigned int)&Object,
                       (_DWORD)AttachedDevice,
                       BugCheckParameter1,
                       a5,
                       a4,
                       a8,
                       v246,
                       0,
                       v57);
      if ( AccessStatus >= 0 )
      {
        v61 = (struct _FILE_OBJECT *)Object;
        goto LABEL_104;
      }
      IoFreeIrp((PIRP)v56);
      IopDecrementDeviceObjectRef(BugCheckParameter1, 0LL, 0LL);
      if ( v48 )
        IopDereferenceVpbAndFree(v48, v100, v101);
      v102 = Object;
      if ( Object )
      {
        *((_QWORD *)Object + 1) = 0LL;
        ObfDereferenceObject(v102);
      }
LABEL_219:
      result = (unsigned int)AccessStatus;
LABEL_220:
      *(_DWORD *)(a8 + 16) = result;
      return result;
    }
    v89 = *(_QWORD **)(a8 + 144);
    memset_0(v89, 0, 0x110uLL);
    v61 = (struct _FILE_OBJECT *)(v89 + 6);
    Object = v89 + 6;
    *((_BYTE *)v89 + 24) = ObHeaderCookie ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v89);
    *v89 = 1LL;
    if ( (a5 & 0x40) == 0 )
      *((_DWORD *)v89 + 32) |= 0x20000u;
    v61->Type = 5;
    *((_WORD *)v89 + 25) = 216;
    v89[14] = *(_QWORD *)(a8 + 40);
    v89[7] = BugCheckParameter1;
    SetSpecificExtension = 0;
    if ( (*(_DWORD *)(a8 + 152) & 4) != 0 )
    {
      Src.Flink = 0LL;
      if ( IopCheckStackForTransactionSupport((__int64)AttachedDevice)
        || *(_DWORD *)(a8 + 88) == 1 && (*(_BYTE *)(a8 + 70) & 6) == 0 && (v229 & 0xFEEDFF56) == 0
        || *(_BYTE *)(a8 + 137) )
      {
        v210 = *(_QWORD *)(a8 + 184);
        if ( !v210 || *(_WORD *)v210 != 16 )
          goto LABEL_551;
        v211 = *(void **)(v210 + 8);
        if ( !v211 )
        {
          AttachedDevice = *(struct _DEVICE_OBJECT **)v228;
LABEL_551:
          SetSpecificExtension = -1073741811;
          goto LABEL_171;
        }
        SetSpecificExtension = ObReferenceObjectByPointer(
                                 *(PVOID *)(v210 + 8),
                                 0x120037u,
                                 (POBJECT_TYPE)TmTransactionObjectType,
                                 0);
        if ( SetSpecificExtension >= 0 )
        {
          SetSpecificExtension = IopGetSetSpecificExtension((__int64)v61, 0, 16LL, 1, (__int64 *)&Src, 0LL);
          if ( SetSpecificExtension >= 0 )
            *Src.Flink = *(struct _LIST_ENTRY *)*(_QWORD *)(a8 + 184);
          else
            ObfDereferenceObject(v211);
          AttachedDevice = *(struct _DEVICE_OBJECT **)v228;
        }
        else
        {
          AttachedDevice = *(struct _DEVICE_OBJECT **)v228;
        }
      }
      else
      {
        SetSpecificExtension = -1072103361;
      }
    }
LABEL_171:
    AccessStatus = SetSpecificExtension;
    if ( SetSpecificExtension < 0 )
      goto LABEL_389;
    if ( (*(_DWORD *)(a8 + 152) & 0x24) == 0x20 )
    {
      if ( a4 )
      {
        if ( (AttachedDevice->Flags & 0x40000) != 0
          || (v156 = AttachedDevice->DeviceType, (_DWORD)v156 == 8)
          || (unsigned int)v156 <= 0x35 && (v157 = 0x20000100100008LL, _bittest64(&v157, v156)) )
        {
          AccessStatus = IopRetrieveTransactionParameters(AttachedDevice, a8, v229, v61);
          if ( AccessStatus < 0 )
          {
            IoFreeIrp((PIRP)v56);
            IopDecrementDeviceObjectRef(BugCheckParameter1, 0LL, 0LL);
            v155 = v233;
            if ( !v233 )
              goto LABEL_219;
            goto LABEL_390;
          }
        }
      }
    }
    v91 = v246;
    if ( PsIsHostSilo(*(_QWORD *)(v246 + 8)) )
    {
      RelatedFileObject = (__int64)v61->RelatedFileObject;
      if ( !RelatedFileObject )
        goto LABEL_178;
      Silo = IoGetSilo(RelatedFileObject);
      if ( PsIsHostSilo(Silo) )
        goto LABEL_178;
    }
    Src.Flink = 0LL;
    if ( v61->RelatedFileObject && PsIsServerSilo(*(_QWORD *)(v91 + 8)) )
      v114 = (struct _LIST_ENTRY *)IoGetSilo(v201);
    else
      v114 = *(struct _LIST_ENTRY **)(v91 + 8);
    if ( PsIsHostSilo((__int64)v114) )
      goto LABEL_178;
    AccessStatus = PsAcquireSiloHardReference(v114);
    if ( AccessStatus < 0 )
      goto LABEL_389;
    v115 = IopGetSetSpecificExtension((__int64)v61, 7, 16LL, 1, (__int64 *)&Src, 0LL);
    AccessStatus = v115;
    if ( v115 < 0 )
    {
      PsReleaseSiloHardReference(v114);
      v115 = AccessStatus;
    }
    v116 = Src.Flink;
    if ( v115 < 0 )
    {
LABEL_389:
      IoFreeIrp((PIRP)v56);
      IopDecrementDeviceObjectRef(BugCheckParameter1, 0LL, 0LL);
      v155 = v233;
      if ( !v233 )
        goto LABEL_219;
LABEL_390:
      IopDereferenceVpbAndFree(v155, v153, v154);
      goto LABEL_219;
    }
    LODWORD(Src.Flink->Flink) = 16;
    v116->Blink = v114;
    HIDWORD(v116->Flink) |= 1u;
    ObfReferenceObjectWithTag(v114, 0x70536F49u);
LABEL_178:
    v58 = v238;
LABEL_104:
    if ( (v15 & 8) != 0 )
      v61->Flags |= 0x800u;
    v62 = *(_QWORD *)(a8 + 216);
    if ( (v62 & 1) != 0 )
    {
      Src.Flink = 0LL;
      FileObjectExtension = (struct _LIST_ENTRY *)v61->FileObjectExtension;
      if ( !FileObjectExtension )
      {
        if ( (int)IopAllocateFileObjectExtensionSlow((__int64)v61, (__int64 **)&Src, 0) < 0 )
          goto LABEL_111;
        FileObjectExtension = Src.Flink;
LABEL_193:
        _InterlockedOr((volatile signed __int32 *)FileObjectExtension, 0x20u);
        goto LABEL_111;
      }
      if ( FileObjectExtension != (struct _LIST_ENTRY *)qword_140019060 )
        goto LABEL_193;
    }
    else if ( (v62 & 2) != 0 )
    {
      Src.Flink = 0LL;
      v63 = (struct _LIST_ENTRY *)v61->FileObjectExtension;
      if ( !v63 )
      {
        if ( (int)IopAllocateFileObjectExtensionSlow((__int64)v61, (__int64 **)&Src, 0) < 0 )
          goto LABEL_111;
        v63 = Src.Flink;
LABEL_110:
        _InterlockedOr((volatile signed __int32 *)v63, 0x40u);
        goto LABEL_111;
      }
      if ( v63 != (struct _LIST_ENTRY *)qword_140019060 )
        goto LABEL_110;
    }
LABEL_111:
    *(_QWORD *)(v56 + 192) = v61;
    v58[2].Privilege[0].Luid = (LUID)v61;
    v64 = SourceString;
    Length = SourceString->Length;
    if ( SourceString->Length )
    {
      if ( Length < 0x38u )
      {
        Length = 56;
      }
      else if ( Length < 0x78u )
      {
        Length = 120;
      }
      else if ( Length < 0xF8u )
      {
        Length = 248;
      }
      v61->FileName.MaximumLength = Length;
      v66 = ExAllocatePool2(0x100uLL);
      v61->FileName.Buffer = (wchar_t *)v66;
      if ( !v66 )
      {
        IoFreeIrp((PIRP)v56);
        IopDecrementDeviceObjectRef(BugCheckParameter1, 0LL, 0LL);
        if ( v233 )
          IopDereferenceVpbAndFree(v233, v193, v194);
        v61->DeviceObject = 0LL;
        if ( *(_BYTE *)(a8 + 137) )
          IopDeleteFileObjectExtension((__int64)v61, v193);
        else
          ObfDereferenceObject(v61);
        return 3221225626LL;
      }
    }
    RtlCopyUnicodeString(&v61->FileName, v64);
    if ( *(_BYTE *)(a8 + 137) )
    {
      v222[0] = 0;
      LOBYTE(PreviouslyGrantedAccess) = a4;
      v67 = v238;
      AccessStatus = IopQueryInformation(a8, *(_QWORD *)v228, v56, v238, PreviouslyGrantedAccess, v222);
      if ( AccessStatus < 0 || v222[0] )
      {
        v69 = *(_DWORD *)(v56 + 48);
        *(_DWORD *)(a8 + 16) = v69;
        *(_QWORD *)(a8 + 24) = *(_QWORD *)(v56 + 56);
        if ( v69 == 260 )
        {
          v202 = *(void **)(v56 + 160);
          if ( v202 )
          {
            ExFreePoolWithTag(v202, 0);
            *(_QWORD *)(v56 + 160) = 0LL;
            *(_QWORD *)(a8 + 40) = 0LL;
          }
        }
        if ( v61->FileName.Length )
          ExFreePoolWithTag(v61->FileName.Buffer, 0);
        IopDeleteFileObjectExtension((__int64)v61, v68);
        v70 = BugCheckParameter1;
        goto LABEL_124;
      }
      PsGetCurrentServerSiloGlobals();
      if ( v61->FileName.Length != SourceString->Length
        || memcmp(v61->FileName.Buffer, SourceString->Buffer, v61->FileName.Length) )
      {
        Buffer = v61->FileName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          RtlInitUnicodeString(&v61->FileName, 0LL);
        }
        v81 = SourceString;
        v82 = SourceString->Length;
        if ( SourceString->Length )
        {
          if ( v82 < 0x38u )
          {
            v82 = 56;
          }
          else if ( v82 >= 0x78u )
          {
            if ( v82 < 0xF8u )
              v82 = 248;
          }
          else
          {
            v82 = 120;
          }
          v61->FileName.MaximumLength = v82;
          v83 = ExAllocatePool2(0x100uLL);
          v61->FileName.Buffer = (wchar_t *)v83;
          if ( !v83 )
          {
            IopDeleteFileObjectExtension((__int64)v61, v84);
            IopDecrementDeviceObjectRef(BugCheckParameter1, 0LL, 0LL);
            if ( v233 )
              IopDereferenceVpbAndFree(v233, v185, v186);
            IoFreeIrp((PIRP)v56);
            return 3221225626LL;
          }
          RtlCopyUnicodeString(&v61->FileName, v81);
        }
      }
      v85 = BugCheckParameter1;
      v86 = *(struct _DEVICE_OBJECT **)v228;
      AccessStatus = IopAllocRealFileObject(
                       (unsigned int)&Object,
                       v228[0],
                       BugCheckParameter1,
                       a5,
                       a4,
                       a8,
                       v246,
                       1,
                       v229);
      if ( AccessStatus < 0 )
      {
        v88 = Object;
        if ( *((_WORD *)Object + 44) )
          ExFreePoolWithTag(*((PVOID *)Object + 12), 0);
        IopDeleteFileObjectExtension((__int64)v88, v87);
        v70 = v85;
LABEL_124:
        IopDecrementDeviceObjectRef(v70, 0LL, 0LL);
        if ( v233 )
          IopDereferenceVpbAndFree(v233, v71, v72);
        IoFreeIrp((PIRP)v56);
        return (unsigned int)AccessStatus;
      }
      v61 = (struct _FILE_OBJECT *)Object;
      v67[2].Privilege[0].Luid = (LUID)Object;
      *(_QWORD *)(v56 + 192) = v61;
      v64 = SourceString;
    }
    else
    {
      v86 = *(struct _DEVICE_OBJECT **)v228;
    }
    if ( !*(_DWORD *)(a8 + 120) )
    {
      v117 = *(_DWORD *)(v56 + 16) & 0x80;
      if ( v117 )
      {
        v118 = *(struct _ECP_LIST **)(v56 + 112);
        v235 = v118;
      }
      else
      {
        v118 = v235;
      }
      v119 = -1073741811;
      if ( v117 )
        v119 = 0;
      AccessStatus = v119;
      if ( v118 )
      {
        if ( IopSymlinkGetECP(v118, (PVOID *)&Size[1]) != -1073741275 )
        {
          MostRecentlyUsedName = IopSymlinkGetMostRecentlyUsedName(*(__int64 *)&Size[1]);
          if ( !*(_WORD *)(MostRecentlyUsedName + 4) )
          {
            updated = IopSymlinkUpdateECP(
                        (PIRP)v56,
                        AbsoluteObjectName->Length - v64->Length,
                        *(_WORD *)(MostRecentlyUsedName + 2));
            AccessStatus = updated;
            if ( updated < 0 )
            {
              *(_DWORD *)(v56 + 48) = updated;
              *(_QWORD *)(v56 + 56) = 0LL;
              v15 &= ~4u;
            }
          }
        }
      }
    }
    KeInitializeEvent(&v61->Event, NotificationEvent, 0);
    *(_QWORD *)(a8 + 8) = v61;
    if ( (v15 & 4) != 0 )
    {
      IopQueueThreadIrp(v56, v120);
      if ( *(char *)(v56 + 71) >= 0 && (v121 = *(_QWORD *)(v56 + 200)) != 0 && (*(_BYTE *)v121 & 2) != 0 )
      {
        Src = 0LL;
        Src = *(struct _LIST_ENTRY *)(v121 + 24);
        v150 = IoSetActivityIdThread(&Src);
        v122 = IofCallDriver(*(PDEVICE_OBJECT *)v228, (PIRP)v56);
        IoSetActivityIdThread(v150);
      }
      else
      {
        v122 = IofCallDriver(v86, (PIRP)v56);
      }
      AccessStatus = v122;
    }
    else
    {
      v122 = AccessStatus;
    }
    if ( v122 == 259 )
    {
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 )
        v15 &= ~0x80u;
      else
        v15 |= 0x80u;
      while ( 1 )
      {
        AccessStatus = KeWaitForSingleObject(&v61->Event, Executive, 0, v15 >> 7, 0LL);
        if ( AccessStatus != 257 )
          break;
        CurrentIrql = (struct _LIST_ENTRY *)KeGetCurrentIrql();
        Src.Flink = CurrentIrql;
        if ( (_BYTE)CurrentIrql != 1 )
          __writecr8(1uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v120) = 1;
          KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, v120);
          LOBYTE(CurrentIrql) = Src.Flink;
        }
        if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0
          || !v61->Event.Header.SignalState && *(_BYTE *)(v56 + 68) )
        {
          if ( KiIrqlFlags )
          {
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)CurrentIrql);
            LOBYTE(CurrentIrql) = Src.Flink;
          }
          __writecr8((unsigned __int8)CurrentIrql);
          IopCancelAlertedRequest(&v61->Event, (PIRP)v56);
          break;
        }
        if ( KiIrqlFlags )
        {
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)CurrentIrql);
          LOBYTE(CurrentIrql) = Src.Flink;
        }
        __writecr8((unsigned __int8)CurrentIrql);
      }
      AccessStatus = BugCheckParameter4[0];
    }
    v123 = *(_DWORD *)(v56 + 16) & 0x80;
    if ( v123 )
    {
      v124 = *(struct _ECP_LIST **)(v56 + 112);
      v235 = v124;
    }
    else
    {
      v124 = v235;
    }
    v125 = -1073741811;
    if ( v123 )
      v125 = 0;
    AccessStatus = v125;
    v126 = *(_DWORD *)(a8 + 84) & 8;
    v127 = v126 != 0;
    if ( *(_DWORD *)(v56 + 48) == 260 )
    {
      P = *(PVOID *)(v56 + 160);
      if ( v124 && IopSymlinkGetECP(v124, (PVOID *)&Size[1]) != -1073741275 )
        goto LABEL_330;
      AccessStatus = IopSymlinkCreateECP((PIRP)v56, (__int64)&Size[1]);
      if ( AccessStatus < 0 )
      {
        *(_QWORD *)(v56 + 56) = 0LL;
        *(_DWORD *)(v56 + 48) = AccessStatus;
        goto LABEL_330;
      }
      v140 = (__int64)v235;
      if ( !v235 )
      {
        v141 = *(_DWORD *)(v56 + 16) & 0x80;
        if ( v141 )
          v235 = *(struct _ECP_LIST **)(v56 + 112);
        v142 = -1073741811;
        if ( v141 )
          v142 = 0;
        AccessStatus = v142;
LABEL_330:
        v140 = (__int64)v235;
      }
      if ( *(_DWORD *)(v56 + 48) != 260 )
        goto LABEL_283;
      v106 = v126 == 0;
      v143 = P;
      if ( !v106 && v140 )
        v127 = IopCheckAndUpdateStopOnSymlinkEcp(v140, *(_DWORD *)(v56 + 56), (__int64)P);
      IopSymlinkProcessReparse((PIRP)v56);
      v144 = *(_QWORD *)(v56 + 56);
      if ( v144 != 2684354563LL && v144 != 2684354572LL && v144 != 2684354585LL )
        goto LABEL_283;
      if ( *(int *)(v56 + 48) >= 0 )
      {
        v120 = *((unsigned __int16 *)v143 + 3);
        v145 = 0;
        if ( !(_WORD)v120 )
          v145 = 16;
        v15 = v15 & 0xEF | v145;
        if ( !(_WORD)v120 || *(wchar_t *)((char *)SourceString->Buffer + SourceString->Length - v120) == 58 )
        {
          v173 = *(_DWORD *)(a8 + 64);
          if ( (v173 & 0x41) == 0 && !LOBYTE(v238->PrivilegeCount) )
          {
            if ( *v143 == -1610612733 )
              goto LABEL_530;
            if ( *v143 != -1610612724 )
              goto LABEL_339;
            if ( (int)v143[4] < 0 )
            {
LABEL_530:
              v174 = v173 | 1;
LABEL_436:
              *(_DWORD *)(a8 + 64) = v174;
            }
            else if ( (v143[4] & 0x40000000) != 0 )
            {
              v174 = v173 | 0x40;
              goto LABEL_436;
            }
          }
        }
      }
LABEL_339:
      if ( !v127 )
      {
        ExFreePoolWithTag(v143, 0);
        P = 0LL;
      }
    }
LABEL_283:
    if ( *(_DWORD *)(v56 + 48) || *(_DWORD *)(a8 + 120) )
    {
      v128 = *(PDEVICE_OBJECT *)v228;
    }
    else
    {
      AccessStatus = IopSymlinkPropagateToExtensionIfNeeded(v61, v235, AbsoluteObjectName);
      v128 = *(PDEVICE_OBJECT *)v228;
      if ( AccessStatus < 0 )
      {
        IoCancelFileOpen(*(PDEVICE_OBJECT *)v228, v61);
        *(_QWORD *)(v56 + 56) = 0LL;
        *(_DWORD *)(v56 + 48) = AccessStatus;
      }
    }
    if ( v235 )
      *(_QWORD *)(a8 + 168) = v235;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)(v56 + 48);
    AccessStatus = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    v61->Event.Header.SignalState = 1;
    if ( (v15 & 4) != 0 )
    {
      *(_QWORD *)(v56 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v56, v120);
    }
    if ( (*(_BYTE *)(v56 + 16) & 0x30) == 0x30 )
      ExFreePoolWithTag(*(PVOID *)(v56 + 24), 0);
    IoFreeIrp((PIRP)v56);
    v129 = BugCheckParameter4[1];
    *(_QWORD *)(a8 + 24) = BugCheckParameter4[1];
    if ( AccessStatus < 0 )
    {
      if ( (v61->Flags & 0x200000) != 0 )
      {
        ObfDereferenceObject(v61);
      }
      else
      {
        if ( v61->FileName.Length )
        {
          ExFreePoolWithTag(v61->FileName.Buffer, 0);
          v61->FileName.Length = 0;
        }
        v61->DeviceObject = 0LL;
        ObfDereferenceObject(v61);
        IopDecrementDeviceObjectRef(BugCheckParameter1, 0LL, 0LL);
        if ( v233 )
          IopDereferenceVpbAndFree(v233, v195, v196);
      }
      *(_QWORD *)(a8 + 8) = 0LL;
      result = (unsigned int)AccessStatus;
      *(_DWORD *)(a8 + 16) = AccessStatus;
      return result;
    }
    if ( AccessStatus != 260 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject(v61);
      if ( v128 != RelatedDeviceObject )
      {
        Vpb = (ULONG_PTR)v61->Vpb;
        v205 = v233;
        if ( Vpb != v233 )
        {
          if ( Vpb )
            IopIncrementVpbRefCount(Vpb, 1);
          if ( v205 )
            IopDereferenceVpbAndFree(v205, v130, v131);
        }
      }
      if ( (v15 & 0x40) == 0 )
      {
        *v244 = v61;
        *(_DWORD *)(a8 + 32) = -1096154543;
        PsReferenceSiloContext(v61);
        v146 = v61->RelatedFileObject;
        if ( (!v146 || (v146->Flags & 0x400000) != 0) && !v61->FileName.Length )
        {
          v151 = RelatedDeviceObject->DeviceType;
          if ( v151 == 9 || v151 == 3 || v151 == 8 || v151 == 32 )
            v61->Flags |= 0x400000u;
        }
        result = LODWORD(BugCheckParameter4[0]);
        *(_DWORD *)(a8 + 16) = BugCheckParameter4[0];
        return result;
      }
      if ( *(_BYTE *)(a8 + 137) )
      {
        if ( *(_BYTE *)(a8 + 208) )
        {
          XxxInformation = IopQueryXxxInformation((ULONG_PTR)v61, *(_QWORD *)(a8 + 112), a8 + 204, 1);
        }
        else
        {
          v133 = 0;
          DriverObject = RelatedDeviceObject->DriverObject;
          FastIoDispatch = DriverObject->FastIoDispatch;
          if ( !*(_BYTE *)(a8 + 139) )
          {
            *(_QWORD *)&Size[1] = 0LL;
            if ( FastIoDispatch )
              FastIoQueryBasicInfo = (ULONG_PTR)FastIoDispatch->FastIoQueryBasicInfo;
            else
              FastIoQueryBasicInfo = 0LL;
            v244 = (_QWORD *)FastIoQueryBasicInfo;
            if ( FastIoQueryBasicInfo )
            {
              v137 = (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject)
                   ? (void *)VfFastIoSnapState(DriverObject)
                   : 0LL;
              v252 = v137;
              LOBYTE(v130) = 1;
              v133 = guard_dispatch_icall_no_overrides((__int64)v61, v130);
              v240 = v133;
              if ( v137 )
                VfFastIoCheckState(v137, FastIoQueryBasicInfo);
            }
            if ( v133 )
            {
              AccessStatus = BugCheckParameter4[0];
            }
            else
            {
              v138 = (void *)ExAllocatePool2(0x40uLL);
              *(_QWORD *)&Size[1] = v138;
              if ( v138 )
              {
                AccessStatus = IopQueryXxxInformation((ULONG_PTR)v61, (__int64)v138, (__int64)Size, 1);
                if ( AccessStatus >= 0 )
                {
                  v139 = *(void **)(a8 + 96);
                  if ( a4 )
                    RtlCopyToUser(v139, v138, Size[0]);
                  else
                    RtlCopyVolatileMemory(v139, v138, Size[0]);
                }
                ExFreePoolWithTag(v138, 0);
              }
              else
              {
                AccessStatus = -1073741670;
              }
            }
            goto LABEL_318;
          }
          if ( FastIoDispatch )
          {
            if ( FastIoDispatch->SizeOfFastIoDispatch > 0x70 )
            {
              BugCheckParameter2a = (ULONG_PTR)FastIoDispatch->FastIoQueryNetworkOpenInfo;
              if ( BugCheckParameter2a )
              {
                v217 = (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject)
                     ? (void *)VfFastIoSnapState(DriverObject)
                     : 0LL;
                LOBYTE(v130) = 1;
                v218 = BugCheckParameter2a;
                v133 = guard_dispatch_icall_no_overrides((__int64)v61, v130);
                if ( v217 )
                  VfFastIoCheckState(v217, v218);
              }
            }
          }
          if ( v133 )
            goto LABEL_318;
          v219 = IopQueryXxxInformation((ULONG_PTR)v61, *(_QWORD *)(a8 + 104), (__int64)Size, 1);
          AccessStatus = v219;
          if ( v219 != -1073741822 && v219 != -1073741811 )
            goto LABEL_318;
          XxxInformation = IopGetNetworkOpenInformation((ULONG_PTR)v61);
        }
        AccessStatus = XxxInformation;
      }
LABEL_318:
      *(_DWORD *)(a8 + 32) = -1096154543;
      IopCloseFile(0LL, v61, 1LL, 1LL, 0LL);
      ObfDereferenceObject(v61);
      *(_QWORD *)(a8 + 8) = 0LL;
      result = (unsigned int)AccessStatus;
      *(_DWORD *)(a8 + 16) = AccessStatus;
      return result;
    }
    if ( (v129 & 0xFFFFFFFFFFFFFFFDuLL) == 0
      || (v158 = v129 - 2684354563u, v129 - 2684354563u <= 0x16) && (v159 = 4194817LL, _bittest64(&v159, v158)) && !v127 )
    {
      v160 = AbsoluteObjectName;
      if ( AbsoluteObjectName->MaximumLength < v61->FileName.Length )
      {
        v161 = (wchar_t *)ExAllocatePool2(0x100uLL);
        if ( !v161 )
        {
          *(_DWORD *)(a8 + 16) = -1073741670;
          return 3221225626LL;
        }
        v162 = AbsoluteObjectName->Buffer;
        if ( v162 )
          ExFreePoolWithTag(v162, 0);
        v160 = AbsoluteObjectName;
        AbsoluteObjectName->Buffer = v161;
        v160->MaximumLength = v61->FileName.Length;
      }
      RtlCopyUnicodeString(v160, &v61->FileName);
      if ( BugCheckParameter4[1] - 2684354563u <= 0x16 )
      {
        v163 = 4194817LL;
        if ( _bittest64(&v163, BugCheckParameter4[1] - 2684354563u) )
          *(_QWORD *)(a8 + 40) = 0LL;
      }
    }
    if ( v61->FileName.Length )
    {
      ExFreePoolWithTag(v61->FileName.Buffer, 0);
      v61->FileName.Length = 0;
    }
    v61->DeviceObject = 0LL;
    ObfDereferenceObject(v61);
    *(_QWORD *)(a8 + 8) = 0LL;
    v164 = BugCheckParameter1;
    IopDecrementDeviceObjectRef(BugCheckParameter1, 0LL, 0LL);
    if ( v233 )
      IopDereferenceVpbAndFree(v233, v165, v166);
    v167 = BugCheckParameter4[1];
    if ( BugCheckParameter4[1] != 1 )
    {
      *(_QWORD *)(a8 + 40) = 0LL;
      v168 = 4194817LL;
      if ( v167 - 2684354563u <= 0x16 && _bittest64(&v168, v167 - 2684354563u) )
      {
        v169 = *(_DWORD *)(a8 + 152) | 0x10;
        *(_DWORD *)(a8 + 152) = v169;
        v170 = *(unsigned int *)(v164 + 72);
        if ( (_DWORD)v170 == 7 || (unsigned int)v170 <= 0x24 && (v203 = 0x1080020004LL, _bittest64(&v203, v170)) )
          v172 = v169 | 8;
        else
          v172 = v169 & 0xFFFFFFF7;
        *(_DWORD *)(a8 + 152) = v172;
      }
      if ( *(_BYTE *)(a8 + 136) )
        KeBugCheckEx(0xF9u, v164, *(ULONG_PTR *)v228, (ULONG_PTR)AbsoluteObjectName, v167);
      if ( (*(_DWORD *)(*(_QWORD *)(v164 + 312) + 32LL) & 0x800) == 0 )
      {
        v212 = AccessState;
        *(_QWORD *)&AccessState->RemainingDesiredAccess = AccessState->OriginalDesiredAccess;
        v212->Flags &= ~0x100u;
      }
      if ( v167 - 2684354563u <= 0x16 && _bittest64(&v168, v167 - 2684354563u) && v127 )
      {
        *(_QWORD *)(a8 + 24) = P;
        *(_DWORD *)(a8 + 16) = -2147483603;
        return 2147483693LL;
      }
      else if ( v167 == 2 || v167 == 2684354585 )
      {
        v213 = v246;
        *(_QWORD *)(v213 + 8) = PsGetParentSilo(*(_QWORD *)(v246 + 8));
        return 872LL;
      }
      else
      {
        return 260LL;
      }
    }
    if ( (unsigned int)++v243 > 0x20 )
      return 3221225473LL;
    v12 = AccessState;
    v11 = a4;
    v14 = v244;
    AttachedDevice = (struct _DEVICE_OBJECT *)v247;
  }
  IopDereferenceVpbAndFree(v48, v52, v47);
LABEL_427:
  AttachedDevice = (struct _DEVICE_OBJECT *)v51;
LABEL_428:
  IopDecrementDeviceObjectRef((ULONG_PTR)AttachedDevice, 0LL, 0LL);
  return 3221225506LL;
}
