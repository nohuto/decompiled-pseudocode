/*
 * XREFs of OSCreateHandle @ 0x1400C9370
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

__int64 __fastcall OSCreateHandle(PCSZ SourceString, void *a2, void **a3)
{
  int v5; // edx
  NTSTATUS v6; // ebx
  int v8; // r9d
  int v9; // r8d
  struct _UNICODE_STRING UnicodeString; // [rsp+48h] [rbp+7h] BYREF
  struct _STRING DestinationString; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  RtlInitAnsiString(&DestinationString, SourceString);
  v6 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 10;
      v9 = 22;
LABEL_8:
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_L(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        v9,
        v8,
        (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
        v6);
    }
  }
  else
  {
    ObjectAttributes.ObjectName = &UnicodeString;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.RootDirectory = a2;
    *a3 = 0LL;
    v6 = ZwCreateKey(a3, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
    RtlFreeUnicodeString(&UnicodeString);
    if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 11;
      v8 = 11;
      goto LABEL_8;
    }
  }
  return (unsigned int)v6;
}
