/*
 * XREFs of ACPIAcquireHardwareGlobalLock @ 0x14002EE40
 * Callers:
 *     ACPIHardwareGlobalLockReleased @ 0x14002E138 (ACPIHardwareGlobalLockReleased.c)
 *     ACPIReleaseGlobalLock @ 0x14002E900 (ACPIReleaseGlobalLock.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIAcquireHardwareGlobalLock(volatile signed __int32 *a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  if ( *((_BYTE *)AcpiInformation + 84) )
    return 1;
  v1 = *a1;
  do
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange(a1, v1 | ((v1 & 2 | 4u) >> 1), v1);
  }
  while ( v2 != v1 );
  return (v1 & 2) == 0;
}
