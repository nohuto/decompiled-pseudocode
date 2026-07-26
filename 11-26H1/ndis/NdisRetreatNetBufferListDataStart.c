/*
 * XREFs of NdisRetreatNetBufferListDataStart @ 0x14003FDD0
 * Callers:
 *     NdisAllocateReassembledNetBufferList @ 0x1400CC340 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     NdisAdvanceNetBufferDataStart @ 0x140040120 (NdisAdvanceNetBufferDataStart.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisRetreatNetBufferListDataStart(
        PNET_BUFFER_LIST NetBufferList,
        ULONG DataOffsetDelta,
        ULONG DataBackFill,
        NET_BUFFER_ALLOCATE_MDL_HANDLER AllocateMdlHandler,
        NET_BUFFER_FREE_MDL_HANDLER FreeMdlHandler)
{
  NDIS_STATUS i; // edi
  int v7; // edx
  _NET_BUFFER *FirstNetBuffer; // rbx
  PMDL (__fastcall *v11)(unsigned int *); // rbp
  void (__stdcall *v12)(PMDL); // r14
  unsigned int DataOffset; // ecx
  unsigned int v14; // ecx
  _MDL *MdlChain; // rdx
  ULONG ByteCount; // eax
  PMDL (__fastcall *v18)(unsigned int *); // rax
  _MDL **v19; // rax
  ULONG v20; // eax
  struct _NET_BUFFER *Alignment; // r15

  i = 0;
  v7 = (int)FreeMdlHandler;
  if ( (FreeMdlHandler == 0LL) == (AllocateMdlHandler == 0LL) )
  {
    FirstNetBuffer = NetBufferList->FirstNetBuffer;
    v11 = ndisAllocateMdlInternal;
    v12 = (void (__stdcall *)(PMDL))ndisFreeMdlInternal;
    if ( AllocateMdlHandler )
    {
      v11 = (PMDL (__fastcall *)(unsigned int *))AllocateMdlHandler;
      v12 = FreeMdlHandler;
    }
    while ( FirstNetBuffer )
    {
      DataOffset = FirstNetBuffer->DataOffset;
      LODWORD(FreeMdlHandler) = 0;
      if ( DataOffset < DataOffsetDelta )
      {
        LODWORD(FreeMdlHandler) = DataBackFill + DataOffsetDelta - DataOffset;
        v18 = v11;
        if ( !v11 )
          v18 = ndisAllocateMdlInternal;
        v19 = (_MDL **)v18((unsigned int *)&FreeMdlHandler);
        MdlChain = (_MDL *)v19;
        if ( !v19 )
        {
          Alignment = NetBufferList->FirstNetBuffer;
          for ( i = -1073741670; Alignment != FirstNetBuffer; Alignment = (struct _NET_BUFFER *)Alignment->Link.Alignment )
            NdisAdvanceNetBufferDataStart(Alignment, DataOffsetDelta, 1u, v12);
          return i;
        }
        *v19 = FirstNetBuffer->MdlChain;
        v20 = (_DWORD)FreeMdlHandler - DataOffsetDelta;
        FirstNetBuffer->MdlChain = MdlChain;
        FirstNetBuffer->DataOffset += v20;
        FirstNetBuffer->DataLength += DataOffsetDelta;
        v14 = FirstNetBuffer->DataOffset;
      }
      else
      {
        FirstNetBuffer->DataLength += DataOffsetDelta;
        v14 = DataOffset - DataOffsetDelta;
        MdlChain = FirstNetBuffer->MdlChain;
        for ( FirstNetBuffer->DataOffset = v14; MdlChain; v14 -= ByteCount )
        {
          ByteCount = MdlChain->ByteCount;
          if ( v14 < ByteCount )
            break;
          MdlChain = MdlChain->Next;
        }
      }
      FirstNetBuffer->Link.Region = (unsigned __int64)MdlChain;
      i = 0;
      FirstNetBuffer->CurrentMdlOffset = v14;
      FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
    }
    return i;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        21,
        10,
        (struct _GUID *)&WPP_815c5b72200d33c5216d4fda710d2065_Traceguids);
    }
    return -1073741811;
  }
}
