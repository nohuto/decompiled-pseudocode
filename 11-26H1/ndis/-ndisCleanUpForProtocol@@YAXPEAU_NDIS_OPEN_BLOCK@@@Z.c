/*
 * XREFs of ?ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14004A300
 * Callers:
 *     NdisCloseAdapter @ 0x140176E20 (NdisCloseAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z @ 0x140048EB0 (-ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z.c)
 *     NdisReleaseNicActive @ 0x14007A6C0 (NdisReleaseNicActive.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?ndisClearReceiveFiltersForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14016AC90 (-ndisClearReceiveFiltersForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisCleanUpForProtocol(struct _NDIS_OPEN_BLOCK *a1, __int64 a2)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rax
  int v5; // [rsp+40h] [rbp-58h] BYREF
  __int128 v6; // [rsp+48h] [rbp-50h] BYREF
  __int128 v7; // [rsp+58h] [rbp-40h]
  __int64 v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+70h] [rbp-28h]

  v5 = 0;
  v8 = 0LL;
  v9 = 0;
  v6 = 0LL;
  v7 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      6,
      59,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a1);
  }
  MiniportHandle = a1->MiniportHandle;
  if ( a1->PacketFilters )
    ndisMDoProtocolRequest(a1, a2, 0x1010Eu, &v5, 4u, 0);
  if ( a1->NumAddresses && MiniportHandle->MediaType == NdisMedium802_3 )
    ndisMDoProtocolRequest(a1, a2, 0x1010103u, 0LL, 0, 1u);
  NdisRSSParameters = a1->NdisRSSParameters;
  if ( NdisRSSParameters )
  {
    LOBYTE(v6) = -119;
    *(_DWORD *)((char *)&v6 + 2) = 1048620;
    BYTE1(v6) = NdisRSSParameters->Header.Revision;
    LODWORD(v7) = 44;
    *((_QWORD *)&v7 + 1) = 0x2C0000002CLL;
    HIDWORD(v8) = 16;
    ndisMDoProtocolRequest(a1, a2, 0x10204u, &v6, 0x2Cu, 1u);
  }
  while ( a1->AoAcReferences )
    NdisReleaseNicActive((char)a1, 8);
  if ( MiniportHandle->CurrentDevicePowerState != PowerDeviceD0 || (MiniportHandle->PnPFlags & 0x110) != 0 )
    ndisClearReceiveFiltersForProtocol(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      6,
      60,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)a1);
  }
}
