/*
 * XREFs of PopBatteryWakeDpc @ 0x14060F900
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PopBatteryQueueWork @ 0x1404DA29C (PopBatteryQueueWork.c)
 */

void PopBatteryWakeDpc()
{
  unsigned int v0; // edi

  byte_140F10778 = 0;
  v0 = 1;
  if ( PopBatteryInitiateIgnoreStatusDuringBoot )
  {
    PopBatteryInitiateIgnoreStatusDuringBoot = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140F10740, 0, 0);
  _InterlockedExchange(&dword_140F106B8, 0);
  PopBatteryQueueWork(v0);
  ExQueueWorkItem(&stru_140F10758, DelayedWorkQueue);
}
