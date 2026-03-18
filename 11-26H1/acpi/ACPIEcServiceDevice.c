/*
 * XREFs of ACPIEcServiceDevice @ 0x14001F19C
 * Callers:
 *     AcpiEcCommonDpcHandler @ 0x14001E93C (AcpiEcCommonDpcHandler.c)
 *     ACPIEcOpRegionHandler @ 0x14001EE90 (ACPIEcOpRegionHandler.c)
 *     ACPIEcQueueEcIrp @ 0x14001F030 (ACPIEcQueueEcIrp.c)
 *     ACPIEcWatchdogDpc @ 0x14004DD70 (ACPIEcWatchdogDpc.c)
 * Callees:
 *     ACPIEcLogAction @ 0x14001F2C0 (ACPIEcLogAction.c)
 *     ACPIEcServiceIoLoop @ 0x14001F500 (ACPIEcServiceIoLoop.c)
 *     ACPIEcUnmaskInterrupt @ 0x14002023C (ACPIEcUnmaskInterrupt.c)
 *     ACPIEcMaskInterrupt @ 0x140020410 (ACPIEcMaskInterrupt.c)
 *     ACPIEcUnloadPending @ 0x140060338 (ACPIEcUnloadPending.c)
 */

void __fastcall ACPIEcServiceDevice(__int64 a1)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v3; // al
  __int64 v4; // rdx
  bool v5; // zf
  KIRQL v6; // si

  if ( *(_BYTE *)(a1 + 121) <= 1u )
  {
    v2 = (KSPIN_LOCK *)(a1 + 88);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    v5 = *(_BYTE *)(a1 + 465) == 0;
    v6 = v3;
    *(_BYTE *)(a1 + 466) = 1;
    if ( v5 )
    {
      v5 = *(_BYTE *)(a1 + 467) == 0;
      *(_BYTE *)(a1 + 465) = 1;
      if ( !v5 )
      {
        *(_BYTE *)(a1 + 467) = 0;
        LOBYTE(v4) = 96;
        ACPIEcLogAction(a1, v4, 0LL, 0LL);
        ACPIEcMaskInterrupt(a1);
      }
      while ( *(_BYTE *)(a1 + 466) )
      {
        *(_BYTE *)(a1 + 466) = 0;
        KeReleaseSpinLock(v2, v6);
        ACPIEcServiceIoLoop(a1);
        v6 = KeAcquireSpinLockRaiseToDpc(v2);
      }
      v5 = *(_BYTE *)(a1 + 121) == 0;
      *(_BYTE *)(a1 + 465) = 0;
      if ( !v5 )
        ACPIEcUnloadPending(a1);
      if ( !*(_BYTE *)(a1 + 467) )
      {
        *(_BYTE *)(a1 + 467) = 1;
        LOBYTE(v4) = 112;
        ACPIEcLogAction(a1, v4, 0LL, 0LL);
        ACPIEcUnmaskInterrupt(a1);
      }
    }
    KeReleaseSpinLock(v2, v6);
  }
}
