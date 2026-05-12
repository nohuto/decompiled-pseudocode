/*
 * XREFs of BuildGetLogPageCommand @ 0x1400C59A4
 * Callers:
 *     NvmeControllerGetChangedNamespaceListLog @ 0x1400C5C50 (NvmeControllerGetChangedNamespaceListLog.c)
 *     NvmeControllerGetCloudSSDErrorRecoveryLog @ 0x1400CDA54 (NvmeControllerGetCloudSSDErrorRecoveryLog.c)
 *     NvmeControllerGetCloudSSDLog @ 0x1400CDD20 (NvmeControllerGetCloudSSDLog.c)
 *     NvmeControllerGetCommandEffectsLog @ 0x1400CDF84 (NvmeControllerGetCommandEffectsLog.c)
 *     NvmeControllerGetFeatureIdentifiersSupportedLog @ 0x1400CE1CC (NvmeControllerGetFeatureIdentifiersSupportedLog.c)
 *     NvmeControllerGetHealthInfoLog @ 0x1400CE460 (NvmeControllerGetHealthInfoLog.c)
 *     NvmeControllerGetSupportedLogPagesLog @ 0x1400CE71C (NvmeControllerGetSupportedLogPagesLog.c)
 *     NvmeAdapterFirmwareGetInfoIoctl @ 0x1400D7D50 (NvmeAdapterFirmwareGetInfoIoctl.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x1400E30C4 (BuildGetLogPageCommandForTelemetryLog.c)
 *     NvmeControllerAsyncEventCommandCompletion @ 0x1400F06B0 (NvmeControllerAsyncEventCommandCompletion.c)
 *     NvmeControllerCheckOCPCompliance @ 0x1400F15A4 (NvmeControllerCheckOCPCompliance.c)
 *     NvmeNamespaceReinitializeMediaRecoverWorker @ 0x14010CBE0 (NvmeNamespaceReinitializeMediaRecoverWorker.c)
 *     NvmeNamespaceStorMQFirmwareGetInfoIoctl @ 0x140113B00 (NvmeNamespaceStorMQFirmwareGetInfoIoctl.c)
 *     NvmeQueryProtocolInfoCompletion @ 0x14011FFE0 (NvmeQueryProtocolInfoCompletion.c)
 *     NvmeQueryProtocolInfoLogPageData @ 0x140121494 (NvmeQueryProtocolInfoLogPageData.c)
 *     NvmeAdapterGetTemperatureProperty @ 0x14019D994 (NvmeAdapterGetTemperatureProperty.c)
 *     NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl @ 0x1401AAF40 (NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl.c)
 * Callees:
 *     SetPrpFromBuffer @ 0x1400C6E88 (SetPrpFromBuffer.c)
 */

char __fastcall BuildGetLogPageCommand(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int16 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // edi
  int v18; // eax

  v10 = *(_QWORD *)(a1 + 592);
  v11 = a4;
  if ( (unsigned __int8)(a3 + 0x80) <= 1u
    || (unsigned __int8)a3 <= 9u && (v14 = 954, _bittest(&v14, a3))
    || (unsigned __int8)(a3 + 64) <= 9u && (v15 = 823, _bittest(&v15, a3 + 64)) )
  {
    a6 = -1;
  }
  *(_BYTE *)(a2 + 40) = a3;
  v16 = *(_DWORD *)(a2 + 40) & 0xFFFF7FFF;
  *(_DWORD *)(a2 + 4) = a6;
  v17 = a4 >> 2;
  *(_BYTE *)a2 = 2;
  *(_DWORD *)(a2 + 40) = v16 ^ (v16 ^ (((a4 >> 2) - 1) << 16)) & 0xFFF0000;
  v18 = SetPrpFromBuffer(v16, a2, a5, a4, a9, a10);
  if ( v18 )
  {
    *(_WORD *)(a2 + 46) = a8;
    if ( (*(_BYTE *)(v10 + 261) & 4) != 0 )
    {
      *(_WORD *)(a2 + 42) = v17 - 1;
      *(_WORD *)(a2 + 44) = ((unsigned int)(v11 >> 2) - 1) >> 16;
      *(_DWORD *)(a2 + 52) = HIDWORD(a7);
      *(_DWORD *)(a2 + 48) = a7 & 0xFFFFFFFC;
    }
    LOBYTE(v18) = 1;
  }
  return v18;
}
