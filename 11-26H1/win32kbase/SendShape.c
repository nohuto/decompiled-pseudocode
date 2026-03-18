/*
 * XREFs of SendShape @ 0x14021C060
 * Callers:
 *     <none>
 * Callees:
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 */

__int64 __fastcall SendShape(_DWORD *a1)
{
  *a1 = 6;
  return SendMessageTo(0, (int)a1, 32);
}
