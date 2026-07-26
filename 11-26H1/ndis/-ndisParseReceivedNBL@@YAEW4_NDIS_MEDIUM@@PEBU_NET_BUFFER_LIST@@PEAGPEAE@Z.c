/*
 * XREFs of ?ndisParseReceivedNBL@@YAEW4_NDIS_MEDIUM@@PEBU_NET_BUFFER_LIST@@PEAGPEAE@Z @ 0x1400630D0
 * Callers:
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x140075B60 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisParseReceivedNBL(
        enum _NDIS_MEDIUM a1,
        const struct _NET_BUFFER_LIST *a2,
        unsigned __int16 *a3,
        unsigned __int8 *a4)
{
  unsigned __int8 v4; // r10
  _NET_BUFFER *FirstNetBuffer; // rsi
  _MDL *CurrentMdl; // rcx
  unsigned int ByteCount; // ebx
  __int64 CurrentMdlOffset; // rsi
  char *MappedSystemVa; // rdx
  char *v12; // rdx
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // ax
  unsigned __int8 v15; // cl
  __int64 result; // rax
  unsigned __int16 v17; // [rsp+40h] [rbp+8h]

  v4 = 0;
  if ( a1 )
  {
    v14 = (unsigned __int16)a2->NetBufferListInfo[7];
    v4 = 1;
    v15 = 1;
LABEL_11:
    *a3 = v14;
    goto LABEL_12;
  }
  FirstNetBuffer = a2->FirstNetBuffer;
  CurrentMdl = FirstNetBuffer->CurrentMdl;
  if ( !CurrentMdl
    || (ByteCount = CurrentMdl->ByteCount, ByteCount < 0xE)
    || (CurrentMdlOffset = FirstNetBuffer->CurrentMdlOffset, ByteCount <= (unsigned int)CurrentMdlOffset)
    || ByteCount - (unsigned int)CurrentMdlOffset < 0xE )
  {
    v15 = 0;
    goto LABEL_12;
  }
  if ( (CurrentMdl->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)CurrentMdl->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPages(CurrentMdl, 0);
  v12 = &MappedSystemVa[CurrentMdlOffset];
  v17 = *((_WORD *)v12 + 6);
  v13 = _byteswap_ushort(v17);
  if ( v13 > 0x600u )
  {
    if ( v13 == 0x8100 )
    {
      if ( ByteCount < 0x12 || ByteCount - (unsigned int)CurrentMdlOffset < 0x12 )
      {
        v15 = 0;
        v4 = 0;
        goto LABEL_12;
      }
      v17 = *((_WORD *)v12 + 8);
    }
    v14 = v17;
    v4 = 1;
    v15 = 1;
    goto LABEL_11;
  }
  v4 = 0;
  v15 = 1;
  if ( v12[14] == -86 && v12[15] == -86 && v12[16] == 3 )
  {
    v14 = *((_WORD *)v12 + 10);
    v4 = 1;
    goto LABEL_11;
  }
LABEL_12:
  result = v15;
  *a4 = v4;
  return result;
}
