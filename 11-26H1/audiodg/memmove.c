/*
 * XREFs of memmove @ 0x1400ADF04
 * Callers:
 *     sub_14000C448 @ 0x14000C448 (sub_14000C448.c)
 *     sub_14000C544 @ 0x14000C544 (sub_14000C544.c)
 *     sub_14000D7A4 @ 0x14000D7A4 (sub_14000D7A4.c)
 *     sub_1400205E0 @ 0x1400205E0 (sub_1400205E0.c)
 *     sub_140031B40 @ 0x140031B40 (sub_140031B40.c)
 *     sub_1400478F8 @ 0x1400478F8 (sub_1400478F8.c)
 *     sub_140048584 @ 0x140048584 (sub_140048584.c)
 *     sub_14005A1FC @ 0x14005A1FC (sub_14005A1FC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  return __imp_memmove(a1, Src, Size);
}
