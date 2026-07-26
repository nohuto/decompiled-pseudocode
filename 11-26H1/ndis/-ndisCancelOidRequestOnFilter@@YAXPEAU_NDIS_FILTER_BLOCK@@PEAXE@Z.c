/*
 * XREFs of ?ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1400BCE08
 * Callers:
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x140027820 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1400BCC78 (-ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 * Callees:
 *     McTemplateK0jqxqdq_EtwWriteTransfer @ 0x1400091D0 (McTemplateK0jqxqdq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140026840 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x14004A920 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisGrabOidCancellationList@@YAXPEAU_LIST_ENTRY@@0PEAXE@Z @ 0x14008DF00 (-ndisGrabOidCancellationList@@YAXPEAU_LIST_ENTRY@@0PEAXE@Z.c)
 */

void __fastcall ndisCancelOidRequestOnFilter(struct _NDIS_FILTER_BLOCK *a1, _LIST_ENTRY *a2, char a3)
{
  KIRQL v6; // dl
  int v7; // r8d
  int v8; // r9d
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v10; // rcx
  _LIST_ENTRY **p_Blink; // rbx
  struct _LIST_ENTRY *v12; // rdx
  struct _LIST_ENTRY v13; // [rsp+58h] [rbp+17h] BYREF
  __int128 v14; // [rsp+68h] [rbp+27h] BYREF
  __int128 v15; // [rsp+78h] [rbp+37h]
  __int128 v16; // [rsp+88h] [rbp+47h]
  KIRQL NewIrql; // [rsp+A8h] [rbp+67h] BYREF

  NewIrql = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, &NewIrql);
  ndisGrabOidCancellationList(&a1->OidRequestList, &v13, a2, a3);
  v6 = NewIrql;
  a1->LockThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v6);
  while ( 1 )
  {
    Flink = v13.Flink;
    if ( v13.Flink == &v13 )
      break;
    if ( v13.Flink->Blink != &v13 || (v10 = v13.Flink->Flink, v13.Flink->Flink->Blink != v13.Flink) )
      __fastfail(3u);
    p_Blink = &v13.Flink[-5].Blink;
    v13.Flink = v13.Flink->Flink;
    v12 = &v13;
    v10->Blink = &v13;
    v14 = 0uLL;
    *(_QWORD *)&v16 = (char *)Flink - 72;
    *((_QWORD *)&v16 + 1) = 0x1C001000CLL;
    v15 = (unsigned __int64)a1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x9Au,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        (char)p_Blink,
        a1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
      McTemplateK0jqxqdq_EtwWriteTransfer(
        (__int64)a1->IfBlock,
        (__int64)&CancelFilterOidRequestEx,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->IfBlock->NetLuid.Value,
        *((_DWORD *)p_Blink + 8),
        12);
    ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v14, (int)v12, v7, v8);
  }
}
