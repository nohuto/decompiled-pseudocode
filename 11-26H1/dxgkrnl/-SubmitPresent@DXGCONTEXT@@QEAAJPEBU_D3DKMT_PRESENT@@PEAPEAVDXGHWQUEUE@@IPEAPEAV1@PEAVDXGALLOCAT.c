/*
 * XREFs of ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F4EA0
 * Callers:
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAVDXGHWQUEUE@@UtagRECT@@2IPEBU3@PEAVCOREDEVICEACCESS@@@Z @ 0x1401F37FC (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAVDXGHWQUEUE@@UtagRECT@@2IPEBU3@PEAVCOREDEVICEACCESS@@.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1402B3814 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1402BBFE4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14000ECA0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x14001D25C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CONTEXT@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KE@Z @ 0x140035930 (-VidSchSignalSyncObjectsFromGpu@VIDSCH_EXPORT@@QEAAJKPEAPEAUVIDSCH_HW_QUEUE@@KPEAPEAU_VIDSCH_CON.c)
 *     ??1CAutoRefCountedBuffer@@QEAA@XZ @ 0x1400359F0 (--1CAutoRefCountedBuffer@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x14003B89C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x14003D024 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAI@Z @ 0x14003DE60 (-VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEA.c)
 *     ?VidSchSubmitCommandToHwQueue@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1400416EC (-VidSchSubmitCommandToHwQueue@VIDSCH_EXPORT@@QEAAJPEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@.c)
 *     ?VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z @ 0x14005613C (-VidMmReleaseDmaBuffer@VIDMM_EXPORT@@QEAAXPEAUVIDMM_DMA_BUFFER@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_NPEAI@Z @ 0x14007C7B8 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_NPEAI.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1401919F0 (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@@Z @ 0x1401F43B0 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAUDXGK_PRESENT_PARAMS@@1@Z @ 0x1402E5630 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1402F4940 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1402F642C (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F6600 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1403773A0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1403EF9BC (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresent(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        struct DXGHWQUEUE **a3,
        unsigned int a4,
        struct DXGCONTEXT **a5,
        struct DXGALLOCATION *a6,
        unsigned int a7,
        unsigned int a8,
        struct _DXGKARG_PRESENT *a9,
        struct _D3DKMT_PRESENT_RGNS *a10,
        struct VIDMM_DMA_BUFFER *a11,
        struct VIDSCH_SUBMIT_DATA_BASE *a12,
        enum _D3DDDIFORMAT a13,
        struct COREDEVICEACCESS *a14)
{
  __int64 v15; // r15
  __int64 v16; // rax
  DXGPROCESS *v17; // rsi
  DXGADAPTER **v18; // rcx
  struct _EX_RUNDOWN_REF *v19; // rdi
  struct _EX_RUNDOWN_REF *v20; // rbx
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  DXGALLOCATIONREFERENCE *v22; // rax
  struct _EX_RUNDOWN_REF *v23; // rsi
  int PresentPrivateDriverData; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _DXGKARG_PRESENT *v27; // rcx
  unsigned int v28; // r9d
  unsigned int v29; // r10d
  struct DXGCONTEXT **v30; // rcx
  int v31; // edx
  unsigned int v32; // r8d
  struct _D3DKMT_PRESENT_RGNS *v33; // r9
  int v34; // eax
  struct DXGHWQUEUE *v35; // r8
  struct VIDMM_DMA_BUFFER *v36; // rax
  DXGCONTEXT *v37; // r9
  __int64 v38; // rcx
  int v39; // eax
  unsigned int v40; // ebx
  DXGCONTEXT **v41; // rdi
  struct _VIDSCH_SYNC_OBJECT *v43; // rbx
  struct _DXGKARG_PRESENT *v44; // rdx
  int v45; // ecx
  unsigned int v46; // edx
  char *v47; // rcx
  char *v48; // r8
  __int64 v49; // r10
  int v50; // ecx
  char *v51; // rcx
  __int64 v52; // rcx
  bool v53; // al
  __int64 v54; // rcx
  char v55; // cl
  char *v56; // rbx
  struct _VIDSCH_SYNC_OBJECT *v57; // r15
  char *v58; // rcx
  char *v59; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v61; // rax
  int v62; // eax
  __int64 v63; // rbx
  __int64 v64; // rdx
  struct _DXGKARG_PRESENT *v65; // r8
  void *v66; // rdx
  unsigned int v67; // esi
  __int64 v68; // rcx
  __int64 v69; // rdx
  UINT v70; // edx
  struct _DXGKARG_PRESENT *v71; // rax
  RECT *v72; // rcx
  unsigned int MoveRectCount; // edx
  RECT *p_DestRect; // rax
  __int64 v75; // r8
  int v76; // eax
  const wchar_t *v77; // r9
  unsigned int i; // eax
  unsigned int v79; // r9d
  struct _D3DKMT_PRESENT *v80; // r15
  DXGALLOCATIONREFERENCE *v81; // rax
  struct DXGCONTEXT *v82; // r10
  DXGALLOCATIONREFERENCE *v83; // rax
  struct DXGCONTEXT *v84; // r10
  __int64 v85; // rcx
  DXGCONTEXT *v86; // rax
  struct DXGHWQUEUE *v87; // r8
  struct DXGCONTEXT **v88; // rdi
  struct _VIDSCH_CONTEXT **Pool2; // r8
  unsigned int v90; // ebx
  unsigned int j; // edx
  __int64 v92; // rbx
  struct DXGCONTEXT *v93; // r9
  unsigned int v94; // ebx
  struct VIDMM_ALLOC **v95; // r9
  bool v96; // [rsp+20h] [rbp-328h]
  struct VIDMM_DMA_BUFFER *v97; // [rsp+50h] [rbp-2F8h]
  char v98; // [rsp+58h] [rbp-2F0h]
  struct _D3DKMT_PRESENT_RGNS *v99; // [rsp+60h] [rbp-2E8h] BYREF
  unsigned int v100; // [rsp+68h] [rbp-2E0h]
  unsigned int v101; // [rsp+6Ch] [rbp-2DCh]
  unsigned int *v102; // [rsp+70h] [rbp-2D8h]
  PVOID Entry; // [rsp+78h] [rbp-2D0h] BYREF
  struct DXGCONTEXT **v104; // [rsp+80h] [rbp-2C8h]
  struct _DXGKARG_PRESENT *v105; // [rsp+88h] [rbp-2C0h]
  int v106; // [rsp+90h] [rbp-2B8h]
  struct _D3DKMT_PRESENT *v107; // [rsp+98h] [rbp-2B0h]
  struct _EX_RUNDOWN_REF *v108; // [rsp+A0h] [rbp-2A8h] BYREF
  unsigned int v109; // [rsp+A8h] [rbp-2A0h]
  unsigned int v110; // [rsp+ACh] [rbp-29Ch]
  struct _EX_RUNDOWN_REF *v111; // [rsp+B0h] [rbp-298h] BYREF
  struct _EX_RUNDOWN_REF *v112; // [rsp+B8h] [rbp-290h] BYREF
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+C0h] [rbp-288h] BYREF
  DXGADAPTER *v114; // [rsp+C8h] [rbp-280h] BYREF
  struct _EX_RUNDOWN_REF *v115; // [rsp+D0h] [rbp-278h] BYREF
  DXGPROCESS *v116; // [rsp+D8h] [rbp-270h]
  struct VIDMM_DMA_BUFFER *v117; // [rsp+E0h] [rbp-268h]
  struct DXGHWQUEUE **v118; // [rsp+E8h] [rbp-260h]
  struct COREDEVICEACCESS *v119; // [rsp+F0h] [rbp-258h]
  struct _EX_RUNDOWN_REF *v120[3]; // [rsp+F8h] [rbp-250h] BYREF
  PVOID P; // [rsp+110h] [rbp-238h]
  _BYTE v122[64]; // [rsp+118h] [rbp-230h] BYREF
  unsigned int v123; // [rsp+158h] [rbp-1F0h]
  _QWORD v124[12]; // [rsp+160h] [rbp-1E8h] BYREF
  _BYTE v125[320]; // [rsp+1C0h] [rbp-188h] BYREF

  v100 = a4;
  v118 = a3;
  v107 = a2;
  v105 = a9;
  v99 = a10;
  v120[1] = (struct _EX_RUNDOWN_REF *)this;
  v104 = a5;
  BroadcastPresentSyncObject = a6;
  v109 = a7;
  v110 = a8;
  v97 = a11;
  v117 = a11;
  v119 = a14;
  LODWORD(v15) = 0;
  v16 = *((_QWORD *)this + 2);
  v17 = *(DXGPROCESS **)(v16 + 40);
  v116 = v17;
  v18 = *(DXGADAPTER ***)(v16 + 16);
  v114 = v18[2];
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner((ADAPTER_RENDER *)v18) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8044;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      8044LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v19 = 0LL;
  v112 = 0LL;
  v20 = 0LL;
  v111 = 0LL;
  if ( *((_BYTE *)a12 + 356) )
    v102 = (unsigned int *)((char *)a12 + 616);
  else
    v102 = 0LL;
  if ( v109 )
  {
    AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)v17, (DXGALLOCATIONREFERENCE *)&v108, v109);
    v19 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    v112 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
    *(_QWORD *)AllocationSafe = 0LL;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v108);
  }
  if ( v110 )
  {
    v22 = DXGPROCESS::GetAllocationSafe((__int64)v17, (DXGALLOCATIONREFERENCE *)&v108, v110);
    v20 = *(struct _EX_RUNDOWN_REF **)v22;
    v111 = *(struct _EX_RUNDOWN_REF **)v22;
    *(_QWORD *)v22 = 0LL;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v108);
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
    || DXGPROCESS::IsRemoteConnection(v17) )
  {
    *((_DWORD *)a12 + 29) = 0;
  }
  Entry = 0LL;
  v23 = 0LL;
  if ( v107 )
  {
    PresentPrivateDriverData = ReadPresentPrivateDriverData(
                                 *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
                                 v107->PrivateDriverDataSize,
                                 v107->pPrivateDriverData,
                                 (struct CRefCountedBuffer **)&Entry);
    v15 = PresentPrivateDriverData;
    if ( PresentPrivateDriverData < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 8081;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to read private driver data. Returning 0x%I64x",
        v15,
        0LL,
        0LL,
        0LL,
        0LL);
      v105 = (struct _DXGKARG_PRESENT *)7;
      DxgCreateLiveDumpWithWdLogs2(403LL, 2080LL, *((int *)this + 36), v107->PrivateDriverDataSize, 0LL, 7LL);
      goto LABEL_38;
    }
  }
  v23 = (struct _EX_RUNDOWN_REF *)Entry;
  v115 = (struct _EX_RUNDOWN_REF *)Entry;
  v108 = (struct _EX_RUNDOWN_REF *)Entry;
  v98 = 0;
  if ( DXGADAPTER::IsDxgmms2(v114) )
  {
    if ( *(_DWORD *)(v26 + 2320) >= 0x5007u && v25 )
    {
      v98 = 1;
      if ( v23 )
      {
        v27 = v105;
        v105->PrivateDriverDataSize = *(_DWORD *)(v25 + 1472);
        v27->pPrivateDriverData = &v23[2];
      }
      *((_QWORD *)a12 + 101) = Entry;
      goto LABEL_19;
    }
    v28 = v100;
    if ( !v100 )
      goto LABEL_20;
    LODWORD(v15) = -1073741811;
LABEL_38:
    v36 = v97;
LABEL_39:
    if ( v36 )
      VIDMM_EXPORT::VidMmReleaseDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL), v97);
    if ( v23 )
      CRefCountedBuffer::RefCountedBufferRelease(v23);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v111);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v112);
    return (unsigned int)v15;
  }
LABEL_19:
  v28 = v100;
LABEL_20:
  v29 = v28 + 1;
  v101 = v28 + 1;
  v30 = v104;
  v31 = *((_DWORD *)*v104 + 96);
  v32 = 0;
  while ( v32 < v28 )
  {
    v76 = *((_DWORD *)v30[++v32] + 96);
    if ( (v76 & v31) != 0 )
    {
      LODWORD(v15) = -1073741811;
      WdLogSingleEntry2(2LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 8158;
      v77 = L"0x%I64x failed, can't broadcast flip to multiple context on the same physical adapter returning 0x%I64x";
LABEL_116:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v77, (__int64)this, -1073741811LL, 0LL, 0LL, 0LL);
      goto LABEL_38;
    }
    v31 |= v76;
    v30 = v104;
  }
  *((_DWORD *)a12 + 34) = v31;
  v33 = v99;
  if ( v99 )
  {
    v68 = *((_QWORD *)this + 2);
    v69 = *(_QWORD *)(*(_QWORD *)(v68 + 16) + 16LL);
    if ( (*(_DWORD *)(v69 + 444) & 0x10) != 0 && v69 == *(_QWORD *)(v68 + 1896) )
    {
      v70 = v99->MoveRectCount + v99->DirtyRectCount;
      if ( v70 <= 0x14 )
      {
        v71 = v105;
        v105->SubRectCnt = v70;
        v71->pDstSubRects = (const RECT *)v125;
        v72 = (RECT *)v125;
        MoveRectCount = v33->MoveRectCount;
        if ( MoveRectCount )
        {
          p_DestRect = &v33->pMoveRects->DestRect;
          v75 = MoveRectCount;
          do
          {
            *v72 = *p_DestRect;
            p_DestRect = (RECT *)((char *)p_DestRect + 24);
            ++v72;
            --v75;
          }
          while ( v75 );
        }
        memmove(v72, v33->pDirtyRects, 16LL * v33->DirtyRectCount);
        v29 = v101;
      }
    }
  }
  v34 = *((_DWORD *)a12 + 30);
  if ( v34 != 5 && v34 != 3 )
  {
    if ( v29 <= 1 )
    {
      if ( v118 )
        v35 = *v118;
      else
        v35 = 0LL;
      LODWORD(v15) = DXGCONTEXT::SubmitPresentWithDmaBuffer(
                       this,
                       v107,
                       v35,
                       (struct DXGALLOCATION *)v19,
                       (struct DXGALLOCATION *)v20,
                       v105,
                       a11,
                       a12,
                       v119);
      v36 = 0LL;
      v97 = 0LL;
      goto LABEL_39;
    }
    if ( !v98 )
    {
      LODWORD(v15) = -1073741811;
      WdLogSingleEntry2(2LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 8607;
      v77 = L"0x%I64x Broadcast present only supported on the Software Flip Queue, returning 0x%I64x";
      goto LABEL_116;
    }
    BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*((DXGDEVICE **)this + 2));
    if ( !BroadcastPresentSyncObject )
    {
      LODWORD(v15) = -1073741801;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 8448;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create present sync object. Returning 0x%I64x",
        -1073741801LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_38;
    }
    v114 = (DXGADAPTER *)_InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 2) + 1944LL));
    *(_DWORD *)a12 |= 0xC00u;
    for ( i = 0; ; i = (_DWORD)v102 + 1 )
    {
      LODWORD(v102) = i;
      v79 = v101;
      if ( i >= v101 )
        break;
      if ( i )
      {
        LODWORD(v99) = 0;
        LODWORD(Entry) = 0;
        v80 = v107;
        if ( v109 )
        {
          RtlCopyFromUser(&v99, &v107->BroadcastSrcAllocation[i - 1], 4uLL);
          v81 = DXGPROCESS::GetAllocationSafe((__int64)v116, (DXGALLOCATIONREFERENCE *)v120, (unsigned int)v99);
          DXGALLOCATIONREFERENCE::MoveAssign(&v112, v81);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v120);
          v19 = v112;
          if ( !v112 )
          {
            LODWORD(v15) = -1073741811;
            WdLogSingleEntry2(2LL, (unsigned int)v99, -1073741811LL);
            WdLogGlobalForLineNumber = 8473;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid allocation handle in present: 0x%I64x. Returning 0x%I64x",
              (unsigned int)v99,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            v106 = -1073741811;
            v36 = v97;
            goto LABEL_39;
          }
          v82 = v104[(unsigned int)v102];
          if ( *(_QWORD *)(*(_QWORD *)(v112[1].Count + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v82 + 2) + 16LL)
                                                                                + 16LL) )
          {
            _mm_lfence();
            LODWORD(v15) = -1073741811;
            WdLogSingleEntry3(2LL, *((_QWORD *)v82 + 2), v112, -1073741811LL);
            WdLogGlobalForLineNumber = 8482;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
              *((_QWORD *)v104[(unsigned int)v102] + 2),
              (__int64)v19,
              -1073741811LL,
              0LL,
              0LL);
            v106 = -1073741811;
            v36 = v97;
            goto LABEL_39;
          }
          i = (unsigned int)v102;
        }
        if ( v110 )
        {
          RtlCopyFromUser(&Entry, &v80->BroadcastDstAllocation[i - 1], 4uLL);
          v83 = DXGPROCESS::GetAllocationSafe((__int64)v116, (DXGALLOCATIONREFERENCE *)&v115, (unsigned int)Entry);
          DXGALLOCATIONREFERENCE::MoveAssign(&v111, v83);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v115);
          v20 = v111;
          if ( !v111 )
          {
            LODWORD(v15) = -1073741811;
            WdLogSingleEntry2(2LL, (unsigned int)v99, -1073741811LL);
            WdLogGlobalForLineNumber = 8495;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid allocation handle in present: 0x%I64x. Returning 0x%I64x",
              (unsigned int)v99,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            v106 = -1073741811;
            v36 = v97;
            goto LABEL_39;
          }
          v84 = v104[(unsigned int)v102];
          if ( *(_QWORD *)(*(_QWORD *)(v111[1].Count + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v84 + 2) + 16LL)
                                                                                + 16LL) )
          {
            _mm_lfence();
            LODWORD(v15) = -1073741811;
            WdLogSingleEntry3(2LL, *((_QWORD *)v84 + 2), v111, -1073741811LL);
            WdLogGlobalForLineNumber = 8504;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
              *((_QWORD *)v104[(unsigned int)v102] + 2),
              (__int64)v20,
              -1073741811LL,
              0LL,
              0LL);
            v106 = -1073741811;
            v36 = v97;
            goto LABEL_39;
          }
        }
        i = (unsigned int)v102;
      }
      v85 = i;
      v86 = v104[i];
      if ( v118 )
        v87 = v118[v85];
      else
        v87 = 0LL;
      LODWORD(v15) = DXGCONTEXT::SubmitPresentWithDmaBuffer(
                       v86,
                       v107,
                       v87,
                       (struct DXGALLOCATION *)v19,
                       (struct DXGALLOCATION *)v20,
                       v105,
                       v97,
                       a12,
                       v119);
      if ( (int)v15 < 0 )
      {
        LODWORD(v15) = -1073741811;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 8533;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to submit DMA present buffer. Returning 0x%I64x",
          -1073741811LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_38;
      }
      v97 = 0LL;
      v117 = 0LL;
      *(_DWORD *)a12 &= ~0x800u;
    }
    v88 = v104;
    if ( (*((_DWORD *)*v104 + 98) & 0x10) != 0 )
      goto LABEL_38;
    Pool2 = 0LL;
    P = 0LL;
    v123 = 0;
    v90 = v100;
    if ( v100 <= 8 )
    {
      Pool2 = (struct _VIDSCH_CONTEXT **)v122;
      P = v122;
      if ( !v100 )
      {
LABEL_148:
        v123 = v90;
LABEL_149:
        if ( Pool2 )
        {
          for ( j = 1; j < v79; ++j )
          {
            v92 = j;
            v93 = v88[j];
            if ( (*((_DWORD *)v93 + 98) & 0x10) != 0 )
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 8573;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"DXGCONTEXT 0x%p broadcast present mixes hardware scheduled and non-hardware scheduled contexts.",
                (__int64)v88[v92],
                0LL,
                0LL,
                0LL,
                0LL);
              LODWORD(v15) = -1073741811;
              goto LABEL_156;
            }
            Pool2[j - 1] = (struct _VIDSCH_CONTEXT *)*((_QWORD *)v93 + 32);
            v79 = v101;
          }
          LODWORD(v15) = VIDSCH_EXPORT::VidSchSignalSyncObjectsFromGpu(
                           *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                           0,
                           0LL,
                           v100,
                           Pool2,
                           1u,
                           &BroadcastPresentSyncObject,
                           0,
                           (const unsigned __int64 *)&v114,
                           0);
          if ( (int)v15 >= 0 )
            LODWORD(v15) = VIDMM_EXPORT::VidMmIsAllocationInPresentQueue(
                             *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                             *((struct VIDMM_GLOBAL **)this + 32),
                             BroadcastPresentSyncObject,
                             (unsigned int *)v114);
LABEL_156:
          if ( P != v122 && P )
            ExFreePoolWithTag(P, 0);
        }
        else
        {
          LODWORD(v15) = -1073741801;
        }
        goto LABEL_38;
      }
      memset(v122, 0, 8LL * v100);
      Pool2 = (struct _VIDSCH_CONTEXT **)P;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v100 < 8 )
        goto LABEL_149;
      Pool2 = (struct _VIDSCH_CONTEXT **)ExAllocatePool2(256LL, 8LL * v100, 1265072196LL);
      P = Pool2;
    }
    v79 = v90 + 1;
    goto LABEL_148;
  }
  v43 = BroadcastPresentSyncObject;
  if ( !BroadcastPresentSyncObject )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8208;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pFlipToDxgAllocation", 8208LL, 0LL, 0LL, 0LL, 0LL);
  }
  v44 = v105;
  if ( v105->pDmaBuffer )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8209;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pPresentDdiArg->pDmaBuffer == NULL",
      8209LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v44 = v105;
  }
  if ( !v100 || !v98 )
  {
    v45 = 2048;
    v46 = v101;
    if ( v101 > 1 )
      v45 = 3072;
    *(_DWORD *)a12 = *(_DWORD *)a12 & 0xFFFFFBFF | v45;
    *((_DWORD *)a12 + 35) = v46;
    v47 = (char *)a12 + 600;
    if ( !*((_BYTE *)a12 + 356) )
      v47 = (char *)a12 + 496;
    *(_DWORD *)v47 = *(_DWORD *)v47 & 0xFFFFFC00 | 1;
    if ( *((_BYTE *)a12 + 356) )
      v48 = (char *)a12 + (unsigned int)(8 * *((_DWORD *)a12 + 151) * (*((_DWORD *)a12 + 152) + 28)) + 656;
    else
      v48 = (char *)a12 + 504;
    LODWORD(v15) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL)
                                                                                                 + 8LL)
                                                                                     + 392LL))(
                     *(_QWORD *)(*((_QWORD *)this + 2) + 792LL),
                     *((_QWORD *)v43 + 3),
                     v48,
                     v102);
    if ( (int)v15 >= 0 )
    {
      LODWORD(v99) = 0;
      Entry = 0LL;
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
      {
        v50 = 0xFFFF;
        LODWORD(v99) = 0xFFFF;
        Entry = (PVOID)-1LL;
      }
      else
      {
        v96 = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, struct _D3DKMT_PRESENT_RGNS **, PVOID *))(*(_QWORD *)(*(_QWORD *)(v49 + 760) + 8LL)
                                                                                        + 200LL))(
          *(_QWORD *)(v49 + 768),
          *(_QWORD *)(*((_QWORD *)v43 + 6) + 8LL),
          &v99,
          &Entry);
        v50 = (int)v99;
      }
      if ( *((_BYTE *)a12 + 356) )
        *(_WORD *)((char *)a12 + (unsigned int)(8 * *((_DWORD *)a12 + 151) * (*((_DWORD *)a12 + 152) + 28)) + 640) = v50;
      else
        *((_DWORD *)a12 + 139) ^= (*((_DWORD *)a12 + 139) ^ (v50 << 17)) & 0x3E0000;
      if ( *((_BYTE *)a12 + 356) )
        v51 = (char *)a12 + (unsigned int)(8 * *((_DWORD *)a12 + 151) * (*((_DWORD *)a12 + 152) + 28)) + 648;
      else
        v51 = (char *)a12 + 520;
      *(_QWORD *)v51 = Entry;
      v52 = *((_QWORD *)v43 + 5);
      if ( v52 )
        v53 = (*(_DWORD *)(v52 + 4) & 8) != 0;
      else
        v53 = 0;
      if ( v53 )
        v54 = *(_QWORD *)(*(_QWORD *)(v52 + 56) + 184LL);
      else
        v54 = 0LL;
      if ( *((_BYTE *)a12 + 356) )
        *(_QWORD *)((char *)a12 + (unsigned int)(8 * *((_DWORD *)a12 + 151) * (*((_DWORD *)a12 + 152) + 28)) + 664) = v54;
      else
        *((_QWORD *)a12 + 72) = v54;
      v55 = *((_BYTE *)a12 + 356);
      v56 = (char *)a12 + 768;
      if ( !v55 )
        v56 = (char *)a12 + 528;
      v57 = BroadcastPresentSyncObject;
      if ( v55 )
        v58 = (char *)a12 + (unsigned int)(8 * *((_DWORD *)a12 + 151) * (*((_DWORD *)a12 + 152) + 28)) + 632;
      else
        v58 = (char *)a12 + 512;
      *(_QWORD *)v58 = *(_QWORD *)(*((_QWORD *)BroadcastPresentSyncObject + 6) + 16LL);
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3097LL) )
      {
        if ( *((_BYTE *)a12 + 356) )
          v59 = (char *)a12 + (unsigned int)(8 * *((_DWORD *)a12 + 151) * (*((_DWORD *)a12 + 152) + 28)) + 624;
        else
          v59 = (char *)a12 + 568;
        *(_QWORD *)v59 = *((_QWORD *)this + 23);
      }
      if ( *((_BYTE *)a12 + 356) )
        *((_DWORD *)a12 + 162) = -1;
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                          *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3160LL),
                          *((_DWORD *)a12 + 29));
      *(_WORD *)v56 = 0;
      *(_DWORD *)(v56 + 2) = *(unsigned __int16 *)DisplayModeInfo;
      *((_WORD *)v56 + 3) = *((_WORD *)DisplayModeInfo + 2);
      v61 = *(_QWORD *)v56;
      *((_QWORD *)v56 + 1) = *(_QWORD *)v56;
      *((_QWORD *)v56 + 2) = v61;
      if ( a13 == D3DDDIFMT_A16B16G16R16F || (v62 = 0, a13 == D3DDDIFMT_A32B32G32R32F) )
        v62 = 1;
      *((_DWORD *)v56 + 6) = v62;
      *((_DWORD *)v56 + 7) &= 0xFFFFFFE7;
      *((_DWORD *)v56 + 8) = 0;
      memset(&v124[9], 0, 24);
      v63 = *((_QWORD *)v57 + 4);
      if ( *((_BYTE *)this + 430) )
      {
        memset(v124, 0, sizeof(v124));
        v124[4] = v63;
        LOBYTE(v64) = *((_BYTE *)this + 431) != 0;
        v124[5] = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 760LL)
                                                                                    + 8LL)
                                                                        + 232LL))(
                    v19[3].Count,
                    v64,
                    *((unsigned int *)this + 97));
        v124[6] = Entry;
        LOWORD(v124[7]) = (_WORD)v99;
      }
      else
      {
        memset(v124, 0, 0x48uLL);
        v124[3] = v63;
        LODWORD(v124[4]) = v124[4] & 0xFFFFFFC0 | (2 * ((unsigned __int8)v99 & 0x1F));
        v124[5] = Entry;
      }
      v65 = v105;
      v105->pAllocationList = (DXGK_ALLOCATIONLIST *)v124;
      v66 = 0LL;
      if ( (v65->Flags.Value & 1) != 0
        || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3097LL) )
      {
        v66 = (void *)*((_QWORD *)this + 23);
      }
      LODWORD(v15) = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v66, v65);
      if ( (int)v15 >= 0 )
      {
        v40 = 0;
        if ( v101 )
        {
          v41 = v104;
          v67 = v101;
          do
          {
            if ( *((struct _KTHREAD **)*v41 + 56) != KeGetCurrentThread() )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 8392;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
                8392LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( (*((_DWORD *)this + 98) & 0x10) != 0 )
              DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(*v41, 0LL, 0, 0, a12, 0LL, 0);
            v37 = *v41;
            v38 = *(_QWORD *)(*((_QWORD *)*v41 + 2) + 16LL);
            if ( (*((_DWORD *)*v41 + 98) & 0x10) != 0 )
              v39 = VIDSCH_EXPORT::VidSchSubmitCommandToHwQueue(
                      *(VIDSCH_EXPORT **)(v38 + 736),
                      *((struct VIDSCH_HW_QUEUE **)v37 + 36),
                      a12);
            else
              v39 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(v38 + 736) + 8LL)
                                                                                        + 448LL))(
                      *((_QWORD *)v37 + 32),
                      a12);
            LODWORD(v15) = v39;
            if ( v39 < 0 )
              break;
            *(_DWORD *)a12 &= ~0x800u;
            ++v40;
            ++v41;
          }
          while ( v40 < v67 );
          v23 = v115;
        }
      }
      if ( (int)v15 < 0 )
      {
        if ( *((_BYTE *)a12 + 356) )
          v95 = (struct VIDMM_ALLOC **)((char *)a12
                                      + (unsigned int)(8 * *((_DWORD *)a12 + 151) * (*((_DWORD *)a12 + 152) + 28))
                                      + 656);
        else
          v95 = (struct VIDMM_ALLOC **)((char *)a12 + 504);
        VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
          *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
          *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
          *((_DWORD *)a12 + 34),
          *v95,
          v96,
          v102);
      }
    }
    goto LABEL_38;
  }
  v94 = DXGCONTEXT::SubmitPresentLda(this, v107, v100, v104, v43, v44, a12, a13);
  if ( a11 )
    VIDMM_EXPORT::VidMmReleaseDmaBuffer(*(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL), a11);
  CAutoRefCountedBuffer::~CAutoRefCountedBuffer((CAutoRefCountedBuffer *)&v108);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v111);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v112);
  return v94;
}
