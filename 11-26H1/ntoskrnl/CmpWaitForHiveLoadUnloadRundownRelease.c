/*
 * XREFs of CmpWaitForHiveLoadUnloadRundownRelease @ 0x14085EAA4
 * Callers:
 *     CmShutdownSystem1 @ 0x1406E2270 (CmShutdownSystem1.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 */

__int64 CmpWaitForHiveLoadUnloadRundownRelease()
{
  ExWaitForRundownProtectionRelease(&CmpHiveLoadUnloadRundown);
  return _InterlockedExchange64((volatile __int64 *)&CmpHiveLoadUnloadRundown, 1LL);
}
