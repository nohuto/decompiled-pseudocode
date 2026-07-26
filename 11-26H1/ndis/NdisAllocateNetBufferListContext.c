/*
 * XREFs of NdisAllocateNetBufferListContext @ 0x140040EF0
 * Callers:
 *     NdisFSendNetBufferLists @ 0x140025020 (NdisFSendNetBufferLists.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisSendNetBufferLists @ 0x140037160 (NdisSendNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140037E00 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisAddNblContextTerminator@@YAPEAU_NET_BUFFER_LIST@@PEAPEAU1@PEAKPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1400775C0 (-ndisAddNblContextTerminator@@YAPEAU_NET_BUFFER_LIST@@PEAPEAU1@PEAKPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisAllocateNetBufferListContext(
        PNET_BUFFER_LIST NetBufferList,
        USHORT ContextSize,
        USHORT ContextBackFill,
        ULONG PoolTag)
{
  int v4; // ebx
  int v6; // esi
  unsigned __int16 Offset; // ax
  _DWORD *NdisPoolHandle; // rax
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  _NET_BUFFER_LIST_CONTEXT *v12; // r8
  int v13; // edx
  __int64 v14; // rax
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // r14
  _NET_BUFFER_LIST_CONTEXT *Pool2; // rax

  v4 = ContextSize;
  v6 = ContextBackFill;
  if ( !ContextSize )
    return 0;
  if ( (ContextSize & 7) != 0 || (ContextBackFill & 7) != 0 )
    return -1073676267;
  NdisPoolHandle = NetBufferList->NdisPoolHandle;
  Context = NetBufferList->Context;
  v12 = (_NET_BUFFER_LIST_CONTEXT *)NetBufferList->NetBufferListInfo[28];
  v13 = NdisPoolHandle[11];
  if ( (v13 & 2) == 0 )
    goto LABEL_14;
  v14 = 560LL;
  if ( (v13 & 1) == 0 )
    v14 = 384LL;
  if ( Context != (_NET_BUFFER_LIST_CONTEXT *)((char *)NetBufferList + v14) || Context->Offset < (unsigned __int16)v4 )
  {
LABEL_14:
    v15 = LOWORD(NetBufferList->NdisReserved[1]) + v4;
    LOWORD(NetBufferList->NdisReserved[1]) = v15;
    if ( v15 <= ndisMaxCachedNblContextSize )
    {
      if ( v15 <= WORD1(NetBufferList->NdisReserved[1]) )
        v15 = WORD1(NetBufferList->NdisReserved[1]);
      WORD1(NetBufferList->NdisReserved[1]) = v15;
    }
  }
  if ( Context )
  {
    Offset = Context->Offset;
    if ( Offset >= (unsigned __int16)v4 )
    {
      Context->Offset = Offset - v4;
      return 0;
    }
  }
  if ( v12 && v12->Size >= (unsigned __int16)v4 )
  {
    v12->Offset -= v4;
    v12->Next = NetBufferList->Context;
    NetBufferList->Context = v12;
    NetBufferList->NetBufferListInfo[28] = 0LL;
    return 0;
  }
  v16 = v6 + v4;
  if ( LOWORD(NetBufferList->NdisReserved[1]) <= ndisMaxCachedNblContextSize )
  {
    if ( v12 )
    {
      NetBufferList->NetBufferListInfo[28] = 0LL;
      ExFreePoolWithTag(v12, 0);
    }
    if ( v16 <= v4 + WORD1(NetBufferList->NdisReserved[1]) - LOWORD(NetBufferList->NdisReserved[1]) )
      v16 = v4 + WORD1(NetBufferList->NdisReserved[1]) - LOWORD(NetBufferList->NdisReserved[1]);
    if ( v16 > (unsigned int)(v4 + v6) )
      PoolTag = 1668170830;
  }
  Pool2 = (_NET_BUFFER_LIST_CONTEXT *)ExAllocatePool2(64LL, v16 + 16LL, PoolTag);
  if ( Pool2 )
  {
    Pool2->Size = v16;
    Pool2->Offset = v16 - v4;
    Pool2->Next = NetBufferList->Context;
    NetBufferList->Context = Pool2;
    return 0;
  }
  LOWORD(NetBufferList->NdisReserved[1]) -= v4;
  return -1073741670;
}
