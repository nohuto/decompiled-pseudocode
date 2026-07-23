/*
 * XREFs of InbvIndicateProgress @ 0x140CC0124
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140D0A758 (IopInitializeSystemDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140D0F138 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvIndicateProgress(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140E65EE8;
  if ( qword_140E65EE8 )
  {
    result = *(_QWORD *)(qword_140E65EE8 + 120);
    if ( result )
      return guard_dispatch_icall_no_overrides(a1, a2);
  }
  return result;
}
