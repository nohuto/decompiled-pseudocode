/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x140A7A5E0
 * Callers:
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1402695A0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1404685E0 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1404AAF70 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExpDeleteWorkerFactory @ 0x1404B50A0 (ExpDeleteWorkerFactory.c)
 *     PspJobDelete @ 0x140615810 (PspJobDelete.c)
 * Callees:
 *     IopFreeMiniCompletionPacket @ 0x140A7A600 (IopFreeMiniCompletionPacket.c)
 */

__int64 __fastcall IoFreeMiniCompletionPacket(ULONG_PTR a1)
{
  *(_QWORD *)(a1 + 56) = 0LL;
  return IopFreeMiniCompletionPacket(a1);
}
