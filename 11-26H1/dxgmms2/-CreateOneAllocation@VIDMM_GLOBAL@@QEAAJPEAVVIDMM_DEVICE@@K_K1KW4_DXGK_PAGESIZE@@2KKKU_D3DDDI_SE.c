/*
 * XREFs of ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX77KE7PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAVVIDMM_FENCE_STORAGE_PAGE@@PEAPEAUVIDMM_GLOBAL_ALLOC@@PEAE@Z @ 0x1400DEEC4
 * Callers:
 *     VidMmCreateAllocation @ 0x140037D00 (VidMmCreateAllocation.c)
 *     ?OpenFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1400A5A70 (-OpenFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKW4_DXGK_PAGESIZE@@5KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400DD45C (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1400DEBD8 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     AddDmaBufferToPool @ 0x1400ED250 (AddDmaBufferToPool.c)
 * Callees:
 *     ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14000328C (-FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC.c)
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14001D9F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140036658 (-AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAUVIDMM_GLOBAL_A.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x140039504 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 *     ??_GVIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1400399A8 (--_GVIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z @ 0x14003B35C (-SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer @ 0x14004224C (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidMmiSelectAllocationHeap @ 0x1400A37D8 (VidMmiSelectAllocationHeap.c)
 *     VidSchCreateSyncObject @ 0x1400CA670 (VidSchCreateSyncObject.c)
 *     ?VidMmGetAllocationHint@@YAPEBU_DXGK_ALLOCATIONUSAGEHINT@@PEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D7230 (-VidMmGetAllocationHint@@YAPEBU_DXGK_ALLOCATIONUSAGEHINT@@PEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D7254 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     VidSchDestroySyncObject @ 0x1400E15C0 (VidSchDestroySyncObject.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEBAKXZ @ 0x1400E6870 (-AdapterId@VIDMM_GLOBAL@@QEBAKXZ.c)
 *     GetBucketIdForAllocationSizePow2 @ 0x140102E4C (GetBucketIdForAllocationSizePow2.c)
 *     ?VidMmVerifySupportedSegmentSetAndAdjustFlags@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K2_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x140110DC0 (-VidMmVerifySupportedSegmentSetAndAdjustFlags@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IPEAU_DXGK_ALLOCA.c)
 *     ?VidMmCheckAnySegmentAllFlags@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IU_DXGK_SEGMENTFLAGS@@@Z @ 0x1401111EC (-VidMmCheckAnySegmentAllFlags@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IU_DXGK_SEGMENTFLAGS@@@Z.c)
 *     ?VidMmCheckAllSegmentsAllFlags@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IU_DXGK_SEGMENTFLAGS@@@Z @ 0x140111240 (-VidMmCheckAllSegmentsAllFlags@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IU_DXGK_SEGMENTFLAGS@@@Z.c)
 *     ?VidMmVerifyBudgetGroups@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IPEBUVIDMM_SEGMENT_BASE@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x140111AB8 (-VidMmVerifyBudgetGroups@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IPEBUVIDMM_SEGMENT_BASE@@PEAU_VIDMM_VE.c)
 *     ?VidMmVerifyPreferredSegmentIsSubset@@YA_NU_D3DDDI_SEGMENTPREFERENCE@@I@Z @ 0x140115E78 (-VidMmVerifyPreferredSegmentIsSubset@@YA_NU_D3DDDI_SEGMENTPREFERENCE@@I@Z.c)
 *     ?VidMmGetMostPreferredSegment@@YAPEAUVIDMM_SEGMENT_BASE@@PEAUVIDMM_PHYSICAL_ADAPTER@@U_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x14011681C (-VidMmGetMostPreferredSegment@@YAPEAUVIDMM_SEGMENT_BASE@@PEAUVIDMM_PHYSICAL_ADAPTER@@U_D3DDDI_SE.c)
 *     ?VidMmCheckForCpuVisibleMemorySegment@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@I@Z @ 0x140117824 (-VidMmCheckForCpuVisibleMemorySegment@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@I@Z.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x140122BB0 (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_CROSSADAPTER_ALLOC@@@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1401275CC (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 VIDMM_GLOBAL::CreateOneAllocation(
        __int64 a1,
        struct VIDMM_DEVICE *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        ...)
{
  char v10; // r15
  int v14; // r12d
  int v15; // r12d
  int v16; // r12d
  int v17; // ebx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v19; // rdx
  int v20; // ecx
  struct VIDMM_PROCESS *v21; // r8
  __int64 v22; // rcx
  int SyncObject; // r13d
  __int64 v24; // r12
  __int64 v25; // rax
  _DWORD *v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rax
  int v32; // ecx
  __int64 CurrentProcess; // rax
  int v34; // r11d
  struct VIDMM_PHYSICAL_ADAPTER *v35; // r10
  int v36; // eax
  unsigned int v37; // edx
  unsigned __int64 v38; // rcx
  __int64 v39; // rbx
  unsigned __int64 v40; // r14
  unsigned int v41; // r9d
  __int64 v42; // rdx
  int v43; // r8d
  int v44; // edi
  struct VIDMM_CROSSADAPTER_ALLOC **v45; // r10
  __int64 v46; // r8
  int v47; // ecx
  int v48; // ecx
  char v49; // al
  int v50; // eax
  int v51; // edx
  struct VIDMM_CROSSADAPTER_ALLOC *v52; // rax
  bool v53; // dl
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  int v58; // eax
  VIDMM_GLOBAL *v59; // rcx
  __int64 v60; // r9
  VIDMM_GLOBAL *v61; // r9
  __int64 v62; // rcx
  __int64 v63; // r13
  _QWORD *v64; // r10
  __int64 v65; // rax
  __int64 v66; // rcx
  volatile signed __int32 *v67; // rcx
  __int64 v68; // r10
  struct VIDMM_CROSSADAPTER_ALLOC *v69; // rax
  int v70; // edx
  __int64 v71; // r8
  unsigned __int64 v72; // rcx
  __int64 v73; // rcx
  struct VIDMM_CROSSADAPTER_ALLOC *v74; // r8
  unsigned int v75; // eax
  unsigned int v76; // edx
  int v77; // ecx
  _DWORD *v78; // rax
  unsigned int v79; // r9d
  int v80; // ecx
  unsigned int v81; // ecx
  int v82; // r8d
  int v83; // eax
  __int64 v84; // r10
  unsigned int v85; // edx
  __int64 v86; // r9
  unsigned int v87; // edx
  unsigned int v88; // edi
  __int64 v89; // rax
  struct VIDMM_EXISTINGSYSMEM_HEAP *v90; // rax
  char v91; // r11
  char v92; // al
  unsigned __int8 v93; // al
  unsigned __int8 v94; // dl
  unsigned int v95; // ecx
  unsigned __int64 v96; // r9
  int v97; // eax
  struct VIDMM_CROSSADAPTER_ALLOC *v98; // rdx
  __int64 v99; // rax
  unsigned __int64 v100; // rcx
  int v101; // ecx
  int v102; // ecx
  int v103; // eax
  _DWORD *v104; // rax
  unsigned __int64 v105; // rcx
  _BOOL8 v106; // r10
  _BOOL8 v107; // r9
  _DWORD *v108; // rax
  __int64 v109; // r9
  __int64 v110; // rdx
  int v111; // ecx
  __int64 v112; // rcx
  void *v113; // r9
  __int64 v114; // r14
  char *v115; // rdi
  int v116; // eax
  const struct VIDMM_SEGMENT_BASE *MostPreferredSegment; // rax
  int v118; // r11d
  unsigned __int64 v119; // rbx
  __int64 v120; // rcx
  unsigned int v121; // eax
  __int64 v122; // rcx
  int v123; // edx
  int v124; // ecx
  int v125; // ecx
  const struct _DXGK_ALLOCATIONUSAGEHINT *AllocationHint; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  unsigned int v130; // r9d
  char v131; // r13
  unsigned int v132; // esi
  char v133; // si
  UINT Value; // ecx
  __int64 v135; // r14
  HANDLE CurrentProcessId; // rax
  __int64 v137; // r8
  __int64 v138; // r8
  unsigned int BucketIdForAllocationSizePow2; // eax
  __int64 v140; // r8
  unsigned int v141; // r9d
  __int64 v143; // rax
  __int64 i; // rbx
  void *v145; // rcx
  int *v146; // rcx
  KSPIN_LOCK *v147; // rdx
  VIDMM_GLOBAL *v148; // rcx
  int *v149; // r9
  __int64 v150; // rcx
  __int64 v151; // rcx
  int v152; // [rsp+60h] [rbp-130h]
  int v153; // [rsp+88h] [rbp-108h]
  char *P; // [rsp+110h] [rbp-80h]
  char v155; // [rsp+118h] [rbp-78h]
  unsigned int v156; // [rsp+11Ch] [rbp-74h]
  unsigned __int8 v157; // [rsp+120h] [rbp-70h]
  int v158; // [rsp+124h] [rbp-6Ch]
  struct VIDMM_PHYSICAL_ADAPTER *v159; // [rsp+128h] [rbp-68h]
  int v160; // [rsp+130h] [rbp-60h]
  __int64 v161; // [rsp+130h] [rbp-60h]
  unsigned int v162; // [rsp+138h] [rbp-58h]
  UINT Version; // [rsp+138h] [rbp-58h]
  bool v164; // [rsp+13Ch] [rbp-54h]
  char v165; // [rsp+13Ch] [rbp-54h]
  struct VIDMM_PROCESS *v166; // [rsp+140h] [rbp-50h]
  int v167; // [rsp+148h] [rbp-48h]
  D3DDDIFORMAT Format; // [rsp+148h] [rbp-48h]
  int v169; // [rsp+14Ch] [rbp-44h]
  UINT SwizzledFormat; // [rsp+14Ch] [rbp-44h]
  UINT ByteOffset; // [rsp+150h] [rbp-40h] BYREF
  unsigned __int64 v172; // [rsp+158h] [rbp-38h]
  __int64 v173; // [rsp+160h] [rbp-30h]
  __int64 v174; // [rsp+168h] [rbp-28h]
  struct VIDMM_CROSSADAPTER_ALLOC *v175; // [rsp+170h] [rbp-20h]
  __int64 v176; // [rsp+178h] [rbp-18h]
  _DWORD *v177; // [rsp+180h] [rbp-10h]
  _QWORD *v178; // [rsp+188h] [rbp-8h]
  unsigned __int64 v179; // [rsp+190h] [rbp+0h]
  _QWORD v180[16]; // [rsp+1A0h] [rbp+10h] BYREF
  UINT Pitch; // [rsp+248h] [rbp+B8h]
  __int64 v185; // [rsp+280h] [rbp+F0h] BYREF
  va_list va; // [rsp+280h] [rbp+F0h]
  __int64 v187; // [rsp+288h] [rbp+F8h]
  __int64 v188; // [rsp+290h] [rbp+100h] BYREF
  va_list va1; // [rsp+290h] [rbp+100h]
  __int64 v190; // [rsp+298h] [rbp+108h]
  __int64 v191; // [rsp+2A0h] [rbp+110h]
  void *v192; // [rsp+2A8h] [rbp+118h]
  void *v193; // [rsp+2B0h] [rbp+120h]
  __int64 v194; // [rsp+2B8h] [rbp+128h]
  __int64 v195; // [rsp+2C0h] [rbp+130h]
  __int64 v196; // [rsp+2C8h] [rbp+138h]
  __int64 v197; // [rsp+2D0h] [rbp+140h]
  __int64 v198; // [rsp+2D8h] [rbp+148h]
  struct VIDMM_CROSSADAPTER_ALLOC **v199; // [rsp+2E0h] [rbp+150h]
  __int64 v200; // [rsp+2E8h] [rbp+158h]
  _QWORD *v201; // [rsp+2F0h] [rbp+160h]
  unsigned __int8 *v202; // [rsp+2F8h] [rbp+168h]
  va_list va2; // [rsp+300h] [rbp+170h] BYREF

  va_start(va2, a10);
  va_start(va1, a10);
  va_start(va, a10);
  v185 = va_arg(va1, _QWORD);
  v187 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v188 = va_arg(va2, _QWORD);
  v190 = va_arg(va2, _QWORD);
  v191 = va_arg(va2, _QWORD);
  v192 = va_arg(va2, void *);
  v193 = va_arg(va2, void *);
  v194 = va_arg(va2, _QWORD);
  v195 = va_arg(va2, _QWORD);
  v196 = va_arg(va2, _QWORD);
  v197 = va_arg(va2, _QWORD);
  v198 = va_arg(va2, _QWORD);
  v199 = va_arg(va2, struct VIDMM_CROSSADAPTER_ALLOC **);
  v200 = va_arg(va2, _QWORD);
  v201 = va_arg(va2, _QWORD *);
  v202 = va_arg(va2, unsigned __int8 *);
  v10 = v188;
  if ( (*(_BYTE *)(a1 + 41065) & 0x20) != 0 )
  {
    if ( (v188 & 0x8000) != 0 )
      v14 = a6;
    else
      v14 = 4096 << a7;
    v156 = v14;
    v15 = -1;
    if ( (v188 & 0x8000) == 0 )
      v15 = a8;
    v167 = v15;
    v16 = -1;
    if ( (v188 & 0x8000) == 0 )
      v16 = a7;
    v169 = v16;
  }
  else
  {
    v169 = -1;
    v167 = -1;
    v156 = a6;
  }
  v17 = v188;
  LODWORD(v185) = v188;
  Current = DXGPROCESS::GetCurrent();
  v173 = (__int64)Current;
  v19 = Current;
  if ( !v200 || (v20 = *(_DWORD *)(v200 + 160), LOBYTE(v188) = 1, (v20 & 1) != 0) )
    LOBYTE(v188) = 0;
  if ( a2 )
  {
    v21 = (struct VIDMM_PROCESS *)*((_QWORD *)a2 + 1);
    v166 = v21;
    if ( !Current )
    {
LABEL_16:
      v155 = 0;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !Current )
    {
      WdLogSingleEntry0(1LL);
      v30 = 2580;
      goto LABEL_447;
    }
    v31 = *((_QWORD *)Current + 8);
    if ( v31 )
      v21 = *(struct VIDMM_PROCESS **)(v31 + 8);
    else
      v21 = 0LL;
    v166 = v21;
  }
  v32 = *((_DWORD *)v19 + 102);
  if ( (v32 & 0x100) == 0 )
    goto LABEL_16;
  v155 = 1;
  if ( (v32 & 0x400) == 0 && !v197 && (v10 & 1) != 0 )
  {
    v17 &= ~0x8000u;
    LODWORD(v185) = v17;
  }
LABEL_17:
  v22 = 0LL;
  SyncObject = 0;
  v24 = (unsigned int)v187;
  if ( *(_DWORD *)(a1 + 6952) != 1 )
    v22 = a3;
  v176 = *((_QWORD *)v21 + 42);
  v25 = *(_QWORD *)(a1 + 40320);
  v174 = v22;
  v159 = *(struct VIDMM_PHYSICAL_ADAPTER **)(v25 + 8 * v22);
  v26 = (_DWORD *)*((_QWORD *)v159 + 70);
  v177 = v26;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v26) + 24) = a2;
    WdLogGlobalForLineNumber = 2629;
    v27 = (_QWORD *)WdLogNewEntry5_WdTrace(a2);
    v27[4] = v156;
    v27[5] = a9;
    v27[6] = a10;
    v27[3] = a4;
    WdLogGlobalForLineNumber = 2634;
    v28 = (_QWORD *)WdLogNewEntry5_WdTrace(a10);
    v28[4] = (unsigned int)v17;
    v26 = (_DWORD *)v191;
    v28[5] = v191;
    v28[3] = v24;
    WdLogGlobalForLineNumber = 2638;
    v21 = v166;
  }
  *v201 = 0LL;
  if ( *(_DWORD *)(a1 + 40) < 0x5023u && (v17 & 0x40000) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v30 = 2653;
LABEL_447:
    WdLogGlobalForLineNumber = v30;
    goto LABEL_448;
  }
  if ( (v17 & 0x20000) != 0 )
  {
    if ( (v17 & 2) != 0
      || (v17 & 4) != 0
      && (v26 = (_DWORD *)*(unsigned int *)(*(_QWORD *)(a1 + 24) + 444LL), ((unsigned __int8)v26 & 8) == 0)
      || (v17 & 0x100000) != 0
      || (v17 & 0x80000) != 0
      || (v17 & 8) != 0
      || (v17 & 0x10) != 0
      || (v17 & 0x20) != 0 )
    {
      WdLogSingleEntry0(1LL);
      v30 = 2673;
      goto LABEL_447;
    }
    v17 &= 0xFFFBFFFE;
    LODWORD(v185) = v17;
  }
  if ( (v17 & 1) != 0 && (v17 & 0x40000) == 0 || (v157 = 0, (v17 & 0x10) != 0) )
    v157 = 1;
  if ( (_BYTE)v188 || (v17 & 8) != 0 || (v17 & 0x20000) != 0 )
    v157 = 0;
  if ( (*((_DWORD *)v21 + 38) & 0x40) == 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v26);
    if ( !PsGetProcessWow64Process(CurrentProcess)
      && (v17 & 0x20000000) == 0
      && (v17 & 0x40000000) == 0
      && v17 >= 0
      && (v17 & 0x10000000) == 0
      && (v17 & 8) == 0
      && (v17 & 0x400000) == 0
      && (v17 & 0x20000) == 0
      && !(_BYTE)v188
      && !v197
      && !v198 )
    {
      v17 &= ~0x40000u;
      v157 = 1;
      LODWORD(v185) = v17;
    }
  }
  if ( (((unsigned int)v17 >> 13) & 1) != 0 && (*(_BYTE *)(a1 + 41065) & 8) == 0 )
  {
    WdLogSingleEntry0(1LL);
    v30 = 2747;
    goto LABEL_447;
  }
  if ( !VidMmVerifyPreferredSegmentIsSubset((struct _D3DDDI_SEGMENTPREFERENCE)v24, a9) )
  {
    WdLogSingleEntry0(1LL);
    v30 = 2757;
    goto LABEL_447;
  }
  if ( !dword_14008A600 || (v17 & 1) != 0 )
  {
    v37 = a9;
    v35 = v159;
  }
  else
  {
    v35 = v159;
    if ( (v24 & 0x1F) != 0 )
    {
      v37 = 1 << ((v24 & 0x1F) - 1);
      a9 = v37;
    }
    else
    {
      v36 = *((_DWORD *)v159 + 21) & a9;
      if ( !v36 )
        v36 = a9;
      v37 = v36;
      a9 = v36;
    }
  }
  v38 = a4;
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    v30 = 2798;
    goto LABEL_447;
  }
  if ( v34 )
  {
    if ( *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 3044LL) < 2900 )
    {
      WdLogSingleEntry0(1LL);
      v30 = 2808;
      goto LABEL_447;
    }
    v38 = a4;
  }
  if ( (v17 & 0x1000) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v30 = 2815;
    goto LABEL_447;
  }
  if ( (v37 & *((_DWORD *)v35 + 19)) == 0 )
  {
    WdLogSingleEntry0(1LL);
    v30 = 2828;
    goto LABEL_447;
  }
  if ( !v198 && (v37 & *((_DWORD *)v35 + 20)) == 0 )
  {
    WdLogSingleEntry0(1LL);
    v30 = 2841;
    goto LABEL_447;
  }
  ByteOffset = 0;
  LODWORD(v188) = 0;
  if ( !VidMmVerifySupportedSegmentSetAndAdjustFlags(
          v35,
          v37,
          (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *)va,
          v38,
          a5,
          v197 != 0,
          (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)va1) )
  {
    WdLogSingleEntry0(1LL);
    v30 = 2858;
    goto LABEL_447;
  }
  v39 = (unsigned int)v185;
  if ( (v185 & 0x40000) != 0 )
  {
    if ( (v185 & 1) == 0 )
    {
      WdLogSingleEntry0(1LL);
      v30 = 2870;
      goto LABEL_447;
    }
    if ( (v185 & 2) != 0 || (v185 & 0x20) != 0 || (v185 & 0x10) != 0 )
    {
      WdLogSingleEntry0(1LL);
      v30 = 2882;
      goto LABEL_447;
    }
  }
  v40 = (unsigned int)v188;
  v41 = a10;
  v179 = a5 & -(__int64)((v188 & 4) != 0);
  if ( a10 )
  {
    if ( (a10 & *((_DWORD *)v159 + 20)) == 0 )
    {
      WdLogSingleEntry0(1LL);
      v30 = 2908;
      goto LABEL_447;
    }
    if ( (~*((_DWORD *)v159 + 24) & a10) != 0 )
    {
      WdLogSingleEntry0(1LL);
      v30 = 2919;
      goto LABEL_447;
    }
    if ( VidMmCheckAnySegmentAllFlags(v159, a10, (struct _DXGK_SEGMENTFLAGS)32) )
    {
      WdLogSingleEntry0(1LL);
      v30 = 2934;
      goto LABEL_447;
    }
    v41 = a10;
  }
  if ( (v39 & 2) != 0 )
  {
    if ( (v39 & 1) == 0 )
    {
      WdLogSingleEntry0(1LL);
      v30 = 2951;
      goto LABEL_447;
    }
    if ( (v39 & 0x20000000) != 0 || (int)v39 < 0 || (v39 & 0x40000000) != 0 )
    {
      WdLogSingleEntry0(1LL);
      v30 = 2962;
      goto LABEL_447;
    }
  }
  v42 = a1;
  if ( (v39 & 4) != 0 && (v39 & 0x800000) == 0 && *(_BYTE *)(a1 + 7042) )
  {
    if ( !VidMmCheckAllSegmentsAllFlags(v159, v41, (struct _DXGK_SEGMENTFLAGS)16) )
    {
      WdLogSingleEntry0((unsigned int)(v43 - 15));
      v30 = 2998;
      goto LABEL_447;
    }
    v42 = a1;
  }
  if ( (v39 & 0x20000000) != 0 && ((v39 & 2) != 0 || (v39 & 8) != 0 || (v39 & 0x20) != 0 || (v39 & 0x40000000) != 0) )
  {
    WdLogSingleEntry0(1LL);
    v30 = 3017;
    goto LABEL_447;
  }
  v44 = v190;
  if ( (v190 & 1) != 0 && ((v40 & 1) == 0 || (v39 & 0x20000000) == 0) )
  {
    WdLogSingleEntry0(1LL);
    v30 = 3026;
    goto LABEL_447;
  }
  if ( (v39 & 0x100000) != 0 )
  {
    if ( (v39 & 0x20000000) == 0 || (v45 = v199) == 0LL || (v40 & 1) == 0 )
    {
      WdLogSingleEntry0(1LL);
      v30 = 3039;
      goto LABEL_447;
    }
  }
  else
  {
    v45 = v199;
  }
  v46 = v197;
  if ( v197 && ((v39 & 2) != 0 || (v39 & 0x100) != 0 || (v39 & 0x200) != 0 || (v39 & 0x40000000) != 0) )
  {
    WdLogSingleEntry0(1LL);
    v30 = 3059;
    goto LABEL_447;
  }
  if ( (((unsigned int)v39 >> 26) & 1) != 0 )
  {
    if ( (v39 & 8) == 0 )
    {
      WdLogSingleEntry0(1LL);
      v30 = 3075;
      goto LABEL_447;
    }
  }
  else if ( (v39 & 8) == 0 )
  {
    goto LABEL_158;
  }
  if ( (v39 & 1) != 0 && (((unsigned int)v39 >> 26) & 1) == 0 && !v197
    || (v39 & 2) != 0
    || (v39 & 0x20000000) != 0
    || (v39 & 0x10) != 0
    || (v39 & 0x20) != 0
    || (int)v39 < 0
    || (v39 & 0x40000000) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v30 = 3106;
    goto LABEL_447;
  }
LABEL_158:
  if ( (v39 & 0x10) != 0 && ((v39 & 2) != 0 || (v39 & 0x20) != 0 || (v39 & 0x80000000) != 0 || (v39 & 0x40000000) != 0) )
  {
    WdLogSingleEntry0(1LL);
    v30 = 3126;
    goto LABEL_447;
  }
  if ( (v39 & 0x20) != 0
    && ((v39 & 2) != 0
     || (v39 & 0x20000000) != 0
     || (v39 & 0x10) != 0
     || (v39 & 0x80000000) != 0
     || (v39 & 0x40000000) != 0) )
  {
    WdLogSingleEntry0(1LL);
    v30 = 3148;
    goto LABEL_447;
  }
  if ( (v39 & 0x80000000) != 0 )
  {
    if ( (v39 & 2) != 0
      || (v39 & 4) != 0 && (v47 = *(_DWORD *)(*(_QWORD *)(v42 + 24) + 444LL), (v47 & 0x10) == 0) && (v47 & 8) == 0
      || (v39 & 0x10) != 0
      || (v39 & 0x20) != 0
      || (v39 & 0x40000000) != 0 )
    {
      WdLogSingleEntry0(1LL);
      v30 = 3170;
      goto LABEL_447;
    }
  }
  else if ( (v39 & 0x40000000) != 0 )
  {
    if ( (v39 & 2) != 0
      || (v39 & 4) != 0 && (v48 = *(_DWORD *)(*(_QWORD *)(v42 + 24) + 444LL), (v48 & 0x10) == 0) && (v48 & 8) == 0
      || (v39 & 0x10) != 0
      || (v39 & 0x20) != 0
      || (int)v39 < 0 )
    {
      WdLogSingleEntry0(1LL);
      v30 = 3192;
      goto LABEL_447;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v42 + 24) + 2508LL) & 0x200) == 0 )
      LODWORD(v39) = v39 | 1;
    v49 = v157;
    if ( (v39 & 1) != 0 )
      v49 = 1;
    v39 = (unsigned int)v39 | 0x20000000;
    v157 = v49;
  }
  if ( (v39 & 0x10000000) != 0 )
  {
    v50 = v39 & 0xEFFF7FBF;
    v51 = *(_DWORD *)(*(_QWORD *)(v42 + 24) + 444LL);
    if ( (v51 & 8) != 0 || (v51 & 0x10) != 0 )
      v50 = v39 & 0xEFFF7FBB;
    if ( v50 )
    {
      WdLogSingleEntry0(1LL);
      v30 = 3234;
      goto LABEL_447;
    }
    if ( (~*((_DWORD *)v159 + 24) & a9) != 0 )
    {
      WdLogSingleEntry0(1LL);
      v30 = 3244;
      goto LABEL_447;
    }
  }
  if ( (v39 & 0x400000) != 0 )
  {
    if ( (v39 & 0x20000000) == 0 )
    {
      WdLogSingleEntry0(1LL);
      v30 = 3260;
      goto LABEL_447;
    }
    if ( !v192 )
    {
      WdLogSingleEntry0(1LL);
      v30 = 3270;
      goto LABEL_447;
    }
  }
  if ( (v39 & 0x4000) != 0 )
  {
    if ( (v39 & 1) == 0 )
    {
      WdLogSingleEntry0(1LL);
      v30 = 3282;
      goto LABEL_447;
    }
    if ( (v39 & 2) != 0
      || (v39 & 8) != 0
      || (v39 & 0x10) != 0
      || (v39 & 0x20) != 0
      || (v39 & 0x40) != 0
      || (v39 & 0x100) != 0
      || (v39 & 0x200) != 0
      || (v39 & 0x40000) != 0 )
    {
      WdLogSingleEntry1(1LL, v39);
      WdLogGlobalForLineNumber = 3298;
LABEL_448:
      DxgkLogInternalTriageEvent(v29, 0x40000LL);
      return 3221225485LL;
    }
  }
  if ( v45 )
    v52 = *v45;
  else
    v52 = 0LL;
  v175 = v52;
  if ( (VIDMM_GLOBAL::_Config & 2) != 0 )
  {
    if ( DXGPROCESS::GetCurrent() && (*((_DWORD *)DXGPROCESS::GetCurrent() + 102) & 4) != 0 && (v39 & 0x10000000) == 0 )
    {
      v46 = v197;
      if ( (v39 & 0x40000000) == 0 )
        LODWORD(v39) = v39 | 0x8000000;
    }
    else
    {
      v46 = v197;
    }
  }
  LOBYTE(v185) = 0;
  LOBYTE(v188) = 0;
  v164 = 0;
  v160 = 0;
  v158 = 0;
  if ( v155 )
  {
    v160 = 0;
    v158 = 0;
    if ( !v46 )
    {
      v160 = 1;
      if ( (v39 & 0x10) != 0 )
      {
        v157 = 0;
        v158 = 1;
      }
      else
      {
        v158 = 0;
        if ( (v39 & 1) != 0 )
        {
          if ( (v39 & 0x8000) != 0 && (*(_DWORD *)(v173 + 408) & 0x400) == 0 )
          {
            WdLogSingleEntry0(1LL);
            v30 = 3350;
            goto LABEL_447;
          }
          v53 = (*(_DWORD *)(v173 + 408) & 0x400) != 0;
          v160 = 1;
          v164 = v53;
          v158 = 0;
          LOBYTE(v188) = (*(_DWORD *)(v173 + 408) & 0x400) == 0;
          LOBYTE(v185) = !v53;
          if ( (v39 & 0x20000000) != 0 )
          {
            LOBYTE(v185) = 1;
            LOBYTE(v188) = !v53;
            v160 = 1;
            v158 = 0;
            v164 = v53;
          }
        }
      }
    }
  }
  if ( *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 3044LL) >= 3000
    && (v39 & 1) != 0
    && (v40 & 2) == 0
    && !v198
    && (v39 & 0x40000000) == 0 )
  {
    WdLogSingleEntry1(1LL, v39);
    WdLogGlobalForLineNumber = 3397;
    goto LABEL_448;
  }
  if ( v193 && (v193 != (void *)((unsigned __int64)v193 & 0xFFFFFFFFFFFFF000uLL) || (a4 & 0xFFF) != 0) )
  {
    WdLogSingleEntry2(1LL, v193, a4);
    WdLogGlobalForLineNumber = 3415;
    goto LABEL_448;
  }
  v54 = operator new(376LL, 0x31306956u, 256LL);
  P = (char *)v54;
  if ( !v54 )
    goto LABEL_445;
  *(_QWORD *)(v54 + 144) = 0LL;
  *(_QWORD *)(v54 + 152) = 0LL;
  *(_DWORD *)(v54 + 176) = 76;
  *(_QWORD *)(v54 + 160) = 0LL;
  *(_DWORD *)(v54 + 168) = 0;
  *(_QWORD *)(v54 + 192) = 0LL;
  *(_QWORD *)(v54 + 200) = 0LL;
  *(_QWORD *)(v54 + 304) = 0LL;
  *(_QWORD *)(v54 + 312) = 0LL;
  *(_DWORD *)(v54 + 172) = 13;
  *(_DWORD *)(v54 + 320) = 0;
  *(_DWORD *)(v54 + 324) = 76;
  *(_OWORD *)(v54 + 352) = 0LL;
  v55 = (_QWORD *)(v54 + 96);
  v55[1] = v55;
  *v55 = v55;
  v56 = operator new(56LL, 0x32346956u, 64LL);
  *((_QWORD *)P + 46) = v56;
  if ( !v56 )
  {
    _InterlockedAdd(&dword_14008A818, 1u);
    WdLogSingleEntry0(6LL);
    v58 = 3445;
    goto LABEL_252;
  }
  v61 = (VIDMM_GLOBAL *)a1;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 744LL) + 65LL) || (v39 & 0x80000) != 0 )
  {
    v63 = (__int64)P;
    *(_QWORD *)(*((_QWORD *)P + 46) + 24LL) = operator new[](12LL, 0x33306956u, 64LL);
    v67 = *(volatile signed __int32 **)(*((_QWORD *)P + 46) + 24LL);
    if ( !v67 )
    {
      _InterlockedAdd(&dword_14008A6EC, 1u);
      WdLogSingleEntry0(6LL);
      v58 = 3527;
      goto LABEL_252;
    }
    _InterlockedAdd(v67, 1u);
    v61 = (VIDMM_GLOBAL *)a1;
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)P + 46) + 24LL) + 4LL) = -((v39 & 0x100000) == 0);
  }
  else
  {
    if ( (v39 & 0x40000000) != 0 || (int)v39 < 0 )
    {
      if ( !a2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3456;
        DxgkLogInternalTriageEvent(v62, 0x40000LL);
        goto LABEL_424;
      }
      v63 = (__int64)P;
      *(_QWORD *)(*((_QWORD *)P + 46) + 32LL) = operator new(176LL, 0x33306956u, 64LL);
      if ( *(_QWORD *)(*((_QWORD *)P + 46) + 32LL) )
      {
        v162 = 0;
        v173 = 16LL;
        LODWORD(v172) = 1000 * (v174 + 1);
        v178 = P + 368;
        while ( 1 )
        {
          memset(v180, 0, 0x50uLL);
          v64 = v178;
          HIDWORD(v180[0]) |= 0x83u;
          v65 = *v178;
          LODWORD(v180[0]) = 5;
          v66 = *(_QWORD *)(v65 + 32);
          v180[1] = v162 * (unsigned int)v172 + 100LL;
          *(_QWORD *)(v173 + v66) = v180[1];
          *(_QWORD *)(*(_QWORD *)(*v64 + 32LL) + 32LL) = v63;
          SyncObject = VidSchCreateSyncObject(
                         *(_QWORD *)(*(_QWORD *)(a1 + 16) + 744LL),
                         0LL,
                         (int *)v180,
                         (unsigned int)(v162 != 1) + 7,
                         0LL,
                         0LL,
                         v174,
                         (__int64 *)(*(_QWORD *)(*v64 + 32LL) + 8LL * v162),
                         0LL,
                         0LL,
                         0LL,
                         a2);
          if ( SyncObject < 0 )
            goto LABEL_424;
          v173 += 8LL;
          v63 = (__int64)P;
          if ( (int)++v162 >= 2 )
          {
            v61 = (VIDMM_GLOBAL *)a1;
            goto LABEL_269;
          }
        }
      }
      _InterlockedAdd(&dword_14008A6EC, 1u);
      WdLogSingleEntry0(6LL);
      v58 = 3467;
LABEL_252:
      WdLogGlobalForLineNumber = v58;
      DxgkLogInternalTriageEvent(v57, 262145LL);
      SyncObject = -1073741801;
LABEL_424:
      v114 = a1;
      v115 = P;
      goto LABEL_425;
    }
    v63 = (__int64)P;
  }
LABEL_269:
  v68 = v191;
  if ( v191 )
  {
    if ( (*(_DWORD *)(v191 + 4) & 0x8000) != 0 )
      *(_DWORD *)(v63 + 24) |= 0x20u;
    if ( (*(_DWORD *)(v68 + 4) & 0x10000) != 0 )
    {
      *(_DWORD *)(v63 + 28) |= 2u;
      *(_DWORD *)(v63 + 24) |= 0x80000u;
    }
    if ( (*(_DWORD *)(v68 + 4) & 0x8000000) != 0 )
      *(_DWORD *)(v63 + 24) |= 0x40u;
  }
  v69 = v175;
  *(_QWORD *)(v63 + 336) = v175;
  if ( v69 )
  {
    _InterlockedAdd((volatile signed __int32 *)v69, 1u);
    SyncObject = VIDMM_GLOBAL::AllocateCrossAdapterDataDpc(v61, v69, (struct VIDMM_GLOBAL_ALLOC *)v63);
    if ( SyncObject < 0 )
      goto LABEL_424;
    v63 = (__int64)P;
    v68 = v191;
  }
  v70 = (*(_DWORD *)(v176 + 72) & 1) != 0 ? 0xF000 : 0;
  v71 = (unsigned int)(v70 + 4095);
  v72 = ~v71 & (v71 + a4);
  v172 = v72;
  if ( a4 > v72 )
  {
    WdLogSingleEntry1(1LL, a4);
    WdLogGlobalForLineNumber = 3592;
LABEL_281:
    DxgkLogInternalTriageEvent(v73, 0x40000LL);
    SyncObject = -1073741811;
    goto LABEL_424;
  }
  v74 = (struct VIDMM_CROSSADAPTER_ALLOC *)(~v71 & (v179 + v71));
  v175 = v74;
  if ( v179 > (unsigned __int64)v74 )
  {
    WdLogSingleEntry1(1LL, v179);
    WdLogGlobalForLineNumber = 3606;
    goto LABEL_281;
  }
  if ( v72 > 0xFFFF0000 && (*(_DWORD *)(v63 + 28) & 2) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3614;
    goto LABEL_281;
  }
  if ( (*(_BYTE *)(a1 + 41065) & 0x20) == 0 || (v39 & 0x8000) != 0 )
  {
    if ( v156 )
    {
      v76 = ~(v70 + 4095) & (v70 + 4095 + v156);
      if ( v156 > v76 )
      {
        WdLogSingleEntry1(1LL, v156);
        WdLogGlobalForLineNumber = 3635;
        goto LABEL_281;
      }
      v75 = v76;
    }
    else
    {
      v75 = v70 + 4096;
    }
    v156 = v75;
    if ( v75 + v72 < v72 || (struct VIDMM_CROSSADAPTER_ALLOC *)((char *)v74 + v75) < v74 )
    {
      WdLogSingleEntry4(1LL, v72, v74, v72, v75);
      WdLogGlobalForLineNumber = 3653;
      DxgkLogInternalTriageEvent(v172, 0x40000LL);
      SyncObject = -1073741811;
      goto LABEL_424;
    }
  }
  if ( (v39 & 0x10000000) != 0 )
    LODWORD(v39) = v39 | 8;
  if ( (v39 & 0x20000000) == 0 || (v39 & 0x10) != 0 )
    v77 = 0;
  else
    v77 = 512;
  *(_DWORD *)(v63 + 28) = v77 | *(_DWORD *)(v63 + 28) & 0xFFFFFDFF;
  v78 = *(_DWORD **)(v63 + 368);
  *(_DWORD *)(v63 + 76) = 0;
  *v78 = v39;
  *(_DWORD *)(*(_QWORD *)(v63 + 368) + 4LL) = v44;
  LODWORD(v78) = *(_DWORD *)(v63 + 24) & 0xFFFFFFFD;
  *(_DWORD *)(v63 + 72) = 0;
  *(_DWORD *)(v63 + 128) = 0;
  *(_QWORD *)(v63 + 8) = v68;
  LODWORD(v78) = ((unsigned int)v78 | (2 * (v40 & 1))) ^ (((unsigned int)v78 | (2 * (v40 & 1))) ^ ((unsigned int)v40 >> 1)) & 1;
  v79 = (unsigned int)v78 ^ ((unsigned int)v78 ^ (v157 << 27)) & 0x8000000;
  v80 = (unsigned __int8)v188 | (4 * v158);
  *(_DWORD *)(v63 + 24) = v79;
  v81 = (8 * (v160 & 0xFFFFFFF1 | (4 * v164))) | *(_DWORD *)(v63 + 28) & 0xFFFFFF87 | (16 * v80) & 0xFFFFFFDF;
  v82 = v81 ^ ((unsigned __int16)v81 ^ (unsigned __int16)((_WORD)v44 << 12)) & 0x1000;
  *(_DWORD *)(v63 + 28) = v82;
  if ( v68 && (*(_DWORD *)(v68 + 4) & 0x10000000) != 0 )
    v83 = 0x2000;
  else
    v83 = 0;
  v84 = v198;
  v85 = v79 & 0xFFFFFFFB | (v198 != 0 ? 4 : 0);
  v86 = v197;
  v87 = (v197 != 0 ? 0x800000 : 0) | v85 & 0xFF7FFFFF;
  v88 = (v83 | v82 & 0xFFFFDFFF) ^ ((unsigned __int16)(v83 | v82 & 0xDFFF) ^ (unsigned __int16)((_WORD)v44 << 9)) & 0x8000;
  *(_DWORD *)(v63 + 24) = v87;
  *(_DWORD *)(v63 + 28) = v88;
  if ( v84 )
  {
    *(_QWORD *)(v63 + 64) = v84;
  }
  else if ( v86 )
  {
    *(_QWORD *)(v63 + 64) = v86;
  }
  else
  {
    v89 = v200;
    if ( v200 )
    {
      *(_QWORD *)(v63 + 64) = v200;
      *(_DWORD *)(v63 + 28) = v88 | 0x4000;
      *(_DWORD *)(v63 + 24) = v87 & 0xFFFFFF7F | ~((unsigned __int8)*(_DWORD *)(v89 + 160) << 6) & 0x80;
    }
  }
  v90 = VidMmiSelectAllocationHeap((__int64)v166, v63, *(_DWORD *)(a1 + 45296));
  *(_QWORD *)(v63 + 216) = v90;
  if ( v90
    && (v92 = (*(__int64 (__fastcall **)(struct VIDMM_EXISTINGSYSMEM_HEAP *))(*(_QWORD *)v90 + 120LL))(v90), v91 = 1, v92) )
  {
    v93 = v185;
  }
  else
  {
    v93 = v91;
  }
  v94 = 0;
  v95 = (v93 << 7) | *(_DWORD *)(v63 + 28) & 0xFFFFFF7F;
  LOBYTE(v188) = 0;
  *(_DWORD *)(v63 + 28) = v95;
  if ( ((unsigned __int8)v39 & (unsigned __int8)v91) != 0
    && (v95 & 0x80u) == 0
    && ((unsigned __int8)*(_DWORD *)(v176 + 72) & (unsigned __int8)v91) == 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 444LL) & 8) == 0 && !VidMmCheckForCpuVisibleMemorySegment(v159, a9)
      || v198
      || (*(_DWORD *)(v63 + 24) & 2) != 0 )
    {
      v94 = 0;
    }
    else
    {
      v94 = v91;
    }
    LOBYTE(v188) = v94;
  }
  v96 = v172;
  v97 = v94;
  v98 = v175;
  *(_DWORD *)(v63 + 28) = (v97 << 10) | *(_DWORD *)(v63 + 28) & 0xFFFFFBFF;
  v161 = (*(__int64 (__fastcall **)(struct VIDMM_PHYSICAL_ADAPTER *, __int64, unsigned __int64, unsigned __int64, struct VIDMM_CROSSADAPTER_ALLOC *, int, int, unsigned int, unsigned int))(*(_QWORD *)v159 + 32LL))(
           v159,
           v63,
           a4,
           v96,
           v98,
           v169,
           v167,
           v156,
           a9);
  if ( !v161 )
  {
    SyncObject = -1073741801;
    goto LABEL_424;
  }
  v99 = v176;
  *(_QWORD *)v63 = v161;
  if ( (*(_DWORD *)(v99 + 72) & 1) != 0 )
  {
    *(_DWORD *)(v63 + 24) |= 0x10000000u;
  }
  else
  {
    if ( (dword_14008A604
       || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 40320) + 8LL * (unsigned int)v174) + 44LL) & 1) != 0)
      && (**(_DWORD **)(*(_QWORD *)(a1 + 24) + 3048LL) & 0x4000) == 0
      && (v40 & 2) != 0
      && v177
      && ((*v177 & 0x200) != 0 || dword_14008A604 == 2)
      && ((v100 = *(_QWORD *)(v161 + 16), !(_WORD)v100) || v100 > (unsigned int)dword_14008A608)
      && !(_BYTE)v188 )
    {
      v101 = 0x10000000;
    }
    else
    {
      v101 = 0;
    }
    *(_DWORD *)(v63 + 24) = v101 | *(_DWORD *)(v63 + 24) & 0xEFFFFFFF;
    if ( g_Feature_Largify64KBPrototype )
    {
      v102 = *(_DWORD *)(v63 + 24);
      if ( (v102 & 0x18000000) == 0x18000000 )
      {
        v103 = *(_DWORD *)(v63 + 28);
        if ( (v103 & 0x4200) == 0
          && (v102 & 0x800004) == 0
          && (v39 & 8) == 0
          && (v39 & 0x20000) == 0
          && (v39 & 0x8000000) == 0
          && (v39 & 0x4000) == 0
          && ((v103 & 0x8000) != 0 || (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 444LL) & 8) != 0)
          && ((*((_BYTE *)v159 + 558) & 8) != 0
           || (v104 = (_DWORD *)*((_QWORD *)v159 + 70)) != 0LL && (*v104 & 0x80u) != 0) )
        {
          *(_DWORD *)(v63 + 24) |= 0x20000000u;
        }
      }
    }
  }
  if ( (*(_DWORD *)(v63 + 28) & 0x8000) != 0
    && (*(_DWORD *)(v63 + 24) & 0x20000000) == 0
    && (*((_DWORD *)DXGGLOBAL::GetGlobal() + 64) & 0x20) != 0 )
  {
    if ( (*(_DWORD *)(v63 + 24) & 0x10000000) != 0 )
    {
      if ( (*((_BYTE *)v159 + 558) & 8) != 0 || (v108 = (_DWORD *)*((_QWORD *)v159 + 70)) != 0LL && (*v108 & 0x80u) != 0 )
      {
        v110 = 1LL;
        v109 = 1LL;
      }
      else
      {
        v109 = 0LL;
        v110 = 1LL;
      }
      v111 = *(_DWORD *)(v63 + 24);
      if ( (v111 & 0x8000000) != 0
        && (*(_DWORD *)(v63 + 28) & 0x4200) == 0
        && (v111 & 0x800004) == 0
        && (v39 & 8) == 0
        && (v39 & 0x20000) == 0
        && (v39 & 0x8000000) == 0
        && (v39 & 0x4000) == 0 )
      {
        v110 = 0LL;
      }
      WdLogSingleEntry3(4LL, v110, g_Feature_Largify64KBPrototype, v109);
      WdLogGlobalForLineNumber = 3855;
    }
    else
    {
      v105 = *(_QWORD *)(v161 + 16);
      v106 = !(_WORD)v105 || v105 > (unsigned int)dword_14008A608;
      v107 = v177 && ((*v177 & 0x200) != 0 || dword_14008A604 == 2);
      WdLogSingleEntry5(
        4LL,
        (unsigned int)dword_14008A604,
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 40320) + 8LL * (unsigned int)v174) + 44LL) & 1,
        (v40 >> 1) & 1,
        v107,
        v106);
      WdLogGlobalForLineNumber = 3835;
      WdLogSingleEntry1(4LL, (unsigned __int8)v188 ^ 1LL);
      WdLogGlobalForLineNumber = 3836;
    }
    __debugbreak();
  }
  if ( v191 )
    v112 = *(_QWORD *)(v191 + 16);
  else
    v112 = v194;
  *(_QWORD *)(*(_QWORD *)(v63 + 368) + 48LL) = v112;
  if ( v192 )
  {
    v113 = v192;
  }
  else
  {
    v113 = 0LL;
    if ( v193 )
      v113 = v193;
  }
  v114 = a1;
  v115 = P;
  SyncObject = VIDMM_GLOBAL::CommitGlobalBackingStore(
                 (VIDMM_GLOBAL *)a1,
                 (struct VIDMM_GLOBAL_ALLOC *)v63,
                 v166,
                 v113,
                 v202);
  if ( SyncObject < 0 )
    goto LABEL_425;
  if ( (v39 & 0x4000) != 0 )
    *((_DWORD *)P + 6) |= 0x2000000u;
  v116 = v195;
  *((_DWORD *)P + 6) ^= (*((_DWORD *)P + 6) ^ ((unsigned __int8)v196 << 24)) & 0x1000000;
  *(_DWORD *)(v161 + 48) = v116;
  *((_QWORD *)P + 15) = P + 112;
  *((_QWORD *)P + 14) = P + 112;
  LOBYTE(v188) = (*((_DWORD *)P + 6) & 2) != 0;
  MostPreferredSegment = VidMmGetMostPreferredSegment(v159, (struct _D3DDDI_SEGMENTPREFERENCE)v24, (bool *)va1);
  *((_DWORD *)P + 6) = v118 ^ ((unsigned __int8)v118 ^ (unsigned __int8)(16 * v188)) & 0x10;
  if ( !VidMmVerifyBudgetGroups(v159, a9, MostPreferredSegment, (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&ByteOffset) )
  {
    SyncObject = -1073741811;
    goto LABEL_425;
  }
  *((_DWORD *)P + 6) = *((_DWORD *)P + 6) & 0xFFFF00FF | ((unsigned __int8)ByteOffset << 8);
  if ( (v39 & 0x10) != 0 || (v39 & 0x20) != 0 )
    P[42] = 1;
  v119 = v172;
  if ( !v198 )
  {
    SyncObject = SysMmAllocateLogicalMemory(
                   *(struct SYSMM_ADAPTER **)(*(_QWORD *)(a1 + 24) + 224LL),
                   v172,
                   P,
                   (void **)P + 43);
    if ( SyncObject < 0 )
    {
      WdLogSingleEntry1(1LL, P);
      WdLogGlobalForLineNumber = 3949;
      DxgkLogInternalTriageEvent(v120, 0x40000LL);
LABEL_425:
      if ( (*((_DWORD *)v115 + 8) & 0x20) != 0 )
        VIDMM_GLOBAL::UncommitGlobalBackingStore((VIDMM_GLOBAL *)v114, (struct VIDMM_GLOBAL_ALLOC *)v115, 1, v60);
      v143 = *((_QWORD *)v115 + 46);
      if ( v143 )
      {
        if ( *(_QWORD *)(v143 + 32) )
        {
          for ( i = 0LL; i < 16; i += 8LL )
          {
            v145 = *(void **)(i + *(_QWORD *)(*((_QWORD *)v115 + 46) + 32LL));
            if ( v145 )
              VidSchDestroySyncObject(v145);
          }
          operator delete(*(void **)(*((_QWORD *)v115 + 46) + 32LL));
        }
        v146 = *(int **)(*((_QWORD *)v115 + 46) + 24LL);
        if ( v146 )
          VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(v146);
        operator delete(*((void **)v115 + 46));
      }
      v147 = (KSPIN_LOCK *)*((_QWORD *)v115 + 42);
      if ( !v147 )
        goto LABEL_440;
      VIDMM_GLOBAL::FreeCrossAdapterDataDpc(v59, v147, (struct VIDMM_GLOBAL_ALLOC *)v115);
      v148 = (VIDMM_GLOBAL *)(unsigned int)_InterlockedDecrement(*((volatile signed __int32 **)v115 + 42));
      if ( !(_DWORD)v148 )
      {
        VIDMM_GLOBAL::DestroyCrossAdapterAllocation(v148, *((struct VIDMM_CROSSADAPTER_ALLOC **)v115 + 42));
        *v199 = 0LL;
LABEL_440:
        if ( *(_QWORD *)v115 )
        {
          (*(void (__fastcall **)(struct VIDMM_PHYSICAL_ADAPTER *))(*(_QWORD *)v159 + 40LL))(v159);
          *(_QWORD *)v115 = 0LL;
        }
        VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'((VIDMM_GLOBAL_ALLOC *)v115);
        return (unsigned int)SyncObject;
      }
      if ( (int)v148 >= 0 )
        goto LABEL_440;
      v149 = (int *)*((_QWORD *)v115 + 42);
      v150 = *v149;
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 66LL, v149, v150, 0LL);
      WdLogGlobalForLineNumber = 213;
LABEL_445:
      _InterlockedAdd(&dword_14008A6F4, 1u);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 3433;
      DxgkLogInternalTriageEvent(v151, 262145LL);
      return 3221225495LL;
    }
  }
  v121 = VIDMM_GLOBAL::AdapterId((VIDMM_GLOBAL *)a1);
  v122 = v176;
  *((_QWORD *)P + 41) = *(_QWORD *)(v176 + 40) + 384LL * v121;
  _InterlockedAdd((volatile signed __int32 *)(v122 + 36), 1u);
  if ( *(_DWORD *)(v122 + 32)
    || (v123 = **((_DWORD **)P + 46), (v123 & 0x2003A) != 0)
    || (v124 = *((_DWORD *)P + 7), (v124 & 0x10) != 0)
    || (*((_DWORD *)P + 6) & 4) != 0
    || (v124 & 2) != 0
    || (v123 & 0x40000000) != 0 )
  {
    v125 = 0;
  }
  else
  {
    v125 = 256;
  }
  *((_DWORD *)P + 7) = v125 | *((_DWORD *)P + 7) & 0xFFFFFEFF;
  AllocationHint = VidMmGetAllocationHint((const struct VIDMM_GLOBAL_ALLOC *)P);
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    v131 = v129 != 0;
    v132 = *(_DWORD *)(v161 + 52);
    LODWORD(v188) = AllocationHint->v1.SlicePitch;
    LODWORD(v185) = AllocationHint->v1.Depth;
    Pitch = AllocationHint->v1.Pitch;
    LODWORD(v200) = AllocationHint->v1.Height;
    LODWORD(v172) = AllocationHint->v1.Width;
    ByteOffset = AllocationHint->v1.ByteOffset;
    SwizzledFormat = AllocationHint->v1.SwizzledFormat;
    Format = AllocationHint->v1.Format;
    v133 = (v132 >> 2) & 0x3F;
    Value = AllocationHint->v1.Flags.Value;
    Version = AllocationHint->Version;
    v178 = (_QWORD *)*((_QWORD *)P + 1);
    v177 = *(_DWORD **)(a1 + 24);
    v165 = Value;
    if ( a2 )
      v135 = *((_QWORD *)a2 + 3);
    else
      LOBYTE(v135) = 0;
    CurrentProcessId = PsGetCurrentProcessId();
    McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer(
      (__int64)v177,
      &EventCreateAdapterAllocation,
      v137,
      (__int64)CurrentProcessId,
      v135,
      (char)v177,
      v10,
      v119,
      v156,
      a10,
      a9,
      v24,
      v152,
      a10,
      v195,
      (char)P,
      (char)v178,
      v153,
      Version,
      v165,
      Format,
      SwizzledFormat,
      ByteOffset,
      v172,
      v200,
      Pitch,
      v185,
      v188,
      0,
      (char)v192,
      v133,
      v131,
      v161);
    v114 = a1;
    v130 = 1;
  }
  _InterlockedAdd((volatile signed __int32 *)(v114 + 7600), v130);
  _InterlockedAdd64((volatile signed __int64 *)(v114 + 7608), v119);
  _InterlockedAdd64((volatile signed __int64 *)(v114 + 40288), v119);
  if ( a2 )
  {
    v138 = *((_QWORD *)a2 + 2);
    if ( v138 )
    {
      BucketIdForAllocationSizePow2 = GetBucketIdForAllocationSizePow2(v119, v127, *(_QWORD *)(v138 + 184));
      _InterlockedAdd64((volatile signed __int64 *)(v140 + 8LL * BucketIdForAllocationSizePow2 + 56), v119);
      _InterlockedAdd((volatile signed __int32 *)(v140 + 4LL * BucketIdForAllocationSizePow2 + 232), v141);
      *(_BYTE *)(v140 + 320) = v141;
    }
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v128) + 24) = P;
    WdLogGlobalForLineNumber = 4042;
  }
  *v201 = P;
  return 0LL;
}
