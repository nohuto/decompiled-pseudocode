/*
 * XREFs of PopNetUpdateStandbyRequest @ 0x140B68A58
 * Callers:
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140499FD0 (RtlCheckTokenMembership.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 PopNetUpdateStandbyRequest()
{
  int v0; // ebx

  if ( *(_QWORD *)&stru_140F0C428.WaitBlockFill11[112] )
  {
    v0 = RtlCheckTokenMembership(0LL, *(void **)&stru_140F0C428.WaitBlockFill11[112]);
    if ( v0 >= 0 )
      return (unsigned int)-1073741790;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v0;
}
