/*
 * XREFs of LdrInitializeThunk @ 0x1800CC0E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     LdrpInitialize @ 0x1800CC108 (LdrpInitialize.c)
 *     ZwContinue @ 0x18015F6A0 (ZwContinue.c)
 */

void __cdecl __noreturn LdrInitializeThunk(PCONTEXT ContextRecord, PVOID Parameter)
{
  NTSTATUS v3; // eax

  LdrpInitialize(ContextRecord, Parameter);
  v3 = ZwContinue(ContextRecord, 1u);
  RtlRaiseStatus(v3);
}
