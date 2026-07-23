/*
 * XREFs of IopRemoveLegacyDeviceNode @ 0x1407A89B4
 * Callers:
 *     IopLegacyResourceAllocation @ 0x1409B81D4 (IopLegacyResourceAllocation.c)
 * Callees:
 *     IoDeleteDevice @ 0x140426AC0 (IoDeleteDevice.c)
 *     PipClearDevNodeFlags @ 0x1409B01B0 (PipClearDevNodeFlags.c)
 *     IopDestroyDeviceNode @ 0x1409B0BD8 (IopDestroyDeviceNode.c)
 */

void __fastcall IopRemoveLegacyDeviceNode(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  struct _DEVICE_OBJECT *v7; // rdi

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x1000) != 0 )
      return;
  }
  else
  {
    if ( !a2[54] )
      return;
    a2[54] = 0LL;
    v4 = (_QWORD *)a2[1];
    if ( v4 )
      *v4 = *a2;
    if ( *a2 )
      *(_QWORD *)(*a2 + 8LL) = a2[1];
    if ( (_QWORD *)IopLegacyDeviceNode == a2 )
      IopLegacyDeviceNode = *a2;
  }
  v5 = (_QWORD *)a2[66];
  while ( v5 )
  {
    v6 = v5 + 67;
    v5 = (_QWORD *)v5[67];
    if ( v5 == a2 )
    {
      *v6 = a2[67];
      break;
    }
  }
  v7 = (struct _DEVICE_OBJECT *)a2[4];
  a2[3] = 0LL;
  a2[1] = 0LL;
  *a2 = 0LL;
  a2[2] = 0LL;
  PipClearDevNodeFlags(a2, 0x20000LL);
  IopDestroyDeviceNode(a2);
  if ( !a1 )
  {
    v7->DriverObject = PnpDriverObject;
    IoDeleteDevice(v7);
  }
}
