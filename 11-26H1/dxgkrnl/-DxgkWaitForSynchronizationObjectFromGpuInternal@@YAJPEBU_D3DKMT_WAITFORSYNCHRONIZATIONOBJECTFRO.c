/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x140314E64
 * Callers:
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140314910 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x140314E1C (DxgkKernelModeWaitForSynchronizationObjectFromGpu.c)
 *     DxgkWaitForSynchronizationObjectFromGpu @ 0x140314E40 (DxgkWaitForSynchronizationObjectFromGpu.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1403074C0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x14034DC40 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromGpuInternal(
        struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *Src,
        bool a2,
        bool a3,
        unsigned __int64 *a4,
        bool a5)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 CurrentProcess; // rax
  int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v18; // rcx
  D3DKMT_HANDLE *v19; // rax
  D3DKMT_HANDLE *ObjectHandleArray; // rdi
  __int64 v21; // rcx
  unsigned __int64 *v22; // r8
  __int64 v23; // rcx
  int v24; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-D0h]
  char v26; // [rsp+70h] [rbp-C8h]
  struct DXGPROCESS *v27; // [rsp+78h] [rbp-C0h]
  void *Srca[10]; // [rsp+80h] [rbp-B8h] BYREF
  PVOID P; // [rsp+D0h] [rbp-68h] BYREF
  _BYTE v30[16]; // [rsp+D8h] [rbp-60h] BYREF
  unsigned int v31; // [rsp+E8h] [rbp-50h]

  v24 = -1;
  v25 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 2043);
  Current = DXGPROCESS::GetCurrent(v9);
  v27 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v10);
    v13 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 1824;
    v15 = PsGetCurrentProcess(v14);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v15,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v13;
  }
  P = 0LL;
  v31 = 0;
  memset(Srca, 0, sizeof(Srca));
  if ( a2 )
  {
    RtlCopyFromUser(Srca, Src, 0x50uLL);
    if ( !HIDWORD(Srca[0]) )
    {
      WdLogSingleEntry2(2LL, LODWORD(Srca[0]), -1073741811LL);
      WdLogGlobalForLineNumber = 1841;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"hContext 0x%I64x can't wait on zero object, returning 0x%I64x",
        LODWORD(Srca[0]),
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      if ( P != v30 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v31 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
      if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
      return 3221225485LL;
    }
    v19 = (D3DKMT_HANDLE *)PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&P);
    ObjectHandleArray = v19;
    if ( !v19 )
    {
      if ( P != v30 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v31 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
      if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
      return 3221225495LL;
    }
    RtlCopyFromUser(v19, Srca[1], 4LL * v31);
    Srca[1] = ObjectHandleArray;
  }
  else
  {
    *(_OWORD *)Srca = *(_OWORD *)&Src->hContext;
    *(_OWORD *)&Srca[2] = *(_OWORD *)&Src->MonitoredFenceValueArray;
    *(_OWORD *)&Srca[4] = *(_OWORD *)&Src->Reserved[2];
    *(_OWORD *)&Srca[6] = *(_OWORD *)&Src->Reserved[4];
    *(_OWORD *)&Srca[8] = *(_OWORD *)&Src->Reserved[6];
    ObjectHandleArray = (D3DKMT_HANDLE *)Src->ObjectHandleArray;
  }
  v22 = (unsigned __int64 *)Srca[2];
  if ( a4 )
    v22 = a4;
  v13 = WaitForSynchronizationObjectFromGpu(
          HIDWORD(Srca[0]),
          ObjectHandleArray,
          v22,
          (unsigned __int64)Srca[2],
          (unsigned int)Srca[0],
          Current,
          a2,
          0,
          a3,
          a5,
          0);
  if ( v13 < 0 )
  {
    if ( P != v30 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v31 = 0;
    goto LABEL_7;
  }
  if ( P != v30 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v31 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
  return 0LL;
}
