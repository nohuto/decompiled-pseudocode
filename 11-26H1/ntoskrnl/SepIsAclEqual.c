/*
 * XREFs of SepIsAclEqual @ 0x1409F9158
 * Callers:
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1409F8EF4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1409F966C (SeSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 */

char __fastcall SepIsAclEqual(unsigned __int16 *a1, _WORD *a2)
{
  SIZE_T v2; // rbx

  if ( a1 )
  {
    if ( a2 )
    {
      if ( a1[1] == a2[1] )
      {
        v2 = a1[1];
        if ( RtlCompareMemory(a1, a2, v2) == v2 )
          return 1;
      }
    }
  }
  else if ( !a2 )
  {
    return 1;
  }
  return 0;
}
