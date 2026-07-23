/*
 * XREFs of RtlGetNtProductType @ 0x1800840F0
 * Callers:
 *     RtlpQueryPhysicalMemoryPolicy @ 0x18006CF94 (RtlpQueryPhysicalMemoryPolicy.c)
 *     SwitchedRtlGetVersion @ 0x1800833F0 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x180083D40 (RtlGetVersion.c)
 *     RtlpHpInitializePerfPolicies @ 0x1800D10F0 (RtlpHpInitializePerfPolicies.c)
 *     RtlpHpHeapCreate @ 0x180104964 (RtlpHpHeapCreate.c)
 *     RtlRestoreBootStatusDefaults @ 0x18010BBE0 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800A3BFC (RtlpGetNtProductTypeFromRegistry.c)
 */

BOOLEAN __cdecl RtlGetNtProductType(PNT_PRODUCT_TYPE NtProductType)
{
  _DWORD *SharedData; // rcx

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    *NtProductType = *((PNT_PRODUCT_TYPE)NtCurrentPeb()->SharedData + 4);
    return 1;
  }
  else
  {
    if ( MEMORY[0x7FFE0268] )
    {
      *NtProductType = MEMORY[0x7FFE0264];
      return 1;
    }
    if ( (int)RtlpGetNtProductTypeFromRegistry(NtProductType) >= 0 )
      return 1;
    *NtProductType = NtProductWinNt;
    return 0;
  }
}
