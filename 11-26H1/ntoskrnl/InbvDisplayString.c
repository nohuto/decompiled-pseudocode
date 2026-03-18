/*
 * XREFs of InbvDisplayString @ 0x1405C4BF0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvDisplayString(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( !byte_140E65CE8 )
    return 0;
  if ( qword_140E65CD8 )
  {
    guard_dispatch_icall_no_overrides(&v3, a2);
    a1 = v3;
  }
  if ( qword_140E65CE0 && *(_QWORD *)(qword_140E65CE0 + 40) )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 0;
}
