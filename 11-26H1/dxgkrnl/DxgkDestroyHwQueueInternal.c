/*
 * XREFs of DxgkDestroyHwQueueInternal @ 0x1403F0AA8
 * Callers:
 *     ?VmBusDestroyHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402259B0 (-VmBusDestroyHwQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkDestroyHwQueue @ 0x1403F0A90 (DxgkDestroyHwQueue.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGHWQUEUE@@QEAAXXZ @ 0x140017920 (-ReleaseReference@DXGHWQUEUE@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyHwQueueInternal(__int64 a1, char a2)
{
  unsigned int *p_ULongFromUser; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  struct DXGPROCESS *v7; // rsi
  unsigned int v8; // edx
  int v9; // r9d
  __int64 v11; // rcx
  DXGHWQUEUE *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // r8d
  __int64 v17; // rcx
  __int64 CurrentProcess; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  int ULongFromUser; // [rsp+50h] [rbp-48h] BYREF
  unsigned int *v24; // [rsp+58h] [rbp-40h]
  int v25; // [rsp+60h] [rbp-38h] BYREF
  __int64 v26; // [rsp+68h] [rbp-30h]
  char v27; // [rsp+70h] [rbp-28h]
  _BYTE v28[24]; // [rsp+78h] [rbp-20h] BYREF

  p_ULongFromUser = (unsigned int *)a1;
  v25 = -1;
  v26 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 2154;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 2154);
  ULongFromUser = 0;
  if ( a2 )
  {
    ULongFromUser = RtlReadULongFromUser(p_ULongFromUser);
    p_ULongFromUser = (unsigned int *)&ULongFromUser;
  }
  v24 = p_ULongFromUser;
  Current = DXGPROCESS::GetCurrent(v4);
  v7 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 1570;
    v21 = PsGetCurrentProcess(v20);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x, returning 0x%I64x",
      v21,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_26;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v28, Current);
  v8 = (*p_ULongFromUser >> 6) & 0xFFFFFF;
  if ( !(v8 < *((_DWORD *)v7 + 74)
      && (v9 = *(_DWORD *)(*((_QWORD *)v7 + 35) + 16LL * v8 + 8),
          ((*p_ULongFromUser >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v7 + 35) + 16LL * v8 + 8) & 0x60))
      && (v9 & 0x2000) == 0
      && (v9 & 0x1F) != 0) )
    goto LABEL_31;
  v11 = *((_QWORD *)v7 + 35);
  if ( (*(_BYTE *)(v11 + 16LL * v8 + 8) & 0x1F) != 0xF )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_31:
    v12 = 0LL;
    goto LABEL_15;
  }
  v12 = *(DXGHWQUEUE **)(v11 + 16LL * v8);
LABEL_15:
  v13 = *p_ULongFromUser;
  if ( v12 )
  {
    v14 = ((unsigned int)v13 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v14 < *((_DWORD *)v7 + 74) )
    {
      v15 = *((_QWORD *)v7 + 35);
      v16 = *(_DWORD *)(v15 + 16 * v14 + 8);
      if ( (((unsigned int)v13 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60)
        && (v16 & 0x2000) == 0
        && (v16 & 0x1F) != 0 )
      {
        *(_DWORD *)(16LL * (((unsigned int)v13 >> 6) & 0xFFFFFF) + v15 + 8) |= 0x2000u;
      }
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v28);
    DXGHWQUEUE::ReleaseReference(v12);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
    }
    return 0LL;
  }
  WdLogSingleEntry2(3LL, v13, -1073741811LL);
  WdLogGlobalForLineNumber = 1584;
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v28);
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
  return 3221225485LL;
}
