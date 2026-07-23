/*
 * XREFs of KscpWriteULongToUserSmap @ 0x140C64AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KscpWriteULongToUserSmap(unsigned __int64 a1, int a2)
{
  __int64 result; // rax

  result = 0x7FFFFFFF0000LL;
  if ( a1 > 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  __asm { stac }
  *(_DWORD *)a1 = a2;
  __asm { clac }
  return result;
}
