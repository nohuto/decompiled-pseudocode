/*
 * XREFs of NdisUnchainBufferAtFront @ 0x140071BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisUnchainBufferAtFront(PNDIS_PACKET Packet, PNDIS_BUFFER *Buffer)
{
  _MDL *Head; // rax

  Head = Packet->Private.Head;
  *Buffer = Head;
  if ( Head )
  {
    Packet->Private.Head = Head->Next;
    (*Buffer)->Next = 0LL;
    Packet->Private.ValidCounts = 0;
  }
}
