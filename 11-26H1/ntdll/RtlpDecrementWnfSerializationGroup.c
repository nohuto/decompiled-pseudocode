/*
 * XREFs of RtlpDecrementWnfSerializationGroup @ 0x18006E314
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18006E03C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpDereferenceWnfUserSubscription @ 0x18006E230 (RtlpDereferenceWnfUserSubscription.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

struct _TEB *__fastcall RtlpDecrementWnfSerializationGroup(__int64 a1, __int64 a2)
{
  signed __int64 v3; // rax
  bool v4; // cc
  signed __int64 v5; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(qword_1801C7200 + 48), a2);
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  v4 = v3 <= 1;
  v5 = v3 - 1;
  if ( !v4 )
    return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801C7200 + 48));
  if ( v5 )
    __fastfail(0xEu);
  v7 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v7 + 8) != a1 + 8 || (v8 = *(_QWORD **)(a1 + 16), *v8 != a1 + 8) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801C7200 + 48));
  return (struct _TEB *)RtlFreeHeap_0();
}
