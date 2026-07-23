/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x140A82520
 * Callers:
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140268B10 (AlpcpLookasidePacketCallbackRoutine.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140461C90 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1404A4600 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExpDeleteWorkerFactory @ 0x1404AE4F0 (ExpDeleteWorkerFactory.c)
 *     PspJobDelete @ 0x1406187E0 (PspJobDelete.c)
 * Callees:
 *     IopFreeMiniCompletionPacket @ 0x140A82540 (IopFreeMiniCompletionPacket.c)
 */

__int64 __fastcall IoFreeMiniCompletionPacket(ULONG_PTR a1)
{
  *(_QWORD *)(a1 + 56) = 0LL;
  return IopFreeMiniCompletionPacket(a1);
}
