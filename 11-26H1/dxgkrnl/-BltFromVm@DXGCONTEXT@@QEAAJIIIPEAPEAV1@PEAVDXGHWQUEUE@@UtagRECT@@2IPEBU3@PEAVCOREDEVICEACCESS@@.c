/*
 * XREFs of ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAVDXGHWQUEUE@@UtagRECT@@2IPEBU3@PEAVCOREDEVICEACCESS@@@Z @ 0x1401F37FC
 * Callers:
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140221A60 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x140033350 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x14003D730 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?VidMmGetAllocationGpuVirtualAddress@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_NI@Z @ 0x140046E90 (-VidMmGetAllocationGpuVirtualAddress@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_NI@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14029AA24 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1402B5D04 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F4EA0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 */

__int64 __fastcall DXGCONTEXT::BltFromVm(
        DXGCONTEXT *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        struct DXGCONTEXT **a5,
        struct DXGHWQUEUE *a6,
        struct tagRECT *a7,
        struct tagRECT *a8,
        UINT a9,
        const struct tagRECT *a10,
        struct COREDEVICEACCESS *a11)
{
  const RECT *v12; // r15
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rbx
  unsigned int v16; // eax
  int v17; // r8d
  __int64 v18; // rcx
  struct DXGALLOCATION *v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // r10
  int v22; // eax
  __int64 v23; // rsi
  int v24; // ebx
  __int64 v25; // rsi
  unsigned int v26; // eax
  int v27; // r8d
  __int64 v28; // rcx
  struct DXGALLOCATION *v29; // rdx
  __int64 v30; // r10
  int v31; // eax
  struct DXGDEVICE *v32; // r14
  unsigned int v33; // ebx
  VIDMM_EXPORT **v34; // r15
  int right; // ecx
  LONG bottom; // ecx
  LONG top; // eax
  int v38; // r9d
  LONG left; // r10d
  LONG v40; // edx
  LONG v41; // r8d
  UINT i; // ecx
  LONG v43; // ebx
  LONG v44; // r11d
  LONG v45; // ebx
  LONG v46; // r11d
  __int64 v47; // rcx
  unsigned int j; // eax
  struct COREDEVICEACCESS *v49; // rbx
  int v50; // eax
  __int64 v51; // rdx
  RECT v52; // xmm0
  RECT v53; // xmm1
  struct COREDEVICEACCESS *v54; // r8
  int v55; // edx
  int v56; // eax
  struct DXGHWQUEUE *v57; // rcx
  int v58; // eax
  struct DXGHWQUEUE *v59; // rdx
  int v60; // eax
  __int64 v61; // rdi
  struct DXGCONTEXT **v63; // [rsp+20h] [rbp-E0h]
  struct DXGCONTEXT **v64; // [rsp+20h] [rbp-E0h]
  struct DXGALLOCATION *v65; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v66; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v67; // [rsp+80h] [rbp-80h]
  struct VIDMM_DMA_BUFFER *v68; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v69; // [rsp+90h] [rbp-70h]
  struct COREDEVICEACCESS *v70[2]; // [rsp+98h] [rbp-68h] BYREF
  const struct tagRECT *v71; // [rsp+A8h] [rbp-58h]
  struct DXGHWQUEUE *v72; // [rsp+B0h] [rbp-50h] BYREF
  struct DXGHWQUEUE *v73; // [rsp+B8h] [rbp-48h]
  struct DXGCONTEXT **v74; // [rsp+C0h] [rbp-40h]
  struct _DXGKARG_DESCRIBEALLOCATION v75; // [rsp+C8h] [rbp-38h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v76; // [rsp+F8h] [rbp-8h] BYREF
  struct _DXGKARG_PRESENT v77; // [rsp+130h] [rbp+30h] BYREF

  v12 = a10;
  v74 = a5;
  v73 = a6;
  v70[0] = a11;
  v13 = *((_QWORD *)this + 2);
  v14 = a3;
  v69 = a3;
  v67 = a2;
  v15 = *(_QWORD *)(v13 + 40);
  v71 = a10;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v15 + 248));
  v16 = (v67 >> 6) & 0xFFFFFF;
  if ( v16 < *(_DWORD *)(v15 + 296)
    && (v17 = *(_DWORD *)(*(_QWORD *)(v15 + 280) + 16LL * v16 + 8),
        ((v67 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v15 + 280) + 16LL * v16 + 8) & 0x60))
    && (v17 & 0x2000) == 0
    && (v17 & 0x1F) != 0 )
  {
    v18 = *(_QWORD *)(v15 + 280);
    if ( (*(_BYTE *)(v18 + 16LL * v16 + 8) & 0x1F) == 5 )
    {
      v19 = *(struct DXGALLOCATION **)(v18 + 16LL * v16);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      v19 = 0LL;
    }
  }
  else
  {
    v19 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v66, v19);
  _InterlockedDecrement((volatile signed __int32 *)(v15 + 264));
  ExReleasePushLockSharedEx(v15 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v66 )
  {
    v20 = v67;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7710;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source handle 0x%I64x", v20, 0LL, 0LL, 0LL, 0LL);
LABEL_26:
    v24 = -1073741811;
    goto LABEL_88;
  }
  v21 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v66 + 1) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) )
  {
    v24 = -1073741811;
    WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v66, -1073741811LL);
    v64 = (struct DXGCONTEXT **)*((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 7718;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      (__int64)v64,
      (__int64)v66,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_88;
  }
  memset(&v76, 0, sizeof(v76));
  v76.hAllocation = *(HANDLE *)(*((_QWORD *)v66 + 6) + 16LL);
  v22 = ADAPTER_RENDER::DdiDescribeAllocation(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 3168LL),
          &v76);
  v23 = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      v22,
      this,
      *((unsigned int *)v66 + 4),
      v66,
      (*(_DWORD *)(*((_QWORD *)v66 + 6) + 4LL) >> 6) & 0xF);
    WdLogGlobalForLineNumber = 7729;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for source 0x%I64x 0x%I64x 0x%I64x",
      v23,
      (__int64)this,
      *((unsigned int *)v66 + 4),
      (__int64)v66,
      (*(_DWORD *)(*((_QWORD *)v66 + 6) + 4LL) >> 6) & 0xF);
LABEL_14:
    v24 = v23;
LABEL_88:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v66);
    return (unsigned int)v24;
  }
  v25 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v25 + 248));
  v26 = ((unsigned int)v14 >> 6) & 0xFFFFFF;
  if ( v26 < *(_DWORD *)(v25 + 296) )
  {
    v27 = *(_DWORD *)(*(_QWORD *)(v25 + 280) + 16LL * v26 + 8);
    if ( (((unsigned int)v14 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v25 + 280) + 16LL * v26 + 8) & 0x60)
      && (v27 & 0x2000) == 0
      && (v27 & 0x1F) != 0 )
    {
      v28 = *(_QWORD *)(v25 + 280);
      if ( (*(_BYTE *)(v28 + 16LL * v26 + 8) & 0x1F) == 5 )
      {
        v29 = *(struct DXGALLOCATION **)(v28 + 16LL * v26);
        goto LABEL_23;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v29 = 0LL;
LABEL_23:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v65, v29);
  _InterlockedDecrement((volatile signed __int32 *)(v25 + 264));
  ExReleasePushLockSharedEx(v25 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v65 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7737;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid destination handle 0x%I64x",
      v14,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_25:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v65);
    goto LABEL_26;
  }
  v30 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v65 + 1) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL) )
  {
    v24 = -1073741811;
    WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v65, -1073741811LL);
    v63 = (struct DXGCONTEXT **)*((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 7745;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      (__int64)v63,
      (__int64)v65,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_86;
  }
  memset(&v75, 0, sizeof(v75));
  v75.hAllocation = *(HANDLE *)(*((_QWORD *)v65 + 6) + 16LL);
  v31 = ADAPTER_RENDER::DdiDescribeAllocation(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL) + 3168LL),
          &v75);
  v23 = v31;
  if ( v31 < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      v31,
      this,
      *((unsigned int *)v65 + 4),
      v65,
      (*(_DWORD *)(*((_QWORD *)v65 + 6) + 4LL) >> 6) & 0xF);
    WdLogGlobalForLineNumber = 7756;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for destination 0x%I64x 0x%I64x 0x%I64x",
      v23,
      (__int64)this,
      *((unsigned int *)v65 + 4),
      (__int64)v65,
      (*(_DWORD *)(*((_QWORD *)v65 + 6) + 4LL) >> 6) & 0xF);
LABEL_30:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v65);
    goto LABEL_14;
  }
  if ( *((_BYTE *)this + 430) )
  {
    v32 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
    v33 = *((_DWORD *)this + 97);
    v34 = (VIDMM_EXPORT **)*((_QWORD *)v32 + 2);
    if ( !VIDMM_EXPORT::VidMmGetAllocationGpuVirtualAddress(
            v34[95],
            *((const struct VIDMM_MULTI_ALLOC **)v65 + 3),
            *((_BYTE *)this + 431) != 0,
            v33) )
    {
      LODWORD(v23) = MapGpuVaForAllocation((struct ADAPTER_RENDER *)v34, v32, v33, v65);
      if ( (int)v23 < 0 )
        goto LABEL_30;
    }
    if ( VIDMM_EXPORT::VidMmGetAllocationGpuVirtualAddress(
           *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
           *((const struct VIDMM_MULTI_ALLOC **)v66 + 3),
           *((_BYTE *)this + 431) != 0,
           v33)
      || (v24 = MapGpuVaForAllocation((struct ADAPTER_RENDER *)v34, v32, v33, v66), v24 >= 0) )
    {
      v12 = v71;
      goto LABEL_37;
    }
LABEL_86:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v65);
    goto LABEL_88;
  }
LABEL_37:
  right = a7->right;
  if ( a7->left >= right
    || a7->left < 0
    || right > (int)v76.Width
    || (bottom = a7->bottom, top = a7->top, top >= bottom)
    || top < 0
    || bottom > (int)v76.Height )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 7809;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source rect", 7809LL, 0LL, 0LL, 0LL, 0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v65);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v66);
    return -1073741811LL;
  }
  v38 = a8->right;
  left = a8->left;
  if ( a8->left >= v38
    || left < 0
    || v38 > (int)v75.Width
    || (v40 = a8->bottom, v41 = a8->top, v41 >= v40)
    || v41 < 0
    || v40 > (int)v75.Height )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 7819;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid destination rect", 7819LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_25;
  }
  for ( i = 0; i < a9; ++i )
  {
    v43 = v12[i].right;
    v44 = v12[i].left;
    if ( v44 < v43 && v44 >= left && v43 <= v38 )
    {
      v45 = v12[i].bottom;
      v46 = v12[i].top;
      if ( v46 < v45 && v46 >= v41 && v45 <= v40 )
        continue;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 7832;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid subrect", 7832LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_25;
  }
  v47 = *((_QWORD *)this + 46);
  v68 = 0LL;
  if ( v47 )
  {
    for ( j = 0; j < *((_DWORD *)this + 94); ++j )
    {
      if ( *(_QWORD *)(v47 + 8LL * j) )
      {
        v68 = *(struct VIDMM_DMA_BUFFER **)(v47 + 8LL * j);
        *(_QWORD *)(v47 + 8LL * j) = 0LL;
        if ( !v68 )
          break;
        v49 = v70[0];
        goto LABEL_68;
      }
    }
  }
  v49 = v70[0];
  v50 = DXGCONTEXT::AcquireDmaBuffer(this, &v68, v70[0], 1u);
  v23 = v50;
  if ( v50 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7859;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire DMA buffer 0x%I64x",
      v23,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_30;
  }
LABEL_68:
  memset(&v77, 0, sizeof(v77));
  v51 = *((_QWORD *)this + 2);
  v52 = *a8;
  v53 = *a7;
  v77.Flags.Value |= 1u;
  v77.DstRect = v52;
  v77.SubRectCnt = a9;
  v77.SrcRect = v53;
  v77.pDstSubRects = v12;
  CVidSchSubmitData::CVidSchSubmitData((CVidSchSubmitData *)v70, *(struct ADAPTER_RENDER **)(v51 + 16), 1);
  v54 = v70[0];
  if ( !v70[0] )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 7876;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate VidSchSubmitData",
      7876LL,
      0LL,
      0LL,
      0LL,
      0LL);
    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v70);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v65);
    v24 = -1073741801;
    goto LABEL_88;
  }
  v55 = *(_DWORD *)v70[0] | 0x10000;
  *(_DWORD *)v70[0] = v55;
  if ( (*(_DWORD *)(*((_QWORD *)v65 + 6) + 4LL) & 3) != 0
    || (v56 = *(_DWORD *)(*((_QWORD *)v66 + 6) + 4LL), (v56 & 2) != 0)
    || (v56 & 1) != 0 )
  {
    v55 |= 1u;
    *(_DWORD *)v54 = v55;
  }
  v57 = v73;
  *(_DWORD *)v54 = v55 | 0x120;
  v58 = *((_DWORD *)this + 98);
  v72 = v57;
  if ( (v58 & 0x10) != 0 && !v57 )
  {
    v59 = 0LL;
    if ( *((DXGCONTEXT **)this + 50) != (DXGCONTEXT *)((char *)this + 400) )
      v59 = (struct DXGHWQUEUE *)*((_QWORD *)this + 50);
    v72 = v59;
    if ( !v59 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 7904;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Attempting to Blt on a HardwareContext:0x%I64x with no HwQueues",
        (__int64)this,
        0LL,
        0LL,
        0LL,
        0LL);
      CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v70);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v65);
      v24 = -1073741823;
      goto LABEL_88;
    }
  }
  v60 = DXGCONTEXT::SubmitPresent(this, 0LL, &v72, 0, v74, 0LL, v67, v69, &v77, 0LL, v68, v54, v75.Format, v49);
  v61 = v60;
  if ( v60 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7912;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"SubmitPresent failed 0x%I64x", v61, 0LL, 0LL, 0LL, 0LL);
  }
  CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v70);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v65);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v66);
  return (unsigned int)v61;
}
