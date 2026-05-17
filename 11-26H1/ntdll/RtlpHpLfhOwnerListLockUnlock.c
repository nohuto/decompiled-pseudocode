/*
 * XREFs of RtlpHpLfhOwnerListLockUnlock @ 0x1800973D0
 * Callers:
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800972C4 (RtlpHpLfhOwnerLockUnlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpHpLfhOwnerListLockUnlock(__int64 a1, __int64 **a2, int a3)
{
  __int64 *i; // rbx
  signed __int64 result; // rax

  for ( i = *a2; i != (__int64 *)a2; i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 39) != 1 )
    {
      if ( a3 >= 1 )
      {
        if ( a3 >= 2 )
          i[7] = 1LL;
        result = (signed __int64)RtlReleaseSRWLockExclusive(i + 7);
      }
      else
      {
        result = RtlAcquireSRWLockExclusive(i + 7, (__int64)a2);
      }
    }
  }
  return result;
}
