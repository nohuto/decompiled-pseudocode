/*
 * XREFs of EtwpReleaseQueueEntry @ 0x140A86BA8
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x140935AA0 (EtwpDeleteRegistrationObject.c)
 *     EtwpQueueNotification @ 0x140938AC0 (EtwpQueueNotification.c)
 *     EtwpSendReplyDataBlock @ 0x140A86AC0 (EtwpSendReplyDataBlock.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReleaseProcessWakeCounter @ 0x1409BE200 (PsReleaseProcessWakeCounter.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpReleaseQueueEntry(PVOID *P, int a2)
{
  __int64 v4; // rcx

  if ( (a2 & 2) != 0 )
  {
    ObfDereferenceObject(P[4]);
    v4 = (__int64)P[5];
    if ( v4 )
      PsReleaseProcessWakeCounter(v4);
  }
  _m_prefetchw((char *)P + 52);
  if ( (~a2 & _InterlockedAnd((volatile signed __int32 *)P + 13, ~a2)) == 0 )
    ExFreePoolWithTag(P, 0);
}
