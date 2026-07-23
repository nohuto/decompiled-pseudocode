/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x140480B10
 * Callers:
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1407A487C (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1407F5658 (PspTerminateSiloSubsystemProcesses.c)
 *     NtQueryInformationJobObject @ 0x1407F8B10 (NtQueryInformationJobObject.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1408165B4 (SepCopyClientTokenAndSetSilo.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     PiUEventApplyAdditionalFilters @ 0x14095B380 (PiUEventApplyAdditionalFilters.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14095B760 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14095BC10 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14095C2A0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     IoRegisterPlugPlayNotification @ 0x1409AAA90 (IoRegisterPlugPlayNotification.c)
 *     PsIsServiceSession @ 0x1409F6BDC (PsIsServiceSession.c)
 *     PnpNotifyDeviceClassChange @ 0x140A19910 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x140A1A56C (PnpNotifyTargetDeviceChange.c)
 *     SeGetTokenDeviceMap @ 0x140A21DB8 (SeGetTokenDeviceMap.c)
 *     SeQuerySessionIdTokenEx @ 0x140A73190 (SeQuerySessionIdTokenEx.c)
 *     CmpDoesProcessBelongToServiceSession @ 0x140AADF2C (CmpDoesProcessBelongToServiceSession.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140AB430C (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140B255E0 (SepCleanupLUIDDeviceMapDirectory.c)
 *     DbgkpSendErrorMessage @ 0x140B5CE74 (DbgkpSendErrorMessage.c)
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
