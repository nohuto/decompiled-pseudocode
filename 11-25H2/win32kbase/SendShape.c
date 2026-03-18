/*
 * XREFs of SendShape @ 0x140216B30
 * Callers:
 *     <none>
 * Callees:
 *     SendMessageTo @ 0x1400675F0 (SendMessageTo.c)
 */

__int64 __fastcall SendShape(_DWORD *a1)
{
  *a1 = 6;
  return SendMessageTo(0LL, a1, 32LL);
}
