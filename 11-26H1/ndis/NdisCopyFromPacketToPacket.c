/*
 * XREFs of NdisCopyFromPacketToPacket @ 0x1400DB480
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

void __stdcall NdisCopyFromPacketToPacket(
        PNDIS_PACKET Destination,
        UINT DestinationOffset,
        UINT BytesToCopy,
        PNDIS_PACKET Source,
        UINT SourceOffset,
        PUINT BytesCopied)
{
  _MDL *Head; // rdi
  char *v10; // rbx
  _MDL *v11; // rsi
  UINT ByteCount; // r14d
  char *MappedSystemVa; // r13
  UINT v14; // ebp
  UINT v16; // eax
  UINT v17; // ecx
  struct _MDL *v18; // rcx
  char *v19; // rax
  struct _MDL *Next; // rax
  UINT v21; // eax
  UINT v22; // ecx
  __int64 v23; // rbx
  unsigned int v24; // [rsp+20h] [rbp-38h]
  char *v25; // [rsp+28h] [rbp-30h]

  v24 = 0;
  *BytesCopied = 0;
  if ( BytesToCopy )
  {
    Head = Destination->Private.Head;
    if ( Head )
    {
      v10 = (char *)((Head->MdlFlags & 5) != 0 ? Head->MappedSystemVa : MmMapLockedPages(Destination->Private.Head, 0));
      v11 = Source->Private.Head;
      ByteCount = Head->ByteCount;
      v25 = v10;
      if ( v11 )
      {
        if ( (v11->MdlFlags & 5) != 0 )
          MappedSystemVa = (char *)v11->MappedSystemVa;
        else
          MappedSystemVa = (char *)MmMapLockedPages(v11, 0);
        v14 = v11->ByteCount;
        if ( BytesToCopy )
        {
          v16 = BytesToCopy;
          v17 = 0;
          while ( ByteCount )
          {
            if ( !v14 )
            {
              Next = v11->Next;
              v11 = Next;
              if ( !Next )
                goto LABEL_40;
              if ( (Next->MdlFlags & 5) != 0 )
                MappedSystemVa = (char *)Next->MappedSystemVa;
              else
                MappedSystemVa = (char *)MmMapLockedPages(Next, 0);
              v14 = v11->ByteCount;
              goto LABEL_37;
            }
            if ( !DestinationOffset )
              goto LABEL_28;
            if ( DestinationOffset <= ByteCount )
            {
              ByteCount -= DestinationOffset;
              v25 = &v10[DestinationOffset];
              DestinationOffset = 0;
LABEL_28:
              if ( SourceOffset )
              {
                if ( SourceOffset > v14 )
                {
                  SourceOffset -= v14;
                  v14 = 0;
LABEL_38:
                  v16 = BytesToCopy;
                  goto LABEL_39;
                }
                v14 -= SourceOffset;
                MappedSystemVa += SourceOffset;
                SourceOffset = 0;
              }
              v21 = v14;
              v22 = BytesToCopy - v24;
              if ( v14 > ByteCount )
                v21 = ByteCount;
              if ( v22 >= v21 )
                v22 = v21;
              v23 = v22;
              memmove(v25, MappedSystemVa, v22);
              v25 += v23;
              MappedSystemVa += v23;
              v24 += v23;
              v14 -= v23;
              ByteCount -= v23;
LABEL_37:
              v17 = v24;
              goto LABEL_38;
            }
            DestinationOffset -= ByteCount;
            ByteCount = 0;
LABEL_39:
            v10 = v25;
            if ( v17 >= v16 )
              goto LABEL_40;
          }
          v18 = Head->Next;
          Head = v18;
          if ( !v18 )
            goto LABEL_40;
          if ( (v18->MdlFlags & 5) != 0 )
            v19 = (char *)v18->MappedSystemVa;
          else
            v19 = (char *)MmMapLockedPages(v18, 0);
          ByteCount = Head->ByteCount;
          v25 = v19;
          goto LABEL_37;
        }
LABEL_40:
        *BytesCopied = v24;
      }
    }
  }
}
