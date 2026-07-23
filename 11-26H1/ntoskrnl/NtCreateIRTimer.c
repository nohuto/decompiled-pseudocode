/*
 * XREFs of NtCreateIRTimer @ 0x140ABF430
 * Callers:
 *     DifNtCreateIRTimerWrapper @ 0x140674A70 (DifNtCreateIRTimerWrapper.c)
 * Callees:
 *     NtCreateTimer2 @ 0x140ABF460 (NtCreateTimer2.c)
 */

NTSTATUS __cdecl NtCreateIRTimer(PHANDLE TimerHandle, PVOID Reserved, ACCESS_MASK DesiredAccess)
{
  return NtCreateTimer2(TimerHandle, Reserved, 0LL, 2u, DesiredAccess);
}
