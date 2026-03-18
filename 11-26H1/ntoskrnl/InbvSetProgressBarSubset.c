/*
 * XREFs of InbvSetProgressBarSubset @ 0x140530C00
 * Callers:
 *     Phase1Initialization @ 0x14077FEA0 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvSetProgressBarSubset(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140E65CE0;
  if ( qword_140E65CE0 )
  {
    result = *(_QWORD *)(qword_140E65CE0 + 112);
    if ( result )
      return guard_dispatch_icall_no_overrides(a1, a2);
  }
  return result;
}
