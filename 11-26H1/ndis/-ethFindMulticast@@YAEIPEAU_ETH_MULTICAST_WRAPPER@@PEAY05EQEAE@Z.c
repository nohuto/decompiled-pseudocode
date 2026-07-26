/*
 * XREFs of ?ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z @ 0x1400612F0
 * Callers:
 *     ?ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x140029CB0 (-ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@P.c)
 *     ?ndisFIsLoopbackNetBuffer@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x140057120 (-ndisFIsLoopbackNetBuffer@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEA.c)
 *     ndisMIsLoopbackPacket @ 0x14008BAB0 (ndisMIsLoopbackPacket.c)
 *     EthFilterDprIndicateReceive @ 0x140098150 (EthFilterDprIndicateReceive.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ethFindMulticast(
        unsigned int a1,
        struct _ETH_MULTICAST_WRAPPER *a2,
        unsigned __int8 (*a3)[6],
        unsigned __int8 *const a4)
{
  unsigned int v4; // r11d
  __int64 v5; // rax
  unsigned int v7; // r10d
  unsigned __int8 *v8; // r9
  unsigned int v9; // ecx
  struct _ETH_MULTICAST_WRAPPER *v11; // r9
  unsigned int v12; // ecx

  v4 = 0;
  v5 = a1 >> 1;
  if ( a1 )
  {
    v7 = a1 - 1;
    while ( 1 )
    {
      if ( (unsigned int)v5 > v7 || (unsigned int)v5 < v4 )
        return 0;
      if ( a3 )
      {
        v8 = &(*a3)[6 * v5];
        v9 = *(_DWORD *)(v8 + 2);
        if ( v9 <= *(_DWORD *)(a4 + 2) )
        {
          if ( v9 < *(_DWORD *)(a4 + 2) )
            goto LABEL_18;
          if ( *(_WORD *)v8 <= *(_WORD *)a4 )
          {
            if ( *(_WORD *)v8 >= *(_WORD *)a4 )
              return 1;
            goto LABEL_18;
          }
        }
LABEL_11:
        if ( !(_DWORD)v5 )
          return 0;
        v7 = v5 - 1;
        v5 = v4 + (((unsigned int)v5 - v4) >> 1);
      }
      else
      {
        v11 = &a2[v5];
        v12 = *(_DWORD *)&v11->MCastAddress[2];
        if ( v12 > *(_DWORD *)(a4 + 2) )
          goto LABEL_11;
        if ( v12 < *(_DWORD *)(a4 + 2) )
          goto LABEL_18;
        if ( *(_WORD *)v11->MCastAddress > *(_WORD *)a4 )
          goto LABEL_11;
        if ( *(_WORD *)v11->MCastAddress >= *(_WORD *)a4 )
          return 1;
LABEL_18:
        v4 = v5 + 1;
        v5 = (_DWORD)v5 + 1 + ((v7 - (unsigned int)v5) >> 1);
      }
    }
  }
  return 0;
}
