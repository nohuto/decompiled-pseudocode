/*
 * XREFs of WheaSelLogInitialize @ 0x140C32DC4
 * Callers:
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 * Callees:
 *     WheaSelLogSetNtSchedulerAvailability @ 0x14064F6B8 (WheaSelLogSetNtSchedulerAvailability.c)
 *     IpmiHwInitializeContext @ 0x1406942E8 (IpmiHwInitializeContext.c)
 *     WheaSelLogCheckPoint @ 0x1407B6FE0 (WheaSelLogCheckPoint.c)
 */

void __fastcall WheaSelLogInitialize(__int64 a1)
{
  WheaIpmiContextLock = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 3704LL) && (int)IpmiHwInitializeContext() >= 0 )
  {
    WheaSelLogSetNtSchedulerAvailability();
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x80000) != 0 )
      WheaSelLogCheckPoint();
  }
}
