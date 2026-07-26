/*
 * XREFs of ?ndisMSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x140056990
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x140026050 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     PktMonClientNblLogNdis @ 0x14003EC20 (PktMonClientNblLogNdis.c)
 *     ?ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x140056AF0 (-ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMSendPacketsToNetBufferLists(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v6; // r9
  unsigned int v7; // r10d
  __int64 v8; // rax
  __int64 v9; // rbp
  unsigned __int8 v10; // al
  __int64 v11; // r8
  __int64 v12; // rdi
  unsigned __int8 v13; // bl
  unsigned int v14; // esi
  __int64 v15; // rax
  struct _NDIS_PACKET **v16; // rbx
  __int64 v17; // rdi
  _QWORD v18[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+40h] [rbp-38h]
  _DWORD v20[3]; // [rsp+44h] [rbp-34h] BYREF
  unsigned int v21; // [rsp+50h] [rbp-28h]
  __int64 v22; // [rsp+54h] [rbp-24h]
  int v23; // [rsp+5Ch] [rbp-1Ch]

  memset(v20, 0, sizeof(v20));
  v6 = (__int64)*a2;
  v22 = 0LL;
  v23 = 0;
  v7 = *(_DWORD *)(v6 - 4);
  if ( v7 >= ndisPacketStackSize )
    v8 = 16LL;
  else
    v8 = v6 + 48 * (v7 - (unsigned __int64)ndisPacketStackSize);
  v9 = *(_QWORD *)v8;
  v18[0] = *(_QWORD *)v8;
  v19 = a3;
  v18[1] = a2;
  v21 = 0;
  do
  {
    v10 = ndisXlateSendPacketArrayToNetBufferLists((struct _NDIS_PKT_ARRAY_TO_NBLS *)v18);
    v12 = *(_QWORD *)&v20[1];
    v13 = v10;
    if ( *(_QWORD *)&v20[1] )
    {
      v14 = HIDWORD(v22);
      if ( *(_DWORD *)ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          *(struct _NET_BUFFER_LIST **)&v20[1],
          *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v9 + 584),
          a1[320],
          0x8Fu,
          BYTE4(v22) & 1);
      if ( byte_14011F740 )
      {
        v15 = *(_QWORD *)(v9 + 1008);
        if ( v15 )
        {
          if ( (*(_DWORD *)(v15 + 56) & 1) != 0 )
            PktMonClientNblLogNdis(v9 + 984, v12, v11, 2);
        }
      }
      ((void (__fastcall *)(_QWORD *, __int64, _QWORD, _QWORD))a1[82])(a1, v12, 0LL, v14);
    }
  }
  while ( v13 );
  if ( !v12 && v21 < a3 )
  {
    v16 = &a2[v21];
    v17 = a3 - v21;
    do
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(v9 + 112))(v9, *v16++, 3221225626LL);
      --v17;
    }
    while ( v17 );
  }
}
