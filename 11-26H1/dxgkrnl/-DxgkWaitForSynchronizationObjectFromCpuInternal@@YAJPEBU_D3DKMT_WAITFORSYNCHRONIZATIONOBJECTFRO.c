/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x14034BD5C
 * Callers:
 *     ?DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x14034BD20 (-DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@.c)
 *     DxgkWaitForSynchronizationObjectFromCpu @ 0x14034BD40 (DxgkWaitForSynchronizationObjectFromCpu.c)
 *     ?VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1404048D0 (-VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1400334E0 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x14034DC40 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x140373CC0 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@E@Z @ 0x14042BC04 (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromCpuInternal(
        struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *Src,
        int a2,
        void *a3,
        void *a4)
{
  struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct DXGDEVICE *Current; // rsi
  __int64 CurrentProcess; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v15; // rcx
  _BYTE *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // edi
  __int64 v23; // rcx
  int v24; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-D0h]
  char v26; // [rsp+60h] [rbp-C8h]
  struct DXGDEVICE *v27; // [rsp+68h] [rbp-C0h] BYREF
  _BYTE v28[8]; // [rsp+70h] [rbp-B8h] BYREF
  ULONG Tag[4]; // [rsp+78h] [rbp-B0h] BYREF
  void *Srca[2]; // [rsp+88h] [rbp-A0h]
  __int64 v31; // [rsp+98h] [rbp-90h]
  ULONG *v32; // [rsp+A0h] [rbp-88h]
  PVOID v33; // [rsp+A8h] [rbp-80h] BYREF
  _BYTE v34[16]; // [rsp+B0h] [rbp-78h] BYREF
  unsigned int v35; // [rsp+C0h] [rbp-68h]
  PVOID P; // [rsp+C8h] [rbp-60h] BYREF
  _BYTE v37[32]; // [rsp+D0h] [rbp-58h] BYREF
  unsigned int v38; // [rsp+F0h] [rbp-38h]

  v6 = Src;
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
  Current = DXGPROCESS::GetCurrent(v7);
  v27 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 5748;
    v12 = PsGetCurrentProcess(v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v12,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_60:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  v33 = 0LL;
  v35 = 0;
  P = 0LL;
  v38 = 0;
  *(_OWORD *)Tag = 0LL;
  *(_OWORD *)Srca = 0LL;
  v31 = 0LL;
  if ( a2 )
  {
    RtlCopyFromUser(Tag, v6, 0x28uLL);
    if ( !Tag[1] )
    {
      if ( P != v37 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v38 = 0;
      if ( v33 != v34 && v33 )
        ExFreePoolWithTag(v33, 0);
      v33 = 0LL;
      v35 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
      if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
      return 3221225485LL;
    }
    if ( (v31 & 0xFFFFFFFE) != 0 )
    {
      if ( P != v37 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v38 = 0;
      if ( v33 != v34 && v33 )
        ExFreePoolWithTag(v33, 0);
      v33 = 0LL;
      v35 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
      if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
      return 3221225485LL;
    }
    PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v33);
    v16 = v33;
    if ( !v33 )
    {
      if ( P != v37 && P )
      {
        ExFreePoolWithTag(P, 0);
        v16 = v33;
      }
      P = 0LL;
      v38 = 0;
      if ( v16 != v34 && v16 )
        ExFreePoolWithTag(v16, 0);
      v33 = 0LL;
      v35 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
      if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
      return 3221225495LL;
    }
    RtlCopyFromUser(v33, *(void **)&Tag[2], 4LL * v35);
    *(_QWORD *)&Tag[2] = v33;
    NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements((__int64)&P, Tag[1]);
    if ( !P )
    {
      P = 0LL;
      v38 = 0;
      if ( v33 != v34 && v33 )
        ExFreePoolWithTag(v33, 0);
      v33 = 0LL;
      v35 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
      if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
      return 3221225495LL;
    }
    RtlCopyFromUser(P, Srca[0], 8LL * v38);
    Srca[0] = P;
    v6 = (struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)Tag;
    v32 = Tag;
  }
  else if ( !v6->ObjectCount || v6->Flags.Value >= 2 )
  {
    goto LABEL_60;
  }
  v27 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v28, v6->hDevice, (struct _KTHREAD **)Current, &v27);
  if ( !v27 )
  {
    WdLogSingleEntry2(2LL, v6->hDevice, -1073741811LL);
    WdLogGlobalForLineNumber = 5831;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v6->hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v28);
    if ( P != v37 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v38 = 0;
    if ( v33 != v34 && v33 )
      ExFreePoolWithTag(v33, 0);
    v33 = 0LL;
    v35 = 0;
    goto LABEL_60;
  }
  v20 = *(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL);
  if ( *(_BYTE *)(v20 + 209) )
    v21 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v20 + 4712),
            Current,
            *((_DWORD *)v27 + 118),
            v6,
            0);
  else
    v21 = WaitForSynchronizationObjectFromCpu(v6, Current, v27, a3);
  v22 = v21;
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v28);
  if ( P != v37 && P )
    ExFreePoolWithTag(P, 0);
  v38 = 0;
  P = 0LL;
  if ( v33 != v34 && v33 )
    ExFreePoolWithTag(v33, 0);
  v33 = 0LL;
  v35 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
  return v22;
}
