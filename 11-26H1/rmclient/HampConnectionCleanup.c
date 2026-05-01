/*
 * XREFs of HampConnectionCleanup @ 0x18000432C
 * Callers:
 *     HampConnectionDestroy @ 0x1800041CC (HampConnectionDestroy.c)
 * Callees:
 *     HamFreeBuffer @ 0x180004D70 (HamFreeBuffer.c)
 */

void __fastcall HampConnectionCleanup(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *(_QWORD *)a1 )
  {
    if ( *(_BYTE *)(a1 + 156) )
    {
      switch ( *(_BYTE *)(a1 + 156) )
      {
        case 1:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001DF40, 1u, 0LL, a1);
          break;
        case 2:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001DF70, 1u, 0LL, a1);
          break;
        case 3:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020C70, 1u, 0LL, a1, 0LL);
          break;
        case 4:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001DFA0, 1u, 0LL, a1);
          break;
        case 5:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001D4C0, 1u, 0LL, a1);
          break;
        case 6:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001DD98, 1u, 0LL, a1);
          break;
      }
    }
    else
    {
      NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 2u, 0LL, a1);
    }
  }
  v2 = *(_QWORD *)(a1 + 136);
  if ( v2 )
    HamFreeBuffer(v2);
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
    HamFreeBuffer(v3);
}
