/*
 * XREFs of KiSetSystemAffinityThreadToProcessor @ 0x1405F6AC8
 * Callers:
 *     KiDeregisterNmiSxCallback @ 0x1405E4FA8 (KiDeregisterNmiSxCallback.c)
 *     KiInitMachineDependent @ 0x1405F4994 (KiInitMachineDependent.c)
 *     KiExecuteDpc @ 0x1405FAE40 (KiExecuteDpc.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 */

void __fastcall KiSetSystemAffinityThreadToProcessor(unsigned int a1, struct _GROUP_AFFINITY *a2)
{
  unsigned int v2; // ecx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  Affinity = 0LL;
  v2 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * a1);
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(v2 >> 6);
  Affinity.Mask = 1LL << v2;
  KeSetSystemGroupAffinityThread(&Affinity, a2);
}
