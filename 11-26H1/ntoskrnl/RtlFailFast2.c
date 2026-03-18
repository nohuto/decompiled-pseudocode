/*
 * XREFs of RtlFailFast2 @ 0x140535240
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x1404570C0 (RtlGuardCheckExceptionHandler.c)
 *     RtlGuardCheckLongJumpTarget @ 0x140530D10 (RtlGuardCheckLongJumpTarget.c)
 *     MiCallDllUnload @ 0x140874FA0 (MiCallDllUnload.c)
 *     MiIssueDllInitializeCall @ 0x1408752E8 (MiIssueDllInitializeCall.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
