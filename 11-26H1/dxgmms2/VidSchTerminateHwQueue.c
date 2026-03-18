/*
 * XREFs of VidSchTerminateHwQueue @ 0x140005B00
 * Callers:
 *     VidSchCreateHwQueue @ 0x14004A8B0 (VidSchCreateHwQueue.c)
 *     VidSchTerminateAdapter @ 0x1400C57F0 (VidSchTerminateAdapter.c)
 * Callees:
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140005C68 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z @ 0x140025FB4 (-VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     VidSchFlushHwQueue @ 0x140119830 (VidSchFlushHwQueue.c)
 */

void __fastcall VidSchTerminateHwQueue(struct VIDSCH_HW_QUEUE *a1)
{
  __int64 v1; // rdi
  bool v3; // dl

  v1 = *((_QWORD *)a1 + 5);
  VidSchFlushHwQueue();
  if ( (*(_DWORD *)(v1 + 56) & 1) != 0 && *((_QWORD *)a1 + 14) )
  {
    ((void (__fastcall *)(_QWORD))DxgCoreInterface[28])(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 16) + 24LL) + 8LL));
    *((_QWORD *)a1 + 14) = 0LL;
  }
  VidSchiRemoveHwQueueFromSyncPoints(a1);
  VidSchiDecrementHwQueueReference(a1, v3);
}
