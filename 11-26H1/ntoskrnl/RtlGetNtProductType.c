/*
 * XREFs of RtlGetNtProductType @ 0x1404490A0
 * Callers:
 *     KeCapturePersistentThreadState @ 0x140351340 (KeCapturePersistentThreadState.c)
 *     IoFillDumpHeader @ 0x1405C8F58 (IoFillDumpHeader.c)
 *     MmWriteTriageInformation @ 0x1406FB990 (MmWriteTriageInformation.c)
 *     RtlRestoreBootStatusDefaults @ 0x14080B528 (RtlRestoreBootStatusDefaults.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14091B880 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IoCreateDevice @ 0x14091B9C0 (IoCreateDevice.c)
 *     RtlGetVersion @ 0x140A97730 (RtlGetVersion.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140B34528 (RtlpGetNtProductTypeFromRegistry.c)
 */

BOOLEAN __cdecl RtlGetNtProductType(PNT_PRODUCT_TYPE NtProductType)
{
  BOOLEAN v2; // bl
  _NT_PRODUCT_TYPE Flink; // eax

  v2 = 0;
  if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
  {
    Flink = (_NT_PRODUCT_TYPE)PsGetCurrentServerSiloGlobals()[80].Blink[1].Flink;
    goto LABEL_4;
  }
  if ( MEMORY[0xFFFFF78000000268] )
  {
    Flink = MEMORY[0xFFFFF78000000264];
LABEL_4:
    *NtProductType = Flink;
    return 1;
  }
  if ( KeGetCurrentIrql() > 1u || (int)RtlpGetNtProductTypeFromRegistry(NtProductType) < 0 )
  {
    *NtProductType = NtProductWinNt;
    return v2;
  }
  return 1;
}
