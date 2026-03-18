/*
 * XREFs of HalpInitializeWheaPhysicalMappings @ 0x140CB49CC
 * Callers:
 *     HalpWheaInitDiscard @ 0x140CAFBBC (HalpWheaInitDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HalpReserveHalPtes @ 0x140CAE3A8 (HalpReserveHalPtes.c)
 */

struct _LIST_ENTRY *HalpInitializeWheaPhysicalMappings()
{
  struct _LIST_ENTRY *result; // rax

  IommuInterfaceStateChangeCallbackPushLock.ApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)HalpReserveHalPtes();
  if ( !IommuInterfaceStateChangeCallbackPushLock.ApcState.ApcListHead[1].Blink )
    KeBugCheckEx(0x5Cu, 0x8100uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\whea.c", 0xB3uLL);
  IommuInterfaceStateChangeCallbackPushLock.TrapFrame = (_KTRAP_FRAME *)HalpReserveHalPtes();
  if ( !IommuInterfaceStateChangeCallbackPushLock.TrapFrame )
    KeBugCheckEx(0x5Cu, 0x8100uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\whea.c", 0xBEuLL);
  result = (struct _LIST_ENTRY *)HalpReserveHalPtes();
  IommuInterfaceStateChangeCallbackPushLock.ApcState.ApcListHead[0].Flink = result;
  if ( !result )
    KeBugCheckEx(0x5Cu, 0x8100uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\whea.c", 0xC7uLL);
  IommuInterfaceStateChangeCallbackPushLock.FirstArgument = 0LL;
  *(_OWORD *)&IommuInterfaceStateChangeCallbackPushLock.ApcStateFill[8] = 0uLL;
  return result;
}
