/*
 * XREFs of DxgkRender @ 0x14029AD60
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400095A0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF00 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x14002FE80 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x140036220 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1402997C0 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x140299A80 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1403A9078 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1403C9104 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAUVIDMM_DMA_POOL@@III@Z @ 0x14040F67C (-ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAUVIDMM_DMA_POOL@@III@Z.c)
 */

__int64 __fastcall DxgkRender(_QWORD *Src)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // r14
  struct DXGCONTEXT *v4; // rsi
  int v5; // eax
  ULONG BroadcastContextCount; // edi
  __int64 v7; // rdi
  _QWORD *Pool2; // rcx
  ULONG v9; // r13d
  __int64 v10; // r9
  __int64 v11; // r9
  int v12; // edi
  unsigned __int64 v13; // r9
  __int64 AllocationCount; // r14
  char Flags; // dl
  D3DDDI_ALLOCATIONLIST *pNewAllocationList; // r12
  bool IsDxgmms2; // r13
  struct DXGALLOCATION **v18; // r15
  int v19; // eax
  int v20; // edx
  int v21; // r8d
  int v22; // r9d
  _QWORD *v23; // r10
  char *v24; // rcx
  __int64 v25; // rcx
  UINT NewCommandBufferSize; // r12d
  UINT NewAllocationListSize; // r15d
  UINT NewPatchLocationListSize; // r14d
  UINT v30; // eax
  UINT v31; // eax
  UINT v32; // eax
  struct DXGALLOCATION **v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 CurrentProcess; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r15
  D3DKMT_HANDLE v40; // edx
  int v41; // r9d
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  int v47; // ecx
  int v48; // [rsp+50h] [rbp-458h] BYREF
  __int64 v49; // [rsp+58h] [rbp-450h]
  char v50; // [rsp+60h] [rbp-448h]
  _BYTE v51[16]; // [rsp+68h] [rbp-440h] BYREF
  PVOID v52; // [rsp+78h] [rbp-430h]
  _BYTE v53[32]; // [rsp+80h] [rbp-428h] BYREF
  unsigned int v54; // [rsp+A0h] [rbp-408h]
  unsigned int v55; // [rsp+A8h] [rbp-400h] BYREF
  int v56; // [rsp+ACh] [rbp-3FCh] BYREF
  int v57; // [rsp+B0h] [rbp-3F8h] BYREF
  _BYTE v58[16]; // [rsp+B8h] [rbp-3F0h] BYREF
  struct DXGCONTEXT *v59; // [rsp+C8h] [rbp-3E0h] BYREF
  unsigned __int64 v60; // [rsp+D0h] [rbp-3D8h] BYREF
  DXGADAPTER *v61; // [rsp+D8h] [rbp-3D0h]
  char v62; // [rsp+E0h] [rbp-3C8h]
  _QWORD v63[2]; // [rsp+E8h] [rbp-3C0h] BYREF
  _QWORD *v64; // [rsp+F8h] [rbp-3B0h]
  _BYTE v65[24]; // [rsp+100h] [rbp-3A8h] BYREF
  _QWORD v66[6]; // [rsp+118h] [rbp-390h] BYREF
  char v67; // [rsp+148h] [rbp-360h]
  PVOID P; // [rsp+150h] [rbp-358h] BYREF
  _BYTE v69[256]; // [rsp+158h] [rbp-350h] BYREF
  int v70; // [rsp+258h] [rbp-250h]
  _D3DKMT_RENDER v71; // [rsp+260h] [rbp-248h] BYREF
  _BYTE v72[24]; // [rsp+3D0h] [rbp-D8h] BYREF
  DXGADAPTER *v73; // [rsp+3E8h] [rbp-C0h]

  v64 = Src;
  v48 = -1;
  v49 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v50 = 1;
    v48 = 2013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v48, 2013);
  Current = DXGPROCESS::GetCurrent();
  v63[1] = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v2);
    v12 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 42;
    v38 = PsGetCurrentProcess(v37);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v38,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_57:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    if ( v50 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v12;
  }
  memset(&v71, 0, sizeof(v71));
  RtlCopyFromUser(&v71, Src, 0x170uLL);
  v59 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v51,
    v71.hDevice,
    (struct _KTHREAD **)Current,
    &v59,
    0,
    1);
  v4 = v59;
  if ( !v59 )
  {
    v12 = -1073741811;
    WdLogSingleEntry3(2LL, Current, v71.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 66;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
      (__int64)Current,
      v71.hDevice,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_56;
  }
  if ( ((*(_BYTE *)&v71.Flags | (unsigned __int8)(*(_DWORD *)&v71.Flags >> 1)) & 0x20) != 0 )
  {
    v12 = -1073741811;
    WdLogSingleEntry2(2LL, v71.hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 74;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"RenderKm and RenderKmReadback flags should not be set when DxgkRender is called. Context 0x%I64x returning 0x%I64x",
      v71.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_56;
  }
  v5 = *((_DWORD *)v59 + 98);
  if ( (v5 & 0x10) != 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 81;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGCONTEXT 0x%p DxgkRender is not supported with hardware scheduling.",
      (__int64)v4,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_95;
  }
  if ( (v5 & 8) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 88;
    goto LABEL_95;
  }
  if ( *((_BYTE *)v59 + 430) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 95;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkRender cannot be called on a virtual context. pContext=0x%p",
      v71.hDevice,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_95;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v58,
    *((struct DXGDEVICE **)v59 + 2));
  BroadcastContextCount = v71.BroadcastContextCount;
  if ( v71.BroadcastContextCount
    && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 16LL) + 16LL)) )
  {
    v12 = -1073741811;
    WdLogSingleEntry2(3LL, v4, -1073741811LL);
    WdLogGlobalForLineNumber = 111;
    goto LABEL_55;
  }
  if ( BroadcastContextCount > 0x40 )
  {
    v12 = -1073741811;
    WdLogSingleEntry2(3LL, v4, -1073741811LL);
    WdLogGlobalForLineNumber = 119;
LABEL_55:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v58);
LABEL_56:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v51);
    goto LABEL_57;
  }
  v7 = BroadcastContextCount + 1;
  Pool2 = 0LL;
  v52 = 0LL;
  v54 = 0;
  if ( (unsigned int)v7 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v7 < 8 )
      goto LABEL_17;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v7, 1265072196LL);
    v52 = Pool2;
  }
  else
  {
    Pool2 = v53;
    v52 = v53;
    if ( (_DWORD)v7 )
    {
      memset(v53, 0, 8LL * (unsigned int)v7);
      Pool2 = v52;
    }
  }
  v54 = v7;
LABEL_17:
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 126;
LABEL_89:
    if ( v52 != v53 && v52 )
      ExFreePoolWithTag(v52, 0);
    v52 = 0LL;
    v54 = 0;
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v58);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v51);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit);
    return 3221225495LL;
  }
  *Pool2 = v4;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v65, (struct _KTHREAD **)Current);
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= v71.BroadcastContextCount )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v65);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        (__int64)v66,
        v52,
        v54,
        v10,
        1);
      if ( v67 )
      {
        if ( v66[0] )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 195;
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v66);
          goto LABEL_136;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 190;
      }
      else
      {
        v61 = *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 16LL) + 16LL);
        v62 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v60);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v72, *((_QWORD *)v4 + 2), 0, v11, 0);
        v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v72, 0LL);
        if ( v12 < 0 )
        {
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v72);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v60);
          goto LABEL_52;
        }
        v13 = *((_QWORD *)v4 + 6);
        if ( v71.CommandOffset >= v13 )
        {
          v12 = -1073741811;
          WdLogSingleEntry4(3LL, v4, v71.CommandOffset, v13, -1073741811LL);
          WdLogGlobalForLineNumber = 216;
          goto LABEL_46;
        }
        if ( v71.CommandLength + (unsigned __int64)v71.CommandOffset > v13 )
        {
          v12 = -1073741811;
          WdLogSingleEntry4(3LL, v4, v71.CommandLength, v13, -1073741811LL);
          WdLogGlobalForLineNumber = 225;
          goto LABEL_46;
        }
        AllocationCount = v71.AllocationCount;
        if ( v71.AllocationCount > *((_DWORD *)v4 + 18) )
        {
          v12 = -1073741811;
          WdLogSingleEntry4(3LL, v4, v71.AllocationCount, *((unsigned int *)v4 + 18), -1073741811LL);
          WdLogGlobalForLineNumber = 233;
          goto LABEL_46;
        }
        if ( v71.PatchLocationCount > *((_DWORD *)v4 + 26) )
        {
          v12 = -1073741811;
          WdLogSingleEntry4(3LL, v4, v71.PatchLocationCount, *((unsigned int *)v4 + 26), -1073741811LL);
          WdLogGlobalForLineNumber = 241;
          goto LABEL_46;
        }
        v12 = 0;
        Flags = (char)v71.Flags;
        if ( !v71.CommandLength )
        {
LABEL_43:
          if ( (Flags & 1) != 0 || (Flags & 2) != 0 || (Flags & 4) != 0 )
          {
            NewCommandBufferSize = v71.NewCommandBufferSize;
            if ( (Flags & 1) == 0 )
              NewCommandBufferSize = *((_DWORD *)v4 + 50);
            NewAllocationListSize = v71.NewAllocationListSize;
            if ( (Flags & 2) == 0 )
              NewAllocationListSize = *((_DWORD *)v4 + 53);
            NewPatchLocationListSize = v71.NewPatchLocationListSize;
            if ( (Flags & 4) == 0 )
              NewPatchLocationListSize = *((_DWORD *)v4 + 54);
            v30 = *((_DWORD *)v4 + 50);
            if ( NewCommandBufferSize < v30 )
              goto LABEL_85;
            if ( NewAllocationListSize >= *((_DWORD *)v4 + 53) && NewPatchLocationListSize >= *((_DWORD *)v4 + 54) )
            {
              if ( DXGADAPTER::IsCoreResourceSharedOwner(v73) )
                COREDEVICEACCESS::Release((COREDEVICEACCESS *)v72);
              DXGCONTEXT::ResizeUserModeBuffers(
                v4,
                *((struct VIDMM_DMA_POOL **)v4 + 29),
                NewCommandBufferSize,
                NewAllocationListSize,
                NewPatchLocationListSize);
              v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v72, 0LL);
              goto LABEL_46;
            }
            if ( NewCommandBufferSize < v30 )
            {
LABEL_85:
              WdLogSingleEntry3(3LL, v4, NewCommandBufferSize, *((unsigned int *)v4 + 50));
              WdLogGlobalForLineNumber = 366;
            }
            v31 = *((_DWORD *)v4 + 53);
            if ( NewAllocationListSize < v31 )
            {
              WdLogSingleEntry3(3LL, v4, NewAllocationListSize, v31);
              WdLogGlobalForLineNumber = 373;
            }
            v32 = *((_DWORD *)v4 + 54);
            if ( NewPatchLocationListSize < v32 )
            {
              WdLogSingleEntry3(3LL, v4, NewPatchLocationListSize, v32);
              WdLogGlobalForLineNumber = 380;
            }
          }
LABEL_46:
          v19 = 0;
          v63[0] = 0LL;
          v20 = 0;
          v56 = 0;
          v21 = 0;
          v57 = 0;
          v22 = 0;
          if ( v12 != -1073741130 )
          {
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)v72);
            if ( !*((_BYTE *)v4 + 430) )
              (*(void (__fastcall **)(_QWORD, _QWORD *, int *, int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 16LL)
                                                                                             + 760LL)
                                                                                 + 8LL)
                                                                     + 464LL))(
                *((_QWORD *)v4 + 29),
                v63,
                &v56,
                &v57);
            v22 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 16LL)
                                                                            + 736LL)
                                                                + 8LL)
                                                    + 472LL))(*((_QWORD *)v4 + 32));
            v19 = v63[0];
            v20 = v56;
            v21 = v57;
          }
          v23 = v64;
          v64[3] = *((_QWORD *)v4 + 7);
          *((_DWORD *)v23 + 8) = v19;
          v23[5] = *((_QWORD *)v4 + 11);
          *((_DWORD *)v23 + 12) = v20;
          v23[7] = *((_QWORD *)v4 + 15);
          *((_DWORD *)v23 + 16) = v21;
          *((_DWORD *)v23 + 85) = v22;
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v72);
          if ( v62 )
          {
            v62 = 0;
            v24 = (char *)v61 + 136;
            _InterlockedDecrement((volatile signed __int32 *)v61 + 38);
            ExReleasePushLockSharedEx(v24, 0LL);
            KeLeaveCriticalRegion();
            DXGADAPTER::ReleaseReference(v61);
          }
LABEL_52:
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v66);
LABEL_53:
          if ( v52 != v53 && v52 )
            ExFreePoolWithTag(v52, 0);
          v52 = 0LL;
          v54 = 0;
          goto LABEL_55;
        }
        pNewAllocationList = v71.pNewAllocationList;
        if ( (*(_BYTE *)&v71.Flags & 0x20) == 0 )
          pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)*((_QWORD *)v4 + 11);
        IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 16LL) + 16LL));
        v55 = AllocationCount;
        P = 0LL;
        v70 = 0;
        v18 = 0LL;
        if ( !IsDxgmms2 )
        {
LABEL_30:
          if ( v12 >= 0 )
          {
            v12 = DXGCONTEXT::Render(
                    v4,
                    &v71,
                    (struct COREDEVICEACCESS *)v72,
                    (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v60,
                    (struct DXGCONTEXT **)v52,
                    v18,
                    0LL);
            Flags = (char)v71.Flags;
          }
          if ( IsDxgmms2 && (_DWORD)AllocationCount )
          {
            do
            {
              if ( *v18 )
                ExReleaseRundownProtection((PEX_RUNDOWN_REF)*v18 + 11);
              ++v18;
              --AllocationCount;
            }
            while ( AllocationCount );
            Flags = (char)v71.Flags;
          }
          if ( v12 >= 0 && (Flags & 0x10) != 0 )
          {
            v12 = DXGCONTEXT::HandleVistaBltStub(
                    v4,
                    v71.PresentHistoryToken,
                    1,
                    (struct COREDEVICEACCESS *)v72,
                    (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v60,
                    v71.BroadcastContextCount,
                    v71.BroadcastContext,
                    (struct DXGCONTEXT **)v52);
            Flags = (char)v71.Flags;
          }
          if ( P != v69 && P )
          {
            ExFreePoolWithTag(P, 0);
            Flags = (char)v71.Flags;
          }
          P = 0LL;
          v70 = 0;
          if ( v12 < 0 )
            goto LABEL_46;
          goto LABEL_43;
        }
        v33 = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                         &P,
                                         (unsigned int)AllocationCount);
        v18 = v33;
        if ( v33 )
        {
          v12 = DxgkReferenceAllocationList(&v55, pNewAllocationList, v33, *((struct DXGDEVICE **)v4 + 2));
          Flags = (char)v71.Flags;
          AllocationCount = v55;
          goto LABEL_30;
        }
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 278;
        if ( P != v69 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v70 = 0;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v72);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v60);
      }
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v66);
      goto LABEL_89;
    }
    v39 = v9;
    v40 = (v71.BroadcastContext[v9] >> 6) & 0xFFFFFF;
    if ( v40 < *((_DWORD *)Current + 74) )
    {
      v41 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v40 + 8);
      if ( ((v71.BroadcastContext[v9] >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * v40 + 8) & 0x60)
        && (v41 & 0x2000) == 0
        && (v41 & 0x1F) != 0 )
      {
        v43 = 2LL * v40;
        v44 = *((_QWORD *)Current + 35);
        if ( (*(_BYTE *)(v44 + 8 * v43 + 8) & 0x1F) == 7 )
        {
          v45 = *(_QWORD *)(v44 + 8 * v43);
          goto LABEL_125;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v45 = 0LL;
LABEL_125:
    *((_QWORD *)v52 + ++v9) = v45;
    v46 = *((_QWORD *)v52 + v9);
    if ( !v46 || (v47 = *(_DWORD *)(v46 + 392), (v47 & 8) != 0) || *(_QWORD *)(v46 + 16) != *((_QWORD *)v4 + 2) )
    {
      v12 = -1073741811;
      WdLogSingleEntry4(2LL, v4, v71.BroadcastContext[v39], v39, -1073741811LL);
      WdLogGlobalForLineNumber = 162;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v4,
        v71.BroadcastContext[v39],
        v39,
        -1073741811LL,
        0LL);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v65);
      goto LABEL_53;
    }
    if ( (v47 & 0x10) != 0 )
      break;
    if ( *(_BYTE *)(v46 + 430) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 178;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"BroadcastContextArray.Get()[i + 1]->UsesGpuVa() == FALSE",
        178LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 169;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"DXGCONTEXT 0x%p DxgkRender is not supported with hardware scheduling.",
    *((_QWORD *)v52 + v9),
    0LL,
    0LL,
    0LL,
    0LL);
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v65);
LABEL_136:
  if ( v52 != v53 && v52 )
    ExFreePoolWithTag(v52, 0);
  v52 = 0LL;
  v54 = 0;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v58);
LABEL_95:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v51);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
  if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, (__int64)&EventProfilerExit);
  return (unsigned int)-1073741811;
}
