/*
 * XREFs of IopGetNumaNodeInformation @ 0x1407799BC
 * Callers:
 *     NtQueryInformationFile @ 0x1409B4B00 (NtQueryInformationFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IopGetDevicePDO @ 0x14026F1F0 (IopGetDevicePDO.c)
 *     IoGetDeviceNumaNode @ 0x140B2F860 (IoGetDeviceNumaNode.c)
 */

__int64 __fastcall IopGetNumaNodeInformation(__int64 a1, USHORT *a2)
{
  __int64 v2; // rcx
  struct _DEVICE_OBJECT *DevicePDO; // rax
  struct _DEVICE_OBJECT *v5; // rdi
  NTSTATUS DeviceNumaNode; // ebx
  USHORT NodeNumber; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  NodeNumber = 0;
  DevicePDO = (struct _DEVICE_OBJECT *)IopGetDevicePDO(v2);
  v5 = DevicePDO;
  if ( !DevicePDO )
    return 3221225486LL;
  DeviceNumaNode = IoGetDeviceNumaNode(DevicePDO, &NodeNumber);
  ObfDereferenceObject(v5);
  if ( DeviceNumaNode >= 0 )
    *a2 = NodeNumber;
  return (unsigned int)DeviceNumaNode;
}
