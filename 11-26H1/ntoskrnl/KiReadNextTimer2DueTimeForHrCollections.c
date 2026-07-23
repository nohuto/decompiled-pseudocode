/*
 * XREFs of KiReadNextTimer2DueTimeForHrCollections @ 0x140470AB0
 * Callers:
 *     KiGetNextTimer2ExpirationDueTime @ 0x1405FA798 (KiGetNextTimer2ExpirationDueTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReadNextTimer2DueTimeForHrCollections(char a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = qword_140F26DE0;
  if ( a1 )
  {
    v2 = qword_140F26DC8;
    if ( qword_140F26DE0 < (unsigned __int64)qword_140F26DC8 )
      return qword_140F26DE0;
    return v2;
  }
  return result;
}
