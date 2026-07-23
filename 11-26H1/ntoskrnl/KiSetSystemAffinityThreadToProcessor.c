/*
 * XREFs of KiSetSystemAffinityThreadToProcessor @ 0x1405F9488
 * Callers:
 *     KiDeregisterNmiSxCallback @ 0x1405E7918 (KiDeregisterNmiSxCallback.c)
 *     KiInitMachineDependent @ 0x1405F7354 (KiInitMachineDependent.c)
 *     KiExecuteDpc @ 0x1405FD860 (KiExecuteDpc.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 */

void __fastcall KiSetSystemAffinityThreadToProcessor(unsigned int a1, _GROUP_AFFINITY *a2)
{
  unsigned int v2; // ecx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  Affinity = 0LL;
  v2 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + a1);
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(v2 >> 6);
  Affinity.Mask = 1LL << v2;
  KeSetSystemGroupAffinityThread(&Affinity, a2);
}
