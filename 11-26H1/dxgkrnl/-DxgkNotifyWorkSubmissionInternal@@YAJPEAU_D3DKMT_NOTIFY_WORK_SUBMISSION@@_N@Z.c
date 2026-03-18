/*
 * XREFs of ?DxgkNotifyWorkSubmissionInternal@@YAJPEAU_D3DKMT_NOTIFY_WORK_SUBMISSION@@_N@Z @ 0x1401E265C
 * Callers:
 *     NtDxgkNotifyWorkSubmission @ 0x1401E4250 (NtDxgkNotifyWorkSubmission.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14000FD00 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x140017698 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlWriteUCharToUser @ 0x1401967C8 (RtlWriteUCharToUser.c)
 *     ?NotifyWorkSubmission@DXGHWQUEUE@@QEAAJPEAE@Z @ 0x1401E3F28 (-NotifyWorkSubmission@DXGHWQUEUE@@QEAAJPEAE@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNotifyWorkSubmissionInternal(struct _D3DKMT_NOTIFY_WORK_SUBMISSION *Src)
{
  struct _KTHREAD **Current; // rax
  __int64 v3; // rcx
  __int64 CurrentProcess; // rax
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  const wchar_t *v8; // r9
  struct DXGHWQUEUE *v9; // rdi
  const wchar_t *v10; // r9
  __int64 v11; // r9
  int v12; // r14d
  __int64 v13; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // [rsp+50h] [rbp-168h] BYREF
  __int64 v18; // [rsp+58h] [rbp-160h]
  char v19; // [rsp+60h] [rbp-158h]
  _BYTE v20[16]; // [rsp+68h] [rbp-150h] BYREF
  struct DXGHWQUEUE *v21; // [rsp+78h] [rbp-140h] BYREF
  _BYTE v22[32]; // [rsp+80h] [rbp-138h] BYREF
  unsigned int v23[20]; // [rsp+A0h] [rbp-118h] BYREF
  _BYTE v24[160]; // [rsp+F0h] [rbp-C8h] BYREF

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2223;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2223);
  memset(v23, 0, 0x48uLL);
  RtlCopyFromUser(v23, Src, 0x48uLL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v3);
    v5 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 4313;
    v7 = PsGetCurrentProcess(v6);
    v8 = L"unexpected process 0x%I64x, returning 0x%I64x";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, v7, -1073741811LL, 0LL, 0LL, 0LL);
LABEL_23:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v5;
  }
  if ( v23[1] )
  {
    v5 = -1073741811;
    WdLogSingleEntry2(2LL, v23[1], -1073741811LL);
    WdLogGlobalForLineNumber = 4321;
    v7 = v23[1];
    v8 = L"Reserved bits in Flags (0x%I64x) should not be set, returning 0x%I64x";
    goto LABEL_7;
  }
  v21 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v20, v23[0], Current, &v21, 0, 1);
  v9 = v21;
  if ( !v21 )
  {
    v5 = -1073741811;
    WdLogSingleEntry2(2LL, v23[0], -1073741811LL);
    WdLogGlobalForLineNumber = 4332;
    v10 = L"Invalid hHwQueue (0x%I64x) specified, returning 0x%I64x";
LABEL_12:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v23[0], -1073741811LL, 0LL, 0LL, 0LL);
LABEL_22:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v20);
    goto LABEL_23;
  }
  if ( !*((_BYTE *)v21 + 148) )
  {
    v5 = -1073741811;
    WdLogSingleEntry2(2LL, v23[0], -1073741811LL);
    WdLogGlobalForLineNumber = 4342;
    v10 = L"hHwQueue (0x%I64x) does not support user mode submission, returning 0x%I64x";
    goto LABEL_12;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v22,
    (struct _KTHREAD **)(*((_QWORD *)v21 + 2) + 440LL));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v24, *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL), 0, v11, 0);
  v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v24, 0LL);
  if ( v12 >= 0 )
  {
    v15 = *((_QWORD *)v9 + 19);
    if ( (unsigned int)**(_QWORD **)(v15 + 136) == 1 )
    {
      v5 = DXGHWQUEUE::NotifyWorkSubmission(v9, (unsigned __int8 *)&v23[2]);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v22);
      if ( v5 >= 0 )
        RtlWriteUCharToUser((_BYTE *)Src + 8, v23[2]);
    }
    else
    {
      v5 = -1073741811;
      WdLogSingleEntry2(3LL, v15, -1073741811LL);
      WdLogGlobalForLineNumber = 4364;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v22);
    }
    goto LABEL_22;
  }
  WdLogSingleEntry2(2LL, *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL), -1073741811LL);
  WdLogGlobalForLineNumber = 4356;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"DXGDEVICE:0x%I64x, Failed to acquire CoreDeviceAccess, returning 0x%I64x",
    *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL),
    -1073741811LL,
    0LL,
    0LL,
    0LL);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v22);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v20);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
  return (unsigned int)v12;
}
