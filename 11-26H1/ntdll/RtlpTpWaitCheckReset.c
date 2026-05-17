/*
 * XREFs of RtlpTpWaitCheckReset @ 0x1800C0960
 * Callers:
 *     RtlpTpWaitCallback @ 0x1800C0450 (RtlpTpWaitCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TpSetWaitEx @ 0x18004F8E0 (TpSetWaitEx.c)
 */

struct _TEB *__fastcall RtlpTpWaitCheckReset(__int64 a1, __int64 a2)
{
  int v2; // esi

  v2 = a2;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 16), a2);
  if ( (*(_BYTE *)(a1 + 8) & 8) == 0 && (!v2 || v2 == 258) )
    TpSetWaitEx(*(_QWORD *)(a1 + 48), *(volatile signed __int32 ***)(a1 + 56), *(__int64 **)(a1 + 72), 0LL);
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
}
