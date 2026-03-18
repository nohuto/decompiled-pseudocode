/*
 * XREFs of KiReleaseSecondaryPassiveConnectLock @ 0x1404231A8
 * Callers:
 *     KiDisconnectSecondaryInterrupt @ 0x140424278 (KiDisconnectSecondaryInterrupt.c)
 *     KiConnectSecondaryInterrupt @ 0x1404247F8 (KiConnectSecondaryInterrupt.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

void __fastcall KiReleaseSecondaryPassiveConnectLock(__int64 a1)
{
  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  KeLeaveCriticalRegion();
}
