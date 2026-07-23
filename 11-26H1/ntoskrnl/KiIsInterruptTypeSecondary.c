/*
 * XREFs of KiIsInterruptTypeSecondary @ 0x140431C94
 * Callers:
 *     KeUnmaskInterrupt @ 0x140430AF4 (KeUnmaskInterrupt.c)
 *     KeDisconnectInterrupt @ 0x140430D90 (KeDisconnectInterrupt.c)
 *     KeConnectInterrupt @ 0x140431458 (KeConnectInterrupt.c)
 *     KeMaskInterrupt @ 0x140431A20 (KeMaskInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiIsInterruptTypeSecondary(_DWORD *a1)
{
  if ( BYTE1(KiDpcCorralLock.Timer.TimerListEntry.Flink) && *a1 == 1 )
    return guard_dispatch_icall_no_overrides((unsigned int)a1[2], (unsigned int)a1[16]);
  else
    return 0;
}
