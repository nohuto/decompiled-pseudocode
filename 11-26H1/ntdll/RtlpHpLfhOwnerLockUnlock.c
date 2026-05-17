/*
 * XREFs of RtlpHpLfhOwnerLockUnlock @ 0x1800972C4
 * Callers:
 *     RtlpHpLfhContextLockUnlock @ 0x180097204 (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800972C4 (RtlpHpLfhOwnerLockUnlock.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800972C4 (RtlpHpLfhOwnerLockUnlock.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x1800973D0 (RtlpHpLfhOwnerListLockUnlock.c)
 */

struct _TEB *__fastcall RtlpHpLfhOwnerLockUnlock(__int64 a1, volatile signed __int64 *a2, int a3)
{
  volatile signed __int64 *v3; // rbx
  __int64 v7; // rcx
  struct _TEB *result; // rax
  unsigned __int16 v9; // r9
  unsigned int i; // r8d
  __int64 v11; // rax

  v3 = a2 + 2;
  if ( !a3 )
    RtlAcquireSRWLockExclusive(a2 + 2, (__int64)a2);
  RtlpHpLfhOwnerListLockUnlock(a1, a2 + 3, (unsigned int)a3);
  result = (struct _TEB *)RtlpHpLfhOwnerListLockUnlock(v7, a2 + 5, (unsigned int)a3);
  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v9 = *(_WORD *)(a1 + 2 * ((unsigned __int64)*(unsigned __int8 *)a2 >> 1) + 1472);
    if ( a3 == 3 )
    {
      for ( i = 1;
            i < *(unsigned __int8 *)(a1 + 72);
            *(_WORD *)(a1 + 2 * ((v11 << 7) + ((unsigned __int64)*(unsigned __int8 *)a2 >> 1)) + 1472) = v9 )
      {
        v11 = i++;
      }
      *((_BYTE *)a2 + 1) = 1;
      v3 = a2 + 2;
      *((_BYTE *)a2 + 104) = 0;
    }
    result = (struct _TEB *)RtlpHpLfhOwnerLockUnlock(a1, a1 + ((unsigned __int64)v9 << 6), (unsigned int)a3);
  }
  if ( a3 >= 1 )
  {
    if ( a3 >= 2 )
    {
      v3 = a2 + 2;
      *((_QWORD *)a2 + 2) = 1LL;
    }
    return RtlReleaseSRWLockExclusive(v3);
  }
  return result;
}
