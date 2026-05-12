/*
 * XREFs of WPP_SF_d @ 0x14005C17C
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 *     RaidBusEnumeratorVisitUnit @ 0x140009CE4 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x14000CA30 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x14001A3CC (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidStallDeviceQueue @ 0x140028300 (RaidStallDeviceQueue.c)
 *     RaidLunQueueWaitForQuiescence @ 0x14002DD9C (RaidLunQueueWaitForQuiescence.c)
 *     RaidAdapterHack @ 0x1400476EC (RaidAdapterHack.c)
 *     StorPortReadRegistryULongKey @ 0x140052F18 (StorPortReadRegistryULongKey.c)
 *     RaidAdapterMapUsermodeNvmeDoorbellAddress @ 0x140063F88 (RaidAdapterMapUsermodeNvmeDoorbellAddress.c)
 *     AddNvmeIceInterfaceToList @ 0x14007067C (AddNvmeIceInterfaceToList.c)
 *     StorPortAdapterPoFxWaitWakeCompletion @ 0x140081BA0 (StorPortAdapterPoFxWaitWakeCompletion.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009F164 (RaUnitScsiGetDumpPointersIoctl.c)
 *     TcglibAssignNamespaceLocking @ 0x1401308D4 (TcglibAssignNamespaceLocking.c)
 *     TcglibConfigureLockingSpEx @ 0x140130B4C (TcglibConfigureLockingSpEx.c)
 *     TcglibDeassignNamespaceLocking @ 0x140130CEC (TcglibDeassignNamespaceLocking.c)
 *     TcglibEraseBand @ 0x140130ED0 (TcglibEraseBand.c)
 *     TcglibGetBandMetadata @ 0x140130FE4 (TcglibGetBandMetadata.c)
 *     TcglibRevertLockingSpEx @ 0x14013130C (TcglibRevertLockingSpEx.c)
 *     TcglibSetAdmin1Pin @ 0x14013148C (TcglibSetAdmin1Pin.c)
 *     TcglibSetBand @ 0x1401315C4 (TcglibSetBand.c)
 *     TcglibSetBandLocationEx @ 0x1401317C0 (TcglibSetBandLocationEx.c)
 *     TcglibSetBandMetadata @ 0x1401319A4 (TcglibSetBandMetadata.c)
 *     TcglibSetBandPin @ 0x140131AF8 (TcglibSetBandPin.c)
 *     ParseAssignNamespace @ 0x1401323D0 (ParseAssignNamespace.c)
 *     ParseBandMetadata @ 0x140132530 (ParseBandMetadata.c)
 *     TcglibpGetCapabilities @ 0x1401349AC (TcglibpGetCapabilities.c)
 *     ParseSyncSessionData @ 0x140135C90 (ParseSyncSessionData.c)
 *     ParseTPerProperties @ 0x140135DF0 (ParseTPerProperties.c)
 *     TcglibpCloseSession @ 0x140136434 (TcglibpCloseSession.c)
 *     ParseNamedData @ 0x140136FDC (ParseNamedData.c)
 *     ParseTcgPayloadStatus @ 0x14013729C (ParseTcgPayloadStatus.c)
 *     ParseTcgTransactionStatus @ 0x1401374CC (ParseTcgTransactionStatus.c)
 *     ParseToken @ 0x1401375C4 (ParseToken.c)
 *     ParseTokenData @ 0x1401378B0 (ParseTokenData.c)
 *     StorpRegisterShim @ 0x140190648 (StorpRegisterShim.c)
 *     StorpUnregisterShim @ 0x140190750 (StorpUnregisterShim.c)
 *     RaWmiDispatchIrp @ 0x1401B7718 (RaWmiDispatchIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_SF_d(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           0LL);
}
