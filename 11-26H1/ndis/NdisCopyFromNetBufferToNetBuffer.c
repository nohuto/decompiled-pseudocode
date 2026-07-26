/*
 * XREFs of NdisCopyFromNetBufferToNetBuffer @ 0x140051F00
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

NDIS_STATUS __stdcall NdisCopyFromNetBufferToNetBuffer(
        PNET_BUFFER Destination,
        ULONG DestinationOffset,
        ULONG BytesToCopy,
        PNET_BUFFER Source,
        ULONG SourceOffset,
        PULONG BytesCopied)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  _MDL *CurrentMdl; // rsi
  _MDL *v9; // r12
  unsigned __int64 ByteCount; // rax
  unsigned __int64 v11; // rax
  size_t v12; // rbp
  size_t v13; // r13
  NDIS_STATUS v14; // edi
  char *MappedSystemVa; // rax
  char *v16; // r15
  size_t v17; // r14
  char *v18; // rax
  char *v19; // rax
  size_t v20; // rbx
  ULONG v21; // eax
  size_t v23; // rax
  unsigned __int64 i; // [rsp+80h] [rbp+8h]
  char *v26; // [rsp+80h] [rbp+8h]
  ULONG v27; // [rsp+98h] [rbp+20h]

  v6 = Destination->CurrentMdlOffset + DestinationOffset;
  v7 = SourceOffset + Source->CurrentMdlOffset;
  CurrentMdl = Source->CurrentMdl;
  v9 = Destination->CurrentMdl;
  v27 = *BytesCopied;
  for ( i = v6; CurrentMdl; v7 -= ByteCount )
  {
    ByteCount = CurrentMdl->ByteCount;
    if ( v7 < ByteCount )
      break;
    CurrentMdl = CurrentMdl->Next;
  }
  if ( v9 )
  {
    do
    {
      v11 = v9->ByteCount;
      if ( v6 < v11 )
        break;
      v9 = v9->Next;
      v6 -= v11;
    }
    while ( v9 );
    i = v6;
  }
  if ( BytesToCopy && CurrentMdl && v9 )
  {
    v12 = BytesToCopy;
    v13 = BytesToCopy;
    if ( CurrentMdl->ByteCount - v7 <= BytesToCopy )
      v12 = CurrentMdl->ByteCount - v7;
    v14 = 0;
    if ( (CurrentMdl->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = (char *)CurrentMdl->MappedSystemVa;
    }
    else
    {
      MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, 0x40000000u);
      v6 = i;
    }
    if ( MappedSystemVa
      && ((v16 = &MappedSystemVa[v7], v17 = v9->ByteCount - v6, (v9->MdlFlags & 5) == 0)
        ? (char *)(v18 = (char *)MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000000u), v6 = i)
        : (v18 = (char *)v9->MappedSystemVa),
          v18) )
    {
      v19 = &v18[v6];
      v26 = v19;
      while ( 1 )
      {
LABEL_18:
        v20 = v17;
        if ( v17 >= v12 )
          v20 = v12;
        memmove(v19, v16, v20);
        if ( v13 == v20 )
        {
          v21 = BytesToCopy;
          goto LABEL_26;
        }
        v13 -= v20;
        if ( v17 == v20 )
          break;
        v19 = &v26[v20];
        v26 += v20;
        v17 -= v20;
LABEL_23:
        if ( v12 == v20 )
        {
          while ( 1 )
          {
            CurrentMdl = CurrentMdl->Next;
            if ( !CurrentMdl )
              goto LABEL_38;
            v23 = CurrentMdl->ByteCount;
            if ( (_DWORD)v23 )
            {
              v12 = v13;
              if ( v23 <= v13 )
                v12 = CurrentMdl->ByteCount;
              if ( (CurrentMdl->MdlFlags & 5) != 0 )
                v16 = (char *)CurrentMdl->MappedSystemVa;
              else
                v16 = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, 0x40000000u);
              if ( v16 )
              {
                v19 = v26;
                goto LABEL_18;
              }
              goto LABEL_36;
            }
          }
        }
        v16 += v20;
        v12 -= v20;
      }
      while ( 1 )
      {
        v9 = v9->Next;
        if ( !v9 )
          break;
        v17 = v9->ByteCount;
        if ( v9->ByteCount )
        {
          if ( (v9->MdlFlags & 5) != 0 )
            v19 = (char *)v9->MappedSystemVa;
          else
            v19 = (char *)MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000000u);
          v26 = v19;
          if ( !v19 )
            goto LABEL_36;
          goto LABEL_23;
        }
      }
LABEL_38:
      v21 = BytesToCopy - v13;
    }
    else
    {
LABEL_36:
      v21 = v27;
      v14 = -1073741670;
    }
  }
  else
  {
    v14 = 0;
    v21 = 0;
  }
LABEL_26:
  *BytesCopied = v21;
  return v14;
}
