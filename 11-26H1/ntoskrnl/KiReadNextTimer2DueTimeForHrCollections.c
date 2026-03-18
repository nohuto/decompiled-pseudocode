/*
 * XREFs of KiReadNextTimer2DueTimeForHrCollections @ 0x140477330
 * Callers:
 *     KiGetNextTimer2ExpirationDueTime @ 0x1405F7D78 (KiGetNextTimer2ExpirationDueTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReadNextTimer2DueTimeForHrCollections(char a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = qword_140F26C40;
  if ( a1 )
  {
    v2 = qword_140F26C28;
    if ( qword_140F26C40 < (unsigned __int64)qword_140F26C28 )
      return qword_140F26C40;
    return v2;
  }
  return result;
}
