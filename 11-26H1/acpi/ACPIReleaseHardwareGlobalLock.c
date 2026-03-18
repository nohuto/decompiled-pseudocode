/*
 * XREFs of ACPIReleaseHardwareGlobalLock @ 0x14002E5D0
 * Callers:
 *     ACPIStartNextGlobalLockRequest @ 0x14002EF2C (ACPIStartNextGlobalLockRequest.c)
 * Callees:
 *     WRITE_PM1_CONTROL @ 0x14002EA8C (WRITE_PM1_CONTROL.c)
 */

__int64 ACPIReleaseHardwareGlobalLock()
{
  volatile signed __int32 *v0; // rdx
  __int64 result; // rax
  int v2; // ett

  v0 = (volatile signed __int32 *)*((_QWORD *)AcpiInformation + 5);
  result = *(unsigned int *)v0;
  if ( !*((_BYTE *)AcpiInformation + 84) )
  {
    do
    {
      v2 = result;
      result = (unsigned int)_InterlockedCompareExchange(v0, result & 0xFFFFFFFC, result);
    }
    while ( v2 != (_DWORD)result );
    if ( (result & 1) != 0 )
      return WRITE_PM1_CONTROL(4LL, 0LL);
  }
  return result;
}
