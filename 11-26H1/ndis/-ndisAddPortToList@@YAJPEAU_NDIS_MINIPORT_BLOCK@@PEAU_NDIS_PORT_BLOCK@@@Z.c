/*
 * XREFs of ?ndisAddPortToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT_BLOCK@@@Z @ 0x1400AA954
 * Callers:
 *     NdisMAllocatePort @ 0x14006A150 (NdisMAllocatePort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisAddPortToList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PORT_BLOCK *a2)
{
  unsigned int v2; // r8d
  _LIST_ENTRY *p_PortList; // rcx
  _LIST_ENTRY *i; // rax
  unsigned int PortNumber; // r10d
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *Flink; // rax

  v2 = 0;
  p_PortList = &a1->PortList;
  for ( i = p_PortList->Flink; i != p_PortList; i = i->Flink )
  {
    PortNumber = a2->PortCharacteristics.PortNumber;
    if ( HIDWORD(i[1].Blink) == PortNumber )
      return (unsigned int)-1073741270;
    if ( HIDWORD(i[1].Blink) > PortNumber )
      break;
  }
  Blink = i->Blink;
  Flink = Blink->Flink;
  if ( Blink->Flink->Blink != Blink )
    __fastfail(3u);
  a2->Link.Flink = Flink;
  a2->Link.Blink = Blink;
  Flink->Blink = &a2->Link;
  Blink->Flink = &a2->Link;
  ++a1->NumberOfPorts;
  return v2;
}
