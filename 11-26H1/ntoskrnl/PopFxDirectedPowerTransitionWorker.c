/*
 * XREFs of PopFxDirectedPowerTransitionWorker @ 0x1403C16F0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     PopFxHandleDirectedPowerTransition @ 0x1403C172C (PopFxHandleDirectedPowerTransition.c)
 */

LONG __fastcall PopFxDirectedPowerTransitionWorker(ULONG_PTR a1)
{
  do
    PopFxHandleDirectedPowerTransition(a1);
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 992), 0xFFFFFFFF) != 1 );
  return PopFxDereferenceDevice(a1, 4);
}
