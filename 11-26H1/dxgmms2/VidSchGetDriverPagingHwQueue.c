/*
 * XREFs of VidSchGetDriverPagingHwQueue @ 0x1400567C0
 * Callers:
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1401267F0 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetDriverPagingHwQueue(__int64 a1, unsigned int a2)
{
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL * a2) + 112LL);
}
