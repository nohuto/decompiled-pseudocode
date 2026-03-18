/*
 * XREFs of IopConnectLineBasedInterrupt @ 0x140A97D7C
 * Callers:
 *     IoConnectInterruptEx @ 0x140A98030 (IoConnectInterruptEx.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     IopGetInterruptConnectionData @ 0x140A98340 (IopGetInterruptConnectionData.c)
 *     IoDisconnectInterrupt @ 0x140A986C0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140A98890 (IopConnectInterrupt.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopConnectLineBasedInterrupt(struct _DEVICE_OBJECT *a1, _QWORD *a2, __int64 a3)
{
  _DWORD *DeviceNode; // rax

  *a2 = 0LL;
  if ( a1 && (DeviceNode = a1->DeviceObjectExtension->DeviceNode) != 0LL && (DeviceNode[99] & 0x20000) == 0 && a3 )
    return IopGetInterruptConnectionData(a1);
  else
    return 3221225485LL;
}
