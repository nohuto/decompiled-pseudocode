/*
 * XREFs of ?ndisMStartWanSends@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400DDEF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400437C0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall ndisMStartWanSends(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _LIST_ENTRY *p_PacketList; // rsi
  _LIST_ENTRY *Flink; // rdi
  _LIST_ENTRY *v4; // rax
  _LIST_ENTRY *Blink; // rcx
  int v6; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      3,
      10,
      (struct _GUID *)&WPP_8d8320412401304bdeb4ea90cedd2ab7_Traceguids,
      (char)a1);
  p_PacketList = &a1->PacketList;
  while ( 1 )
  {
    Flink = p_PacketList->Flink;
    if ( p_PacketList->Flink == p_PacketList )
      break;
    v4 = Flink->Flink;
    if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
      __fastfail(3u);
    Blink->Flink = v4;
    v4->Blink = Blink;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    v6 = ((__int64 (__fastcall *)(void *, _LIST_ENTRY *, _LIST_ENTRY *))a1->DriverHandle->MiniportDriverCharacteristics.CancelSendHandler)(
           a1->MiniportAdapterContext,
           Flink[5].Flink,
           Flink);
    if ( v6 != 259 )
      a1->WanSendCompleteHandler(a1, Flink, v6);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK_DPC(a1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      3,
      11,
      (struct _GUID *)&WPP_8d8320412401304bdeb4ea90cedd2ab7_Traceguids,
      (char)a1);
  return 0;
}
