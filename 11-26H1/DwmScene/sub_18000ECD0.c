/*
 * XREFs of sub_18000ECD0 @ 0x18000ECD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011338 @ 0x180011338 (sub_180011338.c)
 */

DWORD __fastcall sub_18000ECD0(DWORD dwMessageId, LPWSTR lpBuffer, DWORD nSize)
{
  const void *v6; // rax

  v6 = (const void *)sub_180011338();
  return FormatMessageW(0x1A00u, v6, dwMessageId, 0x400u, lpBuffer, nSize, 0LL);
}
