/*
 * XREFs of PspJobTimeLimitsWork @ 0x1407FE870
 * Callers:
 *     <none>
 * Callees:
 *     PspEnforceLimits @ 0x1409FF9A0 (PspEnforceLimits.c)
 */

__int64 PspJobTimeLimitsWork()
{
  char v0; // bl
  __int64 v1; // rcx
  __int64 result; // rax

  v0 = 0;
  do
  {
    _m_prefetchw(&PsAltSystemCallRegistrationLock.ApcStateFill[8]);
    v1 = *(_DWORD *)&PsAltSystemCallRegistrationLock.ApcStateFill[8] & 0xFFFFFFFC;
    if ( (_InterlockedAnd((volatile signed __int32 *)&PsAltSystemCallRegistrationLock.ApcStateFill[8], 0xFFFFFFFC) & 1) != 0 )
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
                             (volatile signed __int32 *)&PsAltSystemCallRegistrationLock.ApcStateFill[8],
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
