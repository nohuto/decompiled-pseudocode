/*
 * XREFs of _controlfp @ 0x18012FFE0
 * Callers:
 *     atan @ 0x180129360 (atan.c)
 *     atan2 @ 0x1801295D0 (atan2.c)
 *     cos @ 0x18012A0C0 (cos.c)
 *     sin @ 0x18012A460 (sin.c)
 *     tan @ 0x18012D070 (tan.c)
 * Callees:
 *     <none>
 */

unsigned int __cdecl controlfp(unsigned int NewValue, unsigned int Mask)
{
  return control87(NewValue, Mask & 0xFFF7FFFF);
}
