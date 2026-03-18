/*
 * XREFs of PopBatteryWakeDpc @ 0x14060C7A0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PopBatteryQueueWork @ 0x1404E0BBC (PopBatteryQueueWork.c)
 */

void PopBatteryWakeDpc()
{
  unsigned int v0; // edi

  byte_140F0FFB8 = 0;
  v0 = 1;
  if ( PopBatteryInitiateIgnoreStatusDuringBoot )
  {
    PopBatteryInitiateIgnoreStatusDuringBoot = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140F0FF80, 0, 0);
  _InterlockedExchange(&dword_140F0FEF8, 0);
  PopBatteryQueueWork(v0);
  ExQueueWorkItem(&stru_140F0FF98, DelayedWorkQueue);
}
