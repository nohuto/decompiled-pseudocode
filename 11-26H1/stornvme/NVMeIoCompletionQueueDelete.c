/*
 * XREFs of NVMeIoCompletionQueueDelete @ 0x14000CAE0
 * Callers:
 *     IoQueuesDeletion @ 0x14000C4A0 (IoQueuesDeletion.c)
 *     IoctlCreateReservedQueuePair @ 0x14001AF84 (IoctlCreateReservedQueuePair.c)
 *     IoctlDeleteReservedQueuePair @ 0x14001B478 (IoctlDeleteReservedQueuePair.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 */

bool __fastcall NVMeIoCompletionQueueDelete(__int64 a1, __int16 a2)
{
  __int64 v4; // rax

  LocalCommandReuse(a1, a1 + 1008);
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  v4 = *(_QWORD *)(a1 + 1104);
  *(_BYTE *)(v4 + 4096) = 4;
  *(_WORD *)(v4 + 4136) = a2;
  ProcessCommand(a1, a1 + 1016);
  WaitForCommandComplete(a1, a1 + 1016, 1);
  return *(_BYTE *)(a1 + 1019) == 1;
}
