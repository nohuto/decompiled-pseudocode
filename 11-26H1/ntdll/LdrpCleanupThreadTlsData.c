/*
 * XREFs of LdrpCleanupThreadTlsData @ 0x1800D4320
 * Callers:
 *     LdrpFreeTls @ 0x1800D4260 (LdrpFreeTls.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 */

void LdrpCleanupThreadTlsData()
{
  _QWORD *v0; // rsi
  _QWORD *v1; // rbx
  unsigned __int64 UniqueThread; // rdi
  _RTL_SRWLOCK *v3; // r14
  _QWORD *Value; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  v0 = 0LL;
  v1 = 0LL;
  UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
  v3 = (_RTL_SRWLOCK *)&LdrpDelayedTlsReclaimTable[2 * ((UniqueThread >> 2) & 0xF)];
  RtlAcquireSRWLockExclusive(v3 + 1);
  Value = (_QWORD *)v3->Value;
  if ( v3->Value )
  {
    do
    {
      v5 = (_QWORD *)Value[1];
      if ( *Value == UniqueThread )
      {
        if ( v1 )
          v1[1] = v5;
        else
          v3->Value = (unsigned __int64)v5;
        Value[1] = v0;
        v0 = Value;
        Value = v1;
      }
      v1 = Value;
      Value = v5;
    }
    while ( v5 );
  }
  RtlReleaseSRWLockExclusive(v3 + 1);
  if ( v0 )
  {
    do
    {
      v6 = (_QWORD *)v0[1];
      RtlFreeHeap_0(LdrpTlsHeap, 0, v0);
      v0 = v6;
    }
    while ( v6 );
  }
}
