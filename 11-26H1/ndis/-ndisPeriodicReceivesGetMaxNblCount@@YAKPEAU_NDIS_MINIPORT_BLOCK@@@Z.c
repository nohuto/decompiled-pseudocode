/*
 * XREFs of ?ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140030BF0
 * Callers:
 *     ndisGetMiniportIndicateList @ 0x140030AF0 (ndisGetMiniportIndicateList.c)
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140030C50 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisPeriodicReceivesGetMaxNblCount(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int64 result; // rax

  if ( !byte_14011D401 )
    return 0xFFFFFFFFLL;
  if ( dword_14011D40C )
    return (unsigned int)dword_14011D404;
  result = (unsigned int)ndisPeriodicReceivesNblCounts[*(unsigned int *)((char *)a1->PeriodicReceivesNblCountIndex
                                                                       + (KeGetPcr()->Prcb.Number << 12))];
  if ( dword_14011D404 < (unsigned int)result )
    return (unsigned int)dword_14011D404;
  return result;
}
