/*
 * XREFs of DxgkGetContextSchedulingPriority @ 0x1404098F0
 * Callers:
 *     ?VmBusGetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140226E50 (-VmBusGetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x140037E2C (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x14003C788 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x140196750 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     ?VmBusSendGetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAHE@Z @ 0x14022F284 (-VmBusSendGetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetContextSchedulingPriority(_QWORD *a1)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rdi
  int ContextSchedulingPriority; // edi
  char CurrentThreadPreviousMode; // r12
  __int64 v6; // r9
  struct DXGCONTEXT *v7; // rdi
  __int64 v8; // rcx
  PERESOURCE *v10; // rsi
  char v11; // r15
  int v12; // r13d
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15[2]; // [rsp+50h] [rbp-118h] BYREF
  int v16; // [rsp+58h] [rbp-110h] BYREF
  __int64 v17; // [rsp+60h] [rbp-108h]
  char v18; // [rsp+68h] [rbp-100h]
  struct DXGCONTEXT *v19; // [rsp+70h] [rbp-F8h] BYREF
  char v20; // [rsp+78h] [rbp-F0h]
  _BYTE v21[16]; // [rsp+80h] [rbp-E8h] BYREF
  struct DXGPROCESS *v22; // [rsp+90h] [rbp-D8h]
  _BYTE v23[160]; // [rsp+A0h] [rbp-C8h] BYREF

  v16 = -1;
  v17 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2030;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 2030);
  Current = DXGPROCESS::GetCurrent(v2);
  v22 = Current;
  if ( !Current )
  {
    ContextSchedulingPriority = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5129;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_13:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit);
    }
    return (unsigned int)ContextSchedulingPriority;
  }
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  *(_QWORD *)v15 = 0LL;
  if ( CurrentThreadPreviousMode == 1 )
    *(_QWORD *)v15 = RtlReadULong64FromUser(a1);
  else
    *(_QWORD *)v15 = *a1;
  v19 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v21, v15[0], (struct _KTHREAD **)Current, &v19, 0, 1);
  v7 = v19;
  if ( !v19 )
  {
    ContextSchedulingPriority = -1073741811;
    WdLogSingleEntry2(3LL, v15[0], -1073741811LL);
    WdLogGlobalForLineNumber = 5162;
LABEL_12:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v21);
    goto LABEL_13;
  }
  v10 = (PERESOURCE *)*((_QWORD *)v19 + 2);
  v19 = (struct DXGCONTEXT *)v10;
  v11 = 0;
  v20 = 0;
  if ( v10 )
  {
    DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)&v19);
    v11 = v20;
    v10 = (PERESOURCE *)v19;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v23, *((_QWORD *)v7 + 2), 0, v6, 0);
  v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v23, 0LL);
  if ( v12 >= 0 )
  {
    if ( *((_BYTE *)v7 + 434) )
    {
      ContextSchedulingPriority = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetContextSchedulingPriority(
                                    (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                             + 16LL)
                                                                 + 4712LL),
                                    v22,
                                    v7,
                                    (int *)&v15[1],
                                    0);
      if ( ContextSchedulingPriority < 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 5184;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v23);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v19);
        goto LABEL_12;
      }
    }
    else
    {
      v15[1] = *((_DWORD *)v7 + 105);
    }
    if ( CurrentThreadPreviousMode == 1 )
      RtlWriteULong64ToUser(a1, *(__int64 *)v15);
    else
      *a1 = *(_QWORD *)v15;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v23);
    if ( v10 && v11 )
    {
      ExReleaseResourceLite(v10[17]);
      KeLeaveCriticalRegion();
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
    return 0LL;
  }
  else
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v23);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v19);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
    return (unsigned int)v12;
  }
}
