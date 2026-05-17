/*
 * XREFs of _controlfp @ 0x180130270
 * Callers:
 *     atan @ 0x1801295F0 (atan.c)
 *     atan2 @ 0x180129860 (atan2.c)
 *     cos @ 0x18012A350 (cos.c)
 *     sin @ 0x18012A6F0 (sin.c)
 *     tan @ 0x18012D300 (tan.c)
 * Callees:
 *     <none>
 */

unsigned int __cdecl controlfp(unsigned int NewValue, unsigned int Mask)
{
  return control87(NewValue, Mask & 0xFFF7FFFF);
}
