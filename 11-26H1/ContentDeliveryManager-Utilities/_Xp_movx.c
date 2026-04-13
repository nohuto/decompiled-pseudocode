/*
 * XREFs of _Xp_movx @ 0x18000D768
 * Callers:
 *     _Dtento @ 0x18000DBF4 (_Dtento.c)
 *     _LDtento @ 0x18000E6E8 (_LDtento.c)
 * Callees:
 *     memcpy_0 @ 0x180021CF6 (memcpy_0.c)
 */

void *__fastcall Xp_movx(void *a1, int a2, const void *a3)
{
  memcpy_0(a1, a3, 8LL * a2);
  return a1;
}
