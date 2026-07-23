/*
 * XREFs of RtlFailFast2 @ 0x1405376C0
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x14044E930 (RtlGuardCheckExceptionHandler.c)
 *     RtlGuardCheckLongJumpTarget @ 0x140533210 (RtlGuardCheckLongJumpTarget.c)
 *     MiCallDllUnload @ 0x14087B384 (MiCallDllUnload.c)
 *     MiIssueDllInitializeCall @ 0x14087B6CC (MiIssueDllInitializeCall.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn RtlFailFast2(unsigned int a1)
{
  __fastfail(a1);
}
