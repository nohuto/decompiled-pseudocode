/*
 * XREFs of KscpWriteULongToUser @ 0x140C64AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KscpWriteULongToUser(unsigned __int64 a1, int a2)
{
  __int64 result; // rax

  result = 0x7FFFFFFF0000LL;
  if ( a1 > 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  *(_DWORD *)a1 = a2;
  return result;
}
