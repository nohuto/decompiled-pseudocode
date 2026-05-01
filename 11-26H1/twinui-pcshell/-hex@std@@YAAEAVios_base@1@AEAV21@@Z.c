/*
 * XREFs of ?hex@std@@YAAEAVios_base@1@AEAV21@@Z @ 0x1805052F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct std::ios_base *__fastcall std::hex(struct std::ios_base *a1)
{
  struct std::ios_base *result; // rax

  *((_DWORD *)a1 + 6) &= 0xFFFFF9FF;
  result = a1;
  *((_DWORD *)a1 + 6) |= 0x800u;
  return result;
}
