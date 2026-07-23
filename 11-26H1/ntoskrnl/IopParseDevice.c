/*
 * XREFs of IopParseDevice @ 0x140930850
 * Callers:
 *     ObpLookupObjectName @ 0x14092E280 (ObpLookupObjectName.c)
 *     IopParseFile @ 0x140A86A00 (IopParseFile.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     PsIsServerSilo @ 0x140216B68 (PsIsServerSilo.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     IopGetDevicePDO @ 0x14026E760 (IopGetDevicePDO.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1402F9EB0 (IopVerifyDeviceObjectOnStack.c)
 *     IopDecrementDeviceObjectRef @ 0x1402FD820 (IopDecrementDeviceObjectRef.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     IopDequeueIrpFromThread @ 0x1403311D0 (IopDequeueIrpFromThread.c)
 *     MmIsDriverVerifying @ 0x1403C18E0 (MmIsDriverVerifying.c)
 *     IopDeleteFileObjectExtension @ 0x1403DE990 (IopDeleteFileObjectExtension.c)
 *     PsReleaseSiloHardReference @ 0x1403DEE00 (PsReleaseSiloHardReference.c)
 *     SeFastTraverseCheck @ 0x14040500C (SeFastTraverseCheck.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     SepPrivilegeCheck @ 0x14041BFB0 (SepPrivilegeCheck.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PsGetCurrentProcessSessionId @ 0x1404261F0 (PsGetCurrentProcessSessionId.c)
 *     IopCheckSessionDeviceAccess @ 0x14043FA30 (IopCheckSessionDeviceAccess.c)
 *     IopCheckVpbMounted @ 0x1404429F8 (IopCheckVpbMounted.c)
 *     IopIncrementVpbRefCount @ 0x140442B40 (IopIncrementVpbRefCount.c)
 *     IoGetAttachedDevice @ 0x1404472B0 (IoGetAttachedDevice.c)
 *     RtlGetActiveConsoleId @ 0x140449060 (RtlGetActiveConsoleId.c)
 *     IopGetSetSpecificExtension @ 0x14044D490 (IopGetSetSpecificExtension.c)
 *     ObReferenceObjectByPointer @ 0x140458E50 (ObReferenceObjectByPointer.c)
 *     IoGetSilo @ 0x140459220 (IoGetSilo.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IopDereferenceVpbAndFree @ 0x140463630 (IopDereferenceVpbAndFree.c)
 *     IopAllocateFileObjectExtensionSlow @ 0x1404652C0 (IopAllocateFileObjectExtensionSlow.c)
 *     PsIsHostSilo @ 0x140467DB0 (PsIsHostSilo.c)
 *     IopSymlinkGetECP @ 0x14047CDCC (IopSymlinkGetECP.c)
 *     PsGetServerSiloServiceSessionId @ 0x140480B10 (PsGetServerSiloServiceSessionId.c)
 *     PsAcquireSiloHardReference @ 0x140488E40 (PsAcquireSiloHardReference.c)
 *     IoSetActivityIdThread @ 0x14048B360 (IoSetActivityIdThread.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     IopCreateSecurityCheck @ 0x14049D38C (IopCreateSecurityCheck.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x1404A8D40 (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopCheckStackForTransactionSupport @ 0x1404EC70C (IopCheckStackForTransactionSupport.c)
 *     IopAllowRemoteDASD @ 0x1404FEC38 (IopAllowRemoteDASD.c)
 *     IopCheckDeviceAndDriver @ 0x140516280 (IopCheckDeviceAndDriver.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopCheckAndUpdateStopOnSymlinkEcp @ 0x14077D350 (IopCheckAndUpdateStopOnSymlinkEcp.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     SeLockSubjectContext @ 0x1408F4CE0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408F4D40 (SeUnlockSubjectContext.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14090B0A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     IopAllocRealFileObject @ 0x14090F390 (IopAllocRealFileObject.c)
 *     IopRetrieveTransactionParameters @ 0x14090FE6C (IopRetrieveTransactionParameters.c)
 *     SeTokenIsAdmin @ 0x1409238F0 (SeTokenIsAdmin.c)
 *     IopQueryInformation @ 0x140933218 (IopQueryInformation.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140933444 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x140933530 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IoCancelFileOpen @ 0x1409337C0 (IoCancelFileOpen.c)
 *     SeAppendPrivileges @ 0x1409338F0 (SeAppendPrivileges.c)
 *     IopSymlinkCreateECP @ 0x140933B10 (IopSymlinkCreateECP.c)
 *     IopSymlinkProcessReparse @ 0x14093415C (IopSymlinkProcessReparse.c)
 *     IopSymlinkUpdateECP @ 0x1409347F8 (IopSymlinkUpdateECP.c)
 *     SepConcatenatePrivileges @ 0x140934F50 (SepConcatenatePrivileges.c)
 *     PsGetParentSilo @ 0x14093AD80 (PsGetParentSilo.c)
 *     IopQueryXxxInformation @ 0x140989BF0 (IopQueryXxxInformation.c)
 *     IopCloseFile @ 0x140A285C0 (IopCloseFile.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x140ACA6B8 (IopSymlinkEnforceEnabledTypes.c)
 *     IopCancelAlertedRequest @ 0x140B21254 (IopCancelAlertedRequest.c)
 *     IopGetNetworkOpenInformation @ 0x140B534BC (IopGetNetworkOpenInformation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     VfFastIoCheckState @ 0x140C4DF34 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140C4E25C (VfFastIoSnapState.c)
 */

__int64 __fastcall IopParseDevice(
        struct _DEVICE_OBJECT *BugCheckParameter2,
        POBJECT_TYPE *a2,
        struct _ACCESS_STATE *a3,
        unsigned __int8 a4,
        int a5,
        UNICODE_STRING *a6,
        const UNICODE_STRING *a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10,
        _QWORD *a11)
{
  unsigned __int8 v11; // di
  PACCESS_STATE v12; // rsi
  struct _DEVICE_OBJECT *AttachedDevice; // r13
  _QWORD *v14; // r12
  unsigned __int8 v15; // bl
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // r9
  int RemainingDesiredAccess; // eax
  int OriginalDesiredAccess; // eax
  ACCESS_MASK v24; // r12d
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
  PERESOURCE *v40; // rcx
  char v41; // al
  unsigned __int8 v42; // bl
  __int64 v43; // r8
  __int64 v44; // r12
  __int64 v45; // rdx
  __int64 v46; // rax
  ULONG_PTR v47; // rsi
  __int64 v48; // rdx
  int v49; // eax
  PACCESS_STATE v50; // rdi
  __int64 Irp; // rax
  __int64 v52; // r9
  __int64 v53; // rsi
  unsigned int v54; // edx
  PPRIVILEGE_SET v55; // rdi
  int v56; // eax
  char v57; // al
  struct _FILE_OBJECT *v58; // r12
  __int64 v59; // rax
  struct _LIST_ENTRY *v60; // rax
  const UNICODE_STRING *v61; // r13
  unsigned __int16 Length; // ax
  __int64 v63; // rax
  PPRIVILEGE_SET v64; // r13
  __int64 v65; // rdx
  int v66; // ecx
  __int64 v67; // r9
  ULONG_PTR v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // r8
  ULONG_PTR v71; // rax
  int Flink; // edi
  __int64 ClientToken; // rcx
  PVOID *AuxData; // r12
  _DWORD *v75; // rsi
  int v76; // ecx
  __int64 v77; // rcx
  wchar_t *Buffer; // rcx
  const UNICODE_STRING *v79; // rdi
  unsigned __int16 v80; // ax
  __int64 v81; // rax
  __int64 v82; // rdx
  ULONG_PTR v83; // r12
  struct _DEVICE_OBJECT *v84; // rdi
  __int64 v85; // rdx
  PVOID v86; // rbx
  _QWORD *v87; // rdi
  NTSTATUS SetSpecificExtension; // edi
  __int64 *v89; // rdi
  __int64 RelatedFileObject; // rcx
  unsigned __int64 DeviceType; // rax
  NTSTATUS v92; // eax
  __int64 v93; // rdx
  __int64 v94; // r8
  struct _LIST_ENTRY *FileObjectExtension; // rax
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // r8
  PVOID v102; // rcx
  bool v103; // si
  PACCESS_STATE v104; // rdi
  char v105; // bl
  bool v106; // zf
  ACCESS_MASK v107; // eax
  ULONG_PTR v108; // rdi
  BOOLEAN v109; // di
  struct _LIST_ENTRY *v110; // rdi
  NTSTATUS v111; // eax
  struct _LIST_ENTRY *v112; // r13
  int v113; // ecx
  struct _ECP_LIST *v114; // r8
  NTSTATUS v115; // eax
  __int64 v116; // rdx
  __int64 v117; // rcx
  NTSTATUS v118; // r13d
  int v119; // ecx
  struct _ECP_LIST *v120; // r8
  NTSTATUS v121; // eax
  int v122; // edi
  bool v123; // r13
  __int64 v124; // rdi
  ULONG_PTR v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  char v129; // si
  struct _DRIVER_OBJECT *DriverObject; // rdi
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  ULONG_PTR FastIoQueryBasicInfo; // rbx
  void *v133; // rdi
  void *v134; // rbx
  void *v135; // rcx
  __int64 v136; // rax
  int v137; // ecx
  NTSTATUS v138; // eax
  _DWORD *v139; // rdi
  __int64 v140; // rax
  char v141; // cl
  struct _FILE_OBJECT *v142; // rax
  unsigned __int64 v143; // rcx
  __int64 MostRecentlyUsedName; // rax
  NTSTATUS updated; // eax
  struct _LIST_ENTRY *v146; // rdi
  ULONG v147; // eax
  bool v148; // al
  __int64 v149; // r9
  __int64 v150; // rdx
  __int64 v151; // r8
  __int64 v152; // rdi
  unsigned __int64 v153; // rax
  __int64 v154; // rcx
  unsigned __int64 v155; // rax
  __int64 v156; // rcx
  PUNICODE_STRING v157; // rcx
  wchar_t *v158; // rsi
  wchar_t *v159; // rcx
  __int64 v160; // rax
  ULONG_PTR v161; // rsi
  __int64 v162; // r9
  __int64 v163; // rdx
  __int64 v164; // r8
  ULONG_PTR v165; // rdx
  __int64 v166; // r8
  int v167; // ecx
  unsigned __int64 v168; // rax
  unsigned int v170; // ecx
  int v171; // ecx
  int v172; // ecx
  __int64 Silo; // rax
  void *v174; // rdi
  _DWORD *v175; // rdx
  unsigned int v176; // eax
  __int64 v177; // rdx
  __int64 v178; // rax
  __int64 *v179; // rdi
  __int64 *v180; // rcx
  __int64 v181; // rax
  int v182; // eax
  __int64 v183; // r9
  __int64 v184; // rdx
  __int64 v185; // r8
  struct _LIST_ENTRY *CurrentIrql; // r8
  char v187; // al
  void *Pool2; // rdi
  _DWORD *v189; // rdx
  unsigned int v190; // eax
  __int64 v191; // rdx
  __int64 v192; // r9
  __int64 v193; // rdx
  __int64 v194; // r8
  __int64 v195; // r9
  __int64 v196; // rdx
  __int64 v197; // r8
  unsigned __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // edi
  _DWORD *DevicePDO; // rax
  void *v201; // rdi
  __int64 v202; // r9
  __int64 v203; // rdx
  void *v204; // rcx
  __int64 v205; // r10
  ULONG_PTR Vpb; // rcx
  __int64 v207; // rdi
  void *v208; // rax
  ULONG ActiveConsoleId; // edi
  unsigned __int64 v210; // rax
  int v211; // edi
  __int64 v212; // rax
  void *v213; // r13
  PACCESS_STATE v214; // rcx
  __int64 *v215; // rbx
  PACCESS_TOKEN v216; // rcx
  __int64 v217; // rcx
  __int64 v218; // r9
  NTSTATUS XxxInformation; // eax
  void *v220; // rbx
  ULONG_PTR v221; // rdi
  NTSTATUS v222; // eax
  int PreviouslyGrantedAccess; // [rsp+20h] [rbp-188h]
  char v225[3]; // [rsp+61h] [rbp-147h] BYREF
  NTSTATUS AccessStatus; // [rsp+64h] [rbp-144h] BYREF
  unsigned __int8 v227; // [rsp+68h] [rbp-140h]
  char v228; // [rsp+69h] [rbp-13Fh]
  PACCESS_STATE AccessState; // [rsp+70h] [rbp-138h]
  ULONG_PTR BugCheckParameter1; // [rsp+78h] [rbp-130h]
  NTSTATUS v231[2]; // [rsp+80h] [rbp-128h] BYREF
  unsigned int v232; // [rsp+88h] [rbp-120h]
  int v233; // [rsp+8Ch] [rbp-11Ch]
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp-118h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+98h] [rbp-110h]
  __int64 v236; // [rsp+A0h] [rbp-108h]
  PPRIVILEGE_SET Privileges; // [rsp+A8h] [rbp-100h] BYREF
  struct _ECP_LIST *v238; // [rsp+B0h] [rbp-F8h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-F0h]
  PUNICODE_STRING AbsoluteObjectName; // [rsp+C0h] [rbp-E8h]
  PPRIVILEGE_SET v241; // [rsp+C8h] [rbp-E0h] BYREF
  PVOID Object; // [rsp+D0h] [rbp-D8h] BYREF
  char v243; // [rsp+D8h] [rbp-D0h]
  _DWORD Size[3]; // [rsp+DCh] [rbp-CCh] BYREF
  PVOID P; // [rsp+E8h] [rbp-C0h]
  int v246; // [rsp+F0h] [rbp-B8h]
  _QWORD *v247; // [rsp+F8h] [rbp-B0h]
  ULONG_PTR BugCheckParameter4[2]; // [rsp+100h] [rbp-A8h] BYREF
  __int64 *v249; // [rsp+110h] [rbp-98h]
  ULONG_PTR v250; // [rsp+118h] [rbp-90h]
  ULONG_PTR BugCheckParameter2a; // [rsp+120h] [rbp-88h]
  UNICODE_STRING ObjectTypeName; // [rsp+128h] [rbp-80h] BYREF
  __int128 v253; // [rsp+138h] [rbp-70h] BYREF
  __int64 v254; // [rsp+148h] [rbp-60h]
  void *v255; // [rsp+150h] [rbp-58h]
  struct _LIST_ENTRY Src; // [rsp+158h] [rbp-50h] BYREF
  int v257; // [rsp+168h] [rbp-40h]

  v11 = a4;
  v12 = a3;
  AccessState = a3;
  AttachedDevice = BugCheckParameter2;
  v250 = (ULONG_PTR)BugCheckParameter2;
  AbsoluteObjectName = a6;
  SourceString = a7;
  BugCheckParameter2a = a8;
  v249 = a10;
  v14 = a11;
  v247 = a11;
  GrantedAccess = 0;
  AccessStatus = 0;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  v253 = 0LL;
  v254 = 0LL;
  v246 = 0;
  LOBYTE(v233) = 0;
  memset(Size, 0, sizeof(Size));
  ObjectTypeName = 0LL;
  Privileges = 0LL;
  P = 0LL;
  v238 = 0LL;
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
      v208 = (void *)v250;
      *(_QWORD *)(a8 + 40) = v250;
      *(_DWORD *)(a8 + 16) = 0;
      PsReferenceSiloContext(v208);
      return 0LL;
    }
    if ( (*(_DWORD *)(a8 + 152) & 0x10) != 0 )
    {
      v143 = *(unsigned int *)(v250 + 72);
      if ( *(_QWORD *)(a8 + 24) == 2684354563LL )
      {
        if ( (_DWORD)v143 != 7 && ((unsigned int)v143 > 0x24 || !_bittest64(&v17, v143)) )
          goto LABEL_601;
      }
      else
      {
        LOBYTE(v18) = (_DWORD)v143 == 7 || (unsigned int)v143 <= 0x24 && _bittest64(&v17, v143);
        v148 = (unsigned int)v143 <= 0x28 && _bittest64(&v16, v143) || (_DWORD)v143 == 54 || (_DWORD)v143 == 53;
        if ( !(_BYTE)v18 && !v148 )
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
      v71 = (ULONG_PTR)AttachedDevice;
      do
      {
        if ( *(_QWORD *)(v71 + 56) )
          break;
        v71 = *(_QWORD *)(v71 + 24);
      }
      while ( v71 );
      if ( v71 && (struct _DEVICE_OBJECT *)v71 != AttachedDevice )
      {
        AttachedDevice = (struct _DEVICE_OBJECT *)v71;
        BugCheckParameter1 = v71;
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
        v201 = DevicePDO;
        if ( DevicePDO )
        {
          if ( !IopCheckSessionDeviceAccess((__int64)DevicePDO) )
          {
            ObfDereferenceObject(v201);
            IopDecrementDeviceObjectRef((ULONG_PTR)AttachedDevice, 0LL, 0LL, v202);
            *(_DWORD *)(a8 + 16) = -1073741790;
            return 3221225506LL;
          }
          ObfDereferenceObject(v201);
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
    v24 = v12->RemainingDesiredAccess;
    v232 = v24;
    LOBYTE(v21) = v11 || (*(_DWORD *)(a8 + 84) & 1) != 0;
    v227 = v21;
    v25 = *(_DWORD *)(a8 + 88);
    Src = 0LL;
    v257 = 0;
    v228 = 0;
    v26 = 0;
    Flags = v12->Flags;
    if ( (Flags & 0x100) == 0 && (*(_DWORD *)(a8 + 64) & 0x4000) != 0 )
    {
      v12->Flags = Flags | 0x100;
      v28 = v24;
      if ( (v24 & 0x2000000) != 0 )
        v28 = v24 | 0x11F01BF;
      if ( ((v25 - 1) & 0xFFFFFFF9) != 0 || v25 == 7 )
      {
        v26 = 1;
        goto LABEL_51;
      }
      v231[0] = v28 & 0x11200A9;
      if ( (v28 & 0x11200A9) == 0 )
      {
LABEL_51:
        if ( (v28 & 0x11F0116) == 0 && !v26 )
        {
LABEL_53:
          AttachedDevice = (struct _DEVICE_OBJECT *)BugCheckParameter1;
          v24 = v232;
          v11 = a4;
          if ( !v228 )
            *(_DWORD *)(a8 + 64) &= ~0x4000u;
          goto LABEL_55;
        }
        Flink = 1;
        Src.Flink = (struct _LIST_ENTRY *)0x100000001LL;
        Src.Blink = (struct _LIST_ENTRY *)SeRestorePrivilege;
        v257 = 0;
        if ( (_BYTE)v21 )
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
          if ( !SepPrivilegeCheck(ClientToken, (__int64)&Src.Blink, 1u, 1, v21) )
            goto LABEL_53;
          Flink = (int)Src.Flink;
        }
        v228 = 1;
        AuxData = (PVOID *)v12->AuxData;
        v75 = *AuxData;
        v76 = *(_DWORD *)*AuxData;
        if ( (unsigned int)(Flink + v76) > 3 )
        {
          Pool2 = (void *)ExAllocatePool2(0x100uLL);
          if ( Pool2 )
          {
            v189 = *AuxData;
            if ( *AuxData )
            {
              if ( *v189 )
                v190 = 12 * *v189 + 8;
              else
                v190 = 8;
            }
            else
            {
              v190 = 0;
            }
            memmove(Pool2, v189, v190);
            SepConcatenatePrivileges(Pool2, v191, &Src);
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
          if ( v75 )
          {
            if ( v76 )
              v77 = (unsigned int)(12 * v76 + 8);
            else
              v77 = 8LL;
          }
          else
          {
            v77 = 0LL;
          }
          memmove((char *)v75 + v77, &Src.Blink, (unsigned int)(12 * Flink));
          *v75 += Flink;
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
      v257 = 0;
      if ( (_BYTE)v21 )
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
        if ( !SepPrivilegeCheck(PrimaryToken, (__int64)&Src.Blink, 1u, 1, v21) )
          goto LABEL_50;
        v29 = (int)Src.Flink;
      }
      v228 = 1;
      v31 = (PVOID *)v12->AuxData;
      v32 = *v31;
      v33 = *(_DWORD *)*v31;
      if ( (unsigned int)(v29 + v33) > 3 )
      {
        v174 = (void *)ExAllocatePool2(0x100uLL);
        if ( v174 )
        {
          v175 = *v31;
          if ( *v31 )
          {
            if ( *v175 )
              v176 = 12 * *v175 + 8;
            else
              v176 = 8;
          }
          else
          {
            v176 = 0;
          }
          memmove(v174, v175, v176);
          SepConcatenatePrivileges(v174, v177, &Src);
          v12 = AccessState;
          if ( AccessState->PrivilegesAllocated )
            ExFreePoolWithTag(*v31, 0);
          *v31 = v174;
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
      v12->PreviouslyGrantedAccess |= v231[0];
      v12->RemainingDesiredAccess &= 0xFEEDFF56;
      v28 &= 0xFEEDFF56;
      v12->Flags |= 2u;
LABEL_50:
      v21 = v227;
      v26 = 0;
      goto LABEL_51;
    }
LABEL_55:
    if ( *(_BYTE *)(a8 + 136) && !SourceString->Length || (v12->Flags & 0x100) != 0 )
    {
      v24 |= v12->PreviouslyGrantedAccess;
      v232 = v24;
    }
    v35 = *(_QWORD *)(a8 + 40);
    LOBYTE(v36) = v233;
    if ( v35 && (*(_DWORD *)(v35 + 80) & 0x400000) != 0 )
    {
      v36 = (unsigned __int8)v233;
      if ( !SourceString->Length )
        v36 = 1;
      v233 = v36;
    }
    if ( !v11 && (*(_DWORD *)(a8 + 84) & 1) == 0 || v35 && !(_BYTE)v36 || *(_BYTE *)(a8 + 136) )
      goto LABEL_73;
    v37 = v15 & 0xDF;
    Characteristics = AttachedDevice->Characteristics;
    if ( SourceString->Length )
    {
      if ( (Characteristics & 0x20100) != 0x20000 && v11 )
      {
        v225[0] = 0;
        p_SubjectSecurityContext = &v12->SubjectSecurityContext;
        SeIsAppContainerOrIdentifyLevelContext(p_SubjectSecurityContext);
        if ( v225[0] )
        {
          v241 = Privileges;
          v231[0] = 0;
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
          SeLockSubjectContext(p_SubjectSecurityContext);
          v109 = SeAccessCheck(
                   AttachedDevice->SecurityDescriptor,
                   p_SubjectSecurityContext,
                   1u,
                   v24 | 0x20,
                   0,
                   &v241,
                   (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                   1,
                   &GrantedAccess,
                   v231);
          if ( v241 )
          {
            SeAppendPrivileges(AccessState, v241);
            CmSiFreeMemory(v241);
          }
          SeUnlockSubjectContext(p_SubjectSecurityContext);
          ExReleaseResourceLite(&IopSecurityResource);
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          v15 = (v109 ^ v37) & 1 ^ v37;
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
      ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
      v187 = SeFastTraverseCheck((__int64)AttachedDevice->SecurityDescriptor, (__int64)v12, 32);
      v15 = (v37 ^ v187) & 1 ^ v37;
      if ( (v187 & 1) == 0 )
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
      if ( (Characteristics & 0x40001) != 0 && (v24 & 0xFFEDFF7F) != 0 )
      {
        ActiveConsoleId = RtlGetActiveConsoleId();
        if ( ActiveConsoleId != (unsigned int)PsGetCurrentProcessSessionId() )
        {
          v210 = PsGetCurrentServerSilo();
          v211 = PsGetServerSiloServiceSessionId(v210);
          if ( v211 != (unsigned int)PsGetCurrentProcessSessionId() && !IopAllowRemoteDASD() )
            v103 = 1;
        }
      }
      Privileges = 0LL;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
      v104 = AccessState;
      SeLockSubjectContext(&AccessState->SubjectSecurityContext);
      v105 = v37 | 0x20;
      v106 = !v103;
      v12 = v104;
      if ( v106 )
        goto LABEL_225;
      v216 = v104->SubjectSecurityContext.ClientToken;
      if ( !v216 )
        v216 = v104->SubjectSecurityContext.PrimaryToken;
      if ( SeTokenIsAdmin(v216) )
      {
LABEL_225:
        v15 = (v105 ^ SeAccessCheck(
                        AttachedDevice->SecurityDescriptor,
                        &v104->SubjectSecurityContext,
                        (v105 & 0x20) != 0,
                        v24,
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
    ExReleaseResourceLite(&IopSecurityResource);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
LABEL_68:
    if ( (v15 & 0x20) != 0 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v12->SubjectSecurityContext.PrimaryToken + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v40 = (PERESOURCE *)v12->SubjectSecurityContext.ClientToken;
      if ( v40 )
      {
        ExReleaseResourceLite(v40[6]);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
    }
    if ( (v15 & 1) == 0 )
      goto LABEL_428;
    v11 = a4;
LABEL_73:
    v41 = *(_BYTE *)(a8 + 137) || *(_BYTE *)(a8 + 138) ? 64 : 0;
    v42 = v41 | v15 & 0xBF;
    v43 = (__int64)SourceString;
    if ( SourceString->Length || *(_QWORD *)(a8 + 40) || ((unsigned __int8)~(v42 >> 6) & ((v24 & 0xFEE1FF7F) == 0)) == 0 )
      v15 = v42 & 0xF7;
    else
      v15 = v42 | 8;
    v44 = 0LL;
    v236 = 0LL;
    v45 = *(_QWORD *)(a8 + 40);
    if ( !v45 || (*(_DWORD *)(v45 + 80) & 0x800) != 0 )
    {
      *(_QWORD *)v231 = AttachedDevice;
      if ( *(_QWORD *)(BugCheckParameter1 + 56) && (v15 & 8) == 0 )
      {
        AttachedDevice = (struct _DEVICE_OBJECT *)BugCheckParameter1;
        if ( (*(_DWORD *)(BugCheckParameter1 + 52) & 0x100) != 0
          && (*(_DWORD *)(*(_QWORD *)(BugCheckParameter1 + 312) + 32LL) & 0x800) == 0
          && (v11 || (*(_DWORD *)(a8 + 84) & 1) != 0)
          && (v45 || SourceString->Length)
          && !(_BYTE)v233 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  BugCheckParameter1,
                  (void *)BugCheckParameter1,
                  v12,
                  v232,
                  *(_DWORD *)(a8 + 88),
                  0LL,
                  &GrantedAccess,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_428;
          v43 = (__int64)SourceString;
        }
        v46 = IopCheckVpbMounted(a8, (ULONG_PTR)AttachedDevice, v43, &AccessStatus);
        v44 = v46;
        v236 = v46;
        if ( !v46 )
          return (unsigned int)AccessStatus;
        AttachedDevice = *(struct _DEVICE_OBJECT **)(v46 + 8);
        *(_QWORD *)v231 = AttachedDevice;
      }
      if ( (*(_DWORD *)(a8 + 152) & 1) != 0 )
      {
        v15 |= 2u;
      }
      else if ( AttachedDevice->AttachedDevice )
      {
        AttachedDevice = IoGetAttachedDevice(AttachedDevice);
        *(_QWORD *)v231 = AttachedDevice;
      }
    }
    else
    {
      AttachedDevice = (struct _DEVICE_OBJECT *)v250;
      *(_QWORD *)v231 = v250;
      v108 = *(_QWORD *)(v45 + 16);
      if ( v108 )
      {
        v44 = *(_QWORD *)(v45 + 16);
        v236 = v44;
        if ( (*(_DWORD *)(BugCheckParameter1 + 52) & 0x100) != 0
          && (*(_DWORD *)(*(_QWORD *)(BugCheckParameter1 + 312) + 32LL) & 0x800) == 0
          && (a4 || (*(_DWORD *)(a8 + 84) & 1) != 0)
          && !(_BYTE)v233 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  BugCheckParameter1,
                  (void *)BugCheckParameter1,
                  v12,
                  v232,
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
        IopIncrementVpbRefCount(v108, 1);
      }
      if ( (*(_DWORD *)(a8 + 152) & 1) != 0 )
      {
        if ( v44 )
        {
          AttachedDevice = *(struct _DEVICE_OBJECT **)(v44 + 8);
          *(_QWORD *)v231 = AttachedDevice;
        }
        v15 |= 2u;
      }
    }
    v47 = BugCheckParameter1;
    v48 = *(unsigned int *)(BugCheckParameter1 + 52);
    if ( (v48 & 0x40001) != 0
      && (*(_DWORD *)(BugCheckParameter1 + 48) & 0x600100) == 0
      && (*(_DWORD *)(BugCheckParameter1 + 52) & 0x100) == 0 )
    {
      v225[0] = 0;
      SeIsAppContainerOrIdentifyLevelContext(&AccessState->SubjectSecurityContext);
      if ( v225[0] )
      {
        if ( !v44 )
          goto LABEL_427;
        if ( (*(_DWORD *)(*(_QWORD *)(v44 + 8) + 48LL) & 0x20000) == 0 )
          break;
      }
    }
    if ( (v15 & 2) == 0 )
      goto LABEL_91;
    if ( (v15 & 8) != 0
      || (DeviceType = AttachedDevice->DeviceType, (_DWORD)DeviceType != 8)
      && ((unsigned int)DeviceType > 0x35 || (v217 = 0x20000100121008LL, !_bittest64(&v217, DeviceType))) )
    {
      v92 = -1073741811;
      goto LABEL_183;
    }
    LOBYTE(v43) = 1;
    if ( IopVerifyDeviceObjectOnStack((__int64)AttachedDevice, *(_QWORD *)(a8 + 176), (volatile __int64 *)v43) )
    {
      AttachedDevice = *(struct _DEVICE_OBJECT **)(a8 + 176);
      *(_QWORD *)v231 = AttachedDevice;
      v92 = 0;
      goto LABEL_183;
    }
    v178 = *(_QWORD *)(a8 + 168);
    if ( v178 )
    {
      v179 = 0LL;
      v48 = v178 + 8;
      v180 = *(__int64 **)(v178 + 8);
      v43 = 3221226021LL;
      while ( v180 != (__int64 *)v48 )
      {
        v181 = v180[2] - *(_QWORD *)&GUID_ECP_IO_DEVICE_HINT.Data1;
        if ( !v181 )
          v181 = v180[3] - *(_QWORD *)GUID_ECP_IO_DEVICE_HINT.Data4;
        if ( !v181 )
        {
          *((_DWORD *)v180 + 10) |= 4u;
          v43 = 0LL;
          v179 = v180 + 8;
          break;
        }
        v180 = (__int64 *)*v180;
      }
      if ( (int)v43 >= 0 )
      {
        if ( *((_WORD *)v179 + 5) < SourceString->Length )
        {
          *((_WORD *)v179 + 4) = SourceString->Length;
          v92 = -1073740650;
          goto LABEL_183;
        }
        PsReferenceSiloContext(AttachedDevice);
        *v179 = (__int64)AttachedDevice;
        RtlCopyUnicodeString((PUNICODE_STRING)(v179 + 1), SourceString);
        *((_DWORD *)v179 - 6) |= 8u;
      }
    }
    v182 = *(_DWORD *)(a8 + 152);
    if ( (v182 & 0x10) != 0 )
    {
      *(_DWORD *)(a8 + 152) = v182 & 0xFFFFFFEF;
      v92 = -1073740952;
    }
    else
    {
      v92 = -1073740951;
    }
LABEL_183:
    AccessStatus = v92;
    if ( v92 < 0 )
    {
      if ( v44 )
        IopDereferenceVpbAndFree(v44, v48, v43);
      IopDecrementDeviceObjectRef(v47, 0LL, 0LL, v21);
      return (unsigned int)AccessStatus;
    }
LABEL_91:
    v49 = *(_DWORD *)(a8 + 152);
    if ( (v49 & 0x10) != 0 )
      *(_DWORD *)(a8 + 152) = v49 & 0xFFFFFFEF;
    if ( ((AttachedDevice->Characteristics & 0x100) != 0
       || IopRequireDeviceAccessCheck && (*(_DWORD *)(v47 + 52) & 0x100000) != 0)
      && (a4 || (*(_DWORD *)(a8 + 84) & 1) != 0)
      && (*(_QWORD *)(a8 + 40) || SourceString->Length) )
    {
      v50 = AccessState;
      if ( !(_BYTE)v233 )
      {
        Privileges = 0LL;
        if ( !IopCreateSecurityCheck(
                v47,
                AttachedDevice,
                AccessState,
                v232,
                *(_DWORD *)(a8 + 88),
                0LL,
                &GrantedAccess,
                AbsoluteObjectName,
                &ObjectTypeName,
                (__int64)CurrentThread,
                1) )
        {
          IopDecrementDeviceObjectRef(v47, 0LL, 0LL, v96);
          if ( v44 )
            IopDereferenceVpbAndFree(v44, v97, v98);
          return 3221225506LL;
        }
      }
    }
    else
    {
      v50 = AccessState;
    }
    Irp = IopAllocateIrpExReturn((__int64)AttachedDevice, (unsigned __int8)AttachedDevice->StackSize, 0LL);
    v53 = Irp;
    if ( !Irp )
    {
      IopDecrementDeviceObjectRef(BugCheckParameter1, 0LL, 0LL, v52);
      if ( v44 )
        IopDereferenceVpbAndFree(v44, v93, v94);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = a4;
    *(_DWORD *)(Irp + 16) = 2180;
    *(_QWORD *)&v253 = a9;
    *((_QWORD *)&v253 + 1) = v50;
    v54 = v232;
    LODWORD(v254) = v232;
    HIDWORD(v254) = *(_DWORD *)(a8 + 64);
    v55 = (PPRIVILEGE_SET)(*(_QWORD *)(Irp + 184) - 72LL);
    v241 = v55;
    HIBYTE(v55->PrivilegeCount) = 0;
    v56 = *(_DWORD *)(a8 + 120);
    if ( v56 )
    {
      if ( v56 == 1 )
        LOBYTE(v55->PrivilegeCount) = 1;
      else
        LOBYTE(v55->PrivilegeCount) = 19;
      *(_QWORD *)&v55[1].Privilege[0].Luid.HighPart = *(_QWORD *)(a8 + 128);
    }
    else
    {
      LOBYTE(v55->PrivilegeCount) = 0;
      v55[1].Privilege[0].Luid.HighPart = *(_DWORD *)(a8 + 80);
      v57 = *(_BYTE *)(a8 + 84);
      BYTE2(v55->PrivilegeCount) = v57;
      if ( (a5 & 0x40) == 0 )
        BYTE2(v55->PrivilegeCount) = v57 | 0x80;
    }
    *(_QWORD *)(v53 + 88) = *(_QWORD *)(a8 + 56);
    *(_QWORD *)(v53 + 24) = *(_QWORD *)(a8 + 72);
    v55->Privilege[0].Attributes = *(_DWORD *)(a8 + 64) & 0xFFFFFF | (*(_DWORD *)(a8 + 88) << 24);
    LOWORD(v55[1].Control) = *(_WORD *)(a8 + 68);
    HIWORD(v55[1].Control) = *(_WORD *)(a8 + 70);
    v55->Privilege[0].Luid = (LUID)&v253;
    *(_QWORD *)(v53 + 112) = *(_QWORD *)(a8 + 168);
    *(_QWORD *)(v53 + 72) = BugCheckParameter4;
    *(_QWORD *)(v53 + 8) = 0LL;
    *(_BYTE *)(v53 + 65) = 0;
    *(_BYTE *)(v53 + 68) = 0;
    *(_QWORD *)(v53 + 80) = 0LL;
    *(_QWORD *)(v53 + 104) = 0LL;
    *(_QWORD *)(v53 + 160) = 0LL;
    if ( !*(_BYTE *)(a8 + 137) )
    {
      AccessStatus = IopAllocRealFileObject(
                       &Object,
                       (__int64)AttachedDevice,
                       BugCheckParameter1,
                       a5,
                       a4,
                       a8,
                       v249,
                       0,
                       v54);
      if ( AccessStatus >= 0 )
      {
        v58 = (struct _FILE_OBJECT *)Object;
        goto LABEL_104;
      }
      IoFreeIrp((PIRP)v53);
      IopDecrementDeviceObjectRef(BugCheckParameter1, 0LL, 0LL, v99);
      if ( v44 )
        IopDereferenceVpbAndFree(v44, v100, v101);
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
    v87 = *(_QWORD **)(a8 + 144);
    memset_0(v87, 0, 0x110uLL);
    v58 = (struct _FILE_OBJECT *)(v87 + 6);
    Object = v87 + 6;
    *((_BYTE *)v87 + 24) = ObHeaderCookie ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v87);
    *v87 = 1LL;
    if ( (a5 & 0x40) == 0 )
      *((_DWORD *)v87 + 32) |= 0x20000u;
    v58->Type = 5;
    *((_WORD *)v87 + 25) = 216;
    v87[14] = *(_QWORD *)(a8 + 40);
    v87[7] = BugCheckParameter1;
    SetSpecificExtension = 0;
    if ( (*(_DWORD *)(a8 + 152) & 4) != 0 )
    {
      Src.Flink = 0LL;
      if ( IopCheckStackForTransactionSupport((__int64)AttachedDevice)
        || *(_DWORD *)(a8 + 88) == 1 && (*(_BYTE *)(a8 + 70) & 6) == 0 && (v232 & 0xFEEDFF56) == 0
        || *(_BYTE *)(a8 + 137) )
      {
        v212 = *(_QWORD *)(a8 + 184);
        if ( !v212 || *(_WORD *)v212 != 16 )
          goto LABEL_551;
        v213 = *(void **)(v212 + 8);
        if ( !v213 )
        {
          AttachedDevice = *(struct _DEVICE_OBJECT **)v231;
LABEL_551:
          SetSpecificExtension = -1073741811;
          goto LABEL_171;
        }
        SetSpecificExtension = ObReferenceObjectByPointer(
                                 *(PVOID *)(v212 + 8),
                                 0x120037u,
                                 (POBJECT_TYPE)TmTransactionObjectType,
                                 0);
        if ( SetSpecificExtension >= 0 )
        {
          SetSpecificExtension = IopGetSetSpecificExtension((__int64)v58, 0, 16LL, 1, (__int64 *)&Src, 0LL);
          if ( SetSpecificExtension >= 0 )
            *Src.Flink = *(struct _LIST_ENTRY *)*(_QWORD *)(a8 + 184);
          else
            ObfDereferenceObject(v213);
          AttachedDevice = *(struct _DEVICE_OBJECT **)v231;
        }
        else
        {
          AttachedDevice = *(struct _DEVICE_OBJECT **)v231;
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
          || (v153 = AttachedDevice->DeviceType, (_DWORD)v153 == 8)
          || (unsigned int)v153 <= 0x35 && (v154 = 0x20000100100008LL, _bittest64(&v154, v153)) )
        {
          AccessStatus = IopRetrieveTransactionParameters((__int64)AttachedDevice, a8, v232, (__int64)v58);
          if ( AccessStatus < 0 )
          {
            IoFreeIrp((PIRP)v53);
            IopDecrementDeviceObjectRef(BugCheckParameter1, 0LL, 0LL, v218);
            v152 = v236;
            if ( !v236 )
              goto LABEL_219;
            goto LABEL_390;
          }
        }
      }
    }
    v89 = v249;
    if ( PsIsHostSilo(v249[1]) )
    {
      RelatedFileObject = (__int64)v58->RelatedFileObject;
      if ( !RelatedFileObject )
        goto LABEL_178;
      Silo = IoGetSilo(RelatedFileObject);
      if ( PsIsHostSilo(Silo) )
        goto LABEL_178;
    }
    Src.Flink = 0LL;
    if ( v58->RelatedFileObject && PsIsServerSilo(v89[1]) )
      v110 = (struct _LIST_ENTRY *)IoGetSilo(v203);
    else
      v110 = (struct _LIST_ENTRY *)v89[1];
    if ( PsIsHostSilo((__int64)v110) )
      goto LABEL_178;
    AccessStatus = PsAcquireSiloHardReference(v110);
    if ( AccessStatus < 0 )
      goto LABEL_389;
    v111 = IopGetSetSpecificExtension((__int64)v58, 7, 16LL, 1, (__int64 *)&Src, 0LL);
    AccessStatus = v111;
    if ( v111 < 0 )
    {
      PsReleaseSiloHardReference(v110);
      v111 = AccessStatus;
    }
    v112 = Src.Flink;
    if ( v111 < 0 )
    {
LABEL_389:
      IoFreeIrp((PIRP)v53);
      IopDecrementDeviceObjectRef(BugCheckParameter1, 0LL, 0LL, v149);
      v152 = v236;
      if ( !v236 )
        goto LABEL_219;
LABEL_390:
      IopDereferenceVpbAndFree(v152, v150, v151);
      goto LABEL_219;
    }
    LODWORD(Src.Flink->Flink) = 16;
    v112->Blink = v110;
    HIDWORD(v112->Flink) |= 1u;
    ObfReferenceObjectWithTag(v110, 0x70536F49u);
LABEL_178:
    v55 = v241;
LABEL_104:
    if ( (v15 & 8) != 0 )
      v58->Flags |= 0x800u;
    v59 = *(_QWORD *)(a8 + 216);
    if ( (v59 & 1) != 0 )
    {
      Src.Flink = 0LL;
      FileObjectExtension = (struct _LIST_ENTRY *)v58->FileObjectExtension;
      if ( !FileObjectExtension )
      {
        if ( (int)IopAllocateFileObjectExtensionSlow((__int64)v58, (__int64 **)&Src, 0) < 0 )
          goto LABEL_111;
        FileObjectExtension = Src.Flink;
LABEL_193:
        _InterlockedOr((volatile signed __int32 *)FileObjectExtension, 0x20u);
        goto LABEL_111;
      }
      if ( FileObjectExtension != (struct _LIST_ENTRY *)qword_1400137E0 )
        goto LABEL_193;
    }
    else if ( (v59 & 2) != 0 )
    {
      Src.Flink = 0LL;
      v60 = (struct _LIST_ENTRY *)v58->FileObjectExtension;
      if ( !v60 )
      {
        if ( (int)IopAllocateFileObjectExtensionSlow((__int64)v58, (__int64 **)&Src, 0) < 0 )
          goto LABEL_111;
        v60 = Src.Flink;
LABEL_110:
        _InterlockedOr((volatile signed __int32 *)v60, 0x40u);
        goto LABEL_111;
      }
      if ( v60 != (struct _LIST_ENTRY *)qword_1400137E0 )
        goto LABEL_110;
    }
LABEL_111:
    *(_QWORD *)(v53 + 192) = v58;
    v55[2].Privilege[0].Luid = (LUID)v58;
    v61 = SourceString;
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
      v58->FileName.MaximumLength = Length;
      v63 = ExAllocatePool2(0x100uLL);
      v58->FileName.Buffer = (wchar_t *)v63;
      if ( !v63 )
      {
        IoFreeIrp((PIRP)v53);
        IopDecrementDeviceObjectRef(BugCheckParameter1, 0LL, 0LL, v192);
        if ( v236 )
          IopDereferenceVpbAndFree(v236, v193, v194);
        v58->DeviceObject = 0LL;
        if ( *(_BYTE *)(a8 + 137) )
          IopDeleteFileObjectExtension((__int64)v58, v193);
        else
          ObfDereferenceObject(v58);
        return 3221225626LL;
      }
    }
    RtlCopyUnicodeString(&v58->FileName, v61);
    if ( *(_BYTE *)(a8 + 137) )
    {
      v225[0] = 0;
      LOBYTE(PreviouslyGrantedAccess) = a4;
      v64 = v241;
      AccessStatus = IopQueryInformation(a8, *(_QWORD *)v231, v53, v241, PreviouslyGrantedAccess, v225);
      if ( AccessStatus < 0 || v225[0] )
      {
        v66 = *(_DWORD *)(v53 + 48);
        *(_DWORD *)(a8 + 16) = v66;
        *(_QWORD *)(a8 + 24) = *(_QWORD *)(v53 + 56);
        if ( v66 == 260 )
        {
          v204 = *(void **)(v53 + 160);
          if ( v204 )
          {
            ExFreePoolWithTag(v204, 0);
            *(_QWORD *)(v53 + 160) = 0LL;
            *(_QWORD *)(a8 + 40) = 0LL;
          }
        }
        if ( v58->FileName.Length )
          ExFreePoolWithTag(v58->FileName.Buffer, 0);
        IopDeleteFileObjectExtension((__int64)v58, v65);
        v68 = BugCheckParameter1;
        goto LABEL_124;
      }
      PsGetCurrentServerSiloGlobals();
      if ( v58->FileName.Length != SourceString->Length
        || memcmp(v58->FileName.Buffer, SourceString->Buffer, v58->FileName.Length) )
      {
        Buffer = v58->FileName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          RtlInitUnicodeString(&v58->FileName, 0LL);
        }
        v79 = SourceString;
        v80 = SourceString->Length;
        if ( SourceString->Length )
        {
          if ( v80 < 0x38u )
          {
            v80 = 56;
          }
          else if ( v80 >= 0x78u )
          {
            if ( v80 < 0xF8u )
              v80 = 248;
          }
          else
          {
            v80 = 120;
          }
          v58->FileName.MaximumLength = v80;
          v81 = ExAllocatePool2(0x100uLL);
          v58->FileName.Buffer = (wchar_t *)v81;
          if ( !v81 )
          {
            IopDeleteFileObjectExtension((__int64)v58, v82);
            IopDecrementDeviceObjectRef(BugCheckParameter1, 0LL, 0LL, v183);
            if ( v236 )
              IopDereferenceVpbAndFree(v236, v184, v185);
            IoFreeIrp((PIRP)v53);
            return 3221225626LL;
          }
          RtlCopyUnicodeString(&v58->FileName, v79);
        }
      }
      v83 = BugCheckParameter1;
      v84 = *(struct _DEVICE_OBJECT **)v231;
      AccessStatus = IopAllocRealFileObject(&Object, *(__int64 *)v231, BugCheckParameter1, a5, a4, a8, v249, 1, v232);
      if ( AccessStatus < 0 )
      {
        v86 = Object;
        if ( *((_WORD *)Object + 44) )
          ExFreePoolWithTag(*((PVOID *)Object + 12), 0);
        IopDeleteFileObjectExtension((__int64)v86, v85);
        v68 = v83;
LABEL_124:
        IopDecrementDeviceObjectRef(v68, 0LL, 0LL, v67);
        if ( v236 )
          IopDereferenceVpbAndFree(v236, v69, v70);
        IoFreeIrp((PIRP)v53);
        return (unsigned int)AccessStatus;
      }
      v58 = (struct _FILE_OBJECT *)Object;
      v64[2].Privilege[0].Luid = (LUID)Object;
      *(_QWORD *)(v53 + 192) = v58;
      v61 = SourceString;
    }
    else
    {
      v84 = *(struct _DEVICE_OBJECT **)v231;
    }
    if ( !*(_DWORD *)(a8 + 120) )
    {
      v113 = *(_DWORD *)(v53 + 16) & 0x80;
      if ( v113 )
      {
        v114 = *(struct _ECP_LIST **)(v53 + 112);
        v238 = v114;
      }
      else
      {
        v114 = v238;
      }
      v115 = -1073741811;
      if ( v113 )
        v115 = 0;
      AccessStatus = v115;
      if ( v114 )
      {
        if ( IopSymlinkGetECP(v114, (PVOID *)&Size[1]) != -1073741275 )
        {
          MostRecentlyUsedName = IopSymlinkGetMostRecentlyUsedName(*(__int64 *)&Size[1]);
          if ( !*(_WORD *)(MostRecentlyUsedName + 4) )
          {
            updated = IopSymlinkUpdateECP(
                        (PIRP)v53,
                        AbsoluteObjectName->Length - v61->Length,
                        *(_WORD *)(MostRecentlyUsedName + 2));
            AccessStatus = updated;
            if ( updated < 0 )
            {
              *(_DWORD *)(v53 + 48) = updated;
              *(_QWORD *)(v53 + 56) = 0LL;
              v15 &= ~4u;
            }
          }
        }
      }
    }
    KeInitializeEvent(&v58->Event, NotificationEvent, 0);
    *(_QWORD *)(a8 + 8) = v58;
    if ( (v15 & 4) != 0 )
    {
      IopQueueThreadIrp(v53, v116);
      if ( *(char *)(v53 + 71) >= 0 && (v117 = *(_QWORD *)(v53 + 200)) != 0 && (*(_BYTE *)v117 & 2) != 0 )
      {
        Src = 0LL;
        Src = *(struct _LIST_ENTRY *)(v117 + 24);
        v146 = IoSetActivityIdThread(&Src);
        v118 = IofCallDriver(*(PDEVICE_OBJECT *)v231, (PIRP)v53);
        IoSetActivityIdThread(v146);
      }
      else
      {
        v118 = IofCallDriver(v84, (PIRP)v53);
      }
      AccessStatus = v118;
    }
    else
    {
      v118 = AccessStatus;
    }
    if ( v118 == 259 )
    {
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 )
        v15 &= ~0x80u;
      else
        v15 |= 0x80u;
      while ( 1 )
      {
        AccessStatus = KeWaitForSingleObject(&v58->Event, Executive, 0, v15 >> 7, 0LL);
        if ( AccessStatus != 257 )
          break;
        CurrentIrql = (struct _LIST_ENTRY *)KeGetCurrentIrql();
        Src.Flink = CurrentIrql;
        if ( (_BYTE)CurrentIrql != 1 )
          __writecr8(1uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v116) = 1;
          KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, v116);
          LOBYTE(CurrentIrql) = Src.Flink;
        }
        if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0
          || !v58->Event.Header.SignalState && *(_BYTE *)(v53 + 68) )
        {
          if ( KiIrqlFlags )
          {
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)CurrentIrql);
            LOBYTE(CurrentIrql) = Src.Flink;
          }
          __writecr8((unsigned __int8)CurrentIrql);
          IopCancelAlertedRequest(&v58->Event, (PIRP)v53);
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
    v119 = *(_DWORD *)(v53 + 16) & 0x80;
    if ( v119 )
    {
      v120 = *(struct _ECP_LIST **)(v53 + 112);
      v238 = v120;
    }
    else
    {
      v120 = v238;
    }
    v121 = -1073741811;
    if ( v119 )
      v121 = 0;
    AccessStatus = v121;
    v122 = *(_DWORD *)(a8 + 84) & 8;
    v123 = v122 != 0;
    if ( *(_DWORD *)(v53 + 48) == 260 )
    {
      P = *(PVOID *)(v53 + 160);
      if ( v120 && IopSymlinkGetECP(v120, (PVOID *)&Size[1]) != -1073741275 )
        goto LABEL_330;
      AccessStatus = IopSymlinkCreateECP((PIRP)v53, (__int64)&Size[1]);
      if ( AccessStatus < 0 )
      {
        *(_QWORD *)(v53 + 56) = 0LL;
        *(_DWORD *)(v53 + 48) = AccessStatus;
        goto LABEL_330;
      }
      v136 = (__int64)v238;
      if ( !v238 )
      {
        v137 = *(_DWORD *)(v53 + 16) & 0x80;
        if ( v137 )
          v238 = *(struct _ECP_LIST **)(v53 + 112);
        v138 = -1073741811;
        if ( v137 )
          v138 = 0;
        AccessStatus = v138;
LABEL_330:
        v136 = (__int64)v238;
      }
      if ( *(_DWORD *)(v53 + 48) != 260 )
        goto LABEL_283;
      v106 = v122 == 0;
      v139 = P;
      if ( !v106 && v136 )
        v123 = IopCheckAndUpdateStopOnSymlinkEcp(v136, *(_DWORD *)(v53 + 56), (__int64)P);
      IopSymlinkProcessReparse((PIRP)v53);
      v140 = *(_QWORD *)(v53 + 56);
      if ( v140 != 2684354563LL && v140 != 2684354572LL && v140 != 2684354585LL )
        goto LABEL_283;
      if ( *(int *)(v53 + 48) >= 0 )
      {
        v116 = *((unsigned __int16 *)v139 + 3);
        v141 = 0;
        if ( !(_WORD)v116 )
          v141 = 16;
        v15 = v15 & 0xEF | v141;
        if ( !(_WORD)v116 || *(wchar_t *)((char *)SourceString->Buffer + SourceString->Length - v116) == 58 )
        {
          v171 = *(_DWORD *)(a8 + 64);
          if ( (v171 & 0x41) == 0 && !LOBYTE(v241->PrivilegeCount) )
          {
            if ( *v139 == -1610612733 )
              goto LABEL_530;
            if ( *v139 != -1610612724 )
              goto LABEL_339;
            if ( (int)v139[4] < 0 )
            {
LABEL_530:
              v172 = v171 | 1;
LABEL_436:
              *(_DWORD *)(a8 + 64) = v172;
            }
            else if ( (v139[4] & 0x40000000) != 0 )
            {
              v172 = v171 | 0x40;
              goto LABEL_436;
            }
          }
        }
      }
LABEL_339:
      if ( !v123 )
      {
        ExFreePoolWithTag(v139, 0);
        P = 0LL;
      }
    }
LABEL_283:
    if ( *(_DWORD *)(v53 + 48) || *(_DWORD *)(a8 + 120) )
    {
      v124 = *(_QWORD *)v231;
    }
    else
    {
      AccessStatus = IopSymlinkPropagateToExtensionIfNeeded(v58, v238, AbsoluteObjectName);
      v124 = *(_QWORD *)v231;
      if ( AccessStatus < 0 )
      {
        IoCancelFileOpen(*(PDEVICE_OBJECT *)v231, v58);
        *(_QWORD *)(v53 + 56) = 0LL;
        *(_DWORD *)(v53 + 48) = AccessStatus;
      }
    }
    if ( v238 )
      *(_QWORD *)(a8 + 168) = v238;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)(v53 + 48);
    AccessStatus = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    v58->Event.Header.SignalState = 1;
    if ( (v15 & 4) != 0 )
    {
      *(_QWORD *)(v53 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v53, v116);
    }
    if ( (*(_BYTE *)(v53 + 16) & 0x30) == 0x30 )
      ExFreePoolWithTag(*(PVOID *)(v53 + 24), 0);
    IoFreeIrp((PIRP)v53);
    v125 = BugCheckParameter4[1];
    *(_QWORD *)(a8 + 24) = BugCheckParameter4[1];
    if ( AccessStatus < 0 )
    {
      if ( (v58->Flags & 0x200000) != 0 )
      {
        ObfDereferenceObject(v58);
      }
      else
      {
        if ( v58->FileName.Length )
        {
          ExFreePoolWithTag(v58->FileName.Buffer, 0);
          v58->FileName.Length = 0;
        }
        v58->DeviceObject = 0LL;
        ObfDereferenceObject(v58);
        IopDecrementDeviceObjectRef(BugCheckParameter1, 0LL, 0LL, v195);
        if ( v236 )
          IopDereferenceVpbAndFree(v236, v196, v197);
      }
      *(_QWORD *)(a8 + 8) = 0LL;
      result = (unsigned int)AccessStatus;
      *(_DWORD *)(a8 + 16) = AccessStatus;
      return result;
    }
    if ( AccessStatus != 260 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject(v58);
      if ( (PDEVICE_OBJECT)v124 != RelatedDeviceObject )
      {
        Vpb = (ULONG_PTR)v58->Vpb;
        v207 = v236;
        if ( Vpb != v236 )
        {
          if ( Vpb )
            IopIncrementVpbRefCount(Vpb, 1);
          if ( v207 )
            IopDereferenceVpbAndFree(v207, v126, v127);
        }
      }
      if ( (v15 & 0x40) == 0 )
      {
        *v247 = v58;
        *(_DWORD *)(a8 + 32) = -1096154543;
        PsReferenceSiloContext(v58);
        v142 = v58->RelatedFileObject;
        if ( (!v142 || (v142->Flags & 0x400000) != 0) && !v58->FileName.Length )
        {
          v147 = RelatedDeviceObject->DeviceType;
          if ( v147 == 9 || v147 == 3 || v147 == 8 || v147 == 32 )
            v58->Flags |= 0x400000u;
        }
        result = LODWORD(BugCheckParameter4[0]);
        *(_DWORD *)(a8 + 16) = BugCheckParameter4[0];
        return result;
      }
      if ( *(_BYTE *)(a8 + 137) )
      {
        if ( *(_BYTE *)(a8 + 208) )
        {
          XxxInformation = IopQueryXxxInformation((ULONG_PTR)v58, *(_QWORD *)(a8 + 112), a8 + 204, 1);
        }
        else
        {
          v129 = 0;
          DriverObject = RelatedDeviceObject->DriverObject;
          FastIoDispatch = DriverObject->FastIoDispatch;
          if ( !*(_BYTE *)(a8 + 139) )
          {
            *(_QWORD *)&Size[1] = 0LL;
            if ( FastIoDispatch )
              FastIoQueryBasicInfo = (ULONG_PTR)FastIoDispatch->FastIoQueryBasicInfo;
            else
              FastIoQueryBasicInfo = 0LL;
            v247 = (_QWORD *)FastIoQueryBasicInfo;
            if ( FastIoQueryBasicInfo )
            {
              v133 = (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject)
                   ? (void *)VfFastIoSnapState(DriverObject)
                   : 0LL;
              v255 = v133;
              LOBYTE(v126) = 1;
              v129 = guard_dispatch_icall_no_overrides((__int64)v58, v126);
              v243 = v129;
              if ( v133 )
                VfFastIoCheckState(v133, FastIoQueryBasicInfo);
            }
            if ( v129 )
            {
              AccessStatus = BugCheckParameter4[0];
            }
            else
            {
              v134 = (void *)ExAllocatePool2(0x40uLL);
              *(_QWORD *)&Size[1] = v134;
              if ( v134 )
              {
                AccessStatus = IopQueryXxxInformation((ULONG_PTR)v58, (__int64)v134, (__int64)Size, 1);
                if ( AccessStatus >= 0 )
                {
                  v135 = *(void **)(a8 + 96);
                  if ( a4 )
                    RtlCopyToUser(v135, v134, Size[0]);
                  else
                    RtlCopyVolatileMemory(v135, v134, Size[0]);
                }
                ExFreePoolWithTag(v134, 0);
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
                v220 = (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject)
                     ? (void *)VfFastIoSnapState(DriverObject)
                     : 0LL;
                LOBYTE(v126) = 1;
                v221 = BugCheckParameter2a;
                v129 = guard_dispatch_icall_no_overrides((__int64)v58, v126);
                if ( v220 )
                  VfFastIoCheckState(v220, v221);
              }
            }
          }
          if ( v129 )
            goto LABEL_318;
          v222 = IopQueryXxxInformation((ULONG_PTR)v58, *(_QWORD *)(a8 + 104), (__int64)Size, 1);
          AccessStatus = v222;
          if ( v222 != -1073741822 && v222 != -1073741811 )
            goto LABEL_318;
          XxxInformation = IopGetNetworkOpenInformation((ULONG_PTR)v58);
        }
        AccessStatus = XxxInformation;
      }
LABEL_318:
      *(_DWORD *)(a8 + 32) = -1096154543;
      IopCloseFile(0LL, v58, 1LL, 1LL, 0LL);
      ObfDereferenceObject(v58);
      *(_QWORD *)(a8 + 8) = 0LL;
      result = (unsigned int)AccessStatus;
      *(_DWORD *)(a8 + 16) = AccessStatus;
      return result;
    }
    if ( (v125 & 0xFFFFFFFFFFFFFFFDuLL) == 0
      || (v155 = v125 - 2684354563u, v125 - 2684354563u <= 0x16) && (v156 = 4194817LL, _bittest64(&v156, v155)) && !v123 )
    {
      v157 = AbsoluteObjectName;
      if ( AbsoluteObjectName->MaximumLength < v58->FileName.Length )
      {
        v158 = (wchar_t *)ExAllocatePool2(0x100uLL);
        if ( !v158 )
        {
          *(_DWORD *)(a8 + 16) = -1073741670;
          return 3221225626LL;
        }
        v159 = AbsoluteObjectName->Buffer;
        if ( v159 )
          ExFreePoolWithTag(v159, 0);
        v157 = AbsoluteObjectName;
        AbsoluteObjectName->Buffer = v158;
        v157->MaximumLength = v58->FileName.Length;
      }
      RtlCopyUnicodeString(v157, &v58->FileName);
      if ( BugCheckParameter4[1] - 2684354563u <= 0x16 )
      {
        v160 = 4194817LL;
        if ( _bittest64(&v160, BugCheckParameter4[1] - 2684354563u) )
          *(_QWORD *)(a8 + 40) = 0LL;
      }
    }
    if ( v58->FileName.Length )
    {
      ExFreePoolWithTag(v58->FileName.Buffer, 0);
      v58->FileName.Length = 0;
    }
    v58->DeviceObject = 0LL;
    ObfDereferenceObject(v58);
    *(_QWORD *)(a8 + 8) = 0LL;
    v161 = BugCheckParameter1;
    IopDecrementDeviceObjectRef(BugCheckParameter1, 0LL, 0LL, v162);
    if ( v236 )
      IopDereferenceVpbAndFree(v236, v163, v164);
    v165 = BugCheckParameter4[1];
    if ( BugCheckParameter4[1] != 1 )
    {
      *(_QWORD *)(a8 + 40) = 0LL;
      v166 = 4194817LL;
      if ( v165 - 2684354563u <= 0x16 && _bittest64(&v166, v165 - 2684354563u) )
      {
        v167 = *(_DWORD *)(a8 + 152) | 0x10;
        *(_DWORD *)(a8 + 152) = v167;
        v168 = *(unsigned int *)(v161 + 72);
        if ( (_DWORD)v168 == 7 || (unsigned int)v168 <= 0x24 && (v205 = 0x1080020004LL, _bittest64(&v205, v168)) )
          v170 = v167 | 8;
        else
          v170 = v167 & 0xFFFFFFF7;
        *(_DWORD *)(a8 + 152) = v170;
      }
      if ( *(_BYTE *)(a8 + 136) )
        KeBugCheckEx(0xF9u, v161, *(ULONG_PTR *)v231, (ULONG_PTR)AbsoluteObjectName, v165);
      if ( (*(_DWORD *)(*(_QWORD *)(v161 + 312) + 32LL) & 0x800) == 0 )
      {
        v214 = AccessState;
        *(_QWORD *)&AccessState->RemainingDesiredAccess = AccessState->OriginalDesiredAccess;
        v214->Flags &= ~0x100u;
      }
      if ( v165 - 2684354563u <= 0x16 && _bittest64(&v166, v165 - 2684354563u) && v123 )
      {
        *(_QWORD *)(a8 + 24) = P;
        *(_DWORD *)(a8 + 16) = -2147483603;
        return 2147483693LL;
      }
      else if ( v165 == 2 || v165 == 2684354585 )
      {
        v215 = v249;
        v215[1] = PsGetParentSilo(v249[1]);
        return 872LL;
      }
      else
      {
        return 260LL;
      }
    }
    if ( (unsigned int)++v246 > 0x20 )
      return 3221225473LL;
    v12 = AccessState;
    v11 = a4;
    v14 = v247;
    AttachedDevice = (struct _DEVICE_OBJECT *)v250;
  }
  IopDereferenceVpbAndFree(v44, v48, v43);
LABEL_427:
  AttachedDevice = (struct _DEVICE_OBJECT *)v47;
LABEL_428:
  IopDecrementDeviceObjectRef((ULONG_PTR)AttachedDevice, 0LL, 0LL, v21);
  return 3221225506LL;
}
