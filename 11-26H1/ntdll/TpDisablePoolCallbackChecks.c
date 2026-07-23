/*
 * XREFs of TpDisablePoolCallbackChecks @ 0x180109440
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall TpDisablePoolCallbackChecks(__int64 a1)
{
  if ( !a1 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  *(_DWORD *)(a1 + 436) |= 1u;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  return 0LL;
}
