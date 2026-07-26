/*
 * XREFs of NdisCopyReceiveNetBufferListInfo @ 0x140040B00
 * Callers:
 *     <none>
 * Callees:
 *     ndisGenerateCorrelationIds @ 0x140026FE0 (ndisGenerateCorrelationIds.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

void __stdcall NdisCopyReceiveNetBufferListInfo(PNET_BUFFER_LIST DestNetBufferList, PNET_BUFFER_LIST SrcNetBufferList)
{
  PNET_BUFFER_LIST v3; // rdi
  void **v4; // r9
  unsigned int v5; // eax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  _QWORD *Alignment; // r10
  __int64 v9; // rax
  unsigned int CorrelationIds; // eax
  int v11; // [rsp+30h] [rbp-19h] BYREF
  GUID RelatedActivityId; // [rsp+40h] [rbp-9h] BYREF
  GUID ActivityId; // [rsp+50h] [rbp+7h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp+17h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+27h] BYREF
  int *v16; // [rsp+80h] [rbp+37h]
  __int64 v17; // [rsp+88h] [rbp+3Fh]

  DestNetBufferList->NetBufferListInfo[0] = SrcNetBufferList->NetBufferListInfo[0];
  v3 = DestNetBufferList;
  DestNetBufferList->NetBufferListInfo[1] = SrcNetBufferList->NetBufferListInfo[1];
  DestNetBufferList->NetBufferListInfo[2] = SrcNetBufferList->NetBufferListInfo[2];
  DestNetBufferList->NetBufferListInfo[4] = SrcNetBufferList->NetBufferListInfo[4];
  DestNetBufferList->NetBufferListInfo[6] = SrcNetBufferList->NetBufferListInfo[6];
  DestNetBufferList->NetBufferListInfo[7] = SrcNetBufferList->NetBufferListInfo[7];
  DestNetBufferList->NetBufferListInfo[8] = SrcNetBufferList->NetBufferListInfo[8];
  DestNetBufferList->NetBufferListInfo[9] = SrcNetBufferList->NetBufferListInfo[9];
  DestNetBufferList->NetBufferListInfo[11] = SrcNetBufferList->NetBufferListInfo[11];
  DestNetBufferList->NetBufferListInfo[12] = SrcNetBufferList->NetBufferListInfo[12];
  DestNetBufferList->NetBufferListInfo[16] = SrcNetBufferList->NetBufferListInfo[16];
  DestNetBufferList->NetBufferListInfo[17] = SrcNetBufferList->NetBufferListInfo[17];
  DestNetBufferList->NetBufferListInfo[22] = SrcNetBufferList->NetBufferListInfo[22];
  DestNetBufferList->NetBufferListInfo[23] = SrcNetBufferList->NetBufferListInfo[23];
  DestNetBufferList->NetBufferListInfo[20] = SrcNetBufferList->NetBufferListInfo[20];
  DestNetBufferList->NetBufferListInfo[24] = SrcNetBufferList->NetBufferListInfo[24];
  DestNetBufferList->NetBufferListInfo[25] = SrcNetBufferList->NetBufferListInfo[25];
  DestNetBufferList->NetBufferListInfo[14] = SrcNetBufferList->NetBufferListInfo[14];
  if ( (SrcNetBufferList->NblFlags & 0x8000) != 0 )
  {
    DestNetBufferList->NblFlags |= 0x8000u;
    DestNetBufferList->NetBufferListInfo[5] = SrcNetBufferList->NetBufferListInfo[5];
  }
  DestNetBufferList->NetBufferListInfo[26] = SrcNetBufferList->NetBufferListInfo[26];
  DestNetBufferList->NetBufferListInfo[16] = SrcNetBufferList->NetBufferListInfo[16];
  if ( ((unsigned __int64)SrcNetBufferList->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0
    && ((__int64)SrcNetBufferList->NetBufferListInfo[10] & 1) == 0 )
  {
    WfpNblInfoClone(SrcNetBufferList, DestNetBufferList, 0LL, 0LL, 1);
  }
  if ( byte_14011F740 )
  {
    v3->NetBufferListInfo[13] = SrcNetBufferList->NetBufferListInfo[13];
  }
  else if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    v4 = &v3->NetBufferListInfo[13];
    if ( (__int64)v3->NetBufferListInfo[13] > 0 )
    {
      Alignment = (_QWORD *)v3->Link.Alignment;
      if ( v3->Link.Alignment )
      {
        do
        {
          v9 = Alignment[31];
          if ( !v9 || v9 < 0 )
          {
            CorrelationIds = ndisGenerateCorrelationIds(1u);
            Alignment[31] = CorrelationIds;
          }
          Alignment = (_QWORD *)*Alignment;
        }
        while ( Alignment );
      }
    }
    else
    {
      v5 = ndisGenerateCorrelationIds(1u);
      do
      {
        if ( (__int64)v3->NetBufferListInfo[13] <= 0 )
        {
          v6 = v5++;
          v3->NetBufferListInfo[13] = (void *)v6;
        }
        v3 = (PNET_BUFFER_LIST)v3->Link.Alignment;
      }
      while ( v3 );
    }
    v7 = (unsigned __int64)*v4;
    *(_QWORD *)RelatedActivityId.Data4 = 0LL;
    *(_QWORD *)&RelatedActivityId.Data1 = v7 & 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&RelatedActivityId.Data1 = (__int64)SrcNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
    ActivityId = (GUID)(v7 & 0x7FFFFFFFFFFFFFFFLL);
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      v11 = 5;
      EventDescriptor = (EVENT_DESCRIPTOR)ActivityTransfer;
      if ( Microsoft_Windows_Networking_CorrelationTraceActivityPayload )
      {
        *(_QWORD *)&UserData.Size = 16LL;
        UserData.Ptr = (unsigned __int64)&Microsoft_Windows_Networking_ProviderId;
        v16 = &v11;
        v17 = 4LL;
        EtwWriteTransfer(
          Microsoft_Windows_Networking_CorrelationHandle,
          &EventDescriptor,
          &ActivityId,
          &RelatedActivityId,
          2u,
          &UserData);
      }
      else
      {
        EtwWriteTransfer(
          Microsoft_Windows_Networking_CorrelationHandle,
          &EventDescriptor,
          &ActivityId,
          &RelatedActivityId,
          0,
          0LL);
      }
    }
  }
}
