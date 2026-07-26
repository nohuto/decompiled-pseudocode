/*
 * XREFs of ?ndisOidPostRcvFilterAllocateQueue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AC870
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1400AC73C (-ndisFindReceiveQueueByQueueId@@YAPEAU_NDIS_RECEIVE_QUEUE_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEA.c)
 *     ?ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400AC768 (-ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF7BC (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostRcvFilterAllocateQueue(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  __int64 v5; // rdi
  unsigned int v6; // edx
  __int64 v7; // r8
  unsigned int *v8; // r9
  struct _NDIS_MINIPORT_BLOCK *ReceiveQueueByQueueId; // rdx
  KIRQL v10; // dl
  char v11[8]; // [rsp+30h] [rbp-A8h]
  __int128 v12; // [rsp+40h] [rbp-98h]
  __int64 v13; // [rsp+80h] [rbp-58h] BYREF
  KIRQL NewIrql; // [rsp+E0h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  v3 = ndisCaptureIovOidContext(&v13, a1);
  v12 = *(_OWORD *)v3;
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x10u,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      (char)v4,
      v1);
  if ( (_BYTE)v12 && *(_DWORD *)(v1 + 48) >= 0x43Cu )
  {
    v5 = *(_QWORD *)(v1 + 40);
    if ( *((_DWORD *)a1 + 10) )
    {
      v6 = *(_DWORD *)(v5 + 12);
      if ( v6 )
        ndisFreeReceiveQueue(v4, v6);
    }
    else
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v4, &NewIrql);
      ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v4, *(_DWORD *)(v5 + 12), v7, v8);
      HIDWORD(ReceiveQueueByQueueId->Reserved28) = 2;
      HIDWORD(ReceiveQueueByQueueId->Reserved26) = *(_DWORD *)(v5 + 44);
      if ( *(_BYTE *)(v5 + 1) >= 2u && *(_WORD *)(v5 + 2) >= 0x444u && *(_DWORD *)(v1 + 48) >= 0x444u )
        ReceiveQueueByQueueId->OriginalDeviceCaps.D2Latency = *(_DWORD *)(v5 + 1088);
      v10 = NewIrql;
      v4->MiniportThread = 0LL;
      KeReleaseSpinLock(&v4->Lock, v10);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x11u,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      (char)v4,
      *(_QWORD *)v11);
  }
}
