/*
 * XREFs of ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x140377428
 * Callers:
 *     ?DxgkCddSubmitSignalSyncObjectsToHwQueue@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z @ 0x1403773F0 (-DxgkCddSubmitSignalSyncObjectsToHwQueue@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z.c)
 *     DxgkSubmitSignalSyncObjectsToHwQueue @ 0x140377410 (DxgkSubmitSignalSyncObjectsToHwQueue.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x140377CC8 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 */

__int64 __fastcall DxgkSubmitSignalSyncObjectsToHwQueueInternal(
        struct _D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE *Src,
        bool a2)
{
  void **v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v7; // rdi
  PVOID v8; // rsi
  __int64 v9; // rdi
  PVOID v10; // rsi
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int64 CurrentProcess; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-F0h]
  char v24; // [rsp+60h] [rbp-E8h]
  void *v25[2]; // [rsp+68h] [rbp-E0h] BYREF
  void *Srca[2]; // [rsp+78h] [rbp-D0h]
  __int64 v27; // [rsp+88h] [rbp-C0h]
  struct DXGPROCESS *v28; // [rsp+90h] [rbp-B8h]
  void **v29; // [rsp+98h] [rbp-B0h]
  PVOID P; // [rsp+A0h] [rbp-A8h]
  _BYTE v31[16]; // [rsp+A8h] [rbp-A0h] BYREF
  int v32; // [rsp+B8h] [rbp-90h]
  PVOID Pool2; // [rsp+C0h] [rbp-88h]
  _BYTE v34[64]; // [rsp+C8h] [rbp-80h] BYREF
  int v35; // [rsp+108h] [rbp-40h]

  v3 = (void **)Src;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2161;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 2161);
  Current = DXGPROCESS::GetCurrent(v4);
  v28 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v5);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 2683;
    v20 = PsGetCurrentProcess(v19);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v20,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  P = 0LL;
  v32 = 0;
  Pool2 = 0LL;
  v35 = 0;
  *(_OWORD *)v25 = 0LL;
  *(_OWORD *)Srca = 0LL;
  v27 = 0LL;
  if ( !a2 )
  {
LABEL_60:
    v16 = SubmitSignalSyncObjectsToHwQueue(
            *((_DWORD *)v3 + 4),
            (const unsigned int *)v3[3],
            *(struct _D3DDDICB_SIGNALFLAGS *)v3,
            *((_DWORD *)v3 + 1),
            (const unsigned int *)v3[1],
            (const unsigned __int64 *)v3[4],
            Current,
            a2,
            0);
    if ( Pool2 != v34 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v35 = 0;
    if ( P != v31 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v32 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
    return v16;
  }
  RtlCopyFromUser(v25, v3, 0x28uLL);
  v7 = LODWORD(Srca[0]);
  if ( !LODWORD(Srca[0]) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2704;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"There should be at least one sync object passed to signal.",
      2704LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( Pool2 != v34 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = 0LL;
    v35 = 0;
    if ( P != v31 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v32 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  if ( LODWORD(Srca[0]) > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / LODWORD(Srca[0]) < 4 )
    {
LABEL_39:
      if ( Pool2 != v34 && Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = 0LL;
      v35 = 0;
      if ( P != v31 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v32 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
      if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
      return 3221225495LL;
    }
    P = (PVOID)ExAllocatePool2(256LL, 4LL * LODWORD(Srca[0]), 1265072196LL);
  }
  else
  {
    P = v31;
    memset(v31, 0, 4LL * LODWORD(Srca[0]));
  }
  v32 = v7;
  v8 = P;
  if ( !P )
    goto LABEL_39;
  RtlCopyFromUser(P, Srca[1], 4 * v7);
  Srca[1] = v8;
  v9 = HIDWORD(v25[0]);
  if ( HIDWORD(v25[0]) )
  {
    if ( HIDWORD(v25[0]) > 0x10 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(v25[0]) < 4 )
      {
LABEL_15:
        if ( Pool2 != v34 && Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        Pool2 = 0LL;
        v35 = 0;
        if ( P != v31 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v32 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
        if ( v24 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
        }
        return 3221225495LL;
      }
      Pool2 = (PVOID)ExAllocatePool2(256LL, 4LL * HIDWORD(v25[0]), 1265072196LL);
    }
    else
    {
      Pool2 = v34;
      memset(v34, 0, 4LL * HIDWORD(v25[0]));
    }
    v35 = v9;
    v10 = Pool2;
    if ( !Pool2 )
      goto LABEL_15;
    RtlCopyFromUser(Pool2, v25[1], 4 * v9);
    v25[1] = v10;
    v3 = v25;
    v29 = v25;
    goto LABEL_60;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 2721;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"There should be at least one broadcast hardware queue passed to signal.",
    2721LL,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( Pool2 != v34 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  Pool2 = 0LL;
  v35 = 0;
  if ( P != v31 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v32 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
  return 3221225485LL;
}
