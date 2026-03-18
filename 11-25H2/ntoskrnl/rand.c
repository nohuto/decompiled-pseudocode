/*
 * XREFs of rand @ 0x1404FCDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_140E0A4C0 = 214013 * dword_140E0A4C0 + 2531011;
  return (dword_140E0A4C0 >> 16) & 0x7FFF;
}
