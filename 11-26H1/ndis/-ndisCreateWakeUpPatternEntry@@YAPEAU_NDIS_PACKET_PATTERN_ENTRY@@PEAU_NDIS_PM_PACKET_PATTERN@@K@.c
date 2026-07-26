/*
 * XREFs of ?ndisCreateWakeUpPatternEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_NDIS_PM_PACKET_PATTERN@@K@Z @ 0x1400B5BB8
 * Callers:
 *     ?ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B85CC (-ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSetOpenAddWakeUpPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B8CE8 (-ndisSetOpenAddWakeUpPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

struct _NDIS_PACKET_PATTERN_ENTRY *__fastcall ndisCreateWakeUpPatternEntry(
        struct _NDIS_PM_PACKET_PATTERN *Src,
        unsigned int a2)
{
  unsigned __int64 v4; // rsi
  __int64 Pool2; // rax
  int v6; // edx
  struct _NDIS_PACKET_PATTERN_ENTRY *v7; // rbx
  struct _NDIS_PACKET_PATTERN_ENTRY *result; // rax

  v4 = Src->MaskSize + 24LL;
  if ( v4 <= Src->PatternOffset + Src->PatternSize )
    LODWORD(v4) = Src->PatternOffset + Src->PatternSize;
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(v4 + 296), 1802519630LL);
  v7 = (struct _NDIS_PACKET_PATTERN_ENTRY *)Pool2;
  if ( Pool2 )
  {
    memmove((void *)(Pool2 + 48), Src, (unsigned int)v4);
    v7->Priority = Src->Priority;
    result = v7;
    v7->Size = v4 + 296;
    v7->PortNumber = a2;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        11,
        28,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids);
    }
    return 0LL;
  }
  return result;
}
