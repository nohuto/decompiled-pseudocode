/*
 * XREFs of ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@@Z @ 0x1401F43B0
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F4EA0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 * Callees:
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14000ECA0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x14003B89C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x14003D024 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?VidMmGetAllocationGpuVirtualAddress@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_NI@Z @ 0x140046E90 (-VidMmGetAllocationGpuVirtualAddress@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_NI@Z.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@PEAI@Z @ 0x14004C210 (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MUL.c)
 *     ?VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400584EC (-VidMmGetPinnedAllocationInfo@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_NPEAI@Z @ 0x14007C7B8 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_NPEAI.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1402E2788 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAUDXGK_PRESENT_PARAMS@@1@Z @ 0x1402E5630 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1402F4940 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140336B0C (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1403773A0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentLda(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT *a2,
        int a3,
        struct DXGCONTEXT **a4,
        struct DXGALLOCATION *a5,
        struct _DXGKARG_PRESENT *a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7,
        enum _D3DDDIFORMAT a8)
{
  struct DXGCONTEXT **v8; // r15
  __int64 v10; // rbx
  unsigned int v11; // r12d
  PVOID v12; // r8
  _BYTE *Pool2; // r14
  DXGPROCESS *v14; // r14
  char *v15; // rcx
  struct DXGCONTEXT *v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rax
  const wchar_t *v19; // r9
  int v20; // ebx
  __int64 v21; // r14
  __int64 v22; // rsi
  unsigned int *v23; // rdi
  __int64 v25; // r14
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v27; // rdx
  struct VIDMM_ALLOC **v28; // r15
  __int64 v29; // r10
  unsigned int v30; // r8d
  union _LARGE_INTEGER *v31; // rdx
  __int64 v32; // rcx
  bool v33; // al
  __int64 v34; // r8
  char *v35; // rdx
  char *v36; // rdx
  __int64 AllocationGpuVirtualAddress; // rax
  DXGK_ALLOCATIONLIST *v38; // rcx
  struct _DXGKARG_PRESENT *v39; // r14
  char *v40; // rbx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v42; // rax
  int v43; // eax
  void *v44; // rdx
  unsigned int v45; // r14d
  unsigned int v46; // r12d
  bool v47; // [rsp+20h] [rbp-1C8h]
  unsigned int v48; // [rsp+50h] [rbp-198h]
  _BYTE *v49; // [rsp+58h] [rbp-190h]
  __int64 v50; // [rsp+60h] [rbp-188h] BYREF
  unsigned int v51; // [rsp+68h] [rbp-180h] BYREF
  unsigned int v52; // [rsp+6Ch] [rbp-17Ch] BYREF
  unsigned int v53; // [rsp+70h] [rbp-178h]
  DXGK_ALLOCATIONLIST *v54; // [rsp+78h] [rbp-170h]
  union _LARGE_INTEGER v55; // [rsp+80h] [rbp-168h] BYREF
  unsigned int v56; // [rsp+88h] [rbp-160h]
  DXGPROCESS *v57; // [rsp+90h] [rbp-158h]
  struct DXGCONTEXT **v58; // [rsp+98h] [rbp-150h]
  unsigned int *v59; // [rsp+A0h] [rbp-148h]
  struct DXGALLOCATION *v60; // [rsp+A8h] [rbp-140h]
  const struct _D3DKMT_PRESENT *v61; // [rsp+B0h] [rbp-138h]
  _BYTE v62[8]; // [rsp+B8h] [rbp-130h] BYREF
  _BYTE *v63; // [rsp+C0h] [rbp-128h]
  DXGCONTEXT *v64; // [rsp+C8h] [rbp-120h]
  struct DXGCONTEXT **v65; // [rsp+D0h] [rbp-118h]
  struct _DXGKARG_PRESENT *v66; // [rsp+D8h] [rbp-110h]
  PVOID P; // [rsp+E0h] [rbp-108h]
  _BYTE v68[32]; // [rsp+E8h] [rbp-100h] BYREF
  int v69; // [rsp+108h] [rbp-E0h]
  PVOID v70; // [rsp+110h] [rbp-D8h] BYREF
  char v71; // [rsp+118h] [rbp-D0h] BYREF
  int v72; // [rsp+198h] [rbp-50h]

  v8 = a4;
  v58 = a4;
  v61 = a2;
  v64 = this;
  v65 = a4;
  v60 = a5;
  v66 = a6;
  v57 = *(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL);
  v10 = (unsigned int)(a3 + 1);
  v53 = a3 + 1;
  v11 = 0;
  v48 = 0;
  v70 = 0LL;
  v72 = 0;
  PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(&v70, v10);
  v12 = v70;
  v54 = (DXGK_ALLOCATIONLIST *)v70;
  Pool2 = 0LL;
  v49 = 0LL;
  P = 0LL;
  v69 = 0;
  if ( (unsigned int)v10 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v10 < 8 )
      goto LABEL_8;
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8 * v10, 1265072196LL);
    P = Pool2;
    goto LABEL_6;
  }
  Pool2 = v68;
  v49 = v68;
  P = v68;
  if ( (_DWORD)v10 )
  {
    memset(v68, 0, 8LL * (unsigned int)v10);
    Pool2 = P;
LABEL_6:
    v12 = v54;
    v49 = Pool2;
  }
  v69 = v10;
LABEL_8:
  v63 = Pool2;
  if ( *((_BYTE *)a7 + 356) )
    v59 = (unsigned int *)((char *)a7 + 616);
  else
    v59 = 0LL;
  if ( v12 && Pool2 )
  {
    v14 = v57;
    if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
      || DXGPROCESS::IsRemoteConnection(v57) )
    {
      *((_DWORD *)a7 + 29) = 0;
    }
    *(_DWORD *)a7 |= 0xC00u;
    *((_DWORD *)a7 + 35) = v10;
    v15 = (char *)a7 + 600;
    if ( !*((_BYTE *)a7 + 356) )
      v15 = (char *)a7 + 496;
    *(_DWORD *)v15 = *(_DWORD *)v15 & 0xFFFFFC00 | 1;
    while ( v11 < (unsigned int)v10 )
    {
      v16 = v8[v11];
      v17 = *((_DWORD *)v16 + 97);
      v56 = v17;
      v50 = 0LL;
      if ( !*((_BYTE *)v16 + 430) )
      {
        WdLogSingleEntry0(2LL);
        v18 = 8744LL;
        v19 = L"WDDMv2 LDA present must be on contexts, which support GpuVa";
        goto LABEL_22;
      }
      if ( v11 )
      {
        if ( v17 <= *((_DWORD *)v8[v11 - 1] + 97) )
        {
          WdLogSingleEntry0(2LL);
          v18 = 8760LL;
          v19 = L"WDDMv2 LDA present contexts must be submitted in the order if increasing physical adapter index";
LABEL_22:
          WdLogGlobalForLineNumber = v18;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v19, v18, 0LL, 0LL, 0LL, 0LL);
LABEL_23:
          v20 = -1073741811;
LABEL_24:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v50);
          goto LABEL_25;
        }
        v51 = 0;
        RtlCopyFromUser(&v51, &v61->BroadcastSrcAllocation[v11 - 1], 4uLL);
        AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)v14, (DXGALLOCATIONREFERENCE *)v62, v51);
        DXGALLOCATIONREFERENCE::MoveAssign(&v50, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v62);
        v25 = v50;
        if ( !v50 )
        {
          v20 = -1073741811;
          WdLogSingleEntry2(2LL, v51, -1073741811LL);
          WdLogGlobalForLineNumber = 8781;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid allocation handle in Present 0x%I64x. Returning 0x%I64x",
            v51,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_24;
        }
        v27 = *((_QWORD *)this + 2);
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v50 + 8) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) )
        {
          v20 = -1073741811;
          WdLogSingleEntry3(2LL, v27, v50, -1073741811LL);
          WdLogGlobalForLineNumber = 8790;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
            *((_QWORD *)this + 2),
            v25,
            -1073741811LL,
            0LL,
            0LL);
          goto LABEL_24;
        }
      }
      else
      {
        v25 = (__int64)v60;
      }
      if ( ((*(_DWORD *)(v25 + 72) >> 12) & 0x3F) != v17 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 8798;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Physical adapter index for context and allocation must be the same. DXGALLOCATION 0x%I64x",
          v25,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_23;
      }
      if ( *((_BYTE *)a7 + 356) )
        v28 = (struct VIDMM_ALLOC **)((char *)a7
                                    + 64 * (unsigned __int64)(v11 * *((_DWORD *)a7 + 151))
                                    + (unsigned int)(8 * *((_DWORD *)a7 + 151) * (*((_DWORD *)a7 + 152) + 28))
                                    + 656);
      else
        v28 = (struct VIDMM_ALLOC **)((char *)a7 + 504);
      v20 = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
              *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
              *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 792LL),
              *(struct VIDMM_MULTI_ALLOC **)(v25 + 24),
              v28,
              v59);
      if ( v20 < 0 )
      {
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v50);
        v8 = v58;
        goto LABEL_25;
      }
      *(_QWORD *)&v49[8 * v48++] = *v28;
      v52 = 0;
      v55.QuadPart = 0LL;
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
      {
        v30 = 0xFFFF;
        v52 = 0xFFFF;
        v55.QuadPart = -1LL;
      }
      else
      {
        VIDMM_EXPORT::VidMmGetPinnedAllocationInfo(
          *(VIDMM_EXPORT **)(v29 + 760),
          *(struct VIDMM_GLOBAL **)(v29 + 768),
          *(struct VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(v25 + 48) + 8LL),
          &v52,
          &v55,
          0LL);
        v30 = v52;
      }
      if ( *((_BYTE *)a7 + 356) )
        *(_WORD *)((char *)a7
                 + 64 * (unsigned __int64)(v11 * *((_DWORD *)a7 + 151))
                 + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
                 + 640) = v30;
      else
        *((_DWORD *)a7 + 139) ^= (*((_DWORD *)a7 + 139) ^ (v30 << 17)) & 0x3E0000;
      if ( *((_BYTE *)a7 + 356) )
        v31 = (union _LARGE_INTEGER *)((char *)a7
                                     + 64 * (unsigned __int64)(v11 * *((_DWORD *)a7 + 151))
                                     + (unsigned int)(8 * *((_DWORD *)a7 + 151) * (*((_DWORD *)a7 + 152) + 28))
                                     + 648);
      else
        v31 = (union _LARGE_INTEGER *)((char *)a7 + 520);
      *v31 = v55;
      v32 = *(_QWORD *)(v25 + 40);
      if ( v32 )
        v33 = (*(_DWORD *)(v32 + 4) & 8) != 0;
      else
        v33 = 0;
      if ( v33 )
        v34 = *(_QWORD *)(*(_QWORD *)(v32 + 56) + 184LL);
      else
        v34 = 0LL;
      if ( *((_BYTE *)a7 + 356) )
        *(_QWORD *)((char *)a7
                  + 64 * v11 * *((_DWORD *)a7 + 151)
                  + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
                  + 664) = v34;
      else
        *((_QWORD *)a7 + 72) = v34;
      if ( *((_BYTE *)a7 + 356) )
        v35 = (char *)a7
            + 64 * (unsigned __int64)(v11 * *((_DWORD *)a7 + 151))
            + (unsigned int)(8 * *((_DWORD *)a7 + 151) * (*((_DWORD *)a7 + 152) + 28))
            + 632;
      else
        v35 = (char *)a7 + 512;
      *(_QWORD *)v35 = *(_QWORD *)(*(_QWORD *)(v25 + 48) + 16LL);
      v8 = v58;
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3097LL) )
      {
        if ( *((_BYTE *)a7 + 356) )
          v36 = (char *)a7
              + 64 * (unsigned __int64)(v11 * *((_DWORD *)a7 + 151))
              + *((_DWORD *)a7 + 151) * ((8 * *((_DWORD *)a7 + 152) + 231) & 0xFFFFFFF8)
              + 624;
        else
          v36 = (char *)a7 + 568;
        *(_QWORD *)v36 = *((_QWORD *)v58[v11] + 23);
      }
      if ( *((_BYTE *)a7 + 356) )
        *((_DWORD *)a7 + 162) = -1;
      v10 = 32LL * v11;
      *(HANDLE *)((char *)&v54->hDeviceSpecificAllocation + v10) = *(HANDLE *)(v25 + 32);
      AllocationGpuVirtualAddress = VIDMM_EXPORT::VidMmGetAllocationGpuVirtualAddress(
                                      *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                                      *(const struct VIDMM_MULTI_ALLOC **)(v25 + 24),
                                      *((_BYTE *)this + 431) != 0,
                                      v56);
      v38 = v54;
      *(_QWORD *)((char *)&v54->8 + v10) = AllocationGpuVirtualAddress;
      *(union _LARGE_INTEGER *)((char *)&v38->PhysicalAddress + v10) = v55;
      *(_WORD *)((char *)&v38[1].hDeviceSpecificAllocation + v10) = v52;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v50);
      ++v11;
      LODWORD(v10) = v53;
      v14 = v57;
    }
    v39 = v66;
    v66->NumSrcAllocations = v10;
    v39->pAllocationList = v54;
    v40 = (char *)a7 + 768;
    if ( !*((_BYTE *)a7 + 356) )
      v40 = (char *)a7 + 528;
    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                        *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) + 3160LL),
                        *((_DWORD *)a7 + 29));
    *(_WORD *)v40 = 0;
    *(_DWORD *)(v40 + 2) = *(unsigned __int16 *)DisplayModeInfo;
    *((_WORD *)v40 + 3) = *((_WORD *)DisplayModeInfo + 2);
    v42 = *(_QWORD *)v40;
    *((_QWORD *)v40 + 1) = *(_QWORD *)v40;
    *((_QWORD *)v40 + 2) = v42;
    if ( a8 == D3DDDIFMT_A16B16G16R16F || (v43 = 0, a8 == D3DDDIFMT_A32B32G32R32F) )
      v43 = 1;
    *((_DWORD *)v40 + 6) = v43;
    *((_DWORD *)v40 + 7) &= 0xFFFFFFE7;
    *((_DWORD *)v40 + 8) = 0;
    v44 = 0LL;
    if ( (v39->Flags.Value & 1) != 0
      || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3097LL) )
    {
      v44 = (void *)*((_QWORD *)this + 23);
    }
    v20 = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v44, v39);
    if ( v20 >= 0 )
    {
      v45 = 0;
      v46 = v53;
      while ( v45 < v46 )
      {
        if ( *((struct _KTHREAD **)v8[v45] + 56) != KeGetCurrentThread() )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 8949;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
            8949LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (*((_DWORD *)this + 98) & 0x10) != 0 )
          DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v8[v45], 0LL, 0, 0, a7, 0LL, 0);
        v20 = DXGCONTEXT::SubmitCommandToImplicitQueue(v8[v45], a7);
        if ( v20 < 0 )
          break;
        *(_DWORD *)a7 &= ~0x800u;
        ++v45;
      }
    }
LABEL_25:
    Pool2 = v49;
    v11 = v48;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 8704;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocated ReferencedAllocationArray",
      8704LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v20 = -1073741801;
  }
  if ( v20 < 0 && v11 )
  {
    v21 = Pool2 - (_BYTE *)v8;
    v22 = v11;
    v23 = v59;
    do
    {
      VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
        *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
        1 << *((_DWORD *)*v8 + 97),
        *(struct DXGCONTEXT **)((char *)v8 + v21),
        v47,
        v23);
      ++v8;
      --v22;
    }
    while ( v22 );
  }
  if ( P != v68 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v69 = 0;
  if ( v70 != &v71 && v70 )
    ExFreePoolWithTag(v70, 0);
  return (unsigned int)v20;
}
