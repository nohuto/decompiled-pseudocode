/*
 * XREFs of ZwCallEnclave @ 0x140729220
 * Callers:
 *     DifZwCallEnclaveWrapper @ 0x14069FF30 (DifZwCallEnclaveWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCallEnclave(PENCLAVE_ROUTINE Routine, PVOID Reserved, ULONG Flags, PVOID *RoutineParamReturn)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Routine);
}
