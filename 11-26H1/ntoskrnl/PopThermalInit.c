/*
 * XREFs of PopThermalInit @ 0x140CD7954
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14044E75C (KiInitializeTimer2.c)
 *     PopInitializeTimer @ 0x1407CBCB8 (PopInitializeTimer.c)
 *     PopInitializeWorkItem @ 0x1407CBD0C (PopInitializeWorkItem.c)
 */

__int64 PopThermalInit()
{
  _BYTE *v0; // r8
  unsigned int i; // ecx
  unsigned int v2; // kr00_4
  __int64 result; // rax

  LOBYTE(word_140F0FE70) = 1;
  qword_140F10068 = 0LL;
  PopThermalLock = 0LL;
  qword_140F10228 = 0LL;
  PopThermalTelemetryLock = 0LL;
  qword_140F0FE68 = 0LL;
  PopSystemThermalInfo = 0LL;
  PopInitializeTimer(
    (__int64)&PopThermalTelemetryTimer,
    (__int64)PopThermalTelemetryCallback,
    0LL,
    (__int64)PopThermalTelemetryWorker,
    0LL);
  if ( PopThermalPollingMode )
    PopThermalPollingWakesAllowed = 1;
  v0 = PopThermalTrackingThresholds;
  for ( i = 0; i < 0x834; i += 100 )
  {
    v2 = i;
    *v0++ = v2 / 0x14;
  }
  word_140F0FD12 = 0;
  KiInitializeTimer2((unsigned __int64)&unk_140F0FD10, (__int64)PopThermalEventTransitionTimerCallback, 0LL, 0);
  byte_140F0FD08 = 1;
  dword_140F0FD0C = -1;
  result = PopInitializeWorkItem(
             (__int64)&PopThermalStateTransitionWorkItem,
             (__int64)PopThermalStateTransitionWorker,
             0LL);
  qword_140F0FCE8 = 0LL;
  PopThermalStateTransitionContext = 0LL;
  byte_140F0FCF0 = 1;
  return result;
}
