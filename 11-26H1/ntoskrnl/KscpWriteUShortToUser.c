/*
 * XREFs of KscpWriteUShortToUser @ 0x140C64A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KscpWriteUShortToUser(unsigned __int64 a1, __int16 a2)
{
  __int64 result; // rax

  result = 0x7FFFFFFF0000LL;
  if ( a1 > 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  *(_WORD *)a1 = a2;
  return result;
}
