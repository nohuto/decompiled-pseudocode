/*
 * XREFs of InbvIndicateProgress @ 0x140CBA0E4
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140D04488 (IopInitializeSystemDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140D08E68 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvIndicateProgress(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140E65CE0;
  if ( qword_140E65CE0 )
  {
    result = *(_QWORD *)(qword_140E65CE0 + 120);
    if ( result )
      return guard_dispatch_icall_no_overrides(a1, a2);
  }
  return result;
}
