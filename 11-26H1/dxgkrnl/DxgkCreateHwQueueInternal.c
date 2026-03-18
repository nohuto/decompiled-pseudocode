/*
 * XREFs of DxgkCreateHwQueueInternal @ 0x14034EA38
 * Callers:
 *     ?VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14034E7F0 (-VmBusCreateHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateHwQueue @ 0x14034EA20 (DxgkCreateHwQueue.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x14034E770 (-AllocateElements@-$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x14034F208 (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 */

__int64 __fastcall DxgkCreateHwQueueInternal(struct _D3DKMT_CREATEHWQUEUE *Src, char a2)
{
  PVOID v4; // r15
  struct _D3DKMT_CREATEHWQUEUE *v5; // r14
  __int64 pPrivateDriverData; // rcx
  unsigned int *p_PrivateDriverDataSize; // rax
  __int64 Elements; // rax
  size_t v9; // r8
  __int64 v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct _KTHREAD **Current; // r8
  struct _D3DDDI_CREATEHWQUEUEFLAGS::$A253BDBBB239395E9D9C573E92799421::$8C19F7357F70E64AC3CA26DE294FEA6E Value; // ecx
  DXGCONTEXT *v16; // r13
  struct DXGDEVICE *v17; // rbx
  __int64 v18; // r9
  int v19; // ebx
  struct DXGHWQUEUE *v20; // rdx
  UINT PrivateDriverDataSize; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 CurrentProcess; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // [rsp+50h] [rbp-178h] BYREF
  __int64 v28; // [rsp+58h] [rbp-170h]
  char v29; // [rsp+60h] [rbp-168h]
  struct DXGCONTEXT *v30; // [rsp+68h] [rbp-160h] BYREF
  struct _D3DKMT_CREATEHWQUEUE *v31; // [rsp+70h] [rbp-158h]
  PVOID v32; // [rsp+78h] [rbp-150h]
  struct DXGHWQUEUE *v33; // [rsp+80h] [rbp-148h] BYREF
  _BYTE v34[16]; // [rsp+88h] [rbp-140h] BYREF
  void *v35; // [rsp+98h] [rbp-130h]
  _BYTE v36[16]; // [rsp+A0h] [rbp-128h] BYREF
  _OWORD v37[3]; // [rsp+B0h] [rbp-118h] BYREF
  PVOID P; // [rsp+E0h] [rbp-E8h] BYREF
  _BYTE v39[16]; // [rsp+E8h] [rbp-E0h] BYREF
  int v40; // [rsp+F8h] [rbp-D0h]
  _BYTE v41[160]; // [rsp+100h] [rbp-C8h] BYREF

  v35 = Src;
  v27 = -1;
  v28 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2153;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 2153);
  memset(v37, 0, sizeof(v37));
  v31 = 0LL;
  P = 0LL;
  v40 = 0;
  v4 = 0LL;
  v32 = 0LL;
  if ( a2 )
  {
    RtlCopyFromUser(v37, Src, 0x30uLL);
    v5 = (struct _D3DKMT_CREATEHWQUEUE *)v37;
    v31 = (struct _D3DKMT_CREATEHWQUEUE *)v37;
  }
  else
  {
    v5 = Src;
    v31 = Src;
  }
  pPrivateDriverData = (__int64)v5->pPrivateDriverData;
  p_PrivateDriverDataSize = &v5->PrivateDriverDataSize;
  if ( !pPrivateDriverData )
  {
    if ( !*p_PrivateDriverDataSize )
      goto LABEL_9;
LABEL_13:
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1391;
    if ( P != v39 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v40 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  if ( !*p_PrivateDriverDataSize )
    goto LABEL_13;
LABEL_9:
  if ( !*p_PrivateDriverDataSize )
    goto LABEL_31;
  if ( !a2 )
  {
    v4 = v5->pPrivateDriverData;
    v32 = v4;
LABEL_31:
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(pPrivateDriverData);
    if ( !Current )
    {
      CurrentProcess = PsGetCurrentProcess(v13);
      WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
      WdLogGlobalForLineNumber = 1435;
      v26 = PsGetCurrentProcess(v25);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"unexpected process 0x%I64x, returning 0x%I64x",
        v26,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_51;
    }
    Value = (struct _D3DDDI_CREATEHWQUEUEFLAGS::$A253BDBBB239395E9D9C573E92799421::$8C19F7357F70E64AC3CA26DE294FEA6E)v5->Flags.Value;
    if ( (*(_BYTE *)&Value & 8) != 0 && !g_OSTestSigningEnabled )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1442;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"NoKmdAccess can be used only with testsigning",
        1442LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_51:
      if ( P != v39 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v40 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
      return 3221225485LL;
    }
    if ( (*(_BYTE *)&Value & 0x10) == 0 )
    {
      v30 = 0LL;
      DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v34, v5->hHwContext, Current, &v30, 0, 1);
      v16 = v30;
      if ( v30 )
      {
        if ( (*((_DWORD *)v30 + 98) & 0x10) != 0 )
        {
          v17 = (struct DXGDEVICE *)*((_QWORD *)v30 + 2);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36, v17);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, (__int64)v17, 0, v18, 0);
          v19 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v41, 0LL);
          if ( v19 >= 0 )
          {
            v33 = 0LL;
            v19 = DXGCONTEXT::CreateHwQueue(v16, v5, v4, &v33);
            if ( v19 >= 0 )
            {
              v20 = v33;
              if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v33 + 2) + 16LL) + 16LL) + 16LL) + 209LL) )
              {
                v5->hHwQueueProgressFence = *(_DWORD *)(*((_QWORD *)v33 + 7) + 40LL);
                v5->HwQueueProgressFenceCPUVirtualAddress = *(void **)(*((_QWORD *)v20 + 7) + 56LL);
                v5->HwQueueProgressFenceGPUVirtualAddress = *(_QWORD *)(*((_QWORD *)v20 + 7) + 48LL);
              }
              v5->hHwQueue = *((_DWORD *)v20 + 6);
              if ( a2 )
              {
                RtlCopyToUser(v35, v5, 0x30uLL);
                PrivateDriverDataSize = v5->PrivateDriverDataSize;
                if ( PrivateDriverDataSize )
                  RtlCopyToUser(v5->pPrivateDriverData, v4, PrivateDriverDataSize);
              }
            }
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v34);
          goto LABEL_44;
        }
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1468;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot create HW queue on context (0x%x) that doesn't support hardware queues.",
          v5->hHwContext,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        WdLogSingleEntry2(2LL, v5->hHwContext, -1073741811LL);
        WdLogGlobalForLineNumber = 1460;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid hHwContext (0x%I64x) specified, returning 0x%I64x",
          v5->hHwContext,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
      }
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v34);
      goto LABEL_51;
    }
    v19 = -1073741637;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1449;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"UserModeSubmission flag is deprecated, cannot create user mode submission HWQueue using DxgkCreateHwQueue"
                ". Returning 0x%I64x.",
      -1073741637LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_44:
    if ( P != v39 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v40 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v19;
  }
  Elements = PagedPoolZeroedArray<unsigned char,16>::AllocateElements((__int64 *)&P, *p_PrivateDriverDataSize);
  v9 = v5->PrivateDriverDataSize;
  if ( Elements )
  {
    RtlCopyFromUser(P, v5->pPrivateDriverData, v9);
    v4 = P;
    v32 = P;
    goto LABEL_31;
  }
  WdLogSingleEntry3(3LL, v5->hHwContext, v9, -1073741801LL);
  WdLogGlobalForLineNumber = 1405;
  if ( P != v39 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v40 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
  return 3221225495LL;
}
