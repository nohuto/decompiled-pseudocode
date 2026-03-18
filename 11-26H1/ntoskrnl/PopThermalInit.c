/*
 * XREFs of PopThermalInit @ 0x140CD17AC
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x140456EEC (KiInitializeTimer2.c)
 *     PopInitializeTimer @ 0x1407C8C18 (PopInitializeTimer.c)
 *     PopInitializeWorkItem @ 0x1407C8C6C (PopInitializeWorkItem.c)
 */

__int64 PopThermalInit()
{
  _BYTE *v0; // r8
  unsigned int i; // ecx
  unsigned int v2; // kr00_4
  __int64 result; // rax

  LOBYTE(stru_140F0F620.KernelShadowStackInitial) = 1;
  unk_140F10DB8 = 0LL;
  unk_140F10DB0 = 0LL;
  unk_140F10E58 = 0LL;
  unk_140F10E50 = 0LL;
  stru_140F0F620.KernelShadowStack = 0LL;
  *(_QWORD *)&stru_140F0F620.SchedulerAssistPriorityFloor = 0LL;
  PopInitializeTimer(
    (__int64)&stru_140F0F620.PriorityFloorCounts[8],
    (__int64)PopThermalTelemetryCallback,
    0LL,
    (__int64)PopThermalTelemetryWorker,
    0LL);
  if ( unk_140F10E70 )
    unk_140F10E6C = 1;
  v0 = byte_140F10E80;
  for ( i = 0; i < 0x834; i += 100 )
  {
    v2 = i;
    *v0++ = v2 / 0x14;
  }
  *(_WORD *)&stru_140F0F620.SchedulerApcFill5[42] = 0;
  KiInitializeTimer2(
    (unsigned __int64)&stru_140F0F620.SchedulerApc.Reserved[1],
    (__int64)PopThermalEventTransitionTimerCallback,
    0LL,
    0);
  stru_140F0F620.SchedulerApcFill3[32] = 1;
  *(_DWORD *)&stru_140F0F620.SchedulerApcFill5[36] = -1;
  result = PopInitializeWorkItem(
             (__int64)&stru_140F0F620.SavedApcState.ApcListHead[0].Blink,
             (__int64)PopThermalStateTransitionWorker,
             0LL);
  *(_QWORD *)&stru_140F0F620.Spare36 = 0LL;
  stru_140F0F620.Spare35[1] = 0LL;
  LOBYTE(stru_140F0F620.SystemAffinityTokenListHead.Next) = 1;
  return result;
}
