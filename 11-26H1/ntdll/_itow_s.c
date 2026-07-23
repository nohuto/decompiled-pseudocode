/*
 * XREFs of _itow_s @ 0x180132A00
 * Callers:
 *     RtlpFindRegTziForCurrentYear @ 0x1800FFCFC (RtlpFindRegTziForCurrentYear.c)
 *     LdrpMUIEtwOutput @ 0x180112D28 (LdrpMUIEtwOutput.c)
 * Callees:
 *     xtow_s @ 0x180132BF4 (xtow_s.c)
 */

errno_t __cdecl itow_s(int Value, wchar_t *Buffer, size_t BufferCount, int Radix)
{
  int v4; // eax
  int v6; // r9d

  v4 = 0;
  v6 = 10;
  if ( Radix == 10 && Value < 0 )
    v4 = 1;
  else
    v6 = Radix;
  return xtow_s(Value, (_DWORD)Buffer, BufferCount, v6, v4);
}
