/*
 * XREFs of NVMeControllerInitPart3 @ 0x140006E40
 * Callers:
 *     NVMeControllerPowerUp @ 0x1400075D0 (NVMeControllerPowerUp.c)
 *     NVMeHwInitialize @ 0x140012FB0 (NVMeHwInitialize.c)
 *     NVMeHwPassiveInitialize @ 0x140013020 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerReinitialize @ 0x140024B08 (NVMeControllerReinitialize.c)
 * Callees:
 *     NVMeCheckOCPCompliance @ 0x140005D10 (NVMeCheckOCPCompliance.c)
 *     NVMeGetFeatureIdentifiersSupportedLog @ 0x140005F30 (NVMeGetFeatureIdentifiersSupportedLog.c)
 *     NVMeGetSupportedLogPagesLog @ 0x1400060D0 (NVMeGetSupportedLogPagesLog.c)
 *     NVMeEnableThrottling @ 0x1400065B0 (NVMeEnableThrottling.c)
 *     NVMeControllerSetWriteCacheEnable @ 0x1400066C0 (NVMeControllerSetWriteCacheEnable.c)
 *     NVMeControllerStartFailureEventLog @ 0x140007370 (NVMeControllerStartFailureEventLog.c)
 *     NVMeStartAsyncEventCommands @ 0x14000D5D0 (NVMeStartAsyncEventCommands.c)
 *     NVMeGetCommandEffectsLog @ 0x14000DE30 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetTemperatureThreshold @ 0x14000DFE0 (NVMeGetTemperatureThreshold.c)
 *     NVMeConfigAsyncEvent @ 0x140011740 (NVMeConfigAsyncEvent.c)
 *     FillControllerRuntimeLog @ 0x1400124C4 (FillControllerRuntimeLog.c)
 *     NVMeControllerSetHostIdentifier @ 0x14001795C (NVMeControllerSetHostIdentifier.c)
 *     NVMeQueueWorkItem @ 0x14001EC70 (NVMeQueueWorkItem.c)
 *     NVMeGetCloudSSDErrorRecoveryLog @ 0x140025814 (NVMeGetCloudSSDErrorRecoveryLog.c)
 *     NVMeGetControllerInitiatedTelemetry @ 0x140025A3C (NVMeGetControllerInitiatedTelemetry.c)
 *     NVMeGetHealthInfoLog @ 0x140026310 (NVMeGetHealthInfoLog.c)
 *     NVMeSetHostBehaviorSupport @ 0x14002A6F4 (NVMeSetHostBehaviorSupport.c)
 *     NVMeSyncHostTime @ 0x14002ADCC (NVMeSyncHostTime.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 */

char __fastcall NVMeControllerInitPart3(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned int v7; // eax
  bool v8; // zf
  _OWORD v10[5]; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+100h] [rbp-58h]

  v2 = *(_QWORD *)(a1 + 1560);
  memset(v10, 0, sizeof(v10));
  v11 = 0LL;
  NVMeGetCommandEffectsLog();
  if ( !*(_BYTE *)(a1 + 20) )
  {
    NVMeGetSupportedLogPagesLog(a1, a2);
    NVMeGetFeatureIdentifiersSupportedLog(a1, a2);
    NVMeCheckOCPCompliance(a1, a2);
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x2000) != 0
    && (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 76LL) & 0xF) == 2
    && (*(_DWORD *)(a1 + 4064) & 8) == 0 )
  {
    NVMeGetHealthInfoLog(a1, a2);
  }
  if ( (*(_DWORD *)(a1 + 56) & 4) == 0 )
    NVMeGetTemperatureThreshold(a1, a2);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    if ( (*(_DWORD *)(a1 + 12) & 8) == 0 )
      NVMeGetCloudSSDErrorRecoveryLog(a1, a2);
    v5 = *(_QWORD *)(a1 + 3936);
    if ( v5 && *(_DWORD *)(v5 + 4) )
    {
      if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 24), 0xCu) )
      {
        if ( (unsigned int)NVMeGetControllerInitiatedTelemetry(a1) )
          _interlockedbittestandreset((volatile signed __int32 *)(a1 + 24), 0xCu);
        else
          NVMeQueueWorkItem(a1, NVMeCaptureLiveDumpWorkItem, 0LL);
      }
      *(_DWORD *)(a1 + 28) = 24;
      NVMeControllerStartFailureEventLog(a1);
      FillControllerRuntimeLog(a1, v10);
      StorPortNotification(4109LL, a1, 0LL);
      StorPortExtendedFunction(0LL, a1, 528LL, 1701672526LL);
      if ( (*(_BYTE *)(a1 + 21) & 4) != 0 )
        StorPortExtendedFunction(86LL, a1, 0LL, 2LL);
    }
    if ( (*(_BYTE *)(v2 + 261) & 0x48) == 0x48 )
      NVMeSetHostBehaviorSupport(a1);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 520LL) & 0x40) != 0 )
    NVMeSyncHostTime(a1, 0LL);
  NVMeControllerSetWriteCacheEnable(a1);
  NVMeEnableThrottling(a1);
  if ( (*(_BYTE *)(v2 + 520) & 0x20) != 0 )
    NVMeControllerSetHostIdentifier(a1);
  v7 = *(_DWORD *)(a1 + 24) & 0xFFDDFFFF;
  *(_DWORD *)(a1 + 28) = 0;
  v8 = *(_BYTE *)(a1 + 20) == 0;
  *(_DWORD *)(a1 + 24) = v7 | 0x201;
  if ( v8 )
    StorPortExtendedFunction(118LL, a1, NVMeHwRegistryNotify, v6);
  NVMeConfigAsyncEvent(a1, a2);
  NVMeStartAsyncEventCommands(a1);
  return 1;
}
