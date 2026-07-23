/*
 * XREFs of rand @ 0x140539B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_140E0A600 = 214013 * dword_140E0A600 + 2531011;
  return (dword_140E0A600 >> 16) & 0x7FFF;
}
