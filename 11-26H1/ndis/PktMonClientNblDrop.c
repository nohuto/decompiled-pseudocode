/*
 * XREFs of PktMonClientNblDrop @ 0x14002F8C0
 * Callers:
 *     NdisFSendNetBufferLists @ 0x140025020 (NdisFSendNetBufferLists.c)
 *     PktMonClientNblDropNdis @ 0x14002F9F0 (PktMonClientNblDropNdis.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400359B0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisMSendNetBufferListsComplete @ 0x140036740 (NdisMSendNetBufferListsComplete.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140037E00 (NdisFIndicateReceiveNetBufferLists.c)
 * Callees:
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall PktMonClientNblDrop(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6, int a7, int a8)
{
  __int64 v11; // rdx
  __int16 v12; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+32h] [rbp-56h]
  __int16 v14; // [rsp+36h] [rbp-52h]
  __int64 v15; // [rsp+38h] [rbp-50h]
  int v16; // [rsp+40h] [rbp-48h]
  int v17; // [rsp+44h] [rbp-44h]
  int v18; // [rsp+48h] [rbp-40h]
  int v19; // [rsp+4Ch] [rbp-3Ch]
  __int64 v20; // [rsp+50h] [rbp-38h]
  _WORD v21[2]; // [rsp+58h] [rbp-30h] BYREF
  int v22; // [rsp+5Ch] [rbp-2Ch]
  int v23; // [rsp+60h] [rbp-28h]

  v13 = 0;
  v14 = 0;
  v19 = 0;
  v21[1] = 0;
  if ( byte_14011F740 && (*(_DWORD *)(a1 + 56) & 2) != 0 && (*(_DWORD *)(a2 + 128) & 0x8000) == 0 )
  {
    if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
    {
      v11 = *(_QWORD *)(a1 + 40);
      v15 = a2;
      v12 = 40;
      v18 = a6;
      v21[0] = 12;
      v22 = a7;
      v23 = a8;
      v16 = 1;
      v17 = a3;
      v20 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int64, __int16 *, _WORD *, _QWORD))(*((_QWORD *)&xmmword_14011F760 + 1) + 48LL))(
        xmmword_14011F760,
        v11,
        &v12,
        v21,
        0LL);
      ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
    }
  }
}
