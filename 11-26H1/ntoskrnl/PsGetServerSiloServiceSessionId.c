/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x140487140
 * Callers:
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1407A1D3C (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1407EFAF8 (PspTerminateSiloSubsystemProcesses.c)
 *     NtQueryInformationJobObject @ 0x1407F2FB0 (NtQueryInformationJobObject.c)
 *     SepCopyClientTokenAndSetSilo @ 0x140810B24 (SepCopyClientTokenAndSetSilo.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IoRegisterPlugPlayNotification @ 0x140908ED0 (IoRegisterPlugPlayNotification.c)
 *     DbgkpSendErrorMessage @ 0x140954DF4 (DbgkpSendErrorMessage.c)
 *     PiUEventApplyAdditionalFilters @ 0x14099A920 (PiUEventApplyAdditionalFilters.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14099AD00 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14099B1B0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14099B840 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PnpNotifyDeviceClassChange @ 0x1409DC660 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x1409DD2BC (PnpNotifyTargetDeviceChange.c)
 *     SeGetTokenDeviceMap @ 0x140A18788 (SeGetTokenDeviceMap.c)
 *     PsIsServiceSession @ 0x140A3B080 (PsIsServiceSession.c)
 *     SeQuerySessionIdTokenEx @ 0x140A661C0 (SeQuerySessionIdTokenEx.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x140AB02DC (CmpDoesProcessBelongToServiceSession.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140AB2F6C (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140B231E0 (SepCleanupLUIDDeviceMapDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloServiceSessionId(__int64 a1)
{
  unsigned int **v1; // rax

  v1 = (unsigned int **)&PspHostSiloGlobals;
  if ( a1 )
    v1 = *(unsigned int ***)(a1 + 1504);
  return *v1[161];
}
