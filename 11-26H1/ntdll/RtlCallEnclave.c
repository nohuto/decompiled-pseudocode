/*
 * XREFs of RtlCallEnclave @ 0x180163000
 * Callers:
 *     LdrInitializeEnclave @ 0x180090FD0 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x180091110 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     ZwCallEnclave @ 0x180160090 (ZwCallEnclave.c)
 */

NTSTATUS __fastcall RtlCallEnclave(LPVOID (__cdecl *a1)(LPVOID), void *a2, ULONG a3, PVOID *a4)
{
  return ZwCallEnclave(a1, a2, a3, a4);
}
