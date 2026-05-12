/*
 * XREFs of StorIsIoGatewayPaused @ 0x14004789C
 * Callers:
 *     StorRemoveIoGatewayItem @ 0x1400135F0 (StorRemoveIoGatewayItem.c)
 *     StorNextIoGatewayItem @ 0x14002F7C8 (StorNextIoGatewayItem.c)
 *     StorReset @ 0x140050A30 (StorReset.c)
 *     StorSubmitIoGatewayItem @ 0x1400563B0 (StorSubmitIoGatewayItem.c)
 * Callees:
 *     <none>
 */

bool __fastcall StorIsIoGatewayPaused(__int64 a1)
{
  return a1 && *(_DWORD *)(*(_QWORD *)(a1 + 48) + 1052LL) != 0;
}
