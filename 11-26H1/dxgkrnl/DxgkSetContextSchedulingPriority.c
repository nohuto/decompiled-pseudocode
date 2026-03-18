/*
 * XREFs of DxgkSetContextSchedulingPriority @ 0x140401A40
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
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetApiSchedulingPriority@DXGCONTEXT@@QEAAJH@Z @ 0x140075918 (-SetApiSchedulingPriority@DXGCONTEXT@@QEAAJH@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@HE@Z @ 0x14018D23C (-VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGC.c)
 *     RtlReadULong64FromUser @ 0x140196750 (RtlReadULong64FromUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetContextSchedulingPriority(_QWORD *a1)
{
  char CurrentThreadPreviousMode; // r14
  __int64 v3; // rcx
  struct _KTHREAD **Current; // rsi
  unsigned int v5; // edi
  __int64 ULong64FromUser; // rax
  DXGCONTEXT *v7; // rdi
  int v8; // esi
  __int64 v9; // rcx
  char v11; // r15
  unsigned int v12; // esi
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // r9
  int v16; // eax
  unsigned int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // eax
  int v21; // [rsp+50h] [rbp-108h] BYREF
  __int64 v22; // [rsp+58h] [rbp-100h]
  char v23; // [rsp+60h] [rbp-F8h]
  int v24[2]; // [rsp+68h] [rbp-F0h]
  _BYTE v25[16]; // [rsp+70h] [rbp-E8h] BYREF
  DXGCONTEXT *v26[2]; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v27[160]; // [rsp+90h] [rbp-C8h] BYREF

  v21 = -1;
  v22 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2029;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 2029);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v3);
  if ( !Current )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4960;
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
LABEL_23:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
    }
    return v5;
  }
  *(_QWORD *)v24 = 0LL;
  if ( CurrentThreadPreviousMode == 1 )
    ULong64FromUser = RtlReadULong64FromUser(a1);
  else
    ULong64FromUser = *a1;
  *(_QWORD *)v24 = ULong64FromUser;
  v26[0] = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v25, ULong64FromUser, Current, v26, 0, 1);
  v7 = v26[0];
  if ( !v26[0] )
  {
    v5 = -1073741811;
    WdLogSingleEntry2(3LL, (unsigned int)v24[0], -1073741811LL);
    WdLogGlobalForLineNumber = 4991;
LABEL_22:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v25);
    goto LABEL_23;
  }
  if ( *((_BYTE *)v26[0] + 434) )
  {
    v8 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetContextSchedulingPriority(
           (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v26[0] + 2) + 16LL) + 16LL) + 4712LL),
           (struct DXGPROCESS *)Current,
           v26[0],
           v24[1],
           0);
    if ( v8 < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 5002;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v25);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
      if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
      return (unsigned int)v8;
    }
  }
  v11 = 0;
  v12 = 0;
  if ( v24[1] >= 0 && (v24[1] & 0x40000000) != 0 )
  {
    if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL)) )
    {
      v5 = -1073741637;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 5031;
      goto LABEL_22;
    }
    if ( (v13 & 0x3FFFFFE0) != 0 )
    {
      v5 = -1073741811;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 5042;
      goto LABEL_22;
    }
    v12 = v13 & 0x1F;
    if ( v12 > 0x1E )
    {
      v5 = -1073741811;
      WdLogSingleEntry2(3LL, v13 & 0x1F, -1073741811LL);
      WdLogGlobalForLineNumber = 5055;
      goto LABEL_22;
    }
    v11 = 1;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v26,
    *((struct DXGDEVICE **)v7 + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v27, *((_QWORD *)v7 + 2), 0, v15, 0);
  v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v27, 0LL);
  v17 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry2(3LL, *((_QWORD *)v7 + 2), v16);
    WdLogGlobalForLineNumber = 5074;
    goto LABEL_34;
  }
  if ( v11 )
  {
    if ( *((_BYTE *)v7 + 434) )
      goto LABEL_34;
    v19 = *((_QWORD *)v7 + 2);
    if ( (*((_DWORD *)v7 + 98) & 0x10) != 0 )
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 736LL)
                                                                          + 8LL)
                                                              + 1000LL))(
              *((_QWORD *)v7 + 35),
              v12,
              0LL);
    else
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 736LL)
                                                                          + 8LL)
                                                              + 992LL))(
              *((_QWORD *)v7 + 32),
              v12,
              0LL);
  }
  else
  {
    v20 = DXGCONTEXT::SetApiSchedulingPriority(v7, v24[1]);
  }
  v17 = v20;
LABEL_34:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v27);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v25);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
  return v17;
}
