/*
 * XREFs of GreMarkUndeletableBrush @ 0x14010C360
 * Callers:
 *     SetSysColor @ 0x1400AADC8 (SetSysColor.c)
 * Callees:
 *     HmgMarkUndeletable @ 0x14010C3A0 (HmgMarkUndeletable.c)
 */

__int64 __fastcall GreMarkUndeletableBrush(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    LOBYTE(a2) = 16;
    return HmgMarkUndeletable(a1, a2);
  }
  return result;
}
