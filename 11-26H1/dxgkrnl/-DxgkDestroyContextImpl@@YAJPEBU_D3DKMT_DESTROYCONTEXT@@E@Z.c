/*
 * XREFs of ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1403D9A58
 * Callers:
 *     DxgkDestroyContextInternal @ 0x14019589C (DxgkDestroyContextInternal.c)
 *     ?VmBusDestroyContext@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402257B0 (-VmBusDestroyContext@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkDestroyContext @ 0x1403D9A40 (DxgkDestroyContext.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x140016630 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1403D9E3C (-DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 */

__int64 __fastcall DxgkDestroyContextImpl(const struct _D3DKMT_DESTROYCONTEXT *a1, char a2)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rdi
  unsigned int ULongFromUser; // eax
  unsigned int v7; // r8d
  unsigned int v8; // edx
  int v9; // r9d
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // edx
  __int64 v18; // rcx
  _BYTE v19[16]; // [rsp+50h] [rbp-68h] BYREF
  int v20; // [rsp+60h] [rbp-58h] BYREF
  __int64 v21; // [rsp+68h] [rbp-50h]
  char v22; // [rsp+70h] [rbp-48h]
  _BYTE v23[24]; // [rsp+78h] [rbp-40h] BYREF
  _BYTE v24[32]; // [rsp+90h] [rbp-28h] BYREF
  unsigned int v25; // [rsp+D0h] [rbp+18h]

  v20 = -1;
  v21 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2040;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2040);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 505;
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
    goto LABEL_18;
  }
  if ( a2 )
    ULongFromUser = RtlReadULongFromUser(&a1->hContext);
  else
    ULongFromUser = a1->hContext;
  v25 = ULongFromUser;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v23, Current);
  v7 = v25;
  v8 = (v25 >> 6) & 0xFFFFFF;
  if ( v8 < *((_DWORD *)Current + 74)
    && (v9 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v8 + 8),
        ((v25 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * v8 + 8) & 0x60))
    && (v9 & 0x2000) == 0
    && (v9 & 0x1F) != 0 )
  {
    v11 = *((_QWORD *)Current + 35);
    if ( (*(_BYTE *)(v11 + 16LL * v8 + 8) & 0x1F) == 7 )
    {
      v12 = *(_QWORD *)(v11 + 16LL * v8);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      v12 = 0LL;
      v7 = v25;
    }
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
  {
    WdLogSingleEntry2(3LL, v7, -1073741811LL);
    WdLogGlobalForLineNumber = 541;
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v23);
LABEL_18:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  v15 = (v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 < *((_DWORD *)Current + 74) )
  {
    v16 = *((_QWORD *)Current + 35);
    v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
    if ( ((v7 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60) && (v17 & 0x2000) == 0 && (v17 & 0x1F) != 0 )
      *(_DWORD *)(16 * (((unsigned __int64)v7 >> 6) & 0xFFFFFF) + v16 + 8) |= 0x2000u;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v23);
  if ( (*(_DWORD *)(v12 + 392) & 0x10) != 0 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v19,
      *(struct DXGDEVICE **)(v12 + 16));
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v24,
      (struct _KTHREAD **)(*(_QWORD *)(v12 + 16) + 144LL));
    DXGCONTEXT::DestroyAllHwQueues((DXGCONTEXT *)v12, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v19);
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v24);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v19);
  }
  DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v12);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
  return 0LL;
}
