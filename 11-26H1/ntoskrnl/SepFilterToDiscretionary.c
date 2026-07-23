/*
 * XREFs of SepFilterToDiscretionary @ 0x140445960
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
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
