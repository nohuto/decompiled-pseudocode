/*
 * XREFs of KeProfileInterruptWithSource @ 0x1404B7BF0
 * Callers:
 *     EmonOverflowHandlerInternalV2 @ 0x1404B710C (EmonOverflowHandlerInternalV2.c)
 *     EmonOverflowHandlerInternalV1 @ 0x1404B75BC (EmonOverflowHandlerInternalV1.c)
 *     DefaultOverflowHandler @ 0x140586A80 (DefaultOverflowHandler.c)
 *     HalpTimerProfileInterrupt @ 0x140597050 (HalpTimerProfileInterrupt.c)
 *     Amd64OverflowHandlerInternal @ 0x1405A4530 (Amd64OverflowHandlerInternal.c)
 * Callees:
 *     KiProcessProfileList @ 0x1404B7C3C (KiProcessProfileList.c)
 */

__int64 __fastcall KeProfileInterruptWithSource(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  KiProcessProfileList(a1, a2, &KeGetCurrentThread()->ApcState.Process->ProfileListHead);
  return KiProcessProfileList(a1, v2, &KiSupervisorXStateFeaturesLock.Process);
}
