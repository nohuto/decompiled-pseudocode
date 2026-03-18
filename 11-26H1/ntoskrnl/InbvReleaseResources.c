/*
 * XREFs of InbvReleaseResources @ 0x1405C4D5C
 * Callers:
 *     DisplayBootBitmap @ 0x14057622C (DisplayBootBitmap.c)
 *     InbvRotateGuiBootDisplay @ 0x1405C4F80 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvReleaseResources(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140E65CE0;
  if ( qword_140E65CE0 )
  {
    result = *(_QWORD *)(qword_140E65CE0 + 168);
    if ( result )
      return guard_dispatch_icall_no_overrides(a1, a2);
  }
  return result;
}
