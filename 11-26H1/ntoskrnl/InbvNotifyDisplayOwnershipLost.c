/*
 * XREFs of InbvNotifyDisplayOwnershipLost @ 0x1405C7570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvNotifyDisplayOwnershipLost(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140E65EE8;
  if ( qword_140E65EE8 )
  {
    result = *(_QWORD *)qword_140E65EE8;
    if ( *(_QWORD *)qword_140E65EE8 )
      return guard_dispatch_icall_no_overrides(a1, a2);
  }
  return result;
}
