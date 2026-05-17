/*
 * XREFs of LdrpUnlockAndDereferenceEnclave @ 0x180070D6C
 * Callers:
 *     LdrInitializeEnclave @ 0x180070B80 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x180070CC0 (LdrpIssueEnclaveCall.c)
 *     LdrIsEnclaveAddress @ 0x180110A04 (LdrIsEnclaveAddress.c)
 *     LdrDeleteEnclave @ 0x1801265D0 (LdrDeleteEnclave.c)
 *     LdrLoadEnclaveModule @ 0x1801394E0 (LdrLoadEnclaveModule.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall LdrpUnlockAndDereferenceEnclave(__int64 a1)
{
  RtlLeaveCriticalSection(a1 + 16);
  return LdrpDereferenceEnclave(a1);
}
