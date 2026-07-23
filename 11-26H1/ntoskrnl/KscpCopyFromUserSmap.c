/*
 * XREFs of KscpCopyFromUserSmap @ 0x140C64BE0
 * Callers:
 *     <none>
 * Callees:
 *     KscpMemcpy @ 0x140C64E80 (KscpMemcpy.c)
 */

__int64 __fastcall KscpCopyFromUserSmap(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax

  if ( a2 > 0x7FFFFFFF0000LL )
    a2 = 0x7FFFFFFF0000LL;
  __asm { stac }
  result = KscpMemcpy(a1, a2);
  __asm { clac }
  return result;
}
