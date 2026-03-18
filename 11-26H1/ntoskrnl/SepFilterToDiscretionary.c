/*
 * XREFs of SepFilterToDiscretionary @ 0x14044D830
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x1409F55D0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepFilterToDiscretionary(_DWORD *a1, int a2)
{
  __int64 result; // rax

  result = 3221225506LL;
  if ( (a2 & 0xFDFFFFFF & *a1) == (a2 & 0xFDFFFFFF) )
    return 0LL;
  return result;
}
