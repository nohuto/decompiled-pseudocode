/*
 * XREFs of TpDisablePoolCallbackChecks @ 0x180109AA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall TpDisablePoolCallbackChecks(__int64 a1, __int64 a2)
{
  if ( !a1 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 72), a2);
  *(_DWORD *)(a1 + 436) |= 1u;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
  return 0LL;
}
