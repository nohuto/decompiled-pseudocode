/*
 * XREFs of PnpDeviceCompletionProcessCompletedRequest @ 0x14090D1F0
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x14090C7D8 (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PipProcessDevNodeTree @ 0x14090C86C (PipProcessDevNodeTree.c)
 *     PipEnumerateDevice @ 0x14090DEA8 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x140910A7C (PnpStartDeviceNode.c)
 * Callees:
 *     PnpDeviceCompletionRequestDestroy @ 0x1404939D8 (PnpDeviceCompletionRequestDestroy.c)
 *     PoFxIdleDevice @ 0x1404B2604 (PoFxIdleDevice.c)
 *     PipSetDevNodeState @ 0x1404D2858 (PipSetDevNodeState.c)
 *     PipUpdatePostStartCharacteristics @ 0x1404E3798 (PipUpdatePostStartCharacteristics.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     PiSwProcessParentStartIrp @ 0x140B249AC (PiSwProcessParentStartIrp.c)
 */

__int64 __fastcall PnpDeviceCompletionProcessCompletedRequest(PVOID Context)
{
  ULONG_PTR v2; // rbx
  int v4; // eax

  v2 = *((_QWORD *)Context + 2);
  *(_QWORD *)(v2 + 528) = *((_QWORD *)Context + 6);
  *(_DWORD *)(v2 + 392) = *((_DWORD *)Context + 10);
  PipSetDevNodeState(v2, *((_DWORD *)Context + 8));
  if ( *((int *)Context + 10) >= 0 )
  {
    v4 = *((_DWORD *)Context + 8);
    if ( v4 == 776 || v4 == 781 )
    {
      PipUpdatePostStartCharacteristics(*(_QWORD *)(v2 + 32));
      PiSwProcessParentStartIrp(*(PDEVICE_OBJECT *)(v2 + 32));
    }
  }
  if ( *((_DWORD *)Context + 8) == 783 )
  {
    if ( (*(_DWORD *)(v2 + 704) & 0x80u) == 0 )
      KeBugCheckEx(0xCAu, 0xDuLL, v2, 0x80uLL, 0LL);
    PoFxIdleDevice(*(_QWORD *)(v2 + 32));
    *(_DWORD *)(v2 + 704) &= ~0x80u;
  }
  PnpDeviceCompletionRequestDestroy(Context);
  return *(unsigned int *)(v2 + 392);
}
