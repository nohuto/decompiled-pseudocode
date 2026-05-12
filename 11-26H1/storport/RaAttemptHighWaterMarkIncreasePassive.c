/*
 * XREFs of RaAttemptHighWaterMarkIncreasePassive @ 0x14004C740
 * Callers:
 *     <none>
 * Callees:
 *     RaAttemptHighWaterMarkIncrease @ 0x14004C760 (RaAttemptHighWaterMarkIncrease.c)
 */

void __fastcall RaAttemptHighWaterMarkIncreasePassive(PDEVICE_OBJECT DeviceObject, volatile __int32 *Context)
{
  _InterlockedExchange(Context + 76, 0);
  RaAttemptHighWaterMarkIncrease((PVOID)Context);
}
