/*
 * XREFs of SepIsSidEqual @ 0x1408169B0
 * Callers:
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1409F966C (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     RtlEqualSid @ 0x1402604A0 (RtlEqualSid.c)
 */

char __fastcall SepIsSidEqual(void *a1, void *a2)
{
  if ( a1 )
  {
    if ( !a2 || !RtlEqualSid(a1, a2) )
      return 0;
  }
  else if ( a2 )
  {
    return 0;
  }
  return 1;
}
