/*
 * XREFs of ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x14035CE20
 * Callers:
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x140311A60 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1403561E4 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAIPEA_K@Z @ 0x14035BAD8 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAIPEA_K@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x14039763C (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x140008FB0 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x140009150 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x14000EB0C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x140045DFC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_NI@Z @ 0x140045E34 (-VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDM.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1400467D0 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@XZ @ 0x140046DE0 (--0DXGSYNCOBJECTMUTEX@@QEAA@XZ.c)
 *     ?VidMmQueryAllocationSizeInSystemMemory@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_N@Z @ 0x14004AB28 (-VidMmQueryAllocationSizeInSystemMemory@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_N@Z.c)
 *     ?IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ @ 0x14004B09C (-IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ @ 0x140052DC0 (-ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x140052F90 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer @ 0x1400638F0 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x14006541C (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x140074670 (-CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x1400748B0 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x140192CDC (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 *     ?ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1401BA3C8 (-ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1401C3694 (-RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z.c)
 *     ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x14022BB88 (-VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEA.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1402BF7C4 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402EAC9C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x140310614 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1403126F0 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x140360B80 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x14036DFF0 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1403773A0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x14037CDEC (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 *     ?ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x14037E0BC (-ProcessSysMemAttributes@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x140388D10 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1403986D4 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1403A3850 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1403A8CB4 (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1403E4958 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 *     ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x14040D00C (-CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINF.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x14042B398 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?CreateDestructionBuffers@DXGDEVICE@@QEAAJIPEAVDXGRESOURCE@@H@Z @ 0x1404323C8 (-CreateDestructionBuffers@DXGDEVICE@@QEAAJIPEAVDXGRESOURCE@@H@Z.c)
 *     ?AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z @ 0x140433F28 (-AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocation(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        unsigned __int8 a3,
        char a4,
        struct _DXGSHAREDALLOCOBJECT *a5,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a6,
        struct COREDEVICEACCESS *a7,
        unsigned int a8,
        struct _EPROCESS *a9,
        unsigned int *a10,
        unsigned __int64 *a11,
        unsigned __int64 *a12,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a13,
        void *a14,
        UINT a15)
{
  unsigned __int8 v16; // bl
  __int64 v19; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // edx
  struct _PAGED_LOOKASIDE_LIST *v22; // rcx
  __int64 NumAllocations; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v24; // r14
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  signed int v27; // ebx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  void **v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int8 v36; // al
  unsigned __int64 v37; // rax
  void **v38; // rdi
  __int64 v39; // r8
  char *v40; // rax
  UINT i; // eax
  __int64 v42; // rdi
  struct DXGRESOURCE *v43; // rbx
  UINT v44; // edx
  __int64 v45; // r8
  UINT Value; // r9d
  char v47; // al
  struct DXGALLOCATION *v48; // rax
  ADAPTER_DISPLAY *v49; // rcx
  struct DXGALLOCATION *v50; // r9
  __int64 v51; // rax
  unsigned int v52; // ecx
  D3DKMT_CREATEALLOCATIONFLAGS v53; // r8d
  int v54; // r9d
  struct DXGALLOCATION *v55; // rcx
  SIZE_T Size; // r8
  UINT v57; // eax
  unsigned __int8 v58; // r10
  void **v59; // r8
  __int64 v60; // rbx
  __int64 v61; // rdx
  unsigned __int64 PrivateDriverDataSize; // rcx
  struct DXGALLOCATION *v63; // r14
  char *v64; // rax
  void **v65; // rcx
  char *v66; // rcx
  UINT v67; // eax
  void *v68; // rax
  D3DKMT_CREATEALLOCATIONFLAGS v69; // eax
  __int64 v70; // rax
  char v71; // cl
  struct _DXGK_ALLOCATIONINFO *v72; // r8
  D3DKMT_CREATEALLOCATIONFLAGS v73; // eax
  unsigned int v74; // edx
  UINT v75; // ebx
  struct DXGALLOCATION *v76; // r14
  _QWORD *v77; // rdi
  __int64 v78; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v80; // rax
  D3DKMT_HANDLE v81; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v82; // eax
  D3DKMT_HANDLE v83; // ecx
  __int64 v84; // rax
  int *j; // rdx
  UINT v86; // r8d
  struct DXGALLOCATION *v87; // rdx
  struct DXGALLOCATION *v88; // r9
  unsigned int v89; // edx
  __int64 v90; // rcx
  struct _D3DKMT_CREATEALLOCATION *v91; // rdx
  __int64 PrivateRuntimeDataSize; // rax
  __int64 v93; // rcx
  UINT v94; // eax
  unsigned int v95; // ecx
  unsigned __int8 v96; // di
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rcx
  UINT v100; // eax
  const void *pStandardAllocation; // rdx
  struct COREDEVICEACCESS *v102; // rax
  struct DXGALLOCATION *v103; // rdi
  struct DXGALLOCATION *v104; // rcx
  struct _D3DKMT_CREATESTANDARDALLOCATION *v105; // rax
  __int64 v106; // rax
  struct _EPROCESS *v107; // rdx
  void *v108; // rcx
  size_t v109; // r8
  const void *v110; // rdx
  unsigned int v111; // ecx
  struct DXGALLOCATION *v112; // rax
  int v113; // r11d
  int v114; // eax
  char v115; // r10
  D3DKMT_CREATEALLOCATIONFLAGS v116; // ecx
  void *v117; // r8
  void *v118; // rdx
  void **v119; // rax
  int v120; // r9d
  int Allocation; // eax
  __int64 v122; // rbx
  struct _D3DDDI_ALLOCATIONINFO2 *v123; // rsi
  _DWORD *v124; // r9
  D3DKMT_CREATEALLOCATIONFLAGS v125; // ecx
  int v126; // eax
  __int64 v127; // rax
  const wchar_t *v128; // r9
  _DWORD *v129; // r8
  UINT v130; // ecx
  __int64 v131; // r11
  __int64 v132; // rcx
  char v133; // r14
  __int64 v134; // rbx
  int v135; // edi
  __int64 v136; // rsi
  HANDLE v137; // rax
  __int64 v138; // rcx
  __int64 v139; // r8
  struct _EPROCESS *v140; // r10
  UINT n; // ebx
  __int64 v142; // rcx
  unsigned int v143; // edx
  D3DKMT_CREATEALLOCATIONFLAGS v144; // eax
  struct COREDEVICEACCESS *v145; // r9
  __int64 v146; // r8
  int v147; // edx
  __int64 v148; // rcx
  struct _DXGK_ALLOCATIONINFO *v149; // r9
  NTSTATUS v150; // eax
  __int64 v151; // rbx
  struct COREDEVICEACCESS *v152; // rsi
  __int64 hSection; // rax
  int v154; // eax
  __int64 v155; // rdx
  int v156; // ecx
  struct COREDEVICEACCESS *v157; // r8
  __int64 v158; // rcx
  struct COREDEVICEACCESS *v159; // r9
  int Resident; // eax
  __int64 v161; // rdx
  unsigned __int64 v162; // rcx
  struct _D3DKMT_CREATESTANDARDALLOCATION *v163; // r8
  size_t v164; // rcx
  _QWORD *v165; // rdi
  void **v166; // rax
  struct DXGALLOCATION *v167; // rbx
  struct DXGALLOCATION *v168; // rcx
  UINT v169; // edx
  __int64 v170; // rdi
  __int64 v171; // rbx
  HANDLE CurrentProcessId; // rax
  __int64 v173; // r8
  D3DKMT_CREATEALLOCATIONFLAGS v174; // eax
  int v175; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v176; // ecx
  NTSTATUS v177; // eax
  unsigned int v178; // eax
  struct _D3DKM_CREATESTANDARDALLOCATION *v179; // rdi
  void *hPrivateRuntimeResourceHandle; // rdx
  unsigned int v181; // edi
  int v182; // eax
  int v183; // eax
  unsigned __int8 v184; // al
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rcx
  DXGDEVICE *v186; // rsi
  struct DXGPROCESS *v187; // rdi
  DXGPUSHLOCK *v188; // rcx
  struct _DXGSHAREDALLOCOBJECT *v189; // rdx
  __int64 v190; // r10
  unsigned __int64 v191; // rcx
  unsigned int v192; // r8d
  __int64 v193; // r11
  unsigned __int64 v194; // rcx
  UINT v195; // ecx
  struct DXGALLOCATION *v196; // rsi
  __int64 v197; // rax
  int v198; // eax
  struct _EX_RUNDOWN_REF *v199; // rax
  struct DXGALLOCATION *v200; // rcx
  __int64 v201; // rdx
  struct _EX_RUNDOWN_REF *v202; // rcx
  ULONG_PTR v203; // rax
  __int64 v204; // r8
  _QWORD *v205; // rdx
  __int64 v206; // rcx
  __int64 v207; // rcx
  char v208; // r14
  int v209; // eax
  __int64 v210; // rcx
  int v211; // edx
  struct DXGPROCESS *v212; // r10
  bool v213; // al
  int v214; // r10d
  unsigned int v215; // edx
  UINT ii; // ebx
  int Src; // [rsp+40h] [rbp-348h]
  int v218; // [rsp+48h] [rbp-340h]
  int v219; // [rsp+50h] [rbp-338h]
  int v220; // [rsp+58h] [rbp-330h]
  int v221; // [rsp+60h] [rbp-328h]
  int v222; // [rsp+68h] [rbp-320h]
  int v223; // [rsp+70h] [rbp-318h]
  int v224; // [rsp+78h] [rbp-310h]
  int v225; // [rsp+88h] [rbp-300h]
  int v226; // [rsp+90h] [rbp-2F8h]
  int v227; // [rsp+98h] [rbp-2F0h]
  int v228; // [rsp+A0h] [rbp-2E8h]
  int v229; // [rsp+A8h] [rbp-2E0h]
  int v230; // [rsp+B0h] [rbp-2D8h]
  int v231; // [rsp+B8h] [rbp-2D0h]
  int v232; // [rsp+C0h] [rbp-2C8h]
  int v233; // [rsp+C8h] [rbp-2C0h]
  int v234; // [rsp+D0h] [rbp-2B8h]
  int v235; // [rsp+D8h] [rbp-2B0h]
  int v236; // [rsp+E0h] [rbp-2A8h]
  int v237; // [rsp+E8h] [rbp-2A0h]
  UINT v240; // [rsp+114h] [rbp-274h]
  UINT v241; // [rsp+114h] [rbp-274h]
  UINT v242; // [rsp+114h] [rbp-274h]
  int v243; // [rsp+114h] [rbp-274h]
  UINT v244; // [rsp+114h] [rbp-274h]
  UINT v245; // [rsp+114h] [rbp-274h]
  struct _D3DDDI_ALLOCATIONINFO2 *v246; // [rsp+120h] [rbp-268h]
  int v247; // [rsp+128h] [rbp-260h]
  unsigned __int8 v248[8]; // [rsp+130h] [rbp-258h] BYREF
  struct DXGALLOCATION *v249; // [rsp+138h] [rbp-250h]
  struct DXGRESOURCE *v250; // [rsp+140h] [rbp-248h]
  char v251; // [rsp+148h] [rbp-240h]
  PVOID v252; // [rsp+150h] [rbp-238h] BYREF
  char v253; // [rsp+158h] [rbp-230h]
  struct DXGALLOCATION *k; // [rsp+160h] [rbp-228h] BYREF
  PVOID v255; // [rsp+168h] [rbp-220h] BYREF
  unsigned __int8 v256; // [rsp+170h] [rbp-218h]
  unsigned int VidPnSourceId; // [rsp+178h] [rbp-210h]
  PVOID Object; // [rsp+180h] [rbp-208h] BYREF
  char v259; // [rsp+188h] [rbp-200h]
  void **v260; // [rsp+190h] [rbp-1F8h]
  struct _DXGSHAREDALLOCOBJECT *v261; // [rsp+198h] [rbp-1F0h] BYREF
  struct _D3DKMT_CREATESTANDARDALLOCATION *v262; // [rsp+1A0h] [rbp-1E8h]
  struct _DXGK_ALLOCATIONINFO *v263; // [rsp+1A8h] [rbp-1E0h]
  void **v264; // [rsp+1B0h] [rbp-1D8h]
  struct _D3DKM_CREATESTANDARDALLOCATION *v265; // [rsp+1B8h] [rbp-1D0h]
  struct DXGPROCESS *Current; // [rsp+1C0h] [rbp-1C8h]
  struct _EPROCESS *m; // [rsp+1C8h] [rbp-1C0h]
  struct _EX_RUNDOWN_REF *v268; // [rsp+1D0h] [rbp-1B8h] BYREF
  struct DXGALLOCATION *v269; // [rsp+1D8h] [rbp-1B0h] BYREF
  void *v270; // [rsp+1E0h] [rbp-1A8h]
  struct _D3DKMT_CREATEALLOCATION *v271; // [rsp+1E8h] [rbp-1A0h]
  struct COREDEVICEACCESS *v272[2]; // [rsp+1F0h] [rbp-198h] BYREF
  const struct _D3DKM_CREATESTANDARDALLOCATION *v273; // [rsp+200h] [rbp-188h]
  DXGDEVICE *Count; // [rsp+208h] [rbp-180h]
  void *v275; // [rsp+210h] [rbp-178h]
  struct _DXGK_OPENALLOCATIONINFO *v276; // [rsp+218h] [rbp-170h]
  struct _D3DKMT_CREATEALLOCATION *v277; // [rsp+220h] [rbp-168h]
  DXGDEVICE *v278; // [rsp+230h] [rbp-158h]
  int v279; // [rsp+238h] [rbp-150h]
  struct DXGRESOURCE *v280; // [rsp+240h] [rbp-148h] BYREF
  DXGDEVICE *v281; // [rsp+248h] [rbp-140h]
  _QWORD *v282; // [rsp+250h] [rbp-138h]
  unsigned int *v283; // [rsp+258h] [rbp-130h]
  PVOID Entry; // [rsp+260h] [rbp-128h]
  struct _DXGKARG_DESCRIBEALLOCATION v285; // [rsp+268h] [rbp-120h] BYREF
  void **v286; // [rsp+298h] [rbp-F0h]
  struct _PAGED_LOOKASIDE_LIST *v287; // [rsp+2A0h] [rbp-E8h]
  DXGFASTMUTEX *v288[2]; // [rsp+2A8h] [rbp-E0h] BYREF
  _BYTE v289[24]; // [rsp+2B8h] [rbp-D0h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS v290; // [rsp+2D0h] [rbp-B8h] BYREF

  v16 = a3;
  v265 = a6;
  v278 = this;
  v281 = this;
  Count = this;
  v277 = a2;
  v271 = a2;
  v256 = a3;
  v261 = a5;
  v273 = a6;
  v268 = (struct _EX_RUNDOWN_REF *)a6;
  v272[0] = a7;
  m = a9;
  v283 = a10;
  v252 = a11;
  Object = a12;
  v262 = a13;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4836;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      4836LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v16 && a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4841;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!(UserMode && OpenShared)", 4841LL, 0LL, 0LL, 0LL, 0LL);
  }
  v19 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v251 = *(_BYTE *)(v19 + 209);
  v259 = v251;
  Current = DXGPROCESS::GetCurrent(v19);
  Flags = a2->Flags;
  if ( (*(_WORD *)&Flags & 0x800) != 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2508LL) & 0x10) == 0 )
    {
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 4850;
      return 3221225485LL;
    }
    if ( (*(_BYTE *)&Flags & 2) == 0 )
    {
      WdLogSingleEntry3(3LL, this, -1073741811LL, 1LL);
      WdLogGlobalForLineNumber = 4855;
      return 3221225485LL;
    }
  }
  v264 = 0LL;
  v275 = 0LL;
  v22 = (struct _PAGED_LOOKASIDE_LIST *)*((_QWORD *)this + 2);
  Entry = 0LL;
  v287 = v22;
  NumAllocations = a2->NumAllocations;
  if ( (unsigned int)NumAllocations <= 5 )
  {
    v40 = (char *)ExAllocateFromPagedLookasideList(v22 + 13);
    v24 = (struct _D3DDDI_ALLOCATIONINFO2 *)v40;
    v246 = (struct _D3DDDI_ALLOCATIONINFO2 *)v40;
    Entry = v40;
    if ( !v40 )
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 4972;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Device 0x%I64x: Out of memory allocating scratch data",
        (__int64)this,
        0LL,
        0LL,
        0LL,
        0LL);
      return -1073741801LL;
    }
    v263 = (struct _DXGK_ALLOCATIONINFO *)(v40 + 720);
    v276 = (struct _DXGK_OPENALLOCATIONINFO *)(v40 + 480);
    v33 = (void **)(v40 + 640);
    v260 = (void **)(v40 + 640);
    v38 = (void **)(v40 + 680);
    v264 = (void **)(v40 + 680);
    v270 = v40;
  }
  else
  {
    v24 = 0LL;
    v246 = 0LL;
    v270 = 0LL;
    v25 = (unsigned int)NumAllocations;
    v26 = 96 * NumAllocations;
    v255 = (PVOID)v26;
    v27 = v26 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v26 <= 0xFFFFFFFF )
    {
      v28 = 96 * v25;
      if ( !is_mul_ok(v25, 0x60uLL) )
        v28 = -1LL;
      v24 = (struct _D3DDDI_ALLOCATIONINFO2 *)operator new[](v28, 0x4B677844u, 256LL);
      v246 = v24;
      v270 = v24;
      v26 = (unsigned __int64)v255;
    }
    v263 = 0LL;
    if ( v26 <= 0xFFFFFFFF )
    {
      v29 = 88LL * a2->NumAllocations;
      v27 = v29 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v29 <= 0xFFFFFFFF )
      {
        v30 = 88LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 0x58uLL) )
          v30 = -1LL;
        v263 = (struct _DXGK_ALLOCATIONINFO *)operator new[](v30, 0x4B677844u, 258LL);
      }
    }
    v276 = 0LL;
    if ( v27 >= 0 )
    {
      v31 = 32LL * a2->NumAllocations;
      v27 = v31 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v31 <= 0xFFFFFFFF )
      {
        v32 = 32LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 0x20uLL) )
          v32 = -1LL;
        v276 = (struct _DXGK_OPENALLOCATIONINFO *)operator new[](v32, 0x4B677844u, 256LL);
      }
    }
    v33 = 0LL;
    v260 = 0LL;
    if ( v27 < 0 || (v34 = a2->NumAllocations, v27 = 8 * v34 > 0xFFFFFFFF ? 0xC0000095 : 0, 8 * v34 > 0xFFFFFFFF) )
    {
      v36 = a3;
      v38 = 0LL;
    }
    else
    {
      v35 = 8LL * a2->NumAllocations;
      if ( !is_mul_ok(v34, 8uLL) )
        v35 = -1LL;
      v33 = (void **)operator new[](v35, 0x4B677844u, 256LL);
      v260 = v33;
      v36 = a3;
      if ( a3 )
      {
        v37 = 8LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
          v37 = -1LL;
        v38 = (void **)operator new[](v37, 0x4B677844u, 256LL);
        v264 = v38;
        v36 = a3;
        v33 = v260;
      }
      else
      {
        v38 = 0LL;
      }
    }
    if ( v27 < 0 || !v24 || !v263 || !v276 || !v33 || !v38 && v36 )
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v24);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v263);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v276);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v260);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v38);
      v39 = a2->NumAllocations;
      if ( v27 >= 0 )
      {
        v27 = -1073741801;
        WdLogSingleEntry3(3LL, this, v39, -1073741801LL);
        WdLogGlobalForLineNumber = 4960;
      }
      else
      {
        WdLogSingleEntry3(3LL, this, v39, v27);
        WdLogGlobalForLineNumber = 4953;
      }
      return (unsigned int)v27;
    }
    v16 = a3;
  }
  v286 = v33;
  for ( i = 0; i < a2->NumAllocations; ++i )
  {
    v33[i] = 0LL;
    if ( v16 )
      v38[i] = 0LL;
  }
  v269 = 0LL;
  LODWORD(v42) = 0;
  v247 = 0;
  v248[0] = 0;
  v43 = 0LL;
  v250 = 0LL;
  v253 = 0;
  v280 = 0LL;
  DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v288);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v289, 0LL, 0);
  if ( a3 )
    RtlCopyFromUser(v24, a2->pAllocationInfo, 96LL * a2->NumAllocations);
  else
    memmove(v24, a2->pAllocationInfo, 96LL * a2->NumAllocations);
  VidPnSourceId = -1;
  if ( (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
  {
    v24->pPrivateDriverData = a14;
    v24->PrivateDriverDataSize = a15;
  }
  v44 = 0;
  v240 = 0;
  if ( !a2->NumAllocations )
  {
LABEL_93:
    v57 = 0;
    v58 = a3;
    v59 = v260;
    while ( 1 )
    {
      v241 = v57;
      if ( v57 >= a2->NumAllocations )
        break;
      v60 = v57;
      v61 = v57;
      PrivateDriverDataSize = v24[v61].PrivateDriverDataSize;
      if ( (unsigned int)PrivateDriverDataSize > 0x7FFFFFFF )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 5192;
LABEL_97:
        v63 = 0LL;
        goto LABEL_395;
      }
      if ( v24[v61].pPrivateDriverData && (_DWORD)PrivateDriverDataSize )
      {
        if ( a3 && (*(_DWORD *)&a2->Flags & 0x10000) == 0 )
          PrivateDriverDataSize = (unsigned int)(2 * PrivateDriverDataSize);
        v64 = (char *)operator new[](PrivateDriverDataSize, 0x4B677844u, 258LL);
        v65 = v260;
        v260[v60] = v64;
        if ( !v64 )
        {
          LODWORD(v42) = -1073741801;
          v247 = -1073741801;
          WdLogSingleEntry3(3LL, this, a2->NumAllocations, -1073741801LL);
          WdLogGlobalForLineNumber = 5234;
          goto LABEL_97;
        }
        if ( !a3 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
        {
          v59 = v65;
          v58 = a3;
          v57 = v241;
        }
        else
        {
          v66 = &v64[v24[v241].PrivateDriverDataSize];
          v264[v60] = v66;
          RtlCopyFromUser(v66, v24[v241].pPrivateDriverData, v24[v241].PrivateDriverDataSize);
          v57 = v241;
          v58 = a3;
          v59 = v260;
        }
      }
      else
      {
        v59[v57] = 0LL;
        if ( v58 )
          v264[v57] = 0LL;
      }
      ++v57;
    }
    if ( a3 )
    {
      if ( a2->pStandardAllocation )
      {
        v67 = a2->PrivateDriverDataSize;
        if ( v67 )
        {
          v68 = (void *)operator new[](v67, 0x4B677844u, 258LL);
          v275 = v68;
          if ( !v68 )
          {
            LODWORD(v42) = -1073741801;
            v247 = -1073741801;
            WdLogSingleEntry3(3LL, this, a2->PrivateDriverDataSize, -1073741801LL);
            WdLogGlobalForLineNumber = 5279;
            goto LABEL_97;
          }
          RtlCopyFromUser(v68, a2->pStandardAllocation, a2->PrivateDriverDataSize);
        }
      }
    }
    LODWORD(v42) = DXGDEVICE::OpenResourceObject(
                     this,
                     a2,
                     v24,
                     a4,
                     m,
                     v261,
                     (struct DXGRESOURCEREFERENCE *)&v280,
                     v248,
                     v265,
                     v288,
                     (struct DXGAUTOPUSHLOCK *)v289);
    v247 = v42;
    if ( (int)v42 < 0 )
      goto LABEL_97;
    v43 = v280;
    v250 = v280;
    if ( v280 && (*((_DWORD *)v280 + 1) & 1) == 0 && (*(_DWORD *)&a2->Flags & 2) != 0 )
    {
      WdLogSingleEntry3(2LL, this, v280, -1073741811LL);
      WdLogGlobalForLineNumber = 5332;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: Driver asked to create a shared resource, but resource 0x%p already exists, and is non-"
                  "shared, returning 0x%I64x",
        (__int64)this,
        (__int64)v43,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_99;
    }
    LODWORD(v42) = DXGDEVICE::CreateDestructionBuffers(this, a2->NumAllocations, v280, v248[0]);
    v247 = v42;
    if ( (int)v42 < 0 )
      goto LABEL_97;
    k = 0LL;
    LODWORD(v42) = DXGDEVICE::CreateAllocationObjects(this, a2->NumAllocations, &v269, v43, &k);
    v247 = v42;
    if ( (int)v42 < 0 )
    {
      v63 = v269;
      goto LABEL_396;
    }
    v249 = v269;
    if ( k )
    {
      DXGDEVICE::AppendAllocationListToResourceOrDevice(this, v43, v269, k);
      v253 = 1;
    }
    v69 = a2->Flags;
    if ( (*(_WORD *)&v69 & 0x800) != 0 )
    {
      if ( VidPnSourceId != -1 )
      {
        *(_DWORD *)(*((_QWORD *)v43 + 7) + 12LL) |= 0x40u;
        *((_DWORD *)v43 + 1) |= 8u;
        *(_DWORD *)(*((_QWORD *)v43 + 7) + 12LL) ^= ((unsigned __int8)*(_DWORD *)(*((_QWORD *)v43 + 7) + 12LL) ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 3)) & 0x80;
      }
      goto LABEL_149;
    }
    if ( (*(_WORD *)&v69 & 0x1000) != 0 )
    {
      if ( !v265 )
        goto LABEL_149;
      if ( (LODWORD(v268->Count) & 0x80u) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5398;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pCreateStandardAllocation->Flags.Primary == 0",
          5398LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (*(_DWORD *)v265 & 0x100) == 0 )
      {
LABEL_149:
        if ( !v251 )
        {
          memset(v263, 0, 88LL * a2->NumAllocations);
          v71 = a4;
          if ( !a4 )
          {
            LODWORD(v42) = DXGDEVICE::CreateDriverAllocations(
                             this,
                             a2,
                             v24,
                             v263,
                             v249,
                             v43,
                             v260,
                             v264,
                             v275,
                             v265,
                             a3,
                             v262);
            v247 = v42;
            v71 = 0;
          }
          if ( (int)v42 < 0 )
            goto LABEL_179;
          LODWORD(v42) = DXGDEVICE::OpenAllocations(
                           this,
                           a2,
                           v24,
                           v249,
                           v276,
                           v260,
                           v264,
                           v275,
                           a3,
                           v71,
                           a8,
                           v283,
                           (unsigned __int64 *)v252);
          v247 = v42;
          if ( (int)v42 < 0 )
            goto LABEL_179;
          v72 = v263;
          if ( (*(_DWORD *)&a2->Flags & 8) != 0 )
            v263->Flags.Value |= 0x4000008u;
          v73 = a2->Flags;
          if ( (*(_WORD *)&v73 & 0x100) != 0 )
          {
            v72->Flags.Value = v72->Flags.Value & 0xFEFFFFFB | 0x1000000;
          }
          else if ( (*(_WORD *)&v73 & 0x200) != 0 )
          {
            v72->Flags.Value |= 0x800004u;
          }
          v74 = v72->Flags.Value | 0x800;
          if ( (*(_DWORD *)&a2->Flags & 0x8000) == 0 )
            v74 = v72->Flags.Value & 0xFFFFF7FF;
          v72->Flags.Value = v74;
          if ( (*(_DWORD *)&a2->Flags & 0x80000) != 0 )
            v72->Flags.Value = v74 | 0x1000;
          LODWORD(v42) = DXGDEVICE::CreateVidMmAllocations(this, a2, v24, v72, v249, v265, a4, v272[0]);
          v247 = v42;
          if ( (int)v42 < 0 )
          {
LABEL_179:
            v63 = v249;
            goto LABEL_396;
          }
          if ( Object )
          {
            LODWORD(v252) = 0;
            if ( a2->NumAllocations )
            {
              v75 = 0;
              v76 = v249;
              v77 = Object;
              do
              {
                v77[v75] = VIDMM_EXPORT::VidMmQueryAllocationSizeInSystemMemory(
                             *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                             *((const struct VIDMM_MULTI_ALLOC **)v76 + 3),
                             (*(_DWORD *)&a2->Flags & 0x20) != 0);
                v76 = (struct DXGALLOCATION *)*((_QWORD *)v76 + 8);
                ++v75;
              }
              while ( v75 < a2->NumAllocations );
              v43 = v250;
              LODWORD(v42) = v247;
              v24 = v246;
            }
          }
        }
        if ( v248[0] )
        {
          if ( v43 )
          {
            if ( (*((_DWORD *)v43 + 1) & 1) != 0 )
            {
              v78 = *((_QWORD *)v43 + 7);
              if ( !*(_DWORD *)(v78 + 24) && (*(_DWORD *)(v78 + 12) & 8) == 0 )
              {
                DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v272);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v272);
                if ( (*(_DWORD *)&a2->Flags & 2) == 0 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 5536;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"0 != (pCreateAllocation->Flags.CreateShared)",
                    5536LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( (*((_DWORD *)Current + 102) & 0x100) != 0 )
                {
                  *(_DWORD *)(*((_QWORD *)v43 + 7) + 24LL) = DXGPROCESS::AllocHandleSafe(
                                                               *((_QWORD *)Current + 74),
                                                               *((_QWORD *)v43 + 7),
                                                               2u);
                  *(_DWORD *)(*((_QWORD *)v43 + 7) + 12LL) |= 0x2000u;
                }
                else
                {
                  Global = DXGGLOBAL::GetGlobal();
                  *(_DWORD *)(*((_QWORD *)v43 + 7) + 24LL) = DXGGLOBAL::AllocHandle(
                                                               (__int64)Global,
                                                               *((_QWORD *)v43 + 7),
                                                               2u);
                }
                if ( !*(_DWORD *)(*((_QWORD *)v43 + 7) + 24LL) )
                {
                  WdLogSingleEntry2(3LL, this, -1073741801LL);
                  WdLogGlobalForLineNumber = 5560;
                  LODWORD(v42) = -1073741801;
                  v247 = -1073741801;
                  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v272);
                  goto LABEL_183;
                }
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v272);
              }
            }
          }
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
            (DXGAUTOPUSHLOCKEXCLUSIVE *)&v285,
            (struct _KTHREAD **)this + 30);
          v80 = *((_QWORD *)this + 7);
          if ( v80 )
            *(_QWORD *)(v80 + 32) = v43;
          *((_QWORD *)v43 + 5) = *((_QWORD *)this + 7);
          *((_QWORD *)this + 7) = v43;
          DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)&v285);
        }
        v81 = 0;
        if ( v43 )
          v81 = *((_DWORD *)v43 + 4);
        a2->hResource = v81;
        v82 = a2->Flags;
        if ( ((*(_BYTE *)&v82 & 2) != 0 || a4) && (*(_BYTE *)&v82 & 0x40) == 0 )
          v83 = *(_DWORD *)(*((_QWORD *)v43 + 7) + 24LL);
        else
          v83 = 0;
        a2->hGlobalShare = v83;
        if ( a3 )
        {
          v84 = 0LL;
          v279 = 0;
          for ( j = (int *)v249; ; j = (int *)*((_QWORD *)k + 8) )
          {
            k = (struct DXGALLOCATION *)j;
            if ( (unsigned int)v84 >= a2->NumAllocations )
              break;
            RtlWriteULongToUser(&a2->pAllocationInfo->hAllocation + 24 * v84, j[4]);
            v84 = (unsigned int)++v279;
          }
          if ( (int)v42 < 0 )
            goto LABEL_183;
        }
        else
        {
          v86 = 0;
          v87 = v249;
          v88 = v249;
          if ( !a2->NumAllocations )
            goto LABEL_204;
          do
          {
            *(&a2->pAllocationInfo->hAllocation + 24 * v86++) = *((_DWORD *)v88 + 4);
            v88 = (struct DXGALLOCATION *)*((_QWORD *)v88 + 8);
          }
          while ( v86 < a2->NumAllocations );
        }
        v87 = v249;
LABEL_204:
        if ( (*(_DWORD *)(*((_QWORD *)v281 + 5) + 408LL) & 0x100) == 0 || *((_DWORD *)this + 476) )
        {
          v242 = 0;
          v42 = (__int64)v87;
          for ( k = v87; v242 < a2->NumAllocations; k = (struct DXGALLOCATION *)v42 )
          {
            v89 = *(_DWORD *)(*(_QWORD *)(v42 + 48) + 4LL);
            if ( (v89 & 1) != 0 )
            {
              LODWORD(v42) = DXGDEVICE::AddPrimaryAllocation(this, (const struct DXGALLOCATION *)v42);
              v247 = v42;
              if ( (int)v42 < 0 )
                goto LABEL_183;
              v42 = (__int64)k;
            }
            else if ( (v89 & 2) != 0 )
            {
              DXGDEVICE::SetDisplayedPrimary(
                (struct _KTHREAD **)this,
                (v89 >> 6) & 0xF,
                (const struct DXGALLOCATION *)v42,
                0,
                1);
            }
            ++v242;
            v42 = *(_QWORD *)(v42 + 64);
          }
        }
        if ( (*(_DWORD *)&a2->Flags & 2) == 0 )
        {
          v103 = v249;
          goto LABEL_251;
        }
        if ( a2->pPrivateRuntimeData )
        {
          v90 = *((_QWORD *)v43 + 7);
          v91 = v271;
          PrivateRuntimeDataSize = v271->PrivateRuntimeDataSize;
          if ( *(_QWORD *)(v90 + 104) )
          {
            v95 = *(_DWORD *)(v90 + 112);
            if ( v95 != (_DWORD)PrivateRuntimeDataSize )
            {
              LODWORD(v42) = -1073741811;
              v247 = -1073741811;
              WdLogSingleEntry3(3LL, this, PrivateRuntimeDataSize, v95);
              WdLogGlobalForLineNumber = 5721;
              goto LABEL_183;
            }
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)v43 + 7) + 104LL) = operator new[](
                                                          (unsigned int)PrivateRuntimeDataSize,
                                                          0x4B677844u,
                                                          258LL);
            v93 = *((_QWORD *)v43 + 7);
            v91 = v271;
            v94 = v271->PrivateRuntimeDataSize;
            if ( !*(_QWORD *)(v93 + 104) )
            {
              LODWORD(v42) = -1073741801;
              v247 = -1073741801;
              WdLogSingleEntry3(3LL, this, v94, -1073741801LL);
              WdLogGlobalForLineNumber = 5708;
              goto LABEL_183;
            }
            *(_DWORD *)(v93 + 112) = v94;
          }
          v96 = a3;
          if ( a3 )
            RtlCopyFromUser(
              *(void **)(*((_QWORD *)v43 + 7) + 104LL),
              (void *)a2->pPrivateRuntimeData,
              v91->PrivateRuntimeDataSize);
          else
            memmove(*(void **)(*((_QWORD *)v43 + 7) + 104LL), a2->pPrivateRuntimeData, v91->PrivateRuntimeDataSize);
          if ( (*(_DWORD *)&a2->Flags & 0x100000) == 0 )
          {
LABEL_227:
            if ( a2->pStandardAllocation )
            {
              v97 = a2->PrivateDriverDataSize;
              if ( (_DWORD)v97 )
              {
                v98 = *((_QWORD *)v43 + 7);
                if ( *(_QWORD *)(v98 + 120) )
                {
                  v111 = *(_DWORD *)(v98 + 128);
                  if ( v111 != (_DWORD)v97 )
                  {
                    LODWORD(v42) = -1073741811;
                    v247 = -1073741811;
                    WdLogSingleEntry3(3LL, this, v97, v111);
                    WdLogGlobalForLineNumber = 5787;
                    goto LABEL_183;
                  }
                }
                else
                {
                  *(_QWORD *)(*((_QWORD *)v43 + 7) + 120LL) = operator new[]((unsigned int)v97, 0x4B677844u, 258LL);
                  v99 = *((_QWORD *)v43 + 7);
                  v100 = a2->PrivateDriverDataSize;
                  if ( !*(_QWORD *)(v99 + 120) )
                  {
                    LODWORD(v42) = -1073741801;
                    v247 = -1073741801;
                    WdLogSingleEntry3(3LL, this, v100, -1073741801LL);
                    WdLogGlobalForLineNumber = 5774;
                    goto LABEL_183;
                  }
                  *(_DWORD *)(v99 + 128) = v100;
                }
                pStandardAllocation = v275;
                if ( !v96 )
                  pStandardAllocation = a2->pStandardAllocation;
                memmove(*(void **)(*((_QWORD *)v43 + 7) + 120LL), pStandardAllocation, a2->PrivateDriverDataSize);
                if ( (*(_DWORD *)&a2->Flags & 0x100000) != 0 )
                {
                  LODWORD(v42) = CheckNoKmdAccessPrivateData(
                                   a2->PrivateDriverDataSize,
                                   *(_DWORD **)(*((_QWORD *)v43 + 7) + 120LL),
                                   0xFF000001);
                  v247 = v42;
                  if ( (int)v42 < 0 )
                    goto LABEL_183;
                }
              }
            }
            v102 = 0LL;
            v243 = 0;
            v103 = v249;
            v104 = v249;
            for ( m = v249; (unsigned int)v102 < a2->NumAllocations; m = v104 )
            {
              v272[0] = v102;
              v105 = (struct _D3DKMT_CREATESTANDARDALLOCATION *)(96LL * (_QWORD)v102);
              v262 = v105;
              if ( *(void **)((char *)&v24->pPrivateDriverData + (_QWORD)v105) )
              {
                v106 = operator new[](
                         *(unsigned int *)((char *)&v24->PrivateDriverDataSize + (_QWORD)v105),
                         0x4B677844u,
                         258LL);
                v107 = m;
                *(_QWORD *)(*((_QWORD *)m + 6) + 32LL) = v106;
                v108 = *(void **)(*((_QWORD *)v107 + 6) + 32LL);
                if ( !v108 )
                {
                  LODWORD(v42) = -1073741801;
                  v247 = -1073741801;
                  WdLogSingleEntry4(
                    3LL,
                    this,
                    (unsigned int)(v243 + 1),
                    *(unsigned int *)((char *)&v24->PrivateDriverDataSize + (_QWORD)v262),
                    -1073741801LL);
                  WdLogGlobalForLineNumber = 5831;
                  goto LABEL_183;
                }
                if ( !a3 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
                {
                  v109 = *(unsigned int *)((char *)&v24->PrivateDriverDataSize + (_QWORD)v262);
                  v110 = *(void **)((char *)&v24->pPrivateDriverData + (_QWORD)v262);
                }
                else
                {
                  v109 = *(unsigned int *)((char *)&v24->PrivateDriverDataSize + (_QWORD)v262);
                  v110 = v264[(__int64)v272[0]];
                }
                memmove(v108, v110, v109);
                *(_DWORD *)(*((_QWORD *)m + 6) + 40LL) = *(UINT *)((char *)&v24->PrivateDriverDataSize + (_QWORD)v262);
                v104 = m;
              }
              v102 = (struct COREDEVICEACCESS *)(unsigned int)(v243 + 1);
              v243 = (int)v102;
              v104 = (struct DXGALLOCATION *)*((_QWORD *)v104 + 8);
            }
LABEL_251:
            v112 = *(struct DXGALLOCATION **)(*((_QWORD *)this + 2) + 16LL);
            k = v112;
            v283 = (unsigned int *)v112;
            if ( !*((_BYTE *)v112 + 209) )
              goto LABEL_352;
            if ( a4 )
            {
LABEL_336:
              if ( *((_BYTE *)v112 + 209) )
              {
                v167 = v249;
                if ( a4 || !bTracingEnabled || (v168 = v249, k = v249, v169 = 0, LODWORD(v252) = 0, !a2->NumAllocations) )
                {
LABEL_353:
                  v174 = a2->Flags;
                  if ( (*(_WORD *)&v174 & 0x800) != 0 )
                  {
                    memset(&v285, 0, sizeof(v285));
                    v285.hAllocation = *(HANDLE *)(*((_QWORD *)v167 + 6) + 16LL);
                    v175 = ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)this + 2), &v285);
                    LODWORD(v42) = v175;
                    v247 = v175;
                    if ( v175 < 0 )
                    {
                      v63 = v249;
                      WdLogSingleEntry4(3LL, v175, this, *((unsigned int *)v249 + 4), v249);
                      WdLogGlobalForLineNumber = 6239;
                      goto LABEL_395;
                    }
                    if ( v285.Format == D3DDDIFMT_UNKNOWN && v285.Height != 1 )
                    {
                      WdLogSingleEntry3(3LL, -1073741811LL, this, v285.Height);
                      WdLogGlobalForLineNumber = 6247;
                      LODWORD(v42) = -1073741811;
                      goto LABEL_255;
                    }
                    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v167 + 5) + 56LL) + 12LL) & 0x20) == 0 )
                    {
                      WdLogSingleEntry0(1LL);
                      WdLogGlobalForLineNumber = 6254;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"pAllocationObjectList->m_pOwningResource->m_pSharedResource->m_CrossAdapter",
                        6254LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    v42 = *(_QWORD *)(*((_QWORD *)v167 + 5) + 56LL);
                    v273 = (const struct _D3DKM_CREATESTANDARDALLOCATION *)v42;
                    *(_DWORD *)(v42 + 208) = v285.Width;
                    *(_DWORD *)(v42 + 212) = v285.Height;
                    *(_DWORD *)(v42 + 216) = v285.Format;
                    v176 = v271->Flags;
                    if ( (*((_BYTE *)this + 1917) & 1) != 0 )
                    {
                      if ( (*(_DWORD *)&v176 & 0x20000) != 0 )
                      {
                        v255 = 0LL;
                        v177 = ObReferenceObjectByHandle(v24->hSection, 0x20000u, MmSectionObjectType, a3, &v255, 0LL);
                        *(_QWORD *)(v42 + 192) = v255;
                        LODWORD(v42) = v177;
                        v247 = v177;
                        if ( v177 < 0 )
                        {
                          v151 = v177;
                          WdLogSingleEntry2(2LL, v24->hSection, v177);
                          WdLogGlobalForLineNumber = 6291;
                          hSection = (__int64)v24->hSection;
LABEL_313:
                          DxgkLogInternalTriageEvent(
                            0LL,
                            0x40000,
                            -1,
                            (__int64)L"Failed to take a reference on hSection:0x%I64x, returning 0x%I64x",
                            hSection,
                            v151,
                            0LL,
                            0LL,
                            0LL);
                          goto LABEL_183;
                        }
                        v42 = (__int64)v273;
                        *((_DWORD *)v273 + 3) |= 0x400u;
                      }
                    }
                    else
                    {
                      if ( (*(_BYTE *)&v176 & 0x20) == 0 )
                      {
                        *(_QWORD *)(v42 + 192) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                                               + 8LL)
                                                                                   + 640LL))(*((_QWORD *)v167 + 3));
                        *(_DWORD *)(v42 + 12) |= 0x400u;
                      }
                      *(_QWORD *)(v42 + 224) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                                                         + 712LL))(
                                                 *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                                                 *((_QWORD *)v167 + 3));
                    }
                    v178 = VidPnSourceId;
                    *(_DWORD *)(v42 + 232) = VidPnSourceId;
                    v63 = v249;
                    if ( v178 != -1 )
                    {
                      *(_DWORD *)(v42 + 12) |= 0x40u;
                      *(_DWORD *)(v42 + 12) ^= ((unsigned __int8)*(_DWORD *)(v42 + 12) ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 3)) & 0x80;
                    }
                  }
                  else
                  {
                    v63 = v249;
                    if ( (*(_WORD *)&v174 & 0x1000) != 0 )
                    {
                      v179 = v265;
                      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 760LL)
                                                                                 + 8LL)
                                                                     + 720LL))(
                        *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                        *((_QWORD *)v249 + 3),
                        *((_QWORD *)v265 + 43));
LABEL_374:
                      v273 = (const struct _D3DKM_CREATESTANDARDALLOCATION *)*((_QWORD *)this + 2);
                      if ( DXGADAPTER::IsGpuVirtualAddressingSupported(*((DXGADAPTER **)v273 + 2))
                        && v179
                        && (v268->Count & 0x200) == 0
                        && (memset(&v290, 0, sizeof(v290)),
                            v290.Protection.Value = 1LL,
                            LODWORD(v252) = 0,
                            hPrivateRuntimeResourceHandle = v63,
                            v271 = (struct _D3DKMT_CREATEALLOCATION *)v63,
                            a2->NumAllocations) )
                      {
                        while ( 1 )
                        {
                          v181 = (*((_DWORD *)hPrivateRuntimeResourceHandle + 18) >> 12) & 0x3F;
                          if ( *((_DWORD *)v265 + 4) == 4 )
                          {
                            v182 = *(_DWORD *)(*((_QWORD *)v265 + 3) + 12LL);
                            if ( v182 != 1 && (unsigned int)(v182 - 3) > 1 )
                            {
                              if ( DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
                                v181 = -1;
                              hPrivateRuntimeResourceHandle = v271;
                            }
                          }
                          v183 = v251
                               ? DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                                   (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4712LL),
                                   *((_DWORD *)Current + 122),
                                   this,
                                   0,
                                   *((_DWORD *)hPrivateRuntimeResourceHandle + 5),
                                   &v290)
                               : VIDMM_EXPORT::VidMmMapGpuVirtualAddress(
                                   *((VIDMM_EXPORT **)v273 + 95),
                                   *((struct VIDMM_GLOBAL **)v273 + 96),
                                   0LL,
                                   *((struct VIDMM_MULTI_ALLOC **)hPrivateRuntimeResourceHandle + 3),
                                   &v290,
                                   0,
                                   v181);
                          LODWORD(v42) = v183;
                          v247 = v183;
                          if ( v183 < 0 )
                            break;
                          v184 = DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL));
                          BaseAddress = v290.BaseAddress;
                          if ( v184 )
                            BaseAddress = v290.VirtualAddress;
                          v290.BaseAddress = BaseAddress;
                          v290.VirtualAddress = 0LL;
                          LODWORD(v252) = (_DWORD)v252 + 1;
                          hPrivateRuntimeResourceHandle = v271->hPrivateRuntimeResourceHandle;
                          v271 = (struct _D3DKMT_CREATEALLOCATION *)hPrivateRuntimeResourceHandle;
                          if ( (unsigned int)v252 >= a2->NumAllocations )
                            goto LABEL_395;
                        }
                        WdLogSingleEntry1(3LL);
                        WdLogGlobalForLineNumber = 6392;
                      }
                      else
                      {
                        LODWORD(v42) = v247;
                      }
                      goto LABEL_395;
                    }
                  }
                  v179 = v265;
                  goto LABEL_374;
                }
                do
                {
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
                  {
                    v170 = *((_QWORD *)v168 + 5);
                    if ( v170 )
                      v255 = *(PVOID *)(v170 + 48);
                    else
                      v255 = 0LL;
                    if ( v170 )
                      Object = (PVOID)*(unsigned int *)(v170 + 16);
                    else
                      Object = 0LL;
                    v273 = (const struct _D3DKM_CREATESTANDARDALLOCATION *)*((unsigned int *)v168 + 4);
                    if ( v170 )
                      v261 = *(struct _DXGSHAREDALLOCOBJECT **)(v170 + 56);
                    else
                      v261 = 0LL;
                    v171 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                    CurrentProcessId = PsGetCurrentProcessId();
                    McTemplateK0ppppppppppppq_EtwWriteTransfer(
                      (__int64)k,
                      &EventCreateDeviceAllocation,
                      v173,
                      CurrentProcessId,
                      this,
                      v171,
                      k);
                    v168 = k;
                    v169 = (unsigned int)v252;
                  }
                  LODWORD(v252) = ++v169;
                  v168 = (struct DXGALLOCATION *)*((_QWORD *)v168 + 8);
                  k = v168;
                }
                while ( v169 < a2->NumAllocations );
              }
LABEL_352:
              v167 = v249;
              goto LABEL_353;
            }
            if ( !(unsigned int)DXGPROCESS::GetHostProcess(*((DXGPROCESS **)v281 + 5)) )
            {
              LODWORD(v42) = -1073741823;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 5866;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to get host adapter process, returning 0x%I64x",
                -1073741823LL,
                0LL,
                0LL,
                0LL,
                0LL);
LABEL_255:
              v247 = v42;
LABEL_183:
              v63 = v249;
LABEL_395:
              v43 = v250;
              goto LABEL_396;
            }
            v261 = 0LL;
            v115 = 0;
            if ( DXGDEVICE::UmdManagesResidency(this) )
            {
              if ( v265 )
              {
                v114 = *((_DWORD *)v265 + 4);
                if ( v114 == 2 || ((v114 - 1) & 0xFFFFFFFD) == 0 )
                  v115 = 1;
              }
            }
            v116 = a2->Flags;
            if ( (*(_BYTE *)&v116 & 2) != 0 )
              v117 = *(void **)(*((_QWORD *)v43 + 7) + 104LL);
            else
              v117 = 0LL;
            v118 = v275;
            if ( a3 )
            {
              v119 = v264;
              if ( (*(_DWORD *)&v116 & 0x10000) == 0 )
                goto LABEL_269;
            }
            else
            {
              v118 = a2->pStandardAllocation;
            }
            v119 = v260;
LABEL_269:
            if ( (*(_BYTE *)&v116 & 2) != 0 )
              v120 = *((_DWORD *)v43 + 5);
            else
              v120 = 0;
            v24 = v246;
            Allocation = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateAllocation(
                           (struct DXGALLOCATION *)((char *)k + 4712),
                           v113,
                           *((_DWORD *)this + 118),
                           v120,
                           a2,
                           v246,
                           v119,
                           v118,
                           v117,
                           a3,
                           v115,
                           (unsigned __int8 **)&v261);
            LODWORD(v252) = Allocation;
            if ( !v261 )
            {
              v122 = Allocation;
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 5896;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"VmBusSendCreateAllocation failed: 0x%I64x",
                v122,
                0LL,
                0LL,
                0LL,
                0LL);
              LODWORD(v42) = (_DWORD)v252;
              v247 = (int)v252;
              v43 = v250;
              v123 = v246;
              v63 = v249;
              goto LABEL_397;
            }
            v124 = v261;
            v262 = (struct _D3DKMT_CREATESTANDARDALLOCATION *)v261;
            if ( !v43 )
              goto LABEL_283;
            *((_DWORD *)v43 + 5) = *((_DWORD *)v261 + 1);
            v125 = a2->Flags;
            if ( (*(_BYTE *)&v125 & 2) == 0 )
              goto LABEL_283;
            v126 = v124[2];
            if ( (*(_BYTE *)&v125 & 0x40) != 0 )
            {
              if ( v126 )
              {
                WdLogSingleEntry0(1LL);
                v127 = 5911LL;
                v128 = L"NULL == pOutput->hGlobalSharedResource";
LABEL_281:
                WdLogGlobalForLineNumber = v127;
                DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)v128, v127, 0LL, 0LL, 0LL, 0LL);
                v124 = v262;
              }
            }
            else if ( !v126 )
            {
              WdLogSingleEntry0(1LL);
              v127 = 5915LL;
              v128 = L"pOutput->hGlobalSharedResource";
              goto LABEL_281;
            }
            *(_DWORD *)(*((_QWORD *)v43 + 7) + 28LL) = v124[2];
LABEL_283:
            v282 = 0LL;
            if ( (*(_DWORD *)&a2->Flags & 2) != 0 && v43 )
              v282 = *(_QWORD **)(*((_QWORD *)v43 + 7) + 136LL);
            v129 = v103;
            Object = v103;
            v130 = 0;
            v244 = 0;
            if ( a2->NumAllocations )
            {
              do
              {
                v129[32] = v124[3];
                v131 = v130;
                v129[5] = v124[18 * v130 + 4];
                *((_BYTE *)v129 + 128) |= 4u;
                if ( (*(_DWORD *)&a2->Flags & 0x20020) != 0 && (*(_DWORD *)&a2->Flags & 2) != 0 )
                  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v129 + 5) + 56LL) + 200LL) = v124[18 * v130 + 7];
                else
                  v129[31] = v124[18 * v130 + 7];
                if ( v124[3] & 1 | ((v124[3] & 2) != 0) )
                {
                  *((_QWORD *)v129 + 13) = v24[v130].hSection;
                  *((_BYTE *)v129 + 128) ^= (*((_BYTE *)v129 + 128) ^ (8 * (v124[18 * v130 + 6] >> 21))) & 8;
                }
                *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v124[18 * v130 + 6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6)
                                                                                             + 4LL)) & 1;
                *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v124[18 * v130 + 6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6)
                                                                                             + 4LL)) & 2;
                *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v124[18 * v130 + 6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6)
                                                                                             + 4LL)) & 4;
                *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v124[18 * v130 + 6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6)
                                                                                             + 4LL)) & 8;
                *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v124[18 * v130 + 6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6)
                                                                                             + 4LL)) & 0x20;
                *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v124[18 * v130 + 6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6)
                                                                                             + 4LL)) & 0x800;
                *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v124[18 * v130 + 6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6)
                                                                                             + 4LL)) & 0x1000;
                *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v124[18 * v130 + 6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6)
                                                                                             + 4LL)) & 0x2000;
                *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v124[18 * v130 + 6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6)
                                                                                             + 4LL)) & 0x4000;
                *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v124[18 * v130 + 6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6)
                                                                                             + 4LL)) & 0x40000;
                *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v124[18 * v130 + 6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6)
                                                                                             + 4LL)) & 0x80000;
                *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= (v124[18 * v130 + 6] ^ *(_DWORD *)(*((_QWORD *)v129 + 6)
                                                                                             + 4LL)) & 0x100000;
                *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) |= 0x20000u;
                v132 = v130;
                if ( (v24[v131].Flags.Value & 1) != 0 )
                {
                  *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^= ((unsigned __int16)*(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) ^ (unsigned __int16)((unsigned __int16)v24[v132].VidPnSourceId << 6)) & 0x3C0;
                  if ( *((_QWORD *)this + 237) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
                    *(_DWORD *)(*((_QWORD *)v129 + 6) + 4LL) |= 4u;
                }
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
                {
                  v133 = (v129[18] >> 12) & 0x3F;
                  v134 = *((_QWORD *)v129 + 6);
                  v135 = v129[30];
                  v136 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                  v137 = PsGetCurrentProcessId();
                  McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer(
                    v138,
                    &EventCreateAdapterAllocation,
                    v139,
                    (__int64)v137,
                    (char)this,
                    v136,
                    0,
                    v135,
                    Src,
                    v218,
                    v219,
                    v220,
                    v221,
                    v222,
                    v223,
                    v224,
                    v134,
                    v225,
                    v226,
                    v227,
                    v228,
                    v229,
                    v230,
                    v231,
                    v232,
                    v233,
                    v234,
                    v235,
                    v236,
                    v237,
                    v133,
                    0,
                    0LL);
                  v24 = v246;
                  v129 = Object;
                  v124 = v262;
                }
                v130 = v244 + 1;
                v244 = v130;
                v129 = (_DWORD *)*((_QWORD *)v129 + 8);
                Object = v129;
              }
              while ( v130 < a2->NumAllocations );
              v103 = v249;
            }
            if ( (int)v252 < 0 )
            {
              LODWORD(v42) = (_DWORD)v252;
              goto LABEL_255;
            }
            v140 = v103;
            m = v103;
            for ( n = 0; n < a2->NumAllocations; ++n )
            {
              v142 = n;
              v143 = v124[18 * n + 8];
              v144 = a2->Flags;
              if ( (*(_DWORD *)&v144 & 0x10000) != 0 )
              {
                if ( (*(_BYTE *)&v144 & 0x20) != 0 )
                {
                  v145 = (struct COREDEVICEACCESS *)v24[n].hSection;
                  v272[0] = v145;
                  if ( (*((_BYTE *)this + 1917) & 1) == 0 )
                  {
                    LODWORD(v42) = ProcessSysMemAttributes(v145, v143, &v263[n]);
                    v247 = v42;
                    if ( (int)v42 < 0 )
                      goto LABEL_183;
                    v140 = m;
                    v142 = n;
                    v145 = v272[0];
                  }
                  if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
                  {
                    v146 = *(_QWORD *)(*((_QWORD *)v140 + 5) + 56LL);
                    *(_DWORD *)(v146 + 12) |= 0x200u;
                    v147 = *(_DWORD *)(v146 + 12);
                    *(_QWORD *)(v146 + 192) = v145;
                    v148 = v142;
                    v149 = v263;
                    *(_DWORD *)(v146 + 204) = v263[v148].Alignment;
                    *(_DWORD *)(v146 + 12) = v147 ^ ((unsigned __int16)v147 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v149[v148].Flags.0 << 9)) & 0x800;
                  }
                }
                else if ( (*(_DWORD *)&v144 & 0x20000) != 0 )
                {
                  v272[0] = (struct COREDEVICEACCESS *)(96LL * n);
                  Object = 0LL;
                  v150 = ObReferenceObjectByHandle(
                           *(HANDLE *)((char *)v272[0] + (unsigned __int64)v24 + 8),
                           0x20000u,
                           MmSectionObjectType,
                           a3,
                           &Object,
                           0LL);
                  v252 = Object;
                  LODWORD(v42) = v150;
                  v247 = v150;
                  if ( v150 < 0 )
                  {
                    v151 = v150;
                    v152 = v272[0];
                    WdLogSingleEntry2(2LL, *(_QWORD *)((char *)v272[0] + (unsigned __int64)v24 + 8), v150);
                    WdLogGlobalForLineNumber = 6081;
                    hSection = *(__int64 *)((char *)&v24->hSection + (_QWORD)v152);
                    goto LABEL_313;
                  }
                  v272[0] = (struct COREDEVICEACCESS *)&v263[n];
                  v154 = ProcessSectionAttributes(Object, (struct _DXGK_ALLOCATIONINFO *)v272[0]);
                  v42 = v154;
                  v247 = v154;
                  if ( v154 < 0 )
                  {
                    WdLogSingleEntry2(2LL, this, v154);
                    WdLogGlobalForLineNumber = 6091;
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Failed to query section attributes. Device=0x%I64x, Status=%I64X",
                      (__int64)this,
                      v42,
                      0LL,
                      0LL,
                      0LL);
                    ObfDereferenceObject(v252);
                    goto LABEL_183;
                  }
                  v140 = m;
                  v155 = *(_QWORD *)(*((_QWORD *)m + 5) + 56LL);
                  *(_DWORD *)(v155 + 12) |= 0x400u;
                  v156 = *(_DWORD *)(v155 + 12);
                  *(_QWORD *)(v155 + 192) = v252;
                  v157 = v272[0];
                  *(_DWORD *)(v155 + 204) = *((_DWORD *)v272[0] + 3);
                  *(_DWORD *)(v155 + 12) = v156 ^ ((unsigned __int16)v156 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v157 + 16) << 9)) & 0x800;
                }
                else if ( (*(_BYTE *)&v144 & 2) != 0 )
                {
                  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v140 + 5) + 56LL) + 12LL) ^= ((unsigned __int16)*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v140 + 5) + 56LL) + 12LL) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v263[n].Flags.0 << 9)) & 0x800;
                }
              }
              v158 = n;
              v159 = (struct COREDEVICEACCESS *)(96LL * n);
              v272[0] = v159;
              if ( (*(UINT *)((_BYTE *)&v24->Flags.Value + (_QWORD)v159) & 1) != 0 )
              {
                v252 = 0LL;
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(
                  (DXGALLOCATIONREFERENCE *)&v255,
                  (struct _EX_RUNDOWN_REF *)v140);
                DXGALLOCATIONREFERENCE::MoveAssign(&v252, &v255);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v255);
                Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4712LL),
                             *((_DWORD *)Current + 122),
                             *((_DWORD *)this + 118),
                             0,
                             (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                             1u,
                             (const struct DXGALLOCATIONREFERENCE *)&v252,
                             0LL,
                             0LL);
                v42 = Resident;
                v247 = Resident;
                if ( Resident < 0 )
                {
                  WdLogSingleEntry1(2LL);
                  WdLogGlobalForLineNumber = 6134;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"VmBusSendMakeResident failed: 0x%I64x",
                    v42,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v252);
                  goto LABEL_334;
                }
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v252);
                v140 = m;
                v159 = v272[0];
                v158 = n;
              }
              *(_QWORD *)(*((_QWORD *)v140 + 6) + 16LL) = *((_QWORD *)v140 + 6);
              v161 = *((_QWORD *)v140 + 6);
              v162 = 3 * v158;
              v163 = v262;
              *((_DWORD *)v140 + 30) = v262[v162 + 1].ExistingHeapData.Size;
              *(_QWORD *)(v161 + 112) = LODWORD(v163[v162 + 1].ExistingHeapData.Size);
              *(_OWORD *)(v161 + 64) = *(_OWORD *)&v163[v162 + 1].Flags.0;
              *(_OWORD *)(v161 + 80) = *(_OWORD *)&v163[v162 + 2].ExistingHeapData.Size;
              *(_OWORD *)(v161 + 96) = *(_OWORD *)&v163[v162 + 3].Type;
              v164 = *(unsigned int *)((char *)&v24->PrivateDriverDataSize + (_QWORD)v159);
              LODWORD(v252) = *(UINT *)((char *)&v24->PrivateDriverDataSize + (_QWORD)v159);
              if ( !a3 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
              {
                Object = (PVOID)(8LL * n);
                memmove(v24[n].pPrivateDriverData, *(const void **)((char *)v260 + (_QWORD)Object), v164);
              }
              else
              {
                Object = (PVOID)(8LL * n);
                RtlCopyToUser(v24[n].pPrivateDriverData, *(void **)((char *)v264 + (_QWORD)Object), (unsigned int)v164);
              }
              v165 = v282;
              if ( v282 )
              {
                if ( !a3 || (v166 = v264, (*(_DWORD *)&a2->Flags & 0x10000) != 0) )
                  v166 = v260;
                memmove((void *)*(v282 - 2), *(const void **)((char *)v166 + (_QWORD)Object), (unsigned int)v252);
                v282 = (_QWORD *)*v165;
              }
              v124 = v262;
              v140 = (struct _EPROCESS *)*((_QWORD *)m + 8);
              m = v140;
            }
            LODWORD(v42) = v247;
LABEL_334:
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v261);
            if ( (int)v42 < 0 )
              goto LABEL_183;
            v112 = k;
            goto LABEL_336;
          }
          LODWORD(v42) = CheckNoKmdAccessPrivateData(
                           a2->PrivateRuntimeDataSize,
                           *(_DWORD **)(*((_QWORD *)v43 + 7) + 104LL),
                           0xFF000004);
          v247 = v42;
          if ( (int)v42 < 0 )
            goto LABEL_183;
        }
        v96 = a3;
        goto LABEL_227;
      }
    }
    else
    {
      if ( !v43 )
        goto LABEL_149;
      v70 = *((_QWORD *)v43 + 7);
      if ( !v70 || (*(_BYTE *)(v70 + 12) & 0x60) != 0x60 )
        goto LABEL_149;
    }
    *((_DWORD *)v43 + 1) |= 8u;
    goto LABEL_149;
  }
  while ( 1 )
  {
    if ( (*(_DWORD *)&a2->Flags & 0x800) != 0 )
    {
      v45 = v44;
      Value = v24[v45].Flags.Value;
      v47 = Value;
      if ( (Value & 1) != 0 )
      {
        VidPnSourceId = v24[v45].VidPnSourceId;
        v47 = Value;
        if ( !*((_QWORD *)this + 237) )
        {
          v47 = Value & 0xFE;
          v24[v45].Flags.Value = Value & 0xFFFFFFFE;
        }
      }
      if ( (v47 & 2) != 0 )
      {
        WdLogSingleEntry2(3LL, this, -1073741811LL);
        WdLogGlobalForLineNumber = 5074;
        goto LABEL_99;
      }
    }
    if ( (v24[v44].Flags.Value & 1) != 0 && !v251 )
    {
      v48 = (struct DXGALLOCATION *)*((_QWORD *)this + 237);
      k = v48;
      if ( !v48 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v281 + 5) + 408LL) & 0x100) == 0 )
        {
          WdLogSingleEntry3(3LL, this, v24[v44].VidPnSourceId, -1073741811LL);
          WdLogGlobalForLineNumber = 5093;
          goto LABEL_99;
        }
        goto LABEL_83;
      }
      v49 = (ADAPTER_DISPLAY *)*((_QWORD *)v48 + 395);
      if ( !v49 || !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(v49) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5101;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->IsDisplayAdapter() && pDisplayAdapter->GetDisplayCore()->IsCoreResourceSharedOwner()",
          5101LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v50 = k;
      if ( *(_DWORD *)(*((_QWORD *)k + 395) + 96LL) != *((_DWORD *)this + 476) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5107;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->GetDisplayCore()->GetNumVidPnSources() == this->GetNumVidPnSources()",
          5107LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v50 = k;
      }
      v44 = v240;
      v51 = v240;
      v255 = (PVOID)(v51 * 96);
      v52 = v24[v51].VidPnSourceId;
      if ( v52 >= *((_DWORD *)this + 476) )
      {
        WdLogSingleEntry3(3LL, this, v24[v51].VidPnSourceId, -1073741811LL);
        WdLogGlobalForLineNumber = 5114;
        goto LABEL_99;
      }
      if ( !*((_DWORD *)this + 116) && !a4 && (*((_DWORD *)Current + 102) & 0x100) == 0 )
        break;
    }
LABEL_83:
    if ( (v24[v44].Flags.Value & 3) == 2 )
    {
      WdLogSingleEntry2(3LL, -1073741811LL, this);
      WdLogGlobalForLineNumber = 5147;
LABEL_99:
      LODWORD(v42) = -1073741811;
LABEL_100:
      v247 = -1073741811;
      goto LABEL_101;
    }
    v53 = a2->Flags;
    if ( (*(_DWORD *)&v53 & 0x10000) != 0 )
    {
      v54 = *(_DWORD *)&a2->Flags & 0x20;
      if ( (*(_BYTE *)&v53 & 0x20) != 0 && !v24[v44].hSection || (*(_DWORD *)&v53 & 0x20000) != 0 && !v24[v44].hSection )
      {
        WdLogSingleEntry2(2LL, this, -1073741811LL);
        WdLogGlobalForLineNumber = 5161;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%I64x: ExistingSysMem pointer or Section Handle not specified, returning 0x%I64x",
          (__int64)this,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_99;
      }
      if ( (v55 = (struct DXGALLOCATION *)v24[v44].hSection,
            k = v55,
            Size = a2->pStandardAllocation->ExistingHeapData.Size,
            v255 = (PVOID)Size,
            v54)
        && v55 != (struct DXGALLOCATION *)((unsigned __int64)v55 & 0xFFFFFFFFFFFFF000uLL)
        || Size != (Size & 0xFFFFFFFFFFFFF000uLL) )
      {
        WdLogSingleEntry2(2LL, v55, Size);
        WdLogGlobalForLineNumber = 5174;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Existing sysmem must be paged aligned and a multiple of page in size.                    pSysMem:0x%I"
                    "64x, Size:0x%I64x",
          (__int64)k,
          (__int64)v255,
          0LL,
          0LL,
          0LL);
        LODWORD(v42) = -1073741811;
        goto LABEL_100;
      }
    }
    v240 = ++v44;
    if ( v44 >= a2->NumAllocations )
      goto LABEL_93;
  }
  if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*((ADAPTER_DISPLAY **)v50 + 395), this, v52) )
  {
    v44 = v240;
    goto LABEL_83;
  }
  LODWORD(v42) = -1071775744;
  v247 = -1071775744;
  WdLogSingleEntry4(3LL, -1071775744LL, this, *(unsigned int *)((char *)&v24->VidPnSourceId + (_QWORD)v255), v240);
  WdLogGlobalForLineNumber = 5129;
LABEL_101:
  v63 = 0LL;
LABEL_396:
  v123 = v246;
LABEL_397:
  DXGAUTOMUTEX::ReleaseIfAcquired((DXGAUTOMUTEX *)v288);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v289);
  if ( (int)v42 >= 0 )
  {
    if ( v63 )
    {
      v245 = 0;
      if ( a2->NumAllocations )
      {
        v186 = Count;
        v187 = Current;
        do
        {
          v261 = (struct _DXGSHAREDALLOCOBJECT *)*((_QWORD *)v186 + 5);
          LODWORD(v252) = *((_DWORD *)v63 + 4);
          VidPnSourceId = ((unsigned int)v252 >> 6) & 0xFFFFFF;
          v188 = (struct _DXGSHAREDALLOCOBJECT *)((char *)v261 + 248);
          if ( (*((_DWORD *)v187 + 102) & 0x100) != 0 )
          {
            DXGPUSHLOCK::AcquireExclusive(v188);
            v189 = v261;
            if ( VidPnSourceId < *((_DWORD *)v261 + 74) )
            {
              v190 = *((_QWORD *)v261 + 35);
              if ( (((unsigned int)v252 >> 25) & 0x60) == (*(_BYTE *)(v190 + 16LL * VidPnSourceId + 8) & 0x60)
                && (*(_DWORD *)(v190 + 16LL * VidPnSourceId + 8) & 0x1F) != 0 )
              {
                v191 = 16 * (((unsigned __int64)(unsigned int)v252 >> 6) & 0xFFFFFF);
                Count = (DXGDEVICE *)v191;
                if ( (*(_DWORD *)(v190 + v191 + 8) & 0x2000) == 0 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 224;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                    224LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v189 = v261;
                  v191 = (unsigned __int64)Count;
                }
                *(_DWORD *)(v191 + *((_QWORD *)v189 + 35) + 8) &= ~0x2000u;
              }
            }
          }
          else
          {
            DXGPUSHLOCK::AcquireExclusive(v188);
            v189 = v261;
            v192 = VidPnSourceId;
            if ( VidPnSourceId < *((_DWORD *)v261 + 74) )
            {
              v193 = *((_QWORD *)v261 + 35);
              if ( (((unsigned int)v252 >> 25) & 0x60) == (*(_BYTE *)(v193 + 16LL * VidPnSourceId + 8) & 0x60)
                && (*(_DWORD *)(v193 + 16LL * VidPnSourceId + 8) & 0x1F) != 0 )
              {
                v194 = 16 * (((unsigned __int64)(unsigned int)v252 >> 6) & 0xFFFFFF);
                Count = (DXGDEVICE *)v194;
                if ( (*(_DWORD *)(v193 + v194 + 8) & 0x2000) == 0 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 224;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
                    224LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v189 = v261;
                  v192 = VidPnSourceId;
                  v194 = (unsigned __int64)Count;
                }
                *(_DWORD *)(v194 + *((_QWORD *)v189 + 35) + 8) &= ~0x2000u;
              }
              if ( v192 < *((_DWORD *)v189 + 74) )
                *(_DWORD *)(16LL * v192 + *((_QWORD *)v189 + 35) + 8) &= ~0x4000u;
            }
          }
          *((_QWORD *)v189 + 32) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v189 + 248, 0LL);
          KeLeaveCriticalRegion();
          ++v245;
          v63 = (struct DXGALLOCATION *)*((_QWORD *)v63 + 8);
        }
        while ( v245 < a2->NumAllocations );
        v43 = v250;
        LODWORD(v42) = v247;
        v123 = v246;
      }
    }
    if ( v248[0] )
      DXGPROCESS::CommitResourceHandleSafe(*((DXGPROCESS **)v281 + 5), v43);
    goto LABEL_469;
  }
  if ( v63 )
  {
    v195 = 0;
    LODWORD(v252) = 0;
    if ( a2->NumAllocations )
    {
      v196 = v63;
      do
      {
        v197 = *((_QWORD *)v196 + 6);
        if ( *(_QWORD *)(v197 + 8) && !a4 )
        {
          if ( (v198 = *(_DWORD *)(v197 + 4), (v198 & 1) != 0) && !*((_DWORD *)this + 116) || (v198 & 2) != 0 )
          {
            if ( (v198 & 0x10) != 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 6475;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"!pAllocation->m_pAllocation->m_Invalidated",
                6475LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            VIDMM_EXPORT::VidMmInvalidateAllocation(
              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
              *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(*((_QWORD *)v196 + 6) + 8LL));
            *(_DWORD *)(*((_QWORD *)v196 + 6) + 4LL) |= 0x10u;
            v195 = (unsigned int)v252;
          }
        }
        LODWORD(v252) = ++v195;
        v196 = (struct DXGALLOCATION *)*((_QWORD *)v196 + 8);
      }
      while ( v195 < a2->NumAllocations );
      v43 = v250;
      LODWORD(v42) = v247;
      v123 = v246;
    }
  }
  if ( v248[0] )
  {
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v268, 0LL);
    DXGRESOURCEREFERENCE::MoveAssign(&v280, &v268);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v268);
    DXGDEVICE::RemoveResourceFromDeviceList(this, v43);
    goto LABEL_467;
  }
  if ( v63 )
  {
    if ( v253 )
      DXGDEVICE::RemoveAllocationsWithoutDestroy((struct _KTHREAD **)this, v43, v63, a2->NumAllocations);
    if ( !v43 || *((_QWORD *)v43 + 7) )
    {
      v199 = (struct _EX_RUNDOWN_REF *)v63;
      do
      {
        v200 = (struct DXGALLOCATION *)v199;
        v268 = v199;
        Count = (DXGDEVICE *)v199[8].Count;
        v199[7].Count = 0LL;
        v199[8].Count = 0LL;
        if ( v43 )
        {
          v201 = *((_QWORD *)v43 + 7);
          if ( v201 )
          {
            if ( *(_QWORD *)(v199[6].Count + 48) )
            {
              DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v201 + 32));
              --*(_DWORD *)(*((_QWORD *)v43 + 7) + 132LL);
              v202 = v268;
              v203 = v268[6].Count + 48;
              v204 = *(_QWORD *)v203;
              v205 = *(_QWORD **)(v268[6].Count + 56);
              if ( *(_QWORD *)(*(_QWORD *)v203 + 8LL) != v203 || *v205 != v203 )
                __fastfail(3u);
              *v205 = v204;
              *(_QWORD *)(v204 + 8) = v205;
              *(_QWORD *)(v202[6].Count + 48) = 0LL;
              v206 = *((_QWORD *)v43 + 7);
              *(_QWORD *)(v206 + 40) = 0LL;
              ExReleasePushLockExclusiveEx(v206 + 32, 0LL);
              KeLeaveCriticalRegion();
              v200 = (struct DXGALLOCATION *)v268;
            }
          }
        }
        DXGDEVICE::DestroyAllocations(this, 0LL, 0, v200, 0LL, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
        v199 = (struct _EX_RUNDOWN_REF *)Count;
      }
      while ( Count );
    }
    if ( v43 )
    {
      v207 = *((_QWORD *)v43 + 7);
      if ( !v207 )
      {
        DXGDEVICE::DestroyAllocations(this, v43, 0, v63, 0LL, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
        goto LABEL_469;
      }
      v208 = 0;
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v207 + 32));
      v209 = *((_DWORD *)v43 + 1);
      if ( (v209 & 0x10) == 0 )
      {
        *((_DWORD *)v43 + 1) = v209 | 0x10;
        v208 = 1;
      }
      v210 = *((_QWORD *)v43 + 7);
      *(_QWORD *)(v210 + 40) = 0LL;
      ExReleasePushLockExclusiveEx(v210 + 32, 0LL);
      KeLeaveCriticalRegion();
      if ( v208 )
      {
        DXGDEVICE::RemoveResourceFromDeviceList(this, v43);
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)&v285, Current);
        DXGPROCESS::GetResourceUnsafe((__int64)Current, (DXGRESOURCEREFERENCE *)&v255, *((_DWORD *)v43 + 4));
        if ( v255 )
        {
          v211 = *((_DWORD *)v255 + 4) >> 6;
          v212 = Current;
          if ( (v211 & 0xFFFFFFu) < *((_DWORD *)Current + 74) )
          {
            v214 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * (v211 & 0xFFFFFF) + 8);
            v213 = ((*((_DWORD *)v255 + 4) >> 25) & 0x60) == (v214 & 0x60) && (v214 & 0x2000) == 0 && (v214 & 0x1F) != 0;
            v212 = Current;
          }
          else
          {
            v213 = 0;
          }
          v215 = v211 & 0xFFFFFF;
          if ( v213 )
            *(_DWORD *)(16LL * v215 + *((_QWORD *)v212 + 35) + 8) |= 0x2000u;
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v268, 0LL);
          DXGRESOURCEREFERENCE::MoveAssign(&v280, &v268);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v268);
        }
        else
        {
          v208 = 0;
        }
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v255);
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)&v285);
        if ( v208 )
LABEL_467:
          DXGDEVICE::DestroyResource(this, v43, 0LL, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
      }
    }
  }
LABEL_469:
  for ( ii = 0; ii < a2->NumAllocations; ++ii )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v286[ii]);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v275);
  if ( a2->NumAllocations > 5 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v123);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v263);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v276);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v260);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v264);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v289);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v288);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v280);
  if ( Entry )
    ExFreeToPagedLookasideList(v287 + 13, Entry);
  return (unsigned int)v42;
}
