/*
 * XREFs of ?ndisMiniportRevokeOpenHandles@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A3C28
 * Callers:
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AA224 (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14016E220 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisCleanupUserOpenContext@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x14007E130 (-ndisCleanupUserOpenContext@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@@Z.c)
 */

void __fastcall ndisMiniportRevokeOpenHandles(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_BLOCK *Flink; // rbx
  _NDIS_MINIPORT_BLOCK *v3; // rsi
  KSPIN_LOCK *p_AtDispatch; // r14
  _NDIS_MINIPORT_BLOCK *NextMiniport; // rax
  _NDIS_MINIPORT_BLOCK **v6; // rax
  KIRQL v7; // dl
  _QWORD *v8; // rbx
  struct _KEVENT *v9; // rsi
  __int64 v10; // [rsp+30h] [rbp-20h]
  _QWORD *v11; // [rsp+40h] [rbp-10h] BYREF
  _NDIS_MINIPORT_BLOCK *v12; // [rsp+48h] [rbp-8h]
  KIRQL NewIrql; // [rsp+80h] [rbp+30h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      11,
      (struct _GUID *)&WPP_afd79cac345434603fc4697a366a014e_Traceguids,
      (char)a1);
  NewIrql = 0;
  v12 = (_NDIS_MINIPORT_BLOCK *)&v11;
  v11 = &v11;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  Flink = (struct _NDIS_MINIPORT_BLOCK *)a1->OpenFileHandles.Flink;
  if ( Flink != (struct _NDIS_MINIPORT_BLOCK *)&a1->OpenFileHandles )
  {
    while ( 1 )
    {
      v3 = Flink;
      p_AtDispatch = (KSPIN_LOCK *)&Flink[-1].PollModeConfigKnobs.MaxPacketsReceive.AtDispatch;
      Flink = *(struct _NDIS_MINIPORT_BLOCK **)&Flink->Header.Type;
      if ( Flink->NextMiniport != v3 )
        break;
      NextMiniport = v3->NextMiniport;
      if ( *(_NDIS_MINIPORT_BLOCK **)&NextMiniport->Header.Type != v3 )
        break;
      *(_QWORD *)&NextMiniport->Header.Type = Flink;
      Flink->NextMiniport = NextMiniport;
      KeAcquireSpinLockAtDpcLevel(p_AtDispatch + 4);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v10) = *((unsigned __int8 *)p_AtDispatch + 41);
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xDu,
          0xCu,
          (struct _GUID *)&WPP_afd79cac345434603fc4697a366a014e_Traceguids,
          (char)p_AtDispatch,
          v10);
      }
      if ( !*((_BYTE *)p_AtDispatch + 41) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4,
            13,
            13,
            (struct _GUID *)&WPP_afd79cac345434603fc4697a366a014e_Traceguids,
            (char)p_AtDispatch);
        *((_BYTE *)p_AtDispatch + 40) = 1;
        v6 = (_NDIS_MINIPORT_BLOCK **)v12;
        if ( *(_QWORD ***)&v12->Header.Type != &v11 )
          break;
        v3->NextMiniport = v12;
        *(_QWORD *)&v3->Header.Type = &v11;
        *v6 = v3;
        v12 = v3;
      }
      KeReleaseSpinLockFromDpcLevel(p_AtDispatch + 4);
      if ( Flink == (struct _NDIS_MINIPORT_BLOCK *)&a1->OpenFileHandles )
        goto LABEL_14;
    }
    __fastfail(3u);
  }
LABEL_14:
  v7 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v7);
  v8 = v11;
  while ( v8 != &v11 )
  {
    v9 = (struct _KEVENT *)(v8 - 9);
    v8 = (_QWORD *)*v8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        13,
        14,
        (struct _GUID *)&WPP_afd79cac345434603fc4697a366a014e_Traceguids,
        (char)v9);
    ndisCleanupUserOpenContext(a1, (char *)v9);
    KeSetEvent(v9 + 2, 2, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      15,
      (struct _GUID *)&WPP_afd79cac345434603fc4697a366a014e_Traceguids,
      (char)a1);
}
