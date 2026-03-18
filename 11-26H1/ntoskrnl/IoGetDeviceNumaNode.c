/*
 * XREFs of IoGetDeviceNumaNode @ 0x140B2F860
 * Callers:
 *     IopGetNumaNodeInformation @ 0x1407799BC (IopGetNumaNodeInformation.c)
 * Callees:
 *     KeQueryHighestNodeNumber @ 0x1404884A0 (KeQueryHighestNodeNumber.c)
 */

NTSTATUS __stdcall IoGetDeviceNumaNode(PDEVICE_OBJECT Pdo, PUSHORT NodeNumber)
{
  _DWORD *DeviceNode; // rcx
  int v4; // eax

  if ( !Pdo )
    return -1073741811;
  DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
    return -1073741811;
  v4 = DeviceNode[165];
  if ( v4 != -1 && v4 != -2 )
  {
    *NodeNumber = v4;
    return 0;
  }
  if ( !KeQueryHighestNodeNumber() )
  {
    *NodeNumber = 0;
    return 0;
  }
  return -1073741275;
}
