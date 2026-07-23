/*
 * XREFs of KscpReadULong64FromUser @ 0x140C64B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KscpReadULong64FromUser(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  return *(_QWORD *)a1;
}
