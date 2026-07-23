/*
 * XREFs of IopConnectLinkTrackingPort @ 0x140797100
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwAlpcConnectPort @ 0x140728F20 (ZwAlpcConnectPort.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

LONG __fastcall IopConnectLinkTrackingPort(__int64 a1)
{
  NTSTATUS v1; // ebx
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-39h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+A0h] [rbp-9h] BYREF

  v1 = 0;
  if ( !PspSiloMonitorLock.Queue )
  {
    if ( *(_DWORD *)(PspSiloMonitorLock.ExtendedFeatureDisableMask + 4) )
    {
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
      DestinationString = 0LL;
      memset_0(&PortAttributes, 0, sizeof(PortAttributes));
      PortAttributes.MaxMessageLength = 256LL;
      PortAttributes.SecurityQos.Length = 12;
      PortAttributes.SecurityQos.ImpersonationLevel = SecurityImpersonation;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      *(_WORD *)&PortAttributes.SecurityQos.ContextTrackingMode = 257;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      RtlInitUnicodeString(&DestinationString, L"\\Security\\TRKWKS_PORT");
      v1 = ZwAlpcConnectPort(
             (PHANDLE)&PspSiloMonitorLock.Queue,
             &DestinationString,
             &ObjectAttributes,
             &PortAttributes,
             0x20000u,
             0LL,
             0LL,
             0LL,
             0LL,
             0LL,
             0LL);
    }
    else
    {
      v1 = -1073741772;
    }
  }
  *(_DWORD *)(a1 + 56) = v1;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
