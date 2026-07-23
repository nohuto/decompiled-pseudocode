/*
 * XREFs of RtlpHpLfhOwnerListLockUnlock @ 0x180071AE4
 * Callers:
 *     RtlpHpLfhOwnerLockUnlock @ 0x180071C28 (RtlpHpLfhOwnerLockUnlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpHpLfhOwnerListLockUnlock(__int64 a1, _RTL_SRWLOCK **a2, int a3)
{
  _RTL_SRWLOCK *i; // rbx

  for ( i = *a2; i != (_RTL_SRWLOCK *)a2; i = (_RTL_SRWLOCK *)i->Value )
  {
    if ( HIBYTE(i[4].Ptr) != 1 )
    {
      if ( a3 >= 1 )
      {
        if ( a3 >= 2 )
          i[7].Value = 1LL;
        RtlReleaseSRWLockExclusive(i + 7);
      }
      else
      {
        RtlAcquireSRWLockExclusive(i + 7);
      }
    }
  }
}
