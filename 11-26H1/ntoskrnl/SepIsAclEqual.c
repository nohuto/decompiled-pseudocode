/*
 * XREFs of SepIsAclEqual @ 0x140AE29D8
 * Callers:
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140A6173C (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140AE2774 (SeTokenDefaultDaclChangedAuditAlarm.c)
 * Callees:
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
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
