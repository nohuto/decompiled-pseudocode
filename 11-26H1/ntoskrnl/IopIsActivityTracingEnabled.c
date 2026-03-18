/*
 * XREFs of IopIsActivityTracingEnabled @ 0x14045BD70
 * Callers:
 *     IopAllocateIrpPrivate @ 0x14026C684 (IopAllocateIrpPrivate.c)
 *     IopAllocateReserveIrp @ 0x14027006C (IopAllocateReserveIrp.c)
 *     IopAllocateIrpWithExtension @ 0x14045DC8C (IopAllocateIrpWithExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x14045DD08 (IoMakeAssociatedIrpPriv.c)
 *     IopAllocateBackpocketIrp @ 0x140531A0C (IopAllocateBackpocketIrp.c)
 *     IovAllocateIrp @ 0x140C48150 (IovAllocateIrp.c)
 * Callees:
 *     <none>
 */

bool IopIsActivityTracingEnabled()
{
  return (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0;
}
