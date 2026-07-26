/*
 * XREFs of NdisFreeNetBufferListContext @ 0x140042540
 * Callers:
 *     NdisFreeCloneNetBufferList @ 0x140027210 (NdisFreeCloneNetBufferList.c)
 *     NdisFReturnNetBufferLists @ 0x14002DCC0 (NdisFReturnNetBufferLists.c)
 *     NdisMSendNetBufferListsComplete @ 0x140036740 (NdisMSendNetBufferListsComplete.c)
 *     NdisReturnNetBufferLists @ 0x14003B6A0 (NdisReturnNetBufferLists.c)
 *     NdisFSendNetBufferListsComplete @ 0x14003D660 (NdisFSendNetBufferListsComplete.c)
 *     ?ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1400637B0 (-ndisRemoveNblContextTerminator@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisFreeNetBufferListContext(PNET_BUFFER_LIST NetBufferList, USHORT ContextSize)
{
  USHORT Size; // di
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  int v5; // edx
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  unsigned __int16 Offset; // di
  int v9; // edx
  int v10; // r8d
  unsigned __int16 *v11; // rcx

  if ( ContextSize )
  {
    Size = ContextSize;
    do
    {
      Context = NetBufferList->Context;
      Context->Offset += Size;
      v5 = *((_DWORD *)NetBufferList->NdisPoolHandle + 11);
      if ( (v5 & 2) != 0 )
      {
        v6 = 560LL;
        if ( (v5 & 1) == 0 )
          v6 = 384LL;
        if ( NetBufferList->Context == (_NET_BUFFER_LIST_CONTEXT *)((char *)NetBufferList + v6) )
          break;
      }
      if ( Size >= Context->Size )
        Size = Context->Size;
      LOWORD(NetBufferList->NdisReserved[1]) -= Size;
      v7 = Context->Size;
      Offset = Context->Offset;
      if ( Offset < v7 )
        break;
      Size = Offset - v7;
      NetBufferList->Context = Context->Next;
      v9 = Context->Size;
      Context->Offset = v9;
      Context->Next = 0LL;
      v10 = LOWORD(NetBufferList->NdisReserved[1]);
      if ( v9 + v10 > ndisMaxCachedNblContextSize )
      {
        ExFreePoolWithTag(Context, 0);
      }
      else if ( v9 < WORD1(NetBufferList->NdisReserved[1]) - v10 )
      {
        ExFreePoolWithTag(Context, 0);
        v11 = (unsigned __int16 *)NetBufferList->NetBufferListInfo[28];
        if ( v11 )
        {
          if ( v11[4] < WORD1(NetBufferList->NdisReserved[1]) - LOWORD(NetBufferList->NdisReserved[1]) )
          {
            ExFreePoolWithTag(v11, 0);
            NetBufferList->NetBufferListInfo[28] = 0LL;
          }
        }
      }
      else
      {
        NetBufferList->NetBufferListInfo[28] = Context;
      }
    }
    while ( Size );
  }
}
