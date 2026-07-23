/*
 * XREFs of KscpCopyToUserSmap @ 0x140C64C40
 * Callers:
 *     <none>
 * Callees:
 *     KscpMemcpy @ 0x140C64E80 (KscpMemcpy.c)
 */

__int64 __fastcall KscpCopyToUserSmap(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 > 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  __asm { stac }
  result = KscpMemcpy(a1, a2);
  __asm { clac }
  return result;
}
