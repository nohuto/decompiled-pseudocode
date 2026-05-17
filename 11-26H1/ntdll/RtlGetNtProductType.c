/*
 * XREFs of RtlGetNtProductType @ 0x180063CA0
 * Callers:
 *     SwitchedRtlGetVersion @ 0x180062FA0 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x1800638F0 (RtlGetVersion.c)
 *     RtlpHpHeapCreate @ 0x18008DE64 (RtlpHpHeapCreate.c)
 *     RtlpHpInitializePerfPolicies @ 0x1800D5198 (RtlpHpInitializePerfPolicies.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x1800D5C0C (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlRestoreBootStatusDefaults @ 0x18010C090 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800A4ACC (RtlpGetNtProductTypeFromRegistry.c)
 */

char __fastcall RtlGetNtProductType(_DWORD *a1)
{
  _DWORD *SharedData; // rcx

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    *a1 = *((_DWORD *)NtCurrentPeb()->SharedData + 4);
    return 1;
  }
  else
  {
    if ( MEMORY[0x7FFE0268] )
    {
      *a1 = MEMORY[0x7FFE0264];
      return 1;
    }
    if ( (int)RtlpGetNtProductTypeFromRegistry(a1) >= 0 )
      return 1;
    *a1 = 1;
    return 0;
  }
}
