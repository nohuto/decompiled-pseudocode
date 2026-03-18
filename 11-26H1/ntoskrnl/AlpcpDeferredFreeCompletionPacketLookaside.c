/*
 * XREFs of AlpcpDeferredFreeCompletionPacketLookaside @ 0x1404AAF70
 * Callers:
 *     AlpcpFreeCompletionPacketLookaside @ 0x1404AAF0C (AlpcpFreeCompletionPacketLookaside.c)
 * Callees:
 *     IoFreeMiniCompletionPacket @ 0x140A7A5E0 (IoFreeMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDeferredFreeCompletionPacketLookaside(_QWORD *P)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 2); i = (unsigned int)(i + 1) )
    IoFreeMiniCompletionPacket(P[3 * i + 8]);
  ExFreePoolWithTag(P, 0);
}
