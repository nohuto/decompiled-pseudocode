/*
 * XREFs of ?DxgkSignalSynchronizationObjectFromGpu2Impl@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2@@PEAX@Z @ 0x14034C578
 * Callers:
 *     DxgkSignalSynchronizationObjectFromGpu2 @ 0x14034C560 (DxgkSignalSynchronizationObjectFromGpu2.c)
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
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x140306B70 (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x14034DC40 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpu2Impl(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2 *Src,
        void *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rdi
  __int64 CurrentProcess; // rax
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  void *v12; // rax
  void *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *Elements; // rax
  void *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // [rsp+50h] [rbp-108h] BYREF
  __int64 v21; // [rsp+58h] [rbp-100h]
  char v22; // [rsp+60h] [rbp-F8h]
  struct _KTHREAD **v23; // [rsp+68h] [rbp-F0h]
  void *v24[12]; // [rsp+70h] [rbp-E8h] BYREF
  PVOID v25; // [rsp+D0h] [rbp-88h] BYREF
  _BYTE v26[16]; // [rsp+D8h] [rbp-80h] BYREF
  unsigned int v27; // [rsp+E8h] [rbp-70h]
  PVOID P; // [rsp+F0h] [rbp-68h] BYREF
  _BYTE v29[64]; // [rsp+F8h] [rbp-60h] BYREF
  unsigned int v30; // [rsp+138h] [rbp-20h]

  v20 = -1;
  v21 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2191;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2191);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v3);
  v23 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v4);
    v7 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 1206;
    v9 = PsGetCurrentProcess(v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v9,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v7;
  }
  v25 = 0LL;
  v27 = 0;
  P = 0LL;
  v30 = 0;
  memset(v24, 0, sizeof(v24));
  RtlCopyFromUser(v24, Src, 0x60uLL);
  if ( LODWORD(v24[0]) )
  {
    v12 = (void *)PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v25);
    v13 = v12;
    if ( !v12 )
    {
      if ( P != v29 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v30 = 0;
      if ( v25 != v26 && v25 )
        ExFreePoolWithTag(v25, 0);
      v25 = 0LL;
      v27 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
      if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
      return 3221225495LL;
    }
    RtlCopyFromUser(v12, v24[1], 4LL * v27);
    v24[1] = v13;
  }
  if ( HIDWORD(v24[2]) )
  {
    Elements = (void *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements((__int64)&P, HIDWORD(v24[2]));
    v17 = Elements;
    if ( Elements )
    {
      RtlCopyFromUser(Elements, v24[3], 4LL * v30);
      v24[3] = v17;
      v7 = SignalSynchronizationObjectInternal(
             (unsigned int)v24[0],
             (unsigned int *)v24[1],
             (unsigned int)v24[2],
             HIDWORD(v24[2]),
             (unsigned int *)v17,
             v24[4],
             (unsigned __int64)v24[4],
             &v24[4],
             Current,
             1u);
      if ( v7 < 0 )
      {
        if ( P != v29 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v30 = 0;
        if ( v25 != v26 && v25 )
          ExFreePoolWithTag(v25, 0);
        v25 = 0LL;
        v27 = 0;
        goto LABEL_7;
      }
      if ( P != v29 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v30 = 0;
      if ( v25 != v26 && v25 )
        ExFreePoolWithTag(v25, 0);
      v25 = 0LL;
      v27 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
      if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
      return 0LL;
    }
    else
    {
      if ( P != v29 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v30 = 0;
      if ( v25 != v26 && v25 )
        ExFreePoolWithTag(v25, 0);
      v25 = 0LL;
      v27 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
      if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
      return 3221225495LL;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1237;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"There should be at least one broadcast context passed to signal.",
      1237LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v29 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v30 = 0;
    if ( v25 != v26 && v25 )
      ExFreePoolWithTag(v25, 0);
    v25 = 0LL;
    v27 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
    return -1073741811LL;
  }
}
