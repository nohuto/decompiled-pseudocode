/*
 * XREFs of RtlpHpLfhOwnerLockUnlock @ 0x180071C28
 * Callers:
 *     RtlpHpLfhContextLockUnlock @ 0x180071B68 (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x180071C28 (RtlpHpLfhOwnerLockUnlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x180071AE4 (RtlpHpLfhOwnerListLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x180071C28 (RtlpHpLfhOwnerLockUnlock.c)
 */

void __fastcall RtlpHpLfhOwnerLockUnlock(__int64 a1, unsigned __int8 *a2, int a3)
{
  _RTL_SRWLOCK *v3; // rbx
  __int64 v7; // rcx
  unsigned __int16 v8; // r9
  unsigned int i; // r8d
  __int64 v10; // rax

  v3 = (_RTL_SRWLOCK *)(a2 + 16);
  if ( !a3 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)a2 + 2);
  RtlpHpLfhOwnerListLockUnlock(a1, (_RTL_SRWLOCK **)a2 + 3, a3);
  RtlpHpLfhOwnerListLockUnlock(v7, (_RTL_SRWLOCK **)a2 + 5, a3);
  if ( (*a2 & 1) != 0 )
  {
    v8 = *(_WORD *)(a1 + 2 * ((unsigned __int64)*a2 >> 1) + 1472);
    if ( a3 == 3 )
    {
      for ( i = 1;
            i < *(unsigned __int8 *)(a1 + 72);
            *(_WORD *)(a1 + 2 * ((v10 << 7) + ((unsigned __int64)*a2 >> 1)) + 1472) = v8 )
      {
        v10 = i++;
      }
      a2[1] = 1;
      v3 = (_RTL_SRWLOCK *)(a2 + 16);
      a2[104] = 0;
    }
    RtlpHpLfhOwnerLockUnlock(a1, a1 + ((unsigned __int64)v8 << 6), (unsigned int)a3);
  }
  if ( a3 >= 1 )
  {
    if ( a3 >= 2 )
    {
      v3 = (_RTL_SRWLOCK *)(a2 + 16);
      *((_QWORD *)a2 + 2) = 1LL;
    }
    RtlReleaseSRWLockExclusive(v3);
  }
}
