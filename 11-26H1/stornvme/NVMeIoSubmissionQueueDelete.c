/*
 * XREFs of NVMeIoSubmissionQueueDelete @ 0x14000C3B0
 * Callers:
 *     IoQueuesDeletion @ 0x14000C4A0 (IoQueuesDeletion.c)
 *     IoctlCreateReservedQueuePair @ 0x14001AF84 (IoctlCreateReservedQueuePair.c)
 *     IoctlDeleteReservedQueuePair @ 0x14001B478 (IoctlDeleteReservedQueuePair.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     memset @ 0x140032A40 (memset.c)
 */

bool __fastcall NVMeIoSubmissionQueueDelete(__int64 a1, __int16 a2)
{
  __int64 v4; // rax

  if ( *(_BYTE *)(a1 + 1008) )
    *(_DWORD *)(a1 + 4064) |= 0x20000u;
  *(_BYTE *)(a1 + 1019) = 0;
  memset(*(void **)(a1 + 1104), 0, 0x1088uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4200LL) = 0LL;
  *(_QWORD *)(a1 + 1072) = *(_QWORD *)(a1 + 1104);
  *(_BYTE *)(a1 + 1008) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  v4 = *(_QWORD *)(a1 + 1104);
  *(_BYTE *)(v4 + 4096) = 0;
  *(_WORD *)(v4 + 4136) = a2;
  ProcessCommand(a1, a1 + 1016);
  WaitForCommandComplete(a1, a1 + 1016, 1);
  return *(_BYTE *)(a1 + 1019) == 1;
}
