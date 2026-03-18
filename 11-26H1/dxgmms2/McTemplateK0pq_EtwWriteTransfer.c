/*
 * XREFs of McTemplateK0pq_EtwWriteTransfer @ 0x14002551C
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1400051E8 (VidSchiSetFlipDevice.c)
 *     VidSchiProfilePerformanceTick @ 0x140023500 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140031C3C (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidMmSuspendDevice @ 0x14009A77C (VidMmSuspendDevice.c)
 *     AcquireGpuResources @ 0x1400D2F84 (AcquireGpuResources.c)
 *     ReferenceAllocationForPreparation @ 0x1400D3624 (ReferenceAllocationForPreparation.c)
 *     ?SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z @ 0x1400E4034 (-SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1400E4D38 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1400E591C (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 *     IsAllowedToGrow @ 0x1400EB97C (IsAllowedToGrow.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1401016B4 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAX_N@Z @ 0x140101E78 (-FullySuspend@VIDMM_DEVICE@@IEAAX_N@Z.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x14010216C (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1401026D8 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?ReportState@VIDMM_DEVICE@@QEAAXXZ @ 0x140112C74 (-ReportState@VIDMM_DEVICE@@QEAAXXZ.c)
 *     NeedToBeTrimmed @ 0x140118F8C (NeedToBeTrimmed.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140012A70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0pq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  va_list v5; // [rsp+40h] [rbp-38h]
  __int64 v6; // [rsp+48h] [rbp-30h]
  va_list v7; // [rsp+50h] [rbp-28h]
  __int64 v8; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v8 = 4LL;
  va_copy(v7, va1);
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, a2, a3, 3u, &v4);
}
