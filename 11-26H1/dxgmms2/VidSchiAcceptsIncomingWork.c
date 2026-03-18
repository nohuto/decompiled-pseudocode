/*
 * XREFs of VidSchiAcceptsIncomingWork @ 0x140004660
 * Callers:
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x140003F60 (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1400C4B80 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchTerminateAdapter @ 0x1400C57F0 (VidSchTerminateAdapter.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiAcceptsIncomingWork(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 376);
  return v1 == 1 || v1 == 3;
}
