/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x1405C72E0
 * Callers:
 *     KiDisplayBlueScreen @ 0x1405EA964 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x140C03FF0 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvAcquireDisplayOwnership(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140E65EE8;
  if ( qword_140E65EE8 )
  {
    result = *(_QWORD *)(qword_140E65EE8 + 8);
    if ( result )
      return guard_dispatch_icall_no_overrides(a1, a2);
  }
  return result;
}
