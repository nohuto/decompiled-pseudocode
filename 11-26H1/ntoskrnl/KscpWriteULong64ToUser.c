/*
 * XREFs of KscpWriteULong64ToUser @ 0x140C64B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KscpWriteULong64ToUser(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0x7FFFFFFF0000LL;
  if ( a1 > 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  *(_QWORD *)a1 = a2;
  return result;
}
