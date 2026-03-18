/*
 * XREFs of PspJobTimeLimitsWork @ 0x1407F8D70
 * Callers:
 *     <none>
 * Callees:
 *     PspEnforceLimits @ 0x14095A0E0 (PspEnforceLimits.c)
 */

__int64 PspJobTimeLimitsWork()
{
  char v0; // bl
  __int64 v1; // rcx
  __int64 result; // rax

  v0 = 0;
  do
  {
    _m_prefetchw(&PsAltSystemCallRegistrationLock.ExpectedRunTime);
    v1 = PsAltSystemCallRegistrationLock.ExpectedRunTime & 0xFFFFFFFC;
    if ( (_InterlockedAnd((volatile signed __int32 *)&PsAltSystemCallRegistrationLock.ExpectedRunTime, 0xFFFFFFFC) & 1) != 0 )
    {
      v0 = 1;
      LOBYTE(v1) = 0;
    }
    else
    {
      LOBYTE(v1) = 1;
    }
    PspEnforceLimits(v1);
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&PsAltSystemCallRegistrationLock.ExpectedRunTime,
                             0,
                             4);
  }
  while ( (_DWORD)result != 4 );
  if ( v0 )
  {
    result = (unsigned int)PspJobTimeLimitsPeriodSeconds;
    PspJobTimeLimitsCount = PspJobTimeLimitsPeriodSeconds;
  }
  return result;
}
