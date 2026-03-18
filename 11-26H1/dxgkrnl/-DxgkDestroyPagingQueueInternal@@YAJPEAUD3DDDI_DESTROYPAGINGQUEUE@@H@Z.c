/*
 * XREFs of ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1403CEE1C
 * Callers:
 *     ?VmBusDestroyPagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140225D50 (-VmBusDestroyPagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z @ 0x1403CEDE0 (-DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z.c)
 *     DxgkDestroyPagingQueue @ 0x1403CEE00 (DxgkDestroyPagingQueue.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x140016460 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyPagingQueueInternal(struct D3DDDI_DESTROYPAGINGQUEUE *Src, int a2)
{
  struct D3DDDI_DESTROYPAGINGQUEUE *v3; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  unsigned int v6; // edx
  int v7; // r9d
  __int64 v9; // rdi
  __int64 v10; // rdx
  DXGPAGINGQUEUE *v11; // rdi
  __int64 hPagingQueue; // rdx
  __int64 v13; // rax
  __int64 v14; // r9
  int v15; // r8d
  __int64 v16; // rcx
  __int64 v18; // rcx
  int v19; // [rsp+50h] [rbp-48h] BYREF
  int *v20; // [rsp+58h] [rbp-40h]
  int v21; // [rsp+60h] [rbp-38h] BYREF
  __int64 v22; // [rsp+68h] [rbp-30h]
  char v23; // [rsp+70h] [rbp-28h]
  _BYTE v24[24]; // [rsp+78h] [rbp-20h] BYREF

  v3 = Src;
  v21 = -1;
  v22 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2118;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)Src, (__int64)&EventProfilerEnter);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 2118);
  v19 = 0;
  if ( a2 )
  {
    RtlCopyFromUser(&v19, v3, 4uLL);
    v3 = (struct D3DDDI_DESTROYPAGINGQUEUE *)&v19;
    v20 = &v19;
  }
  Current = DXGPROCESS::GetCurrent(v4);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v24, Current);
  v6 = (v3->hPagingQueue >> 6) & 0xFFFFFF;
  if ( v6 < *((_DWORD *)Current + 74) )
  {
    v7 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v6 + 8);
    if ( ((v3->hPagingQueue >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)Current + 35) + 16LL * v6 + 8) & 0x60)
      && (v7 & 0x2000) == 0
      && (v7 & 0x1F) != 0 )
    {
      v9 = 2LL * v6;
      v10 = *((_QWORD *)Current + 35);
      if ( (*(_BYTE *)(v10 + 8 * v9 + 8) & 0x1F) == 0xA )
      {
        v11 = *(DXGPAGINGQUEUE **)(v10 + 8 * v9);
        goto LABEL_15;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v11 = 0LL;
LABEL_15:
  hPagingQueue = v3->hPagingQueue;
  if ( v11 )
  {
    v13 = ((unsigned int)hPagingQueue >> 6) & 0xFFFFFF;
    if ( (unsigned int)v13 < *((_DWORD *)Current + 74) )
    {
      v14 = *((_QWORD *)Current + 35);
      v15 = *(_DWORD *)(v14 + 16 * v13 + 8);
      if ( (((unsigned int)hPagingQueue >> 25) & 0x60) == (*(_BYTE *)(v14 + 16 * v13 + 8) & 0x60)
        && (v15 & 0x2000) == 0
        && (v15 & 0x1F) != 0 )
      {
        *(_DWORD *)(16LL * (((unsigned int)hPagingQueue >> 6) & 0xFFFFFF) + v14 + 8) |= 0x2000u;
      }
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v24);
    DXGPAGINGQUEUE::ReleaseReference(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(3LL, hPagingQueue, -1073741811LL);
    WdLogGlobalForLineNumber = 415;
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v24);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
}
