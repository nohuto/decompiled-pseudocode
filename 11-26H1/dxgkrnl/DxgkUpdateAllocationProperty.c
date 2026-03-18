/*
 * XREFs of DxgkUpdateAllocationProperty @ 0x1401F28D0
 * Callers:
 *     ?VmBusUpdateAllocationProperty@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140234510 (-VmBusUpdateAllocationProperty@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x14000ECA0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF00 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1400102C4 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x14001628C (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x140036220 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     ?DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPERTY@@@Z @ 0x1401B35AC (-DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPER.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendUpdateAllocationProperty@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBVDXGPROCESS@@PEBVDXGPAGINGQUEUE@@PEBVDXGALLOCATION@@PEAUD3DDDI_UPDATEALLOCPROPERTY@@@Z @ 0x1402BED7C (-VmBusSendUpdateAllocationProperty@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBVDXGPROCESS@@PEBVDXGPAGIN.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkUpdateAllocationProperty(D3DDDI_UPDATEALLOCPROPERTY *Src)
{
  struct _KTHREAD **Current; // r14
  const wchar_t *v3; // r9
  __int64 v4; // rcx
  bool v5; // zf
  D3DDDI_UPDATEALLOCPROPERTY *v6; // rbx
  unsigned int PropertyMaskValue; // eax
  struct DXGPAGINGQUEUE *v8; // r13
  __int64 v9; // rsi
  __int64 v10; // r9
  int v11; // r12d
  __int64 v12; // rcx
  __int64 v14; // r8
  ADAPTER_RENDER *v15; // r9
  _QWORD *v16; // r8
  __int64 v17; // rbx
  const wchar_t *v18; // r9
  __int64 v19; // rcx
  int updated; // eax
  __int64 v21; // r12
  int v22; // eax
  __int64 v23; // r14
  __int64 v24; // rcx
  unsigned int v25; // esi
  __int64 v26; // rcx
  char CurrentThreadPreviousMode; // [rsp+50h] [rbp-178h]
  int v28; // [rsp+58h] [rbp-170h] BYREF
  __int64 v29; // [rsp+60h] [rbp-168h]
  char v30; // [rsp+68h] [rbp-160h]
  struct DXGALLOCATION *v31; // [rsp+70h] [rbp-158h] BYREF
  _BYTE v32[8]; // [rsp+78h] [rbp-150h] BYREF
  struct DXGPAGINGQUEUE *v33; // [rsp+80h] [rbp-148h] BYREF
  _BYTE v34[16]; // [rsp+88h] [rbp-140h] BYREF
  _DXGKARG_VALIDATEUPDATEALLOCPROPERTY v35; // [rsp+98h] [rbp-130h] BYREF
  _DWORD v36[4]; // [rsp+B0h] [rbp-118h] BYREF
  D3DDDI_UPDATEALLOCPROPERTY v37; // [rsp+C0h] [rbp-108h] BYREF
  _BYTE v38[160]; // [rsp+F0h] [rbp-D8h] BYREF

  v28 = -1;
  v29 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2132;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2132);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1011;
    v3 = L"Invalid process context, returning 0x%I64x";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v3, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
LABEL_8:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    v5 = v30 == 0;
LABEL_41:
    if ( !v5 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  memset(&v37, 0, sizeof(v37));
  v6 = &v37;
  if ( CurrentThreadPreviousMode == 1 )
    RtlCopyFromUser(&v37, Src, 0x28uLL);
  else
    v6 = Src;
  PropertyMaskValue = v6->PropertyMaskValue;
  if ( PropertyMaskValue >= 0x10 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1047;
    v3 = L"Invalid use of reserve, returning 0x%I64x";
    goto LABEL_7;
  }
  if ( !PropertyMaskValue )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1055;
    v3 = L"Invalid use of property mask. Must set at least one property, returning 0x%I64x";
    goto LABEL_7;
  }
  v33 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)v32, v6->hPagingQueue, Current, &v33, 1);
  v8 = v33;
  if ( !v33 )
  {
    WdLogSingleEntry2(2LL, v6->hPagingQueue, -1073741811LL);
    WdLogGlobalForLineNumber = 1069;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hPagingQueue (0x%I64x) specified, returning 0x%I64x",
      v6->hPagingQueue,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_18:
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v32);
    goto LABEL_8;
  }
  v9 = *((_QWORD *)v33 + 2);
  v33 = (struct DXGPAGINGQUEUE *)v9;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v34,
    (struct DXGDEVICE *)v9);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v38, v9, 0, v10, 0);
  v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v38, 0LL);
  if ( v11 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v38);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v34);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
    return (unsigned int)v11;
  }
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v31, v6->hAllocation);
  if ( !v31 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1094;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hAllocation 0x%x",
      v6->hAllocation,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_26:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v31);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v38);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v34);
    goto LABEL_18;
  }
  v14 = *((_QWORD *)v31 + 1);
  if ( v14 != v9 )
  {
    WdLogSingleEntry2(2LL, v9, v14);
    WdLogGlobalForLineNumber = 1103;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Mismatch between paging queue device 0x%p and allocation device 0x%p",
      v9,
      *((_QWORD *)v31 + 1),
      0LL,
      0LL,
      0LL);
    goto LABEL_26;
  }
  v15 = *(ADAPTER_RENDER **)(v9 + 16);
  v16 = (_QWORD *)*((_QWORD *)v15 + 2);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16[27] + 64LL) + 40LL) + 28LL) < 0x6002u )
  {
    v17 = -1073741637LL;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1111;
    v18 = L"Driver version is less then WDDM 2.1 RS1.3, on 0x%I64x";
    goto LABEL_31;
  }
  if ( (*(_BYTE *)(v9 + 1917) & 1) != 0 )
  {
    updated = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateAllocationProperty(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(v16 + 589),
                (const struct DXGPROCESS *)Current,
                v8,
                v31,
                v6);
    goto LABEL_52;
  }
  if ( !v16[137] )
  {
    v17 = -1073741822LL;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1123;
    v18 = L"KMD has not exposed ValidateUpdateAllocationProperty, it is null, returning 0x%I64x";
LABEL_31:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, v17, 0LL, 0LL, 0LL, 0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v31);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v38);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v34);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
    return (unsigned int)v17;
  }
  v21 = *((_QWORD *)v31 + 3);
  if ( !v21 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1131;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGALLOCATION 0x%I64x has NULL VIDMM_ALLOC assigned to it",
      (__int64)v31,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v31);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v38);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v34);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    v5 = v30 == 0;
    goto LABEL_41;
  }
  if ( (*((_DWORD *)v31 + 18) & 0x200000) != 0
    || (v35.hAllocation = (HANDLE)*((_QWORD *)v31 + 4),
        v35.Flags.Value = v6->Flags.Value,
        v35.PreferredSegment.Value = v6->PreferredSegment.Value,
        v35.SupportedSegmentSet = v6->SupportedSegmentSet,
        v35.PropertyMaskValue = v6->PropertyMaskValue,
        v22 = ADAPTER_RENDER::DdiValidateUpdateAllocationProperty(v15, &v35),
        v23 = v22,
        v22 >= 0) )
  {
    v36[2] = v6->Flags.0;
    v36[1] = v6->PreferredSegment.0;
    v36[0] = v6->SupportedSegmentSet;
    v36[3] = v6->0;
    updated = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _DWORD *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 760LL)
                                                                                                 + 8LL)
                                                                                     + 192LL))(
                *(_QWORD *)(*(_QWORD *)(v9 + 16) + 768LL),
                *((_QWORD *)v8 + 4),
                v21,
                v36,
                &v6->PagingFenceValue);
LABEL_52:
    v25 = updated;
    if ( updated >= 0 && CurrentThreadPreviousMode == 1 )
      RtlWriteULong64ToUser(&Src->PagingFenceValue, v6->PagingFenceValue);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v31);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v38);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v34);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit);
    return v25;
  }
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 1148;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"KMD DDI ValidateUpdateAllocationProperty failed with status, 0x%I64x",
    v23,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v31);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v38);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v34);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v32);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit);
  return (unsigned int)v23;
}
