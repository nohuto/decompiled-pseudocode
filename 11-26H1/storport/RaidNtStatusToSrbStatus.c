/*
 * XREFs of RaidNtStatusToSrbStatus @ 0x140003A14
 * Callers:
 *     RaDriverScsiIrp @ 0x140003DF0 (RaDriverScsiIrp.c)
 *     RaidUnitProcessBusyRequest @ 0x140012A1C (RaidUnitProcessBusyRequest.c)
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 *     RaidUnitSubmitResetRequest @ 0x14004CED4 (RaidUnitSubmitResetRequest.c)
 *     RaUnitStartResetIo @ 0x1400A2224 (RaUnitStartResetIo.c)
 *     NvmeNamespaceExecuteNvmeSrbComplete @ 0x1401044F0 (NvmeNamespaceExecuteNvmeSrbComplete.c)
 *     NvmeNamespaceExecuteScsiSrbComplete @ 0x140104F50 (NvmeNamespaceExecuteScsiSrbComplete.c)
 *     NvmeNamespaceExecuteScsiSrbEx @ 0x14010569C (NvmeNamespaceExecuteScsiSrbEx.c)
 *     NvmeNamespaceProcessRequest @ 0x140109418 (NvmeNamespaceProcessRequest.c)
 *     NvmeNamespaceScsiIrp @ 0x14010ECE8 (NvmeNamespaceScsiIrp.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidNtStatusToSrbStatus(int a1)
{
  char result; // al

  if ( a1 > -1073741667 )
  {
    switch ( a1 )
    {
      case -1073741643:
        return 9;
      case -1073741632:
        return 8;
      case -1073741300:
        return 37;
      case -1073740682:
        return 24;
      default:
        result = 4;
        if ( a1 >= 0 )
          return 1;
        break;
    }
  }
  else
  {
    switch ( a1 )
    {
      case -1073741667:
        return 10;
      case -2147483643:
        return 18;
      case -2147483631:
        return 5;
      case -1073741808:
        return 34;
      case -1073741790:
        return 23;
      default:
        result = 4;
        if ( a1 == -1073741670 )
          return 48;
        break;
    }
  }
  return result;
}
