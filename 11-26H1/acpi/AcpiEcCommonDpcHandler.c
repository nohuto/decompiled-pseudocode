/*
 * XREFs of AcpiEcCommonDpcHandler @ 0x14001E93C
 * Callers:
 *     ACPIEcGpeServiceRoutine @ 0x14001E920 (ACPIEcGpeServiceRoutine.c)
 *     ACPIEcGpioDpcRoutine @ 0x14004EB80 (ACPIEcGpioDpcRoutine.c)
 * Callees:
 *     ACPIEcServiceDevice @ 0x14001F19C (ACPIEcServiceDevice.c)
 *     ACPIEcLogAction @ 0x14001F2C0 (ACPIEcLogAction.c)
 */

__int64 __fastcall AcpiEcCommonDpcHandler(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  KIRQL v4; // bl

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  LOBYTE(v3) = 80;
  v4 = v2;
  ACPIEcLogAction(a1, v3, 0LL, 0LL);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v4);
  return ACPIEcServiceDevice(a1);
}
