/*
 * XREFs of IrqLibReleaseArbiterLock @ 0x140055C20
 * Callers:
 *     IrqLibAllocateMessageTarget @ 0x1400BBD60 (IrqLibAllocateMessageTarget.c)
 *     IrqLibFreeMessageTarget @ 0x1400BC020 (IrqLibFreeMessageTarget.c)
 *     IrqLibUpdateInterruptProperties @ 0x1400BC0D4 (IrqLibUpdateInterruptProperties.c)
 *     IrqTransGetInterruptVector @ 0x1400BC7A0 (IrqTransGetInterruptVector.c)
 *     IrqTranslateResources @ 0x1400C2FC0 (IrqTranslateResources.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1400D3A90 (LinkNodepAddLinkNodeWorker.c)
 * Callees:
 *     <none>
 */

LONG IrqLibReleaseArbiterLock()
{
  return KeSetEvent((PRKEVENT)Object, 0, 0);
}
