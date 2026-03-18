/*
 * XREFs of ?VidSchiHwQueueFull@@YA_NPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14000AE70
 * Callers:
 *     ?VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14000A3C0 (-VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiHwQueueFull(struct VIDSCH_HW_QUEUE *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  v1 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 8LL);
  v2 = *(_QWORD *)(v1 + 40);
  return !*(_BYTE *)(v1 + 212)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(v1 + 208), 0, 0)
      && !*(_DWORD *)(v2 + 3260)
      && *((_DWORD *)a1 + 38) >= *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 1740LL);
}
