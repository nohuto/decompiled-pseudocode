/*
 * XREFs of KscpReadUCharFromUserSmap @ 0x140C64960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int16 __fastcall KscpReadUCharFromUserSmap(unsigned __int64 a1)
{
  __int16 result; // ax

  if ( a1 > 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  __asm { stac }
  result = *(unsigned __int8 *)a1;
  __asm { clac }
  return result;
}
