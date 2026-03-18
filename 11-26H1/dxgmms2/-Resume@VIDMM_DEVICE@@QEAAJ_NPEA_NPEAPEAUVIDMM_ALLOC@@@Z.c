/*
 * XREFs of ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1401017C4
 * Callers:
 *     ExecutePagingCommand @ 0x1400B8780 (ExecutePagingCommand.c)
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x140007690 (VidSchSuspendResumeDevice.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14002FDD8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x140037658 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1400417C8 (McTemplateK0_EtwWriteTransfer.c)
 *     ?VidMmRemoveFromSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@@Z @ 0x14009B390 (-VidMmRemoveFromSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@@Z.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CDA2C (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x140101B04 (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@E@Z @ 0x1401029EC (-RecordVaPagingHistorySuspendResumeDevice@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE.c)
 *     ?LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z @ 0x140102B20 (-LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_DEVICE@@_N@Z.c)
 *     ?Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x140102D54 (-Init@VIDMM_COMMIT_TELEMETRY@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 *     GetBucketIdForAllocationSizePow2 @ 0x140102E4C (GetBucketIdForAllocationSizePow2.c)
 */

__int64 __fastcall VIDMM_DEVICE::Resume(VIDMM_DEVICE *this, bool a2, bool *a3, struct VIDMM_ALLOC **a4)
{
  __int64 v8; // rax
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v10; // rcx
  int v11; // esi
  _KEVENT *v12; // rcx
  VIDMM_GLOBAL *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  char v16; // al
  _QWORD *v17; // rax
  __int64 v19; // rbx
  VIDMM_COMMIT_TELEMETRY *v20; // rcx
  struct VIDMM_WORKER_THREAD2 *v21; // rcx
  LARGE_INTEGER v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r10
  __int64 v26; // r9
  _BYTE v27[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    v8 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v8 + 24) = this;
    *(_QWORD *)(v8 + 32) = *((_BYTE *)this + 312) & 7;
    WdLogGlobalForLineNumber = 1454;
  }
  *((_BYTE *)this + 58) |= 2u;
  PerformanceCounter.QuadPart = 0LL;
  if ( (*((_BYTE *)this + 58) & 4) != 0 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = *((_QWORD *)this + 4);
  v11 = 0;
  if ( v10 && (*(_BYTE *)(v10 + 212) || _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 208), 0, 0))
    || (v11 = VIDMM_GLOBAL::TryPageInDevice(*(VIDMM_GLOBAL **)this, this, a2, a3, a4), v11 >= 0) )
  {
    VIDMM_DEVICE::ResumePagingQueues(this);
    v12 = (_KEVENT *)*((_QWORD *)this + 4);
    if ( v12 )
      VidSchSuspendResumeDevice(v12, 0, 0, 0);
    VIDMM_GLOBAL::RecordVaPagingHistorySuspendResumeDevice(
      *(VIDMM_GLOBAL **)this,
      *((struct VIDMM_PROCESS **)this + 1),
      this,
      1u);
    if ( (*(_BYTE *)(*(_QWORD *)this + 41065LL) & 0x10) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)this + 98);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v27,
        (struct _KTHREAD **)(*(_QWORD *)this + 45000LL));
      VidMmRemoveFromSuspendList(v21, this);
    }
    else
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v27,
        (struct _KTHREAD **)(*(_QWORD *)this + 45000LL));
      VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v13, (struct _LIST_ENTRY *)((char *)this + 184));
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
    *((_QWORD *)this + 28) = *((_QWORD *)this + 29) + VidMmiQuerySystemTime();
    v16 = *((_BYTE *)this + 58) & 0xED;
    *((_QWORD *)this + 29) = 0LL;
    *((_BYTE *)this + 58) = v16;
    *((_QWORD *)this + 30) = 0LL;
    if ( (v16 & 4) != 0 )
    {
      --*(_DWORD *)(*(_QWORD *)this + 45144LL);
      *((_BYTE *)this + 58) &= ~4u;
      v22 = KeQueryPerformanceCounter(0LL);
      v15 = (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GetBucketIdForAllocationSizePow2)(
                            *(_QWORD *)(**(_QWORD **)this + 280LL),
                            (LARGE_INTEGER)v22.QuadPart,
                            v23);
      ++*(_DWORD *)(v25 + 4 * v15 + 776);
      *(_QWORD *)(v25 + 8 * v15 + 864) += v26;
      *(_QWORD *)(v25 + 8 * v15 + 1040) += v24 - PerformanceCounter.QuadPart;
      *(_BYTE *)(v25 + 1744) = 1;
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
      v17[3] = this;
      v14 = *((_BYTE *)this + 312) & 7;
      v17[5] = 0LL;
      v17[4] = v14;
      WdLogGlobalForLineNumber = 1558;
    }
    if ( (*((_BYTE *)this + 312) & 7) == 3 )
    {
      v14 = *(_QWORD *)(*((_QWORD *)this + 3) + 40LL);
      if ( (*(_DWORD *)(v14 + 408) & 4) != 0 )
      {
        v19 = **(_QWORD **)this + 216LL;
        VIDMM_COMMIT_TELEMETRY::Init((VIDMM_COMMIT_TELEMETRY *)v19, *(struct VIDMM_GLOBAL **)this, this, 0LL);
        VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent(v20, this, 0);
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_QWORD *)(v19 + 16) = 0LL;
        *(_QWORD *)v19 = 0LL;
        *(_BYTE *)(v19 + 24) = 0;
      }
    }
    *((_BYTE *)this + 312) &= 0xF8u;
    if ( (byte_14008A203 & 4) != 0 )
      McTemplateK0x_EtwWriteTransfer(v14, &EventVidMmResumeDevice, v15, *((_QWORD *)this + 3));
    if ( g_Feature_Largify64KBPrototype && this == *(VIDMM_DEVICE **)(*(_QWORD *)this + 44720LL) )
    {
      if ( (byte_14008A201 & 1) != 0 )
        McTemplateK0_EtwWriteTransfer(v14, &LargePageUpgrade_LargifyResume, v15);
      *(_QWORD *)(*(_QWORD *)this + 44720LL) = 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, this);
    *((_BYTE *)this + 58) &= ~2u;
    WdLogGlobalForLineNumber = 1475;
  }
  return (unsigned int)v11;
}
