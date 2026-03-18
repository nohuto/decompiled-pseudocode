/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x1405C4A70
 * Callers:
 *     KiDisplayBlueScreen @ 0x1405E7FF4 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x140BFDFA0 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvAcquireDisplayOwnership(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140E65CE0;
  if ( qword_140E65CE0 )
  {
    result = *(_QWORD *)(qword_140E65CE0 + 8);
    if ( result )
      return guard_dispatch_icall_no_overrides(a1, a2);
  }
  return result;
}
