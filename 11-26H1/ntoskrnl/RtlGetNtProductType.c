/*
 * XREFs of RtlGetNtProductType @ 0x140450F70
 * Callers:
 *     KeCapturePersistentThreadState @ 0x14034F2C0 (KeCapturePersistentThreadState.c)
 *     IoFillDumpHeader @ 0x1405C6688 (IoFillDumpHeader.c)
 *     MmWriteTriageInformation @ 0x1406F6D20 (MmWriteTriageInformation.c)
 *     RtlRestoreBootStatusDefaults @ 0x140805A88 (RtlRestoreBootStatusDefaults.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1409FEA80 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IoCreateDevice @ 0x1409FEBC0 (IoCreateDevice.c)
 *     RtlGetVersion @ 0x140A92BE0 (RtlGetVersion.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140B320D4 (RtlpGetNtProductTypeFromRegistry.c)
 */

char __fastcall RtlGetNtProductType(_DWORD *a1)
{
  char v2; // bl
  int Flink; // eax

  v2 = 0;
  if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
  {
    Flink = (int)PsGetCurrentServerSiloGlobals()[80].Blink[1].Flink;
    goto LABEL_4;
  }
  if ( MEMORY[0xFFFFF78000000268] )
  {
    Flink = MEMORY[0xFFFFF78000000264];
LABEL_4:
    *a1 = Flink;
    return 1;
  }
  if ( KeGetCurrentIrql() > 1u || (int)RtlpGetNtProductTypeFromRegistry(a1) < 0 )
  {
    *a1 = 1;
    return v2;
  }
  return 1;
}
