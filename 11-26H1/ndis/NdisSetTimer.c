/*
 * XREFs of NdisSetTimer @ 0x14005CA60
 * Callers:
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006AF00 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMStartInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016AFE0 (-ndisMStartInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisMSetTimer @ 0x14005CAC0 (NdisMSetTimer.c)
 */

void __stdcall NdisSetTimer(PNDIS_TIMER Timer, UINT MillisecondsToDelay)
{
  void (__fastcall *DeferredRoutine)(_KDPC *, void *, void *, void *); // rax

  DeferredRoutine = Timer->Dpc.DeferredRoutine;
  if ( (char *)DeferredRoutine == (char *)ndisMTimerDpc || (char *)DeferredRoutine == (char *)ndisMTimerDpcX )
    NdisMSetTimer((char)Timer);
  else
    KeSetTimer(&Timer->Timer, (LARGE_INTEGER)(-10000LL * (int)MillisecondsToDelay), &Timer->Dpc);
}
