/*
 * XREFs of ?ndisCreatePMRejectWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_SINGLE_LIST_ENTRY@@H@Z @ 0x140047E60
 * Callers:
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140046890 (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140049560 (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ndisCreatePMRejectWorkItem(struct _NDIS_MINIPORT_BLOCK *a1, struct _SINGLE_LIST_ENTRY *a2, int a3)
{
  __int64 Pool2; // rax
  int v8; // edx
  struct _WORK_QUEUE_ITEM *v9; // r14

  if ( !a2 )
    return 0LL;
  Pool2 = ExAllocatePool2(64LL, 56LL, 1769423950LL);
  v9 = (struct _WORK_QUEUE_ITEM *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 32) = a1;
    *(_QWORD *)(Pool2 + 40) = a2;
    *(_DWORD *)(Pool2 + 48) = a3;
    ndisReferenceMiniport(a1, 0xFu);
    v9->Parameter = v9;
    v9->WorkerRoutine = ndisPMRejectAsync;
    v9->List.Flink = 0LL;
    ExQueueWorkItem(v9, (WORK_QUEUE_TYPE)40);
    return 0LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        14,
        73,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids);
    }
    return 3221225626LL;
  }
}
