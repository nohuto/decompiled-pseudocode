/*
 * XREFs of KscpReadUShortFromUser @ 0x140C649C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KscpReadUShortFromUser(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  return *(unsigned __int16 *)a1;
}
