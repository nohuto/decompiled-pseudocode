/*
 * XREFs of OSWriteRegValue @ 0x1400C9238
 * Callers:
 *     ACPIRootPowerCallBack @ 0x140043150 (ACPIRootPowerCallBack.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1400B843C (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIWriteEmcaSupportToRegistry @ 0x1400BA4C0 (ACPIWriteEmcaSupportToRegistry.c)
 *     ACPIWriteStrictS4SupportToRegistry @ 0x1400BA544 (ACPIWriteStrictS4SupportToRegistry.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1400C8FDC (ACPIWriteOscSupportToRegistry.c)
 *     ACPIRootWorker @ 0x1400C90E0 (ACPIRootWorker.c)
 *     ACPIRegDumpAcpiTable @ 0x1400DE28C (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1400385BC (WPP_RECORDER_SF_L.c)
 */

__int64 __fastcall OSWriteRegValue(PCSZ SourceString, HANDLE KeyHandle, PVOID Data, ULONG DataSize)
{
  NTSTATUS v7; // eax
  int v8; // edx
  unsigned int v9; // ebx
  NTSTATUS v10; // eax
  int v11; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  struct _STRING SourceStringa; // [rsp+40h] [rbp-18h] BYREF

  SourceStringa = 0LL;
  DestinationString = 0LL;
  RtlInitAnsiString(&SourceStringa, SourceString);
  v7 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceStringa, 1u);
  v9 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_L(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        22,
        28,
        (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
        v7);
    }
  }
  else
  {
    v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, Data, DataSize);
    v9 = v10;
    if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_L(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        11,
        29,
        (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
        v10);
    }
    RtlFreeUnicodeString(&DestinationString);
  }
  return v9;
}
