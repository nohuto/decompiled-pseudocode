/*
 * XREFs of ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x140075990
 * Callers:
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x140051740 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140086480 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1400BCC78 (-ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 * Callees:
 *     McTemplateK0jqxqdq_EtwWriteTransfer @ 0x1400091D0 (McTemplateK0jqxqdq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140026840 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisGrabOidCancellationList@@YAXPEAU_LIST_ENTRY@@0PEAXE@Z @ 0x14008DF00 (-ndisGrabOidCancellationList@@YAXPEAU_LIST_ENTRY@@0PEAXE@Z.c)
 */

void __fastcall ndisCancelOidRequestOnMiniport(struct _NDIS_MINIPORT_BLOCK *a1, void *a2, unsigned __int8 a3)
{
  KIRQL v6; // r11
  int v7; // r8d
  int v8; // r9d
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY **p_Blink; // rdi
  struct _LIST_ENTRY *v11; // rdx
  struct _LIST_ENTRY v12; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v13[4]; // [rsp+60h] [rbp-38h] BYREF
  __int128 v14; // [rsp+80h] [rbp-18h]

  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  ndisGrabOidCancellationList(&a1->OidRequestList, &v12, a2, a3);
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v6);
  while ( v12.Flink != &v12 )
  {
    if ( v12.Flink->Blink != &v12 || (Flink = v12.Flink->Flink, v12.Flink->Flink->Blink != v12.Flink) )
      __fastfail(3u);
    p_Blink = &v12.Flink[-5].Blink;
    v12.Flink = v12.Flink->Flink;
    v11 = &v12;
    Flink->Blink = &v12;
    memset(&v13[1], 0, 24);
    *(_QWORD *)&v14 = p_Blink;
    *((_QWORD *)&v14 + 1) = 0x1C001000CLL;
    v13[0] = a1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x9Bu,
        (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
        (char)p_Blink,
        a1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
      McTemplateK0jqxqdq_EtwWriteTransfer(
        (__int64)Flink,
        (__int64)&CancelMiniportOidRequestEx,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        *((_DWORD *)p_Blink + 8),
        12);
    ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)v13, (int)v11, v7, v8);
  }
}
