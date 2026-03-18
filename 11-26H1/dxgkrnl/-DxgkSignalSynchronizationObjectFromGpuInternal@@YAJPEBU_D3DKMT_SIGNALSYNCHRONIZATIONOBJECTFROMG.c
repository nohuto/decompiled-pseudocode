/*
 * XREFs of ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H_N@Z @ 0x1403893AC
 * Callers:
 *     ?DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@Z @ 0x140389370 (-DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@.c)
 *     DxgkSignalSynchronizationObjectFromGpu @ 0x140389390 (DxgkSignalSynchronizationObjectFromGpu.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x140302D00 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x14034DC40 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuInternal(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *Src,
        int a2)
{
  struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rbx
  __int64 CurrentProcess; // rax
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // rcx
  _BYTE *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-B0h]
  char v19; // [rsp+60h] [rbp-A8h]
  D3DKMT_HANDLE hContext; // [rsp+68h] [rbp-A0h] BYREF
  struct _KTHREAD **v21; // [rsp+70h] [rbp-98h]
  void **v22; // [rsp+78h] [rbp-90h]
  void *v23[10]; // [rsp+80h] [rbp-88h] BYREF
  PVOID P; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v25[16]; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v26; // [rsp+E8h] [rbp-20h]

  v3 = Src;
  v17 = -1;
  v18 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2190;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2190);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  v21 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v5);
    v8 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 6216;
    v10 = PsGetCurrentProcess(v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v10,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_28:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v8;
  }
  P = 0LL;
  v26 = 0;
  memset(v23, 0, sizeof(v23));
  if ( a2 )
  {
    RtlCopyFromUser(v23, v3, 0x50uLL);
    if ( !HIDWORD(v23[0]) )
    {
      WdLogSingleEntry2(2LL, LODWORD(v23[0]), -1073741811LL);
      WdLogGlobalForLineNumber = 6234;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"hContext 0x%I64x can't signal zero object, returning 0x%I64x",
        LODWORD(v23[0]),
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      if ( P != v25 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v26 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
      if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
      return 3221225485LL;
    }
    PagedPoolZeroedArray<unsigned int,4>::AllocateElements((__int64)&P, HIDWORD(v23[0]));
    if ( !P )
    {
      P = 0LL;
      v26 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
      if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
      return 3221225495LL;
    }
    RtlCopyFromUser(P, v23[1], 4LL * v26);
    v23[1] = P;
    v3 = (struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *)v23;
    v22 = v23;
  }
  else if ( !v3->ObjectCount )
  {
    v8 = -1073741811;
    WdLogSingleEntry2(2LL, v3->hContext, -1073741811LL);
    WdLogGlobalForLineNumber = 6270;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"hContext 0x%I64x can't signal zero object, returning 0x%I64x",
      v3->hContext,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    v14 = P;
    goto LABEL_24;
  }
  hContext = v3->hContext;
  v8 = SignalSynchronizationObjectInternal(
         v3->ObjectCount,
         (unsigned int *)v3->ObjectHandleArray,
         0,
         1u,
         &hContext,
         (void *)v3->MonitoredFenceValueArray,
         0LL,
         0LL,
         Current,
         (unsigned int)(a2 != 0) + 4);
  v14 = P;
  if ( v8 < 0 )
  {
LABEL_24:
    if ( v14 != v25 && v14 )
      ExFreePoolWithTag(v14, 0);
    P = 0LL;
    v26 = 0;
    goto LABEL_28;
  }
  if ( P != v25 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v26 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
  return 0LL;
}
