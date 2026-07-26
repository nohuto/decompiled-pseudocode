/*
 * XREFs of ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x14002CE00
 * Callers:
 *     ndisDoPeriodicReceivesIndication @ 0x1400305B0 (ndisDoPeriodicReceivesIndication.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140030C50 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140031270 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140033350 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400359B0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x14002D010 (-ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z.c)
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x14002D870 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

void __fastcall ndisIndicateXlatedPacketsToNdis5Protocols(struct _NDIS_NBL_RCV_TRACKER *a1)
{
  __int64 v2; // r13
  unsigned int v3; // ebp
  char v4; // si
  KIRQL v5; // r15
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int8 v9; // al
  __int64 v10; // r12
  struct _NDIS_PACKET **v11; // r14
  unsigned __int8 v12; // [rsp+20h] [rbp-178h]
  struct _NDIS_PACKET **v13; // [rsp+28h] [rbp-170h] BYREF
  int v14; // [rsp+30h] [rbp-168h]
  unsigned int v15; // [rsp+34h] [rbp-164h]
  __int128 v17; // [rsp+40h] [rbp-158h]
  __int64 v18; // [rsp+50h] [rbp-148h]
  _BYTE v19[256]; // [rsp+60h] [rbp-138h] BYREF

  v2 = *(_QWORD *)a1;
  v13 = 0LL;
  v14 = 0;
  v18 = 0LL;
  v17 = 0LL;
  memset(v19, 0, sizeof(v19));
  v3 = *((_DWORD *)a1 + 172);
  if ( (*((_DWORD *)a1 + 4) & 1) != 0 )
  {
    v4 = 1;
    v5 = 2;
  }
  else
  {
    v4 = 0;
    v5 = KfRaiseIrql(2u);
  }
  v6 = 0;
  v7 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 328LL);
  if ( v7 && *(_DWORD *)(v7 + 608) < 6u )
  {
    v15 = (*((_BYTE *)a1 + 16) & 2) != 0 ? 0xC000009A : 0;
  }
  else
  {
    v15 = -1073741670;
    *((_BYTE *)a1 + 692) = 1;
  }
  do
  {
    v8 = v6++;
    if ( *((_QWORD *)a1 + 5 * v8 + 8) )
    {
      v14 = 32;
      v13 = (struct _NDIS_PACKET **)v19;
      *(_QWORD *)&v17 = 0LL;
      DWORD2(v17) = 0;
      v18 = v2;
      do
      {
        v9 = ndisXlateRecvNetBufferListsToPacketArray((struct _NDIS_NBLS_TO_PKT_ARRAY *)&v13);
        v10 = DWORD2(v17);
        v11 = v13;
        v12 = v9;
        (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, _QWORD))(v2 + 3392))(v2, v13, DWORD2(v17));
        if ( v15 == -1073741670 && (_DWORD)v10 )
        {
          do
          {
            ndisXlateReturnPacketToNetBufferList(*v11++);
            --v10;
          }
          while ( v10 );
        }
      }
      while ( v12 == 1 );
      v15 = -1073741670;
    }
  }
  while ( v6 <= v3 );
  if ( !v4 && v5 != 2 )
    KeLowerIrql(v5);
}
