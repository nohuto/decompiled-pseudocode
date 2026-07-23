/*
 * XREFs of KeProfileInterruptWithSource @ 0x1404B1420
 * Callers:
 *     EmonOverflowHandlerInternalV2 @ 0x1404B093C (EmonOverflowHandlerInternalV2.c)
 *     EmonOverflowHandlerInternalV1 @ 0x1404B0DEC (EmonOverflowHandlerInternalV1.c)
 *     DefaultOverflowHandler @ 0x140588FA0 (DefaultOverflowHandler.c)
 *     HalpTimerProfileInterrupt @ 0x1405997D0 (HalpTimerProfileInterrupt.c)
 *     Amd64OverflowHandlerInternal @ 0x1405A6D40 (Amd64OverflowHandlerInternal.c)
 * Callees:
 *     KiProcessProfileList @ 0x1404B146C (KiProcessProfileList.c)
 */

__int64 __fastcall KeProfileInterruptWithSource(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  KiProcessProfileList(a1, a2, &KeGetCurrentThread()->ApcState.Process->ProfileListHead);
  return KiProcessProfileList(a1, v2, &qword_140F26BC0);
}
