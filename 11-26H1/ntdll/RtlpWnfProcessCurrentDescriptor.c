/*
 * XREFs of RtlpWnfProcessCurrentDescriptor @ 0x18004FC80
 * Callers:
 *     RtlpWnfNotificationThread @ 0x18004F7D0 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x1801115A0 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004FFD4 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpDereferenceWnfNameSubscription @ 0x180050650 (RtlpDereferenceWnfNameSubscription.c)
 *     RtlpWnfCalculateRetryTime @ 0x18011524C (RtlpWnfCalculateRetryTime.c)
 *     NtGetCompleteWnfStateSubscription @ 0x180160E70 (NtGetCompleteWnfStateSubscription.c)
 *     memcmp @ 0x1801649D0 (memcmp.c)
 */

struct _TEB *__fastcall RtlpWnfProcessCurrentDescriptor(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v5; // r12
  volatile signed __int64 *v6; // rcx
  __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  int v12; // esi
  int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  _QWORD *v16; // rbx
  int v17; // eax
  __int64 **v18; // rdi
  __int64 v19; // rdx
  __int64 *i; // rax
  __int64 v21; // rax
  int v22; // ecx
  struct _TEB *result; // rax

  *a3 = 1;
  v5 = 0LL;
  v6 = (volatile signed __int64 *)(qword_1801C7200 + 8);
  *a4 = 0;
  RtlAcquireSRWLockShared(v6);
  v9 = qword_1801C7200;
  v10 = *(_QWORD *)(qword_1801C7200 + 24);
  v11 = *(_QWORD *)(qword_1801C7200 + 16);
  if ( (v10 & 1) != 0 )
  {
    if ( !v11 )
      return RtlReleaseSRWLockShared((volatile signed __int64 *)(v9 + 8));
    v11 ^= qword_1801C7200 + 16;
  }
  v12 = v10 & 1;
  if ( !v11 )
    return RtlReleaseSRWLockShared((volatile signed __int64 *)(v9 + 8));
  do
  {
    v13 = memcmp((const void *)(a1 + 8), (const void *)(v11 - 16), 8uLL);
    if ( v13 < 0 )
    {
      v15 = *(_QWORD *)v11;
      if ( v12 && v15 )
        goto LABEL_32;
      goto LABEL_5;
    }
    if ( v13 <= 0 )
      break;
    v15 = *(_QWORD *)(v11 + 8);
    if ( v12 && v15 )
    {
LABEL_32:
      v11 ^= v15;
      continue;
    }
LABEL_5:
    v11 = v15;
  }
  while ( v11 );
  if ( !v11 )
    return RtlReleaseSRWLockShared((volatile signed __int64 *)(v9 + 8));
  v16 = (_QWORD *)(v11 - 32);
  if ( !v16 || v16[1] != *(_QWORD *)a1 )
    return RtlReleaseSRWLockShared((volatile signed __int64 *)(v9 + 8));
  RtlAcquireSRWLockExclusive(v16 + 8, v14);
  v17 = *((_DWORD *)v16 + 31);
  if ( !v17 )
    goto LABEL_11;
  if ( v17 == 1 )
  {
    if ( !a2 )
    {
      if ( v16[16] )
        RtlFreeHeap_0();
      v16[16] = a1;
      *a3 = 0;
    }
LABEL_35:
    RtlReleaseSRWLockExclusive(v16 + 8);
    v9 = qword_1801C7200;
    return RtlReleaseSRWLockShared((volatile signed __int64 *)(v9 + 8));
  }
  if ( a2 )
    goto LABEL_35;
  RtlFreeHeap_0();
  v16[16] = 0LL;
  *((_DWORD *)v16 + 31) = 0;
LABEL_11:
  *((_DWORD *)v16 + 31) = 1;
  if ( _InterlockedIncrement64(v16 + 11) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockExclusive(v16 + 8);
  RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_1801C7200 + 8));
  v18 = (__int64 **)(v16 + 9);
  while ( 1 )
  {
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v16, 0LL) == -1073741267 )
      *a4 = 1;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v16, 1LL) == -1073741267 )
      *a4 = 1;
    RtlAcquireSRWLockExclusive(v16 + 8, v19);
    for ( i = *v18; i != (__int64 *)v18; i = (__int64 *)*i )
      *((_DWORD *)i + 37) = 0;
    v21 = v16[16];
    if ( !v21 )
      break;
    v16[16] = 0LL;
    a1 = v21;
    RtlReleaseSRWLockExclusive(v16 + 8);
    if ( v5 )
      RtlFreeHeap_0();
    v5 = a1;
    *a4 = 0;
  }
  if ( *a4 )
  {
    v16[16] = a1;
    *((_DWORD *)v16 + 31) = 2;
    if ( a1 == v5 )
      v5 = 0LL;
    RtlpWnfCalculateRetryTime(v16);
    *a3 = 0;
  }
  else
  {
    v22 = *((_DWORD *)v16 + 6);
    *((_DWORD *)v16 + 31) = 0;
    if ( !v22 || *(_DWORD *)(a1 + 16) - v22 > 0 )
      *((_DWORD *)v16 + 6) = *(_DWORD *)(a1 + 16);
  }
  NtGetCompleteWnfStateSubscription(a1 + 8, a1, *(unsigned int *)(a1 + 24), *a4 != 0 ? 0xC000022D : 0, 0LL, 0);
  RtlReleaseSRWLockExclusive(v16 + 8);
  result = (struct _TEB *)RtlpDereferenceWnfNameSubscription(v16);
  if ( v5 )
    return (struct _TEB *)RtlFreeHeap_0();
  return result;
}
