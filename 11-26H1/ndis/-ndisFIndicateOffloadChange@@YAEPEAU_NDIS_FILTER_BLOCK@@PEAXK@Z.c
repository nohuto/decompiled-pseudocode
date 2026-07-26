/*
 * XREFs of ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x14004C120
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14004D210 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14005D9A0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ?ndisFAllocateFilterOffload@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x14004D120 (-ndisFAllocateFilterOffload@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

unsigned __int8 __fastcall ndisFIndicateOffloadChange(
        struct _NDIS_FILTER_BLOCK *a1,
        unsigned __int16 *Src,
        unsigned int a3)
{
  _NDIS_FILTER_TASK_OFFLOAD *Offload; // rcx
  size_t v6; // rsi

  if ( a3 < 0x70 || *(_BYTE *)Src != 0xA7 || Src[1] < 0x70u || !*((_BYTE *)Src + 1) )
    return 0;
  Offload = a1->Offload;
  v6 = 220LL;
  if ( Offload )
  {
    memset(Offload, 0, sizeof(_NDIS_FILTER_TASK_OFFLOAD));
  }
  else if ( (unsigned int)ndisFAllocateFilterOffload(a1) )
  {
    return 0;
  }
  if ( Src[1] < 0xDCu )
    v6 = Src[1];
  memmove(a1->Offload, Src, v6);
  return 1;
}
