/*
 * XREFs of RtlRcuSynchronize @ 0x180149A40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWaitOnAddress @ 0x18007B580 (RtlpWaitOnAddress.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18008E480 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlpRcuCurrentThreadData @ 0x180149B1C (RtlpRcuCurrentThreadData.c)
 */

signed __int64 __fastcall RtlRcuSynchronize(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  signed __int64 v4; // rcx
  signed __int64 v5; // rsi
  __int64 i; // rdi
  __int64 v7; // rax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = (_QWORD *)RtlpRcuCurrentThreadData(a1, 0LL);
  if ( v2 && *v2 )
    __fastfail(0x38u);
  _m_prefetchw((const void *)(a1 + 16));
  do
  {
    _m_prefetchw((const void *)(a1 + 16));
    v4 = *(_QWORD *)(a1 + 16);
    v5 = (v4 & 0xFFFFFFFFFFFFFFFEuLL) + 2;
  }
  while ( v4 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v5, v4) );
  RtlAcquireReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 120), v3);
  for ( i = *(_QWORD *)(a1 + 32); i; i = *(_QWORD *)(i + 24) )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(i + 16);
      v9 = v7;
      if ( (v7 & 1) != 0 || v7 - v5 > -1 )
        break;
      RtlpWaitOnAddress(i + 16, &v9, 8LL, 0LL, RtlpWaitOnAddressSpinCycleCount, 0LL);
    }
  }
  return _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v5 | 1, v5);
}
