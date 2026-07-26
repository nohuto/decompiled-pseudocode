/*
 * XREFs of ?ndisCreateWoLPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_WOL_PATTERN@@K@Z @ 0x1400B5C94
 * Callers:
 *     ?ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x14001DDE0 (-ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQU.c)
 *     ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B62F4 (-ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     ?ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z @ 0x14001FAE0 (-ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

struct _NDIS_PACKET_PATTERN_ENTRY *__fastcall ndisCreateWoLPatternEntry(
        struct _NDIS_PM_WOL_PATTERN *Src,
        unsigned int a2)
{
  unsigned int WoLPatternSize; // eax
  int v5; // edx
  size_t v6; // rbp
  unsigned int v7; // edi
  __int64 Pool2; // rax
  struct _NDIS_PACKET_PATTERN_ENTRY *v9; // rbx
  int v10; // r9d
  struct _NDIS_PACKET_PATTERN_ENTRY *result; // rax

  WoLPatternSize = ndisGetWoLPatternSize(Src);
  v6 = WoLPatternSize;
  v7 = WoLPatternSize + 108;
  if ( WoLPatternSize + 108 < 0x130 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 59;
      goto LABEL_8;
    }
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, v7, 2003846222LL);
    v9 = (struct _NDIS_PACKET_PATTERN_ENTRY *)Pool2;
    if ( Pool2 )
    {
      memmove((void *)(Pool2 + 48), Src, v6);
      v9->Priority = v9->Pattern.MaskSize;
      result = v9;
      v9->Size = v7;
      v9->PortNumber = a2;
      return result;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 60;
LABEL_8:
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        11,
        v10,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids);
    }
  }
  return 0LL;
}
