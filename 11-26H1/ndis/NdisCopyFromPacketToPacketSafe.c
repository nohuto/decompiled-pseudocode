/*
 * XREFs of NdisCopyFromPacketToPacketSafe @ 0x1400DB680
 * Callers:
 *     ?ndisMTransferData@@YAHPEAX0IIPEAU_NDIS_PACKET@@PEAI@Z @ 0x1400DDA70 (-ndisMTransferData@@YAHPEAX0IIPEAU_NDIS_PACKET@@PEAI@Z.c)
 * Callees:
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

void __stdcall NdisCopyFromPacketToPacketSafe(
        PNDIS_PACKET Destination,
        UINT DestinationOffset,
        UINT BytesToCopy,
        PNDIS_PACKET Source,
        UINT SourceOffset,
        PUINT BytesCopied,
        MM_PAGE_PRIORITY Priority)
{
  UINT v9; // ebx
  _MDL *Head; // rdi
  ULONG v11; // edx
  char *MappedSystemVa; // r12
  char *v13; // rax
  _MDL *v14; // rsi
  UINT ByteCount; // r14d
  char *v16; // r15
  UINT v17; // ebp
  UINT v19; // eax
  UINT v20; // ecx
  struct _MDL *v21; // rax
  struct _MDL *Next; // rax
  UINT v23; // eax
  UINT v24; // ecx
  __int64 v25; // rbx
  unsigned int v26; // [rsp+30h] [rbp-48h]
  UINT v27; // [rsp+88h] [rbp+10h]
  MM_PAGE_PRIORITY Prioritya; // [rsp+B0h] [rbp+38h]

  v27 = DestinationOffset;
  v26 = 0;
  v9 = DestinationOffset;
  *BytesCopied = 0;
  if ( BytesToCopy )
  {
    Head = Destination->Private.Head;
    if ( Head )
    {
      v11 = Priority | 0x40000000;
      Prioritya = Priority | 0x40000000;
      if ( (Head->MdlFlags & 5) != 0 )
      {
        MappedSystemVa = (char *)Head->MappedSystemVa;
      }
      else
      {
        v13 = (char *)MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, v11);
        v11 = Prioritya;
        MappedSystemVa = v13;
      }
      if ( MappedSystemVa )
      {
        v14 = Source->Private.Head;
        ByteCount = Head->ByteCount;
        if ( v14 )
        {
          v16 = (char *)((v14->MdlFlags & 5) != 0
                       ? v14->MappedSystemVa
                       : MmMapLockedPagesSpecifyCache(v14, 0, MmCached, 0LL, 0, v11));
          if ( v16 )
          {
            v17 = v14->ByteCount;
            if ( BytesToCopy )
            {
              v19 = BytesToCopy;
              v20 = 0;
              while ( ByteCount )
              {
                if ( !v17 )
                {
                  Next = v14->Next;
                  v14 = Next;
                  if ( !Next )
                    goto LABEL_44;
                  v16 = (char *)((Next->MdlFlags & 5) != 0
                               ? Next->MappedSystemVa
                               : MmMapLockedPagesSpecifyCache(Next, 0, MmCached, 0LL, 0, Prioritya));
                  if ( !v16 )
                    goto LABEL_44;
                  v17 = v14->ByteCount;
                  goto LABEL_41;
                }
                if ( !v9 )
                  goto LABEL_32;
                if ( v9 <= ByteCount )
                {
                  MappedSystemVa += v9;
                  v27 = 0;
                  ByteCount -= v9;
LABEL_32:
                  if ( SourceOffset )
                  {
                    if ( SourceOffset > v17 )
                    {
                      SourceOffset -= v17;
                      v17 = 0;
LABEL_42:
                      v19 = BytesToCopy;
                      goto LABEL_43;
                    }
                    v17 -= SourceOffset;
                    v16 += SourceOffset;
                    SourceOffset = 0;
                  }
                  v23 = v17;
                  v24 = BytesToCopy - v26;
                  if ( v17 > ByteCount )
                    v23 = ByteCount;
                  if ( v24 >= v23 )
                    v24 = v23;
                  v25 = v24;
                  memmove(MappedSystemVa, v16, v24);
                  v26 += v25;
                  MappedSystemVa += v25;
                  v16 += v25;
                  v17 -= v25;
                  ByteCount -= v25;
LABEL_41:
                  v20 = v26;
                  goto LABEL_42;
                }
                v27 = v9 - ByteCount;
                ByteCount = 0;
LABEL_43:
                v9 = v27;
                if ( v20 >= v19 )
                  goto LABEL_44;
              }
              v21 = Head->Next;
              Head = v21;
              if ( !v21 )
                goto LABEL_44;
              MappedSystemVa = (char *)((v21->MdlFlags & 5) != 0
                                      ? v21->MappedSystemVa
                                      : MmMapLockedPagesSpecifyCache(v21, 0, MmCached, 0LL, 0, Prioritya));
              if ( !MappedSystemVa )
                goto LABEL_44;
              ByteCount = Head->ByteCount;
              goto LABEL_41;
            }
LABEL_44:
            *BytesCopied = v26;
          }
        }
      }
    }
  }
}
