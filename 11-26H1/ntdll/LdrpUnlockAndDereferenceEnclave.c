/*
 * XREFs of LdrpUnlockAndDereferenceEnclave @ 0x1800911BC
 * Callers:
 *     LdrInitializeEnclave @ 0x180090FD0 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x180091110 (LdrpIssueEnclaveCall.c)
 *     LdrIsEnclaveAddress @ 0x180110594 (LdrIsEnclaveAddress.c)
 *     LdrDeleteEnclave @ 0x180126340 (LdrDeleteEnclave.c)
 *     LdrLoadEnclaveModule @ 0x180139250 (LdrLoadEnclaveModule.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall LdrpUnlockAndDereferenceEnclave(char *BaseAddress)
{
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(BaseAddress + 16));
  return LdrpDereferenceEnclave(BaseAddress);
}
