/*
 * XREFs of PopUmpoInitializeMonitorChannel @ 0x140CDB990
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ExUnregisterCallback @ 0x1404E6530 (ExUnregisterCallback.c)
 *     ExRegisterCallback @ 0x1404E9CF0 (ExRegisterCallback.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwAlpcCreatePort @ 0x140728F60 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x1407291A0 (ZwAlpcSetInformation.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExCreateCallback @ 0x140AFD610 (ExCreateCallback.c)
 *     PopMonitorProcessLoop @ 0x140B27108 (PopMonitorProcessLoop.c)
 */

__int64 PopUmpoInitializeMonitorChannel()
{
  PCALLBACK_OBJECT v0; // rbx
  PVOID v1; // rsi
  NTSTATUS v2; // edi
  NTSTATUS v3; // eax
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-69h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-61h] BYREF
  __int128 PortInformation; // [rsp+60h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-21h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+88h] [rbp-9h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  v0 = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  CallbackObject = 0LL;
  PortInformation = 0LL;
  PopPdcDeviceListLock.StateSaveArea = 0LL;
  v1 = 0LL;
  DestinationString = 0LL;
  PopPdcDeviceListLock.KernelStack = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\PowerMonitorPort");
  memset_0(&PortAttributes, 0, sizeof(PortAttributes));
  PortAttributes.Flags = 0x100000;
  ObjectAttributes.ObjectName = &DestinationString;
  PortAttributes.MaxMessageLength = 256LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  v2 = ZwAlpcCreatePort((PHANDLE)&PopPdcDeviceListLock.StateSaveArea, &ObjectAttributes, &PortAttributes);
  if ( v2 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 1u, 1u);
    v0 = CallbackObject;
    v2 = v3;
    if ( v3 >= 0 )
    {
      v1 = ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopMonitorAlpcCallback, 0LL);
      if ( !v1 )
        return (unsigned int)v2;
      *(_QWORD *)&PortInformation = v0;
      *((_QWORD *)&PortInformation + 1) = PopPdcDeviceListLock.StateSaveArea;
      v2 = ZwAlpcSetInformation(
             PopPdcDeviceListLock.StateSaveArea,
             AlpcRegisterCallbackInformation,
             &PortInformation,
             0x10u);
      ObfDereferenceObjectWithTag(v0, 0x746C6644u);
      if ( v2 >= 0 )
      {
        PopMonitorProcessLoop();
        return 0;
      }
    }
  }
  if ( PopPdcDeviceListLock.StateSaveArea )
    ZwClose(PopPdcDeviceListLock.StateSaveArea);
  if ( v1 )
    ExUnregisterCallback(v1);
  if ( v0 )
    ObfDereferenceObjectWithTag(v0, 0x746C6644u);
  return (unsigned int)v2;
}
