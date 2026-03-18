/*
 * XREFs of HaliInitPowerManagement @ 0x140785870
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x1404F0710 (ExRegisterCallback.c)
 *     HalpAcpiGetFacsMapping @ 0x14057978C (HalpAcpiGetFacsMapping.c)
 *     HalpPutAcpiHacksInRegistry @ 0x140785984 (HalpPutAcpiHacksInRegistry.c)
 *     ExCreateCallback @ 0x140AFB990 (ExCreateCallback.c)
 *     HalpPiix4Detect @ 0x140C0A8DC (HalpPiix4Detect.c)
 */

NTSTATUS __fastcall HaliInitPowerManagement(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  NTSTATUS result; // eax
  __int64 v6; // rcx
  __int64 FacsMapping; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+70h] [rbp+10h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 80LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
  LOBYTE(v4) = 1;
  HalpPiix4Detect(v4);
  HalpPutAcpiHacksInRegistry();
  PmAcpiDispatchTable = a1;
  *a2 = &HalAcpiDispatchTable;
  ObjectAttributes.RootDirectory = 0LL;
  off_140E00820 = HaliSetWakeAlarm;
  CallbackObject = 0LL;
  qword_140E00C50 = (__int64)HaliInitializePlatformDebugTriggers;
  qword_140E00C58 = (__int64)HaliRunPlatformDebugTriggers;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
  if ( result >= 0 )
  {
    ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)HalpPowerStateCallback, 0LL);
    FacsMapping = HalpAcpiGetFacsMapping(v6);
    if ( FacsMapping )
      *(_QWORD *)&HalpDeviceBlockUnblockPushLock.PriorityFloorCounts[24] = FacsMapping + 12;
    return 0;
  }
  return result;
}
