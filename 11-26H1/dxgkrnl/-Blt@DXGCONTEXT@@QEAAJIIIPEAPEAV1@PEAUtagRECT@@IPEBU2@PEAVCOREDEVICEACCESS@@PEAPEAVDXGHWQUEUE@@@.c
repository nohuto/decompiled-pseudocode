/*
 * XREFs of ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1402B3814
 * Callers:
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1401C9700 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1402B3610 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x140033350 (--0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x14003D730 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@IIPEAUtagRECT@@3IPEBU5@IPEAE@Z @ 0x14022B450 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14029AA24 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1402B5D04 (-MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAUVIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F4EA0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 */

__int64 __fastcall DXGCONTEXT::Blt(
        DXGCONTEXT *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct DXGCONTEXT **a5,
        struct tagRECT *a6,
        UINT a7,
        struct tagRECT *a8,
        struct COREDEVICEACCESS *a9,
        struct DXGHWQUEUE **a10)
{
  __int64 v11; // rcx
  ADAPTER_RENDER *v12; // rcx
  __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // rbx
  unsigned int v16; // eax
  int v17; // r8d
  __int64 v18; // rcx
  struct _EX_RUNDOWN_REF *v19; // rdx
  __int64 v20; // r10
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rdi
  unsigned int v24; // eax
  int v25; // r8d
  __int64 v26; // rcx
  struct _EX_RUNDOWN_REF *v27; // rdx
  __int64 v28; // r10
  int v29; // eax
  UINT right; // ecx
  UINT Height; // edx
  struct tagRECT *v32; // rsi
  signed int Width; // r9d
  int v34; // ecx
  signed int v35; // r8d
  __int64 v36; // rdx
  unsigned int i; // eax
  int *p_top; // rbx
  struct DXGDEVICE *v39; // rsi
  unsigned int v40; // edi
  struct ADAPTER_RENDER *v41; // r15
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int j; // eax
  struct COREDEVICEACCESS *v45; // rbx
  __int64 v46; // rdx
  struct VIDSCH_SUBMIT_DATA_BASE *v47; // r10
  int v48; // edx
  int v49; // eax
  unsigned int v50; // r9d
  struct DXGHWQUEUE **v51; // r8
  int v52; // eax
  __int64 v53; // rdi
  int v55; // ebx
  __int64 v56; // rbx
  __int64 v57; // rdi
  __int64 v58; // rsi
  unsigned int v59; // edi
  unsigned int v60; // ebx
  struct DXGPROCESS *Current; // rax
  int v62; // eax
  struct DXGCONTEXT **v63; // [rsp+20h] [rbp-E0h]
  struct DXGCONTEXT **v64; // [rsp+20h] [rbp-E0h]
  __int64 left; // [rsp+20h] [rbp-E0h]
  __int64 v66; // [rsp+20h] [rbp-E0h]
  __int64 v67; // [rsp+28h] [rbp-D8h]
  __int64 bottom; // [rsp+28h] [rbp-D8h]
  struct DXGALLOCATION *v69; // [rsp+70h] [rbp-90h] BYREF
  struct DXGALLOCATION *v70; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v71; // [rsp+80h] [rbp-80h]
  struct VIDMM_DMA_BUFFER *v72; // [rsp+88h] [rbp-78h] BYREF
  struct tagRECT v73; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v74; // [rsp+A0h] [rbp-60h]
  struct tagRECT v75; // [rsp+A8h] [rbp-58h] BYREF
  struct COREDEVICEACCESS *v76; // [rsp+B8h] [rbp-48h]
  struct tagRECT *v77; // [rsp+C0h] [rbp-40h]
  struct DXGCONTEXT **v78; // [rsp+C8h] [rbp-38h]
  struct DXGHWQUEUE **v79; // [rsp+D0h] [rbp-30h]
  struct _DXGKARG_DESCRIBEALLOCATION v80; // [rsp+D8h] [rbp-28h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v81; // [rsp+108h] [rbp+8h] BYREF
  struct _DXGKARG_PRESENT v82; // [rsp+140h] [rbp+40h] BYREF

  v11 = *((_QWORD *)this + 2);
  v78 = a5;
  v12 = *(ADAPTER_RENDER **)(v11 + 16);
  v76 = a9;
  v13 = a3;
  v79 = a10;
  v74 = a4;
  v71 = a3;
  v14 = a2;
  v77 = a8;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(v12) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7457;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      7457LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v15 + 248));
  v16 = ((unsigned int)v14 >> 6) & 0xFFFFFF;
  if ( v16 < *(_DWORD *)(v15 + 296)
    && (v17 = *(_DWORD *)(*(_QWORD *)(v15 + 280) + 16LL * v16 + 8),
        (((unsigned int)v14 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v15 + 280) + 16LL * v16 + 8) & 0x60))
    && (v17 & 0x2000) == 0
    && (v17 & 0x1F) != 0 )
  {
    v18 = *(_QWORD *)(v15 + 280);
    if ( (*(_BYTE *)(v18 + 16LL * v16 + 8) & 0x1F) == 5 )
    {
      v19 = *(struct _EX_RUNDOWN_REF **)(v18 + 16LL * v16);
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
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v70, v19);
  _InterlockedDecrement((volatile signed __int32 *)(v15 + 264));
  ExReleasePushLockSharedEx(v15 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v70 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7464;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid source handle 0x%I64x", v14, 0LL, 0LL, 0LL, 0LL);
LABEL_59:
    v55 = -1073741811;
    goto LABEL_54;
  }
  v20 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v70 + 1) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) )
  {
    v55 = -1073741811;
    WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v70, -1073741811LL);
    v64 = (struct DXGCONTEXT **)*((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 7472;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      (__int64)v64,
      (__int64)v70,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_54;
  }
  memset(&v81, 0, sizeof(v81));
  v81.hAllocation = *(HANDLE *)(*((_QWORD *)v70 + 6) + 16LL);
  v21 = ADAPTER_RENDER::DdiDescribeAllocation(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 3168LL),
          &v81);
  v22 = v21;
  if ( v21 < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      v21,
      this,
      *((unsigned int *)v70 + 4),
      v70,
      (*(_DWORD *)(*((_QWORD *)v70 + 6) + 4LL) >> 6) & 0xF);
    WdLogGlobalForLineNumber = 7483;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for source 0x%I64x 0x%I64x 0x%I64x",
      v22,
      (__int64)this,
      *((unsigned int *)v70 + 4),
      (__int64)v70,
      (*(_DWORD *)(*((_QWORD *)v70 + 6) + 4LL) >> 6) & 0xF);
    goto LABEL_69;
  }
  v23 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v23 + 248));
  v24 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
  if ( v24 < *(_DWORD *)(v23 + 296) )
  {
    v25 = *(_DWORD *)(*(_QWORD *)(v23 + 280) + 16LL * v24 + 8);
    if ( (((unsigned int)v13 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(v23 + 280) + 16LL * v24 + 8) & 0x60)
      && (v25 & 0x2000) == 0
      && (v25 & 0x1F) != 0 )
    {
      v26 = *(_QWORD *)(v23 + 280);
      if ( (*(_BYTE *)(v26 + 16LL * v24 + 8) & 0x1F) == 5 )
      {
        v27 = *(struct _EX_RUNDOWN_REF **)(v26 + 16LL * v24);
        goto LABEL_18;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v27 = 0LL;
LABEL_18:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v69, v27);
  _InterlockedDecrement((volatile signed __int32 *)(v23 + 264));
  ExReleasePushLockSharedEx(v23 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v69 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7491;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid destination handle 0x%I64x",
      v13,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_58:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v69);
    goto LABEL_59;
  }
  v28 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v69 + 1) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) )
  {
    v55 = -1073741811;
    WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), v69, -1073741811LL);
    v63 = (struct DXGCONTEXT **)*((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 7499;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      (__int64)v63,
      (__int64)v69,
      -1073741811LL,
      0LL,
      0LL);
LABEL_53:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v69);
LABEL_54:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v70);
    return (unsigned int)v55;
  }
  memset(&v80, 0, sizeof(v80));
  v80.hAllocation = *(HANDLE *)(*((_QWORD *)v69 + 6) + 16LL);
  v29 = ADAPTER_RENDER::DdiDescribeAllocation(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 3168LL),
          &v80);
  v22 = v29;
  if ( v29 < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      v29,
      this,
      *((unsigned int *)v69 + 4),
      v69,
      (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF);
    WdLogGlobalForLineNumber = 7510;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for destination 0x%I64x 0x%I64x 0x%I64x",
      v22,
      (__int64)this,
      *((unsigned int *)v69 + 4),
      (__int64)v69,
      (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) >> 6) & 0xF);
LABEL_68:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v69);
LABEL_69:
    v55 = v22;
    goto LABEL_54;
  }
  *(_QWORD *)&v73.left = 0LL;
  v75 = 0LL;
  if ( a6 )
  {
    right = a6->right;
    Height = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)a6, 12));
    v75 = *a6;
  }
  else
  {
    right = v81.Width;
    Height = v81.Height;
  }
  v32 = a8;
  Width = v80.Width;
  v34 = right - v75.left;
  v35 = v80.Height;
  if ( v34 < (int)v80.Width )
    Width = v34;
  v36 = Height - v75.top;
  v73.right = Width;
  if ( (int)v36 < (int)v80.Height )
    v35 = v36;
  v75.right = Width + v75.left;
  v73.bottom = v35;
  v75.bottom = v35 + v75.top;
  for ( i = 0; i < a7; ++i )
  {
    p_top = &v32->top;
    if ( v32->left < 0 || *p_top < 0 )
    {
      WdLogSingleEntry4(2LL, v32->left, *p_top, 0LL, 0LL);
      v67 = *p_top;
      left = v32->left;
      WdLogGlobalForLineNumber = 7547;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The (left, top) of blit sub rect (0x%I64x,0x%I64x) is outside of dst rectangle (0x%I64x,0x%I64x)",
        left,
        v67,
        0LL,
        0LL,
        0LL);
      goto LABEL_58;
    }
    if ( v32->right > Width || v32->bottom > v35 )
    {
      v56 = v35;
      v57 = Width;
      WdLogSingleEntry4(2LL, v32->right, v32->bottom, Width, v35);
      bottom = v32->bottom;
      v66 = v32->right;
      WdLogGlobalForLineNumber = 7554;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"The (right bottom) of blit sub rect (0x%I64x,0x%I64x) is outside of dst rectangle (0x%I64x,0x%I64x)",
        v66,
        bottom,
        v57,
        v56,
        0LL);
      goto LABEL_58;
    }
    ++v32;
  }
  if ( *((_BYTE *)this + 434) )
  {
    v58 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
    v59 = *((_DWORD *)v69 + 5);
    v60 = *((_DWORD *)v70 + 5);
    Current = DXGPROCESS::GetCurrent();
    v55 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v58 + 4712),
            Current,
            this,
            0LL,
            v60,
            v59,
            &v75,
            &v73,
            a7,
            v77,
            0,
            0LL);
    goto LABEL_53;
  }
  if ( !*((_BYTE *)this + 430) )
    goto LABEL_39;
  v39 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
  v40 = *((_DWORD *)this + 97);
  LOBYTE(v36) = *((_BYTE *)this + 431) != 0;
  v41 = (struct ADAPTER_RENDER *)*((_QWORD *)v39 + 2);
  if ( !(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v41 + 95) + 8LL) + 232LL))(
          *((_QWORD *)v69 + 3),
          v36,
          v40) )
  {
    v55 = MapGpuVaForAllocation(v41, v39, v40, v69);
    if ( v55 < 0 )
      goto LABEL_53;
  }
  LOBYTE(v42) = *((_BYTE *)this + 431) != 0;
  if ( !(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                               + 16LL)
                                                                                   + 760LL)
                                                                       + 8LL)
                                                           + 232LL))(
          *((_QWORD *)v70 + 3),
          v42,
          v40) )
  {
    v55 = MapGpuVaForAllocation(v41, v39, v40, v70);
    if ( v55 < 0 )
      goto LABEL_53;
  }
  LODWORD(v13) = v71;
LABEL_39:
  v43 = *((_QWORD *)this + 46);
  v72 = 0LL;
  if ( v43 )
  {
    for ( j = 0; j < *((_DWORD *)this + 94); ++j )
    {
      if ( *(_QWORD *)(v43 + 8LL * j) )
      {
        v72 = *(struct VIDMM_DMA_BUFFER **)(v43 + 8LL * j);
        *(_QWORD *)(v43 + 8LL * j) = 0LL;
        if ( !v72 )
          break;
        v45 = v76;
        goto LABEL_45;
      }
    }
  }
  v45 = v76;
  v62 = DXGCONTEXT::AcquireDmaBuffer(this, &v72, v76, 1);
  v22 = v62;
  if ( v62 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7635;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire DMA buffer 0x%I64x",
      v22,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_68;
  }
LABEL_45:
  memset(&v82, 0, sizeof(v82));
  v46 = *((_QWORD *)this + 2);
  v82.Flags.Value |= 1u;
  v82.pDstSubRects = v77;
  v82.DstRect = v73;
  v82.SubRectCnt = a7;
  v82.SrcRect = v75;
  CVidSchSubmitData::CVidSchSubmitData((CVidSchSubmitData *)&v73, *(struct ADAPTER_RENDER **)(v46 + 16), 1);
  v47 = *(struct VIDSCH_SUBMIT_DATA_BASE **)&v73.left;
  if ( !*(_QWORD *)&v73.left )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 7652;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate VidSchSubmitData",
      7652LL,
      0LL,
      0LL,
      0LL,
      0LL);
    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&v73);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v69);
    v55 = -1073741801;
    goto LABEL_54;
  }
  v48 = **(_DWORD **)&v73.left | 0x10000;
  **(_DWORD **)&v73.left = v48;
  if ( (*(_DWORD *)(*((_QWORD *)v69 + 6) + 4LL) & 3) != 0
    || (v49 = *(_DWORD *)(*((_QWORD *)v70 + 6) + 4LL), (v49 & 2) != 0)
    || (v49 & 1) != 0 )
  {
    v48 |= 1u;
    *(_DWORD *)v47 = v48;
  }
  v50 = v74;
  v51 = v79;
  *(_DWORD *)v47 = v48 | 0x100;
  v52 = DXGCONTEXT::SubmitPresent(this, 0LL, v51, v50, v78, 0LL, v14, v13, &v82, 0LL, v72, v47, v80.Format, v45);
  v53 = v52;
  if ( v52 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7670;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"SubmitPresent failed 0x%I64x", v53, 0LL, 0LL, 0LL, 0LL);
  }
  CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)&v73);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v69);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v70);
  return (unsigned int)v53;
}
