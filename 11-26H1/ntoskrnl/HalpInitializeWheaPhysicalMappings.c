/*
 * XREFs of HalpInitializeWheaPhysicalMappings @ 0x140CBAA0C
 * Callers:
 *     HalpWheaInitDiscard @ 0x140CB5BFC (HalpWheaInitDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpReserveHalPtes @ 0x140CB43E8 (HalpReserveHalPtes.c)
 */

struct _LIST_ENTRY *HalpInitializeWheaPhysicalMappings()
{
  struct _LIST_ENTRY *result; // rax

  IommuInterfaceStateChangeCallbackPushLock.TrapFrame = (_KTRAP_FRAME *)HalpReserveHalPtes();
  if ( !IommuInterfaceStateChangeCallbackPushLock.TrapFrame )
    KeBugCheckEx(0x5Cu, 0x8100uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\whea.c", 0xB3uLL);
  IommuInterfaceStateChangeCallbackPushLock.ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)HalpReserveHalPtes();
  if ( !IommuInterfaceStateChangeCallbackPushLock.ApcState.ApcListHead[0].Flink )
    KeBugCheckEx(0x5Cu, 0x8100uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\whea.c", 0xBEuLL);
  result = (struct _LIST_ENTRY *)HalpReserveHalPtes();
  IommuInterfaceStateChangeCallbackPushLock.ApcState.ApcListHead[0].Blink = result;
  if ( !result )
    KeBugCheckEx(0x5Cu, 0x8100uLL, 1uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\whea.c", 0xC7uLL);
  IommuInterfaceStateChangeCallbackPushLock.FirstArgument = 0LL;
  IommuInterfaceStateChangeCallbackPushLock.ApcState.ApcListHead[1].Flink = 0LL;
  *(_QWORD *)&IommuInterfaceStateChangeCallbackPushLock.SystemCallNumber = 0LL;
  return result;
}
