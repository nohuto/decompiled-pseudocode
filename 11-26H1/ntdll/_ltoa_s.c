/*
 * XREFs of _ltoa_s @ 0x1801326F0
 * Callers:
 *     <none>
 * Callees:
 *     xtoa_s @ 0x18013289C (xtoa_s.c)
 */

errno_t __cdecl ltoa_s(int Value, char *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Value < 0;
  return xtoa_s(Value, (_DWORD)Buffer, BufferCount, Radix, v4);
}
