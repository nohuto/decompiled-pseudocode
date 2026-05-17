/*
 * XREFs of RtlpHpLfhContextLockUnlock @ 0x180097204
 * Callers:
 *     RtlpHpLockHeapForProcessCloneOrTerminate @ 0x180096BC0 (RtlpHpLockHeapForProcessCloneOrTerminate.c)
 *     RtlpHpUnlockHeapForProcessCloneOrTerminate @ 0x18011E9F0 (RtlpHpUnlockHeapForProcessCloneOrTerminate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpEnvTlsSetValue @ 0x18009345C (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x1800972C4 (RtlpHpLfhOwnerLockUnlock.c)
 *     RtlpHpLfhContextLockExtension @ 0x1800973B4 (RtlpHpLfhContextLockExtension.c)
 */

struct _TEB *__fastcall RtlpHpLfhContextLockUnlock(__int64 a1, int a2)
{
  __int64 *v3; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdx
  volatile signed __int64 *v7; // rcx

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
    RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 84), 196631LL);
    v7 = (volatile signed __int64 *)(a1 + 128);
LABEL_9:
    *v7 = 1LL;
    return RtlReleaseSRWLockExclusive(v7);
  }
  if ( a2 )
  {
    v7 = (volatile signed __int64 *)(a1 + 128);
    if ( a2 < 2 )
      return RtlReleaseSRWLockExclusive(v7);
    goto LABEL_9;
  }
  return (struct _TEB *)RtlpHpLfhContextLockExtension(a1, v6);
}
