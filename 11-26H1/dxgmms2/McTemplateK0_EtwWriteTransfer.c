/*
 * XREFs of McTemplateK0_EtwWriteTransfer @ 0x1400417C8
 * Callers:
 *     ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x140034DE8 (-NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     VidSchEnableLatencyToleranceTimer @ 0x140043BB0 (VidSchEnableLatencyToleranceTimer.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_GLOBAL@@@Z @ 0x1400A4C5C (-VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_GLOBAL@@@Z.c)
 *     ?StopUpgradingAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A7EAC (-StopUpgradingAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     Upgrade64KBWork @ 0x1400A8034 (Upgrade64KBWork.c)
 *     ?VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A8668 (-VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     CheckForLargePageUpgrade @ 0x1400B1318 (CheckForLargePageUpgrade.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1401017C4 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140012A70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, a2, a3, 1u, &v4);
}
