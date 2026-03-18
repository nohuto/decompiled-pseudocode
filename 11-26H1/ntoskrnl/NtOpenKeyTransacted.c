/*
 * XREFs of NtOpenKeyTransacted @ 0x14084F1C0
 * Callers:
 *     DifNtOpenKeyTransactedWrapper @ 0x14067D990 (DifNtOpenKeyTransactedWrapper.c)
 * Callees:
 *     NtOpenKeyTransactedEx @ 0x140974730 (NtOpenKeyTransactedEx.c)
 */

__int64 __fastcall NtOpenKeyTransacted(int a1, int a2, int a3, void *Handle)
{
  return NtOpenKeyTransactedEx(a1, a2, a3, 0, Handle);
}
