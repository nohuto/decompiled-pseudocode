/*
 * XREFs of NdisFreeNetBuffer @ 0x140028B10
 * Callers:
 *     NdisFreeCloneNetBufferList @ 0x140027210 (NdisFreeCloneNetBufferList.c)
 *     NdisFreeFragmentNetBufferList @ 0x14002B350 (NdisFreeFragmentNetBufferList.c)
 * Callees:
 *     ndisPplLazyInitializeLookaside @ 0x140063DE0 (ndisPplLazyInitializeLookaside.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __stdcall NdisFreeNetBuffer(PNET_BUFFER NetBuffer)
{
  _DWORD *NdisPoolHandle; // rsi
  _MDL *MdlChain; // rcx
  unsigned int *v4; // rcx
  unsigned __int64 v5; // rax
  char *v6; // rdi
  _SLIST_HEADER *v7; // rbp
  char *v8; // rsi
  USHORT v9; // di
  _SLIST_HEADER *v10; // rcx

  NdisPoolHandle = NetBuffer->NdisPoolHandle;
  if ( (NdisPoolHandle[20] & 1) != 0 )
  {
    MdlChain = NetBuffer->MdlChain;
    if ( (MdlChain->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(MdlChain->MappedSystemVa, MdlChain);
  }
  v4 = (unsigned int *)&NetBuffer[-1].MiniportReserved[2];
  if ( (NdisPoolHandle[1] & 1) != 0 )
  {
    if ( (unsigned __int64)NetBuffer < 0x20 )
      ndisBugCheckEx(0x31uLL, 3uLL, (ULONG_PTR)NetBuffer, 0LL);
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    if ( ndisMaxNumberOfProcessors != 1 )
    {
      v5 = (unsigned __int64)v4[6] << 8;
      v6 = (char *)NdisPoolHandle + v5 + 384;
      if ( !v6[216] )
        ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)((char *)NdisPoolHandle + v5 + 384));
      if ( LODWORD(NetBuffer[-1].SharedMemoryInfo) == KeGetPcr()->Prcb.Number )
        v7 = (_SLIST_HEADER *)*((_QWORD *)v6 + 24);
      else
        v7 = (_SLIST_HEADER *)*((_QWORD *)v6 + 25);
      _InterlockedIncrement((volatile signed __int32 *)v6 + 7);
      if ( ExQueryDepthSList(v7) < *((_WORD *)v6 + 8) )
      {
        v10 = v7;
        goto LABEL_14;
      }
      _InterlockedIncrement((volatile signed __int32 *)v6 + 8);
    }
    v8 = (char *)(NdisPoolHandle + 32);
    _InterlockedIncrement((volatile signed __int32 *)v8 + 7);
    v9 = *((_WORD *)v8 + 8);
    if ( ExQueryDepthSList((PSLIST_HEADER)v8) < v9 )
    {
      v10 = (_SLIST_HEADER *)v8;
LABEL_14:
      ExpInterlockedPushEntrySList(v10, (PSLIST_ENTRY)NetBuffer);
      return;
    }
    _InterlockedIncrement((volatile signed __int32 *)v8 + 8);
    (*((void (__fastcall **)(PNET_BUFFER, char *))v8 + 7))(NetBuffer, v8);
  }
}
