/*
 * XREFs of InbvNotifyDisplayOwnershipLost @ 0x1405C4D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvNotifyDisplayOwnershipLost(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140E65CE0;
  if ( qword_140E65CE0 )
  {
    result = *(_QWORD *)qword_140E65CE0;
    if ( *(_QWORD *)qword_140E65CE0 )
      return guard_dispatch_icall_no_overrides(a1, a2);
  }
  return result;
}
