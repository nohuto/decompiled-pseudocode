/*
 * XREFs of CmFcpConnectToAlpcServer @ 0x140B05DC8
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140B05B68 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _filwbuf_s @ 0x1404CE890 (_filwbuf_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwAlpcConnectPortEx @ 0x140728F40 (ZwAlpcConnectPortEx.c)
 */

__int64 __fastcall CmFcpConnectToAlpcServer(HANDLE *a1, char a2)
{
  unsigned int v4; // edi
  NTSTATUS v5; // eax
  int v6; // ebx
  HANDLE PortHandle; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER Timeout; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR BufferLength; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER Interval; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ClientPortObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ConnectionPortObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE ConnectionMessage[48]; // [rsp+F0h] [rbp-10h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+120h] [rbp+20h] BYREF

  *(&ConnectionPortObjectAttributes.Length + 1) = 0;
  *(&ConnectionPortObjectAttributes.Attributes + 1) = 0;
  *(&ClientPortObjectAttributes.Length + 1) = 0;
  *(&ClientPortObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  *(_WORD *)(&PortAttributes.SecurityQos.EffectiveOnly + 1) = 0;
  PortAttributes.Reserved = 0;
  RtlInitUnicodeString(&DestinationString, L"\\RPC Control\\FconAlpcPort");
  PortHandle = 0LL;
  Timeout.QuadPart = -50000000LL;
  ConnectionPortObjectAttributes.Attributes = 512;
  ConnectionPortObjectAttributes.ObjectName = &DestinationString;
  memset(ConnectionMessage, 0, sizeof(ConnectionMessage));
  ClientPortObjectAttributes.Attributes = 512;
  v4 = 0;
  Interval.QuadPart = -10000000LL;
  ConnectionPortObjectAttributes.Length = 48;
  *(_OWORD *)&ConnectionPortObjectAttributes.SecurityDescriptor = 0LL;
  ConnectionPortObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ClientPortObjectAttributes.SecurityDescriptor = 0LL;
  ClientPortObjectAttributes.Length = 48;
  ClientPortObjectAttributes.RootDirectory = 0LL;
  ClientPortObjectAttributes.ObjectName = 0LL;
  PortAttributes.Flags = 1179648;
  PortAttributes.MaxMessageLength = filwbuf_s();
  PortAttributes.MaxPoolUsage = 0xFFFFFFFFLL;
  PortAttributes.MaxSectionSize = 0xFFFFFFFFLL;
  PortAttributes.MaxTotalSectionSize = 0xFFFFFFFFLL;
  PortAttributes.MaxViewSize = 0xFFFFFFFFLL;
  strcpy(ConnectionMessage, "\b");
  PortAttributes.DupObjectTypes = 0;
  PortAttributes.MemoryBandwidth = 0LL;
  *(_QWORD *)&PortAttributes.SecurityQos.Length = 12LL;
  *(_WORD *)&PortAttributes.SecurityQos.ContextTrackingMode = 1;
  *(_DWORD *)&ConnectionMessage[2] = -2147483600;
  *(_DWORD *)&ConnectionMessage[40] = 1;
  do
  {
    BufferLength = 48LL;
    v5 = ZwAlpcConnectPortEx(
           &PortHandle,
           &ConnectionPortObjectAttributes,
           &ClientPortObjectAttributes,
           &PortAttributes,
           0x20000u,
           0LL,
           (PPORT_MESSAGE)ConnectionMessage,
           &BufferLength,
           0LL,
           0LL,
           &Timeout);
    v6 = v5;
    if ( !a2 || v5 != -1073741772 && v5 != -1073740031 )
      break;
    ++v4;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  while ( v4 < 0xA );
  if ( v6 >= 0 )
    *a1 = PortHandle;
  return (unsigned int)v6;
}
