/*
 * XREFs of DxgkGetContextInProcessSchedulingPriority @ 0x1401C5C30
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
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140037E00 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x14003C788 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     RtlReadULong64FromUser @ 0x140196750 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     ?VmBusSendGetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAHE@Z @ 0x14022F284 (-VmBusSendGetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetContextInProcessSchedulingPriority(_QWORD *a1)
{
  struct _KTHREAD **Current; // r14
  int ContextSchedulingPriority; // edi
  char CurrentThreadPreviousMode; // r15
  struct DXGCONTEXT *v5; // rdi
  __int64 v6; // rcx
  __int64 v8; // r9
  int v9; // r12d
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned int v15[2]; // [rsp+50h] [rbp-108h] BYREF
  int v16; // [rsp+58h] [rbp-100h] BYREF
  __int64 v17; // [rsp+60h] [rbp-F8h]
  char v18; // [rsp+68h] [rbp-F0h]
  struct DXGCONTEXT *v19[2]; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v20[16]; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v21[160]; // [rsp+90h] [rbp-C8h] BYREF

  v16 = -1;
  v17 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2085;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 2085);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    ContextSchedulingPriority = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5331;
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
        McTemplateK0q_EtwWriteTransfer(v6, (__int64)&EventProfilerExit);
    }
    return (unsigned int)ContextSchedulingPriority;
  }
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  *(_QWORD *)v15 = 0LL;
  if ( CurrentThreadPreviousMode == 1 )
    *(_QWORD *)v15 = RtlReadULong64FromUser(a1);
  else
    *(_QWORD *)v15 = *a1;
  v19[0] = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v20, v15[0], Current, v19, 0, 1);
  v5 = v19[0];
  if ( !v19[0] )
  {
    ContextSchedulingPriority = -1073741811;
    WdLogSingleEntry2(3LL, v15[0], -1073741811LL);
    WdLogGlobalForLineNumber = 5365;
LABEL_12:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v20);
    goto LABEL_13;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
    (DXGDEVICEACCESSLOCKSHARED *)v19,
    *((struct DXGDEVICE **)v19[0] + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v21, *((_QWORD *)v5 + 2), 0, v8, 0);
  v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v21, 0LL);
  if ( v9 >= 0 )
  {
    v11 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL);
    if ( *((_BYTE *)v5 + 434) )
    {
      ContextSchedulingPriority = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetContextSchedulingPriority(
                                    (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(v11 + 16) + 4712LL),
                                    (struct DXGPROCESS *)Current,
                                    v5,
                                    (int *)&v15[1],
                                    1u);
      if ( ContextSchedulingPriority < 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 5387;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v21);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v19);
        goto LABEL_12;
      }
    }
    else
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 736) + 8LL);
      if ( (*((_DWORD *)v5 + 98) & 0x10) != 0 )
        v13 = (*(__int64 (__fastcall **)(_QWORD))(v12 + 392))(*((_QWORD *)v5 + 35));
      else
        v13 = (*(__int64 (__fastcall **)(_QWORD))(v12 + 384))(*((_QWORD *)v5 + 32));
      v15[1] = v13;
    }
    if ( CurrentThreadPreviousMode == 1 )
      RtlWriteULong64ToUser(a1, *(__int64 *)v15);
    else
      *a1 = *(_QWORD *)v15;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v21);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v19);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v20);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
    return 0LL;
  }
  else
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v21);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v19);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v20);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
    return (unsigned int)v9;
  }
}
