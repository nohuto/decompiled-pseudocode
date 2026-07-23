/*
 * XREFs of VfClearVerifierSettings @ 0x140643E50
 * Callers:
 *     VfNotifyVerifierOfEvent @ 0x140C27350 (VfNotifyVerifierOfEvent.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     VfUtilDbgPrint @ 0x140532380 (VfUtilDbgPrint.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x140729BA0 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x140729E00 (ZwFlushKey.c)
 */

NTSTATUS VfClearVerifierSettings()
{
  int v0; // eax
  int v1; // ecx
  void **p_IptSaveArea; // rax
  NTSTATUS v3; // eax
  NTSTATUS v4; // eax
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  int Data; // [rsp+80h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  if ( (VfOptionFlags & 0x20) != 0 )
    v0 = -49;
  else
    v0 = (VfOptionFlags & 0x400) != 0 ? -1081 : -25;
  v1 = v0 & VfOptionFlags;
  ObjectAttributes.Length = 48;
  p_IptSaveArea = (void **)&VfPersistentStateRoot;
  Data = v1;
  ObjectAttributes.RootDirectory = 0LL;
  if ( !HIDWORD(WheapPfaLock.KernelStack) )
    p_IptSaveArea = &PspSiloMonitorLock.IptSaveArea;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)p_IptSaveArea;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v3 < 0 )
    return VfUtilDbgPrint(
             "Driver Verifier: Failed to open Memory Management key with status: 0x%x\n Registry updates aborted!",
             v3);
  RtlInitUnicodeString(&DestinationString, L"VerifierOptions");
  v4 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
  if ( v4 < 0 )
  {
    VfUtilDbgPrint(
      "Driver Verifier: Failed to set VerifierOptionFlags key value with status: 0x%x\n Registry updates aborted!",
      v4);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"VerifyDriverLevel");
    v5 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741772 )
      VfUtilDbgPrint("Driver Verifier: Failed to delete VerifyDriverLevel key value with status: 0x%x\n", v5);
    RtlInitUnicodeString(&DestinationString, L"VerifierSettingState");
    v6 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( ((v6 + 0x80000000) & 0x80000000) == 0 && v6 != -1073741772 )
      VfUtilDbgPrint("Driver Verifier: Failed to delete RuleClasses key value with status: 0x%x\n", v6);
    RtlInitUnicodeString(&DestinationString, L"VerifyDrivers");
    v7 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -1073741772 )
      VfUtilDbgPrint("Driver Verifier: Failed to delete VerifyDrivers key value with status: 0x%x\n", v7);
    RtlInitUnicodeString(&DestinationString, L"VerifierRandomTargets");
    v8 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( ((v8 + 0x80000000) & 0x80000000) == 0 && v8 != -1073741772 )
      VfUtilDbgPrint("Driver Verifier: Failed to delete VerifierRandomTargets key value with status: 0x%x\n", v8);
    if ( VfFlightOptions )
    {
      RtlInitUnicodeString(&DestinationString, L"XdvVerifierOptions");
      v9 = ZwDeleteValueKey(KeyHandle, &DestinationString);
      if ( ((v9 + 0x80000000) & 0x80000000) == 0 && v9 != -1073741772 )
        VfUtilDbgPrint("Driver Verifier: Failed to delete XdvVerifierOptions key value with status: 0x%x\n", v9);
    }
    RtlInitUnicodeString(&DestinationString, L"VrfPersistThroughUpgrade");
    v10 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( ((v10 + 0x80000000) & 0x80000000) == 0 && v10 != -1073741772 )
      VfUtilDbgPrint("Driver Verifier: Failed to delete VrfPersistThroughUpgrade key value with status: 0x%x\n", v10);
    RtlInitUnicodeString(&DestinationString, L"VerifierTriageContext");
    v11 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( ((v11 + 0x80000000) & 0x80000000) == 0 && v11 != -1073741772 )
      VfUtilDbgPrint("Driver Verifier: Failed to delete VerifierTriageContext key value with status: 0x%x\n", v11);
    if ( VfXdvSuppressDriversBufferLength != -1 )
    {
      RtlInitUnicodeString(&DestinationString, L"VerifyDriversSuppress");
      v12 = ZwDeleteValueKey(KeyHandle, &DestinationString);
      if ( ((v12 + 0x80000000) & 0x80000000) == 0 && v12 != -1073741772 )
        VfUtilDbgPrint("Driver Verifier: Failed to delete VerifyDriversSuppress key value with status: 0x%x\n", v12);
    }
    RtlInitUnicodeString(&DestinationString, L"VerifierTipLimitNumerator");
    v13 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( ((v13 + 0x80000000) & 0x80000000) == 0 && v13 != -1073741772 )
      VfUtilDbgPrint("Driver Verifier: Failed to delete VerifierTipLimitNumerator key value with status: 0x%x\n", v13);
    RtlInitUnicodeString(&DestinationString, L"VerifierTipLimitDenominator");
    v14 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( ((v14 + 0x80000000) & 0x80000000) == 0 && v14 != -1073741772 )
      VfUtilDbgPrint("Driver Verifier: Failed to delete VerifierTipLimitDenominator key value with status: 0x%x\n", v14);
    RtlInitUnicodeString(&DestinationString, L"VerifierTipSparseness");
    v15 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( ((v15 + 0x80000000) & 0x80000000) == 0 && v15 != -1073741772 )
      VfUtilDbgPrint("Driver Verifier: Failed to delete VerifierTipSparseness key value with status: 0x%x\n", v15);
    RtlInitUnicodeString(&DestinationString, L"VerifierLwspPoolTags");
    v16 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( ((v16 + 0x80000000) & 0x80000000) == 0 && v16 != -1073741772 )
      VfUtilDbgPrint("Driver Verifier: Failed to delete VerifierLwspPoolTags key value with status: 0x%x\n", v16);
    RtlInitUnicodeString(&DestinationString, L"DifPluginConfigData");
    v17 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( ((v17 + 0x80000000) & 0x80000000) == 0 && v17 != -1073741772 )
      VfUtilDbgPrint("Driver Verifier: Failed to delete DifPluginConfigData key value with status: 0x%x\n", v17);
    ZwFlushKey(KeyHandle);
    if ( VfClearanceFlag )
      VfUtilDbgPrint("Driver Verifier: Clearing Verifier options from Registry for preventing recursive crash.\n");
  }
  return ZwClose(KeyHandle);
}
