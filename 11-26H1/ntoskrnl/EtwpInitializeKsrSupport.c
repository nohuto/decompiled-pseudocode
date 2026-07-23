/*
 * XREFs of EtwpInitializeKsrSupport @ 0x140CE850C
 * Callers:
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x1404E9CF0 (ExRegisterCallback.c)
 *     ExCreateCallback @ 0x140AFD610 (ExCreateCallback.c)
 */

NTSTATUS EtwpInitializeKsrSupport()
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  __int64 v3; // [rsp+70h] [rbp+10h] BYREF

  v3 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  result = KsrGetFirmwareInformation(&v3);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 80;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ExCreateCallback((PCALLBACK_OBJECT *)&PspSiloMonitorLock.KernelWaitTime, &ObjectAttributes, 0, 1u);
    if ( result >= 0 )
      return (unsigned int)ExRegisterCallback(
                             (PCALLBACK_OBJECT)PspSiloMonitorLock.KernelWaitTime,
                             (PCALLBACK_FUNCTION)EtwpKsrCallback,
                             0LL);
  }
  return result;
}
