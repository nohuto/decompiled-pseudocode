/*
 * XREFs of DxgkPresentMultiPlaneOverlay2 @ 0x1401E8610
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400095A0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x14000EB0C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x14002FE80 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     McTemplateK0qqqqdqqq_EtwWriteTransfer @ 0x140041D08 (McTemplateK0qqqqdqqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x140192DA4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     _DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO @ 0x1401E6D54 (_DxgkPresentMultiPlaneOverlay_--_2_--_AUTO--__AUTO.c)
 *     ?CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY2@@PEAPEAUtagRECT@@@Z @ 0x1401E6D7C (-CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU.c)
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1401E74A4 (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay2(struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *Src)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 CurrentProcess; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 VidPnSourceId; // rcx
  const wchar_t *v14; // r9
  __int64 v15; // rcx
  __int64 *v16; // rbx
  __int64 v17; // rax
  struct DXGDEVICE *v18; // rdx
  __int64 v19; // rdi
  _QWORD *Pool2; // rax
  ULONG v21; // r14d
  __int64 v22; // rdi
  D3DKMT_HANDLE v23; // eax
  int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rax
  const struct DXGDEVICE *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // [rsp+30h] [rbp-D8h]
  int v52; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v53[2]; // [rsp+70h] [rbp-98h] BYREF
  int *v54; // [rsp+80h] [rbp-88h]
  int *v55; // [rsp+88h] [rbp-80h]
  struct _D3DKMT_MULTIPLANE_OVERLAY2 *v56[2]; // [rsp+90h] [rbp-78h] BYREF
  PVOID P; // [rsp+A0h] [rbp-68h]
  _BYTE v58[32]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v59; // [rsp+C8h] [rbp-40h]
  struct DXGCONTEXT *v60[2]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v61[16]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v62[24]; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v63[6]; // [rsp+108h] [rbp+0h] BYREF
  char v64; // [rsp+138h] [rbp+30h]
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 v65; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v66[160]; // [rsp+278h] [rbp+170h] BYREF

  v52 = -1073741811;
  memset(&v65, 0, sizeof(v65));
  v54 = (int *)&v65;
  v53[1] = 0LL;
  LODWORD(v53[0]) = 2163;
  v55 = &v52;
  if ( (qword_1401664C0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v2, (__int64)&EventProfilerEnter);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)v53, 2163);
  Current = DXGPROCESS::GetCurrent();
  if ( !Src )
  {
    v52 = -1073741811;
    CurrentProcess = PsGetCurrentProcess(v3);
    WdLogSingleEntry2(2LL, v52, CurrentProcess);
    WdLogGlobalForLineNumber = 931;
    v7 = PsGetCurrentProcess(v6);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting multi plane overlay from unexpected process 0x%I64x 0x%I64x",
      v52,
      v7,
      0LL,
      0LL,
      0LL);
    v8 = v52;
    goto LABEL_87;
  }
  *(_OWORD *)v56 = 0LL;
  v52 = CapturePresentMultiPlaneOverlayArgs2(Src, &v65, v56, (struct tagRECT **)&v56[1]);
  if ( v52 < 0 )
  {
    v10 = PsGetCurrentProcess(v9);
    WdLogSingleEntry2(2LL, v52, v10);
    WdLogGlobalForLineNumber = 956;
    v12 = PsGetCurrentProcess(v11);
    VidPnSourceId = v52;
    v14 = L"Failed to capture multi plane overlay parameters 0x%I64x 0x%I64x";
LABEL_8:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, VidPnSourceId, v12, 0LL, 0LL, 0LL);
    v8 = v52;
    goto LABEL_86;
  }
  if ( v65.VidPnSourceId >= 0x10 )
  {
    v52 = -1073741811;
    WdLogSingleEntry2(2LL, v65.VidPnSourceId, -1073741811LL);
    v12 = v52;
    v14 = L"Invalid VidPnSoureId 0x%I64x specified in DxgkPresentMultiPlaneOverlay2, returning 0x%I64x";
    VidPnSourceId = v65.VidPnSourceId;
    WdLogGlobalForLineNumber = 966;
    goto LABEL_8;
  }
  v60[0] = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v61, v65.hDevice, (struct _KTHREAD **)Current, v60, 0, 1);
  v16 = (__int64 *)v60[0];
  if ( !v60[0] )
  {
    v52 = -1073741811;
    v17 = PsGetCurrentProcess(v15);
    WdLogSingleEntry3(3LL, v52, v17, v65.hDevice);
    WdLogGlobalForLineNumber = 979;
LABEL_84:
    v8 = v52;
    goto LABEL_85;
  }
  v18 = (struct DXGDEVICE *)*((_QWORD *)v60[0] + 2);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 3016LL) & 8) != 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 985;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Present is not supported on MCDM adapter context 0x%I64x",
      v65.hDevice,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_58:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v61);
    DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO((void **)v56);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v53);
    if ( (qword_1401664C0 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqdqqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v33,
          v35,
          v54[1],
          v54[67],
          v54[68],
          v54[69],
          v54[70],
          v54[71],
          v54[74],
          *v55);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  if ( (*((_DWORD *)v60[0] + 98) & 8) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 991;
    goto LABEL_58;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v60, v18);
  if ( v65.BroadcastContextCount > 0x40 )
  {
    WdLogSingleEntry2(3LL, v16, -1073741811LL);
    WdLogGlobalForLineNumber = 1006;
LABEL_57:
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v60);
    goto LABEL_58;
  }
  v19 = v65.BroadcastContextCount + 1;
  P = 0LL;
  v59 = 0;
  if ( (unsigned int)v19 <= 4 )
  {
    P = v58;
    memset(v58, 0, 8LL * (unsigned int)v19);
    Pool2 = P;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v19 < 8 )
      goto LABEL_25;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v19, 1265072196LL);
    P = Pool2;
  }
  v59 = v19;
  if ( !Pool2 )
  {
LABEL_25:
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1013;
LABEL_43:
    if ( P != v58 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v59 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v60);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v61);
    DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO((void **)v56);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v53);
    if ( (qword_1401664C0 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqqqdqqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v29,
          v31,
          v54[1],
          v54[67],
          v54[68],
          v54[69],
          v54[70],
          v54[71],
          v54[74],
          *v55);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit);
    }
    return 3221225495LL;
  }
  *Pool2 = v16;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v62, (struct _KTHREAD **)Current);
  v21 = 0;
  while ( v21 < v65.BroadcastContextCount )
  {
    v22 = v21;
    v23 = (v65.BroadcastContext[v21] >> 6) & 0xFFFFFF;
    if ( v23 >= *((_DWORD *)Current + 74) )
      goto LABEL_34;
    v24 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v23 + 8);
    if ( ((v65.BroadcastContext[v21] >> 25) & 0x60) != (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * v23 + 8) & 0x60)
      || (v24 & 0x2000) != 0
      || (v24 & 0x1F) == 0 )
    {
      goto LABEL_34;
    }
    v25 = *((_QWORD *)Current + 35);
    if ( (*(_BYTE *)(v25 + 16LL * v23 + 8) & 0x1F) != 7 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_34:
      v26 = 0LL;
      goto LABEL_35;
    }
    v26 = *(_QWORD *)(v25 + 16LL * v23);
LABEL_35:
    *((_QWORD *)P + ++v21) = v26;
    v27 = *((_QWORD *)P + v21);
    if ( !v27 || (*(_DWORD *)(v27 + 392) & 8) != 0 || *(_QWORD *)(v27 + 16) != v16[2] )
    {
      WdLogSingleEntry4(2LL, v16, v65.BroadcastContext[v22], v22, -1073741811LL);
      v51 = v65.BroadcastContext[v22];
      WdLogGlobalForLineNumber = 1049;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v16,
        v51,
        v22,
        -1073741811LL,
        0LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v62);
LABEL_53:
      if ( P != v58 && P )
        ExFreePoolWithTag(P, 0);
      v59 = 0;
      P = 0LL;
      goto LABEL_57;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v62);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v63,
    P,
    v59,
    v28,
    1);
  if ( v64 )
  {
    if ( !v63[0] )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1064;
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v63);
      goto LABEL_43;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1069;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v63);
    goto LABEL_53;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v62,
    *(struct DXGADAPTER **)(*(_QWORD *)(v16[2] + 16) + 16LL),
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v66, v16[2], 1, v36, 0);
  v52 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v66, 0LL);
  if ( v52 >= 0 )
  {
    v39 = (const struct DXGDEVICE *)v16[2];
    v40 = *((_QWORD *)v39 + 237);
    if ( !v40 )
    {
      v52 = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1096;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"PresentMultiPlaneOverlay called on a render only adapter, returning 0x%I64x",
        v52,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_66;
    }
    if ( (*((_DWORD *)Current + 102) & 4) == 0
      && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v40 + 3160), v39, v65.VidPnSourceId) )
    {
      v52 = -1073741790;
      v42 = PsGetCurrentProcess(v41);
      WdLogSingleEntry2(2LL, v52, v42);
      WdLogGlobalForLineNumber = 1111;
      v44 = PsGetCurrentProcess(v43);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Presenting multi plane overlay is only supported from the DWM process 0x%I64x 0x%I64x",
        v52,
        v44,
        0LL,
        0LL,
        0LL);
      goto LABEL_66;
    }
    v45 = v16[2];
    v46 = *(_QWORD *)(*(_QWORD *)(v45 + 16) + 16LL);
    if ( *(_QWORD *)(v45 + 1896) == v46 )
    {
      v52 = DXGCONTEXT::PresentMultiPlaneOverlay2(
              (DXGCONTEXT *)v16,
              &v65,
              (struct COREDEVICEACCESS *)v66,
              (struct DXGCONTEXT **)P);
      if ( v52 == -1071775482 )
        DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v16[2], (struct COREDEVICEACCESS *)v66);
    }
    else
    {
      v47 = PsGetCurrentProcess(v46);
      WdLogSingleEntry2(3LL, -1073741811LL, v47);
      WdLogGlobalForLineNumber = 1128;
      v52 = -1073741811;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v66);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v63);
    if ( P != v58 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v59 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v60);
    goto LABEL_84;
  }
  v38 = PsGetCurrentProcess(v37);
  WdLogSingleEntry2(3LL, v52, v38);
  WdLogGlobalForLineNumber = 1088;
LABEL_66:
  v8 = v52;
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v66);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v63);
  if ( P != v58 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v59 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v60);
LABEL_85:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v61);
LABEL_86:
  DxgkPresentMultiPlaneOverlay_::_2_::_AUTO::__AUTO((void **)v56);
LABEL_87:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v53);
  if ( (qword_1401664C0 & 2) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqqqdqqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v48,
        v50,
        v54[1],
        v54[67],
        v54[68],
        v54[69],
        v54[70],
        v54[71],
        v54[74],
        *v55);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v49, (__int64)&EventProfilerExit);
  }
  return v8;
}
