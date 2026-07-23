/*
 * XREFs of RtlpHpLfhContextLockUnlock @ 0x180071B68
 * Callers:
 *     RtlpHpLockHeapForProcessCloneOrTerminate @ 0x1800714A4 (RtlpHpLockHeapForProcessCloneOrTerminate.c)
 *     RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x18011E7A0 (RtlpHpUnlockHeapForProcessCloneOrTerminate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhContextLockExtension @ 0x180071B4C (RtlpHpLfhContextLockExtension.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x180071C28 (RtlpHpLfhOwnerLockUnlock.c)
 *     RtlpHpEnvTlsSetValue @ 0x1800723C0 (RtlpHpEnvTlsSetValue.c)
 */

void __fastcall RtlpHpLfhContextLockUnlock(__int64 a1, int a2)
{
  __int64 *v3; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdx
  _RTL_SRWLOCK *v7; // rcx

  v3 = (__int64 *)(a1 + 448);
  v5 = 128LL;
  do
  {
    v6 = 0LL;
    if ( (*v3 & 1) == 0 )
      v6 = *v3;
    if ( v6 )
      RtlpHpLfhOwnerLockUnlock(a1, v6, (unsigned int)a2);
    ++v3;
    --v5;
  }
  while ( v5 );
  if ( a2 == 3 )
  {
    RtlpHpEnvTlsSetValue(*(unsigned int *)(a1 + 84), 196631LL);
    v7 = (_RTL_SRWLOCK *)(a1 + 128);
LABEL_9:
    v7->Value = 1LL;
LABEL_10:
    RtlReleaseSRWLockExclusive(v7);
    return;
  }
  if ( a2 )
  {
    v7 = (_RTL_SRWLOCK *)(a1 + 128);
    if ( a2 < 2 )
      goto LABEL_10;
    goto LABEL_9;
  }
  RtlpHpLfhContextLockExtension((_RTL_SRWLOCK *)a1);
}
