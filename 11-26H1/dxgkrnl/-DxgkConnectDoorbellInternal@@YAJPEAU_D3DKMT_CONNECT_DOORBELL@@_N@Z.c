/*
 * XREFs of ?DxgkConnectDoorbellInternal@@YAJPEAU_D3DKMT_CONNECT_DOORBELL@@_N@Z @ 0x1401E19A0
 * Callers:
 *     NtDxgkConnectDoorbell @ 0x1401E4130 (NtDxgkConnectDoorbell.c)
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
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?Connect@DXGDOORBELL@@QEAAJXZ @ 0x1401E0E40 (-Connect@DXGDOORBELL@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkConnectDoorbellInternal(struct _D3DKMT_CONNECT_DOORBELL *a1)
{
  struct _KTHREAD **Current; // rax
  __int64 v3; // rcx
  __int64 CurrentProcess; // rax
  int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rax
  const wchar_t *v8; // r9
  struct DXGHWQUEUE *v9; // r14
  const wchar_t *v10; // r9
  __int64 v11; // r9
  int v12; // r15d
  __int64 v13; // rcx
  __int64 v15; // r14
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // [rsp+50h] [rbp-178h] BYREF
  __int64 v21; // [rsp+58h] [rbp-170h]
  char v22; // [rsp+60h] [rbp-168h]
  struct DXGHWQUEUE *v23; // [rsp+68h] [rbp-160h] BYREF
  _BYTE v24[16]; // [rsp+70h] [rbp-158h] BYREF
  _BYTE v25[32]; // [rsp+80h] [rbp-148h] BYREF
  _QWORD Src[12]; // [rsp+A0h] [rbp-128h] BYREF
  _BYTE v27[160]; // [rsp+100h] [rbp-C8h] BYREF

  v20 = -1;
  v21 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2222;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2222);
  memset(Src, 0, 0x58uLL);
  RtlCopyFromUser(Src, a1, 0x58uLL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v3);
    v5 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 4180;
    v7 = PsGetCurrentProcess(v6);
    v8 = L"unexpected process 0x%I64x, returning 0x%I64x";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, v7, -1073741811LL, 0LL, 0LL, 0LL);
LABEL_28:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v5;
  }
  if ( HIDWORD(Src[0]) )
  {
    v5 = -1073741811;
    WdLogSingleEntry2(2LL, HIDWORD(Src[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 4188;
    v7 = HIDWORD(Src[0]);
    v8 = L"Reserved bits in Flags (0x%I64x) should not be set, returning 0x%I64x";
    goto LABEL_7;
  }
  v23 = 0LL;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v24, Src[0], Current, &v23, 0, 1);
  v9 = v23;
  if ( !v23 )
  {
    v5 = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 4199;
    v10 = L"Invalid hHwQueue (0x%I64x) specified, returning 0x%I64x";
LABEL_12:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, LODWORD(Src[0]), -1073741811LL, 0LL, 0LL, 0LL);
LABEL_27:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v24);
    goto LABEL_28;
  }
  if ( !*((_BYTE *)v23 + 148) )
  {
    v5 = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 4209;
    v10 = L"hHwQueue (0x%I64x) does not support user mode submission, returning 0x%I64x";
    goto LABEL_12;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v25,
    (struct _KTHREAD **)(*((_QWORD *)v23 + 2) + 440LL));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v27, *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL), 0, v11, 0);
  v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v27, 0LL);
  if ( v12 >= 0 )
  {
    v15 = *((_QWORD *)v9 + 19);
    v16 = **(_QWORD **)(v15 + 136);
    if ( (_DWORD)v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        if ( v17 == 2 )
        {
          v5 = -1073741811;
          WdLogSingleEntry3(3LL, v15, (int)**(_QWORD **)(v15 + 136), -1073741811LL);
          WdLogGlobalForLineNumber = 4233;
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v27);
          DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v25);
        }
        else
        {
          v5 = DXGDOORBELL::Connect((DXGDOORBELL *)v15);
          if ( v5 >= 0 )
          {
            Src[1] = *(_QWORD *)(v15 + 32) + (*(_DWORD *)(v15 + 24) & 0xFFFLL);
            Src[2] = *(_QWORD *)(v15 + 56) + (*(_DWORD *)(v15 + 48) & 0xFFFLL);
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v27);
          DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v25);
          RtlCopyToUser(a1, Src, 0x58uLL);
        }
        goto LABEL_27;
      }
    }
    WdLogSingleEntry2(3LL, v15, 0LL);
    WdLogGlobalForLineNumber = 4242;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v27);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v25);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v24);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL), -1073741811LL);
    WdLogGlobalForLineNumber = 4223;
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
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v27);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v25);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v24);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
    return (unsigned int)v12;
  }
}
