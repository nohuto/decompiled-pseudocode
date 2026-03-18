/*
 * XREFs of IoInitializeIrp @ 0x1404766A0
 * Callers:
 *     IopAllocateReserveIrp @ 0x14027006C (IopAllocateReserveIrp.c)
 *     IopAllocateBackpocketIrp @ 0x140531A0C (IopAllocateBackpocketIrp.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140B0BA58 (WmipSendWmiIrpToTraceDeviceList.c)
 *     ViIrpAllocateLockedPacket @ 0x140C2C7B0 (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     IovInitializeIrp @ 0x140C47EFC (IovInitializeIrp.c)
 */

void __stdcall IoInitializeIrp(PIRP Irp, USHORT PacketSize, CCHAR StackSize)
{
  __int64 v4; // rdi
  size_t v5; // rsi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = StackSize;
  v5 = PacketSize;
  if ( (MmVerifierData & 0x10) != 0 )
    IovInitializeIrp(Irp, PacketSize, StackSize, retaddr);
  memset_0(Irp, 0, v5);
  Irp->Size = v5;
  Irp->CurrentLocation = v4 + 1;
  Irp->Type = 6;
  Irp->StackCount = v4;
  Irp->ApcEnvironment = KeGetCurrentThread()->ApcStateIndex;
  Irp->ThreadListEntry.Blink = &Irp->ThreadListEntry;
  Irp->ThreadListEntry.Flink = &Irp->ThreadListEntry;
  Irp->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)((char *)&Irp[1] + 64 * v4 + 8 * v4);
}
