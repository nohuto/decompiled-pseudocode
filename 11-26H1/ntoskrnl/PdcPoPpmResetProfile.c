/*
 * XREFs of PdcPoPpmResetProfile @ 0x140AD84C0
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PpmEnableProfile @ 0x140AD850C (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x140AD85C4 (PpmDisableProfile.c)
 */

LONG __fastcall PdcPoPpmResetProfile(__int64 a1, __int64 a2, unsigned int a3)
{
  LONG result; // eax

  result = PopDirectedDripsDiagLock.TracingPrivate[0];
  if ( (PopDirectedDripsDiagLock.TracingPrivate[0] & 2) == 0 )
  {
    if ( (_BYTE)a2 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, a2, a3);
      PpmEnableProfile(a1);
      return PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
    }
    else
    {
      return PpmDisableProfile();
    }
  }
  return result;
}
