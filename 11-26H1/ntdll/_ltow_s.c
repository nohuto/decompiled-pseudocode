/*
 * XREFs of _ltow_s @ 0x180132CD0
 * Callers:
 *     <none>
 * Callees:
 *     xtow_s @ 0x180132E84 (xtow_s.c)
 */

errno_t __cdecl ltow_s(int Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Value < 0;
  return xtow_s(Value, (_DWORD)Buffer, BufferCount, Radix, v4);
}
