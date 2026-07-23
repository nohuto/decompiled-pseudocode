/*
 * XREFs of KscpWriteUShortToUserSmap @ 0x140C64A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KscpWriteUShortToUserSmap(unsigned __int64 a1, __int16 a2)
{
  __int64 result; // rax

  result = 0x7FFFFFFF0000LL;
  if ( a1 > 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  __asm { stac }
  *(_WORD *)a1 = a2;
  __asm { clac }
  return result;
}
