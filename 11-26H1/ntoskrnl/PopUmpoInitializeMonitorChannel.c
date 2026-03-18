/*
 * XREFs of PopUmpoInitializeMonitorChannel @ 0x140CD55F0
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ExUnregisterCallback @ 0x1404ECF50 (ExUnregisterCallback.c)
 *     ExRegisterCallback @ 0x1404F0710 (ExRegisterCallback.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwAlpcCreatePort @ 0x140724390 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x1407245D0 (ZwAlpcSetInformation.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExCreateCallback @ 0x140AFB990 (ExCreateCallback.c)
 *     PopMonitorProcessLoop @ 0x140B24F78 (PopMonitorProcessLoop.c)
 */

__int64 PopUmpoInitializeMonitorChannel()
{
  PCALLBACK_OBJECT v0; // rbx
  PVOID v1; // rsi
  int Port; // edi
  NTSTATUS v3; // eax
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-69h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-61h] BYREF
  __int128 v7; // [rsp+60h] [rbp-31h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-21h] BYREF
  int v9[4]; // [rsp+88h] [rbp-9h] BYREF
  __int64 v10; // [rsp+98h] [rbp+7h]

  *(&ObjectAttributes.Length + 1) = 0;
  v0 = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  CallbackObject = 0LL;
  v7 = 0LL;
  PopModernStandbyStateNotify.OtherOperationCount = 0LL;
  v1 = 0LL;
  DestinationString = 0LL;
  PopModernStandbyStateNotify.ReadTransferCount = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\PowerMonitorPort");
  memset_0(v9, 0, 0x48uLL);
  v9[0] = 0x100000;
  ObjectAttributes.ObjectName = &DestinationString;
  v10 = 256LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  Port = ZwAlpcCreatePort((__int64)&PopModernStandbyStateNotify.OtherOperationCount, (__int64)&ObjectAttributes);
  if ( Port >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 1u, 1u);
    v0 = CallbackObject;
    Port = v3;
    if ( v3 >= 0 )
    {
      v1 = ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopMonitorAlpcCallback, 0LL);
      if ( !v1 )
        return (unsigned int)Port;
      *(_QWORD *)&v7 = v0;
      *((_QWORD *)&v7 + 1) = PopModernStandbyStateNotify.OtherOperationCount;
      Port = ZwAlpcSetInformation(PopModernStandbyStateNotify.OtherOperationCount, 9LL);
      ObfDereferenceObjectWithTag(v0, 0x746C6644u);
      if ( Port >= 0 )
      {
        PopMonitorProcessLoop();
        return 0;
      }
    }
  }
  if ( PopModernStandbyStateNotify.OtherOperationCount )
    ZwClose((HANDLE)PopModernStandbyStateNotify.OtherOperationCount);
  if ( v1 )
    ExUnregisterCallback(v1);
  if ( v0 )
    ObfDereferenceObjectWithTag(v0, 0x746C6644u);
  return (unsigned int)Port;
}
