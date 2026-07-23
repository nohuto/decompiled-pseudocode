/*
 * XREFs of PpmPerfQueryProcMeasurementValues @ 0x140B26120
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPerfQueryProcMeasurementValues(unsigned int a1, __int64 a2)
{
  unsigned int v3; // ecx
  PBOOLEAN v5; // rax

  if ( a1 )
  {
    v5 = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
    v3 = -1073741822;
    while ( v5 != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) )
    {
      if ( *((_QWORD *)v5 + 55) )
        return (unsigned int)guard_dispatch_icall_no_overrides(a1, a2);
      v5 = *(PBOOLEAN *)v5;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
