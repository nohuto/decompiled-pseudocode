/*
 * XREFs of LdrpCleanupThreadTlsData @ 0x1800D7360
 * Callers:
 *     LdrpFreeTls @ 0x1800D72A0 (LdrpFreeTls.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 */

__int64 __fastcall LdrpCleanupThreadTlsData(__int64 a1, __int64 a2)
{
  void **v2; // rsi
  void **v3; // rbx
  unsigned __int64 UniqueThread; // rdi
  void ***v5; // r14
  void **v6; // rax
  void **v7; // rcx
  __int64 result; // rax
  void **v9; // rbx

  v2 = 0LL;
  v3 = 0LL;
  UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
  v5 = (void ***)&LdrpDelayedTlsReclaimTable[2 * ((UniqueThread >> 2) & 0xF)];
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)v5 + 1, a2);
  v6 = *v5;
  if ( *v5 )
  {
    do
    {
      v7 = (void **)v6[1];
      if ( *v6 == (void *)UniqueThread )
      {
        if ( v3 )
          v3[1] = v7;
        else
          *v5 = v7;
        v6[1] = v2;
        v2 = v6;
        v6 = v3;
      }
      v3 = v6;
      v6 = v7;
    }
    while ( v7 );
  }
  result = (__int64)RtlReleaseSRWLockExclusive((volatile signed __int64 *)v5 + 1);
  if ( v2 )
  {
    do
    {
      v9 = (void **)v2[1];
      result = RtlFreeHeap_0();
      v2 = v9;
    }
    while ( v9 );
  }
  return result;
}
