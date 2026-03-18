/*
 * XREFs of DxgkSetContextInProcessSchedulingPriority @ 0x1403F7020
 * Callers:
 *     ?VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140232780 (-VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x14000F560 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1400167C0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1400170E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1400182F0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@HE@Z @ 0x14018D23C (-VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGC.c)
 *     RtlReadULong64FromUser @ 0x140196750 (RtlReadULong64FromUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetInProcessSchedulingPriority@DXGCONTEXT@@QEAAJH@Z @ 0x1403F73C8 (-SetInProcessSchedulingPriority@DXGCONTEXT@@QEAAJH@Z.c)
 */

__int64 __fastcall DxgkSetContextInProcessSchedulingPriority(_QWORD *a1)
{
  __int64 v2; // rcx
  struct _KTHREAD **Current; // rdi
  char CurrentThreadPreviousMode; // al
  __int64 ULong64FromUser; // rax
  __int64 *v6; // rbx
  __int64 v7; // r9
  int v8; // edi
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-F0h]
  char v16; // [rsp+60h] [rbp-E8h]
  int v17[2]; // [rsp+68h] [rbp-E0h]
  DXGCONTEXT *v18[2]; // [rsp+70h] [rbp-D8h] BYREF
  _BYTE v19[16]; // [rsp+80h] [rbp-C8h] BYREF
  _BYTE v20[160]; // [rsp+90h] [rbp-B8h] BYREF

  v14 = -1;
  v15 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v16 = 1;
    v14 = 2084;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 2084);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v2);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5237;
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
    goto LABEL_22;
  }
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  *(_QWORD *)v17 = 0LL;
  if ( CurrentThreadPreviousMode == 1 )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    *(_QWORD *)v17 = ULong64FromUser;
  }
  else
  {
    ULong64FromUser = *a1;
    *(_QWORD *)v17 = *a1;
  }
  if ( HIDWORD(ULong64FromUser) > 1 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 5270;
    goto LABEL_22;
  }
  v18[0] = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v19, ULong64FromUser, Current, v18, 0, 1);
  v6 = (__int64 *)v18[0];
  if ( !v18[0] )
  {
    WdLogSingleEntry2(3LL, (unsigned int)v17[0], -1073741811LL);
    WdLogGlobalForLineNumber = 5281;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v19);
LABEL_22:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
    if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  if ( *((_BYTE *)v18[0] + 434) )
  {
    v9 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetContextSchedulingPriority(
           (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18[0] + 2) + 16LL) + 16LL) + 4712LL),
           (struct DXGPROCESS *)Current,
           v18[0],
           v17[1],
           1u);
    goto LABEL_13;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v18,
    *((struct DXGDEVICE **)v18[0] + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v20, v6[2], 0, v7, 0);
  v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v20, 0LL);
  if ( v8 >= 0 )
  {
    v9 = DXGCONTEXT::SetInProcessSchedulingPriority((DXGCONTEXT *)v6, v17[1]);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v20);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v18);
LABEL_13:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v19);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
    if ( v16 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
    }
    return v9;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v20);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v18);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v19);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
  return (unsigned int)v8;
}
