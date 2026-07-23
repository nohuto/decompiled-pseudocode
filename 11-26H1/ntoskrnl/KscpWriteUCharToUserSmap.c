/*
 * XREFs of KscpWriteUCharToUserSmap @ 0x140C649A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KscpWriteUCharToUserSmap(unsigned __int64 a1, char a2)
{
  __int64 result; // rax

  result = 0x7FFFFFFF0000LL;
  if ( a1 > 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  __asm { stac }
  *(_BYTE *)a1 = a2;
  __asm { clac }
  return result;
}
