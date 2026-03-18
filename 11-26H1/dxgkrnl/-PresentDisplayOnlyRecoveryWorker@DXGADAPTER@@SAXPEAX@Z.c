/*
 * XREFs of ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x14019D760
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011178 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x14003CB24 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x14003E5E8 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     DxgkInvalidateDeviceState @ 0x14006C7B4 (DxgkInvalidateDeviceState.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D8D90 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1401D8FF0 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1402FE460 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 */

void __fastcall DXGADAPTER::PresentDisplayOnlyRecoveryWorker(struct _TDR_RECOVERY_CONTEXT *StartContext)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  void *v4; // rdi
  char v5; // [rsp+50h] [rbp+8h] BYREF
  char v6; // [rsp+51h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_QWORD *)StartContext + 4);
  v6 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v5);
  if ( bTracingEnabled
    && (qword_1401664C0 & 0x1000000) != 0
    && (qword_1401664C0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000000LL) != 0 )
  {
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventPreAcquireAdapterLock);
  }
  while ( *(_QWORD *)(v1 + 168) && !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v1 + 168), 0) )
  {
    *(_DWORD *)(v1 + 4964) = 1;
    *(_DWORD *)(v1 + 4968) = DXGGLOBAL::GetFirstProfilerInterface(v3);
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
  if ( *(_QWORD *)(v1 + 168) )
  {
    v4 = *(void **)(v1 + 216);
    if ( v4 )
      ObfReferenceObject(*(PVOID *)(v1 + 216));
    TdrCollectDbgInfoStage2(StartContext);
    if ( bTracingEnabled
      && (qword_1401664C0 & 0x1000000) != 0
      && (qword_1401664C0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000000LL) != 0 )
    {
      McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventReleaseAdapterLock);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v1 + 168));
    if ( v4 )
    {
      if ( (*(_DWORD *)(v1 + 444) & 4) == 0 )
        DxgkInvalidateDeviceState((__int64)v4);
      ObfDereferenceObject(v4);
    }
  }
  TdrCompleteRecoveryContext(StartContext, 1, 0);
  DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v5);
}
