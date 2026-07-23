/*
 * XREFs of KscpReadULongFromUser @ 0x140C64A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KscpReadULongFromUser(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  return *(unsigned int *)a1;
}
