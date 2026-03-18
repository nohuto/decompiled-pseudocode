/*
 * XREFs of AcpiDeviceResetCompleteReset @ 0x14005DA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AcpiDeviceResetCompleteReset(__int64 a1, __int64 a2, int a3)
{
  *(_DWORD *)(a2 + 32) = a3;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 40), DelayedWorkQueue);
}
