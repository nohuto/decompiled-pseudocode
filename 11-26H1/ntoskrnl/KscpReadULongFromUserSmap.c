/*
 * XREFs of KscpReadULongFromUserSmap @ 0x140C64AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KscpReadULongFromUserSmap(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( a1 > 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  __asm { stac }
  result = *(unsigned int *)a1;
  __asm { clac }
  return result;
}
