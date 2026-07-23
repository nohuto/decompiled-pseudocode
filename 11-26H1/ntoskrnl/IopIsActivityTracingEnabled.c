/*
 * XREFs of IopIsActivityTracingEnabled @ 0x1404555A0
 * Callers:
 *     IopAllocateIrpPrivate @ 0x14026BBF4 (IopAllocateIrpPrivate.c)
 *     IopAllocateReserveIrp @ 0x14026F5DC (IopAllocateReserveIrp.c)
 *     IopAllocateIrpWithExtension @ 0x14045782C (IopAllocateIrpWithExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x1404578A8 (IoMakeAssociatedIrpPriv.c)
 *     IopAllocateBackpocketIrp @ 0x140533EB4 (IopAllocateBackpocketIrp.c)
 *     IovAllocateIrp @ 0x140C4E160 (IovAllocateIrp.c)
 * Callees:
 *     <none>
 */

bool IopIsActivityTracingEnabled()
{
  return (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0;
}
