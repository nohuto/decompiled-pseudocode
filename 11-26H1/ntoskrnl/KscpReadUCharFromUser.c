/*
 * XREFs of KscpReadUCharFromUser @ 0x140C64940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int16 __fastcall KscpReadUCharFromUser(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  return *(unsigned __int8 *)a1;
}
