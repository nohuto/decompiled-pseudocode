/*
 * XREFs of RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x18011E7A0
 * Callers:
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x18007E8E4 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpUnlockHeapForClone @ 0x1801454FC (RtlpUnlockHeapForClone.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsContextLockUnlock @ 0x180071A28 (RtlpHpVsContextLockUnlock.c)
 *     RtlpHpLfhContextLockUnlock @ 0x180071B68 (RtlpHpLfhContextLockUnlock.c)
 */

void __fastcall RtlpHpUnlockHeapForProcessCloneOrTerminate(_RTL_SRWLOCK *a1, int a2)
{
  _RTL_SRWLOCK *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 *v7; // rax
  unsigned __int64 *v8; // rax
  _RTL_SRWLOCK *v9; // rcx

  RtlpHpLfhContextLockUnlock((__int64)&a1[112], a2);
  RtlpHpVsContextLockUnlock((__int64)&a1[88], a2);
  v4 = a1 + 29;
  v5 = 2LL;
  if ( a2 >= 2 )
    v4->Value = 1LL;
  RtlReleaseSRWLockExclusive(v4);
  if ( a2 >= 2 )
  {
    v6 = 2LL;
    v7 = (unsigned __int64 *)&a1[55];
    do
    {
      *v7 = 1LL;
      v7 += 24;
      --v6;
    }
    while ( v6 );
  }
  RtlReleaseSRWLockExclusive(a1 + 55);
  RtlReleaseSRWLockExclusive(a1 + 79);
  if ( a2 < 2 )
  {
    v9 = a1 + 8;
  }
  else
  {
    v8 = (unsigned __int64 *)&a1[48];
    do
    {
      *v8 = 1LL;
      v8 += 24;
      --v5;
    }
    while ( v5 );
    v9 = a1 + 8;
    a1[8].Value = 1LL;
  }
  RtlReleaseSRWLockExclusive(v9);
  RtlReleaseSRWLockExclusive(a1 + 48);
  RtlReleaseSRWLockExclusive(a1 + 72);
}
