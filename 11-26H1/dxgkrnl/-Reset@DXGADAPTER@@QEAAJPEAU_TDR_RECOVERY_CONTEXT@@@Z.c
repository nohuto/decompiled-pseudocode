/*
 * XREFs of ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14019F50C
 * Callers:
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D9B80 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011178 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x14003CB24 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x14003E5E8 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?VidSchSetRecoveryThread@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@PEAU_KTHREAD@@@Z @ 0x14006F7B0 (-VidSchSetRecoveryThread@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@PEAU_KTHREAD@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x14019D494 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401A4780 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1401A7440 (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D8D90 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?DxgkpAcquireTestLockForStopReset@@YAXXZ @ 0x140209B2C (-DxgkpAcquireTestLockForStopReset@@YAXXZ.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@_N@Z @ 0x1402FE3C4 (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1402FE460 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x14030EE04 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140416A0C (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::Reset(DXGADAPTER *this, struct _KTHREAD **a2)
{
  struct _KTHREAD *CurrentThread; // r13
  BOOLEAN i; // al
  __int64 v6; // rcx
  int FirstProfilerInterface; // eax
  __int64 v8; // rcx
  ADAPTER_RENDER *v9; // rcx
  struct _TDR_RECOVERY_CONTEXT *v10; // rdx
  ADAPTER_DISPLAY *v11; // rcx
  char v13; // [rsp+80h] [rbp+8h] BYREF
  char v14; // [rsp+81h] [rbp+9h]
  struct _KTHREAD *v15; // [rsp+88h] [rbp+10h]
  union _LARGE_INTEGER Interval; // [rsp+90h] [rbp+18h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8893;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pTdrContext", 8893LL, 0LL, 0LL, 0LL, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  v15 = CurrentThread;
  DxgkpAcquireTestLockForStopReset();
  if ( !DXGADAPTER::IsDxgmms2(this) )
    KeSetEvent((PRKEVENT)((char *)this + 3136), 0, 0);
  if ( !*((_QWORD *)this + 396) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8911;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"this->IsRenderAdapter()", 8911LL, 0LL, 0LL, 0LL, 0LL);
  }
  v14 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v13);
  if ( !DXGADAPTER::IsDxgmms2(this) )
  {
    while ( 1 )
    {
      KeEnterCriticalRegion();
      if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 136, 0LL) )
        break;
      KeLeaveCriticalRegion();
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 396), 4LL, 0xFFFFFFFFLL);
      Interval.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    *((_QWORD *)this + 18) = KeGetCurrentThread();
    if ( !KeResetEvent((PRKEVENT)this + 2) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9038;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"OldCoreAccess != 0", 9038LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( bTracingEnabled
      && (qword_1401664C0 & 0x1000000) != 0
      && (qword_1401664C0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000000LL) != 0 )
    {
      McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventPreAcquireAdapterLock);
    }
    for ( i = ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 21), 0);
          !i;
          i = ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 21), 0) )
    {
      *((_DWORD *)this + 1241) = 2;
      FirstProfilerInterface = DXGGLOBAL::GetFirstProfilerInterface(v6);
      v8 = *((_QWORD *)this + 396);
      *((_DWORD *)this + 1242) = FirstProfilerInterface;
      ADAPTER_RENDER::FlushScheduler(v8, 4LL, 0xFFFFFFFFLL);
      Interval.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( bTracingEnabled
      && (qword_1401664C0 & 0x1000000) != 0
      && (qword_1401664C0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000000LL) != 0 )
    {
      McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventPostAcquireAdapterLock);
    }
    *((_DWORD *)this + 44) = 2;
    goto LABEL_45;
  }
  *((_QWORD *)this + 397) = CurrentThread;
  if ( CurrentThread == a2[363] )
    goto LABEL_23;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 136, 0LL);
  *((_QWORD *)this + 18) = KeGetCurrentThread();
  if ( *((_DWORD *)this + 50) != 1 )
  {
    *((_QWORD *)this + 18) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 136, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_59;
  }
  if ( !KeResetEvent((PRKEVENT)this + 2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8946;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"OldCoreAccess != 0", 8946LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( bTracingEnabled
    && (qword_1401664C0 & 0x1000000) != 0
    && (qword_1401664C0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000000LL) != 0 )
  {
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventPreAcquireAdapterLock);
  }
  DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(this, 2LL);
  if ( bTracingEnabled
    && (qword_1401664C0 & 0x1000000) != 0
    && (qword_1401664C0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000000LL) != 0 )
  {
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventPostAcquireAdapterLock);
  }
  *((_DWORD *)this + 44) = 2;
  if ( !a2[363] )
  {
LABEL_23:
    KeSetEvent((PRKEVENT)((char *)this + 3136), 0, 0);
    VIDSCH_EXPORT::VidSchSetRecoveryThread(
      *(VIDSCH_EXPORT **)(*((_QWORD *)this + 396) + 736LL),
      *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)this + 396) + 744LL),
      *((struct _KTHREAD **)this + 397));
    DXGADAPTER::PrepareToReset(this, (struct _TDR_RECOVERY_CONTEXT *)a2);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 396), 4LL, 0xFFFFFFFFLL);
    ADAPTER_RENDER::FlushDeferredDestructions(*((ADAPTER_RENDER **)this + 396));
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 396) + 760LL) + 8LL) + 1104LL))(*(_QWORD *)(*((_QWORD *)this + 396) + 768LL));
    if ( v15 != a2[363] )
      ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 396), 0LL, 0LL);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 396), 4LL, 0xFFFFFFFFLL);
LABEL_45:
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 396), 4LL, 0xFFFFFFFFLL);
    TdrCollectDbgInfoStage2((struct _TDR_RECOVERY_CONTEXT *)a2);
    v9 = (ADAPTER_RENDER *)*((_QWORD *)this + 396);
    *((_BYTE *)this + 3093) = 0;
    if ( (int)ADAPTER_RENDER::Reset(v9, (struct _TDR_RECOVERY_CONTEXT *)a2) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9082;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 9082LL, 0LL, 0LL, 0LL, 0LL);
    }
    v11 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 395);
    if ( v11 && (int)ADAPTER_DISPLAY::Reset(v11, v10) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9090;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 9090LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_QWORD *)this + 397) = 0LL;
    KeResetEvent((PRKEVENT)((char *)this + 3136));
    CurrentThread = v15;
  }
  if ( !DXGADAPTER::IsDxgmms2(this) || a2[363] != CurrentThread )
  {
    *((_QWORD *)this + 18) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 136, 0LL);
    KeLeaveCriticalRegion();
    if ( bTracingEnabled
      && (qword_1401664C0 & 0x1000000) != 0
      && (qword_1401664C0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000000LL) != 0 )
    {
      McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventReleaseAdapterLock);
    }
    ExReleaseResourceLite(*((PERESOURCE *)this + 21));
    KeSetEvent((PRKEVENT)this + 2, 0, 0);
  }
LABEL_59:
  DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v13);
  ExReleasePushLockSharedEx(&qword_140168760, 0LL);
  return 0LL;
}
