/*
 * XREFs of KscpReadUShortFromUserSmap @ 0x140C649E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KscpReadUShortFromUserSmap(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( a1 > 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  __asm { stac }
  result = *(unsigned __int16 *)a1;
  __asm { clac }
  return result;
}
