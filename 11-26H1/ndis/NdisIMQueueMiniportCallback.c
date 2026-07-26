/*
 * XREFs of NdisIMQueueMiniportCallback @ 0x1400A2180
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qLq @ 0x140023120 (WPP_RECORDER_SF_qLq.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A02B0 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisIMQueueMiniportCallback(
        struct _NDIS_MINIPORT_BLOCK *a1,
        void (__fastcall *a2)(void *, __int64),
        __int64 a3)
{
  KIRQL v6; // al
  unsigned __int64 *p_Lock; // rcx
  KIRQL v8; // r12
  bool v9; // zf
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 Pool2; // rax
  int v13; // edx
  _SINGLE_LIST_ENTRY *v14; // rsi
  int v15; // esi

  v6 = KfRaiseIrql(2u);
  p_Lock = &a1->Lock;
  v8 = v6;
  if ( KeGetCurrentThread() == a1->MiniportThread )
  {
    KeAcquireSpinLockAtDpcLevel(p_Lock);
LABEL_5:
    v10 = 0;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    a2(a1->MiniportAdapterContext, a3);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    ndisMProcessDeferred(a1);
    a1->LockAcquired = 0;
    a1->LockThread = 0LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    goto LABEL_26;
  }
  KeAcquireSpinLockAtDpcLevel(p_Lock);
  v9 = a1->LockAcquired == 0;
  a1->MiniportThread = KeGetCurrentThread();
  if ( v9 )
  {
    a1->LockAcquired = 1;
    a1->LockThread = KeGetCurrentThread();
    goto LABEL_5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x2Eu,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      a3);
  v11 = 32LL;
  if ( !a2 )
    v11 = 24LL;
  Pool2 = ExAllocatePool2(64LL, v11, 1769423950LL);
  v14 = (_SINGLE_LIST_ENTRY *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 8) = 6;
    *(_QWORD *)(Pool2 + 16) = a3;
    if ( a2 )
      *(_QWORD *)(Pool2 + 24) = a2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        0xCu,
        0x30u,
        (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
        Pool2,
        6,
        a3);
    v14->Next = (_SINGLE_LIST_ENTRY *)a1->WorkQueue[6];
    a1->WorkQueue[6].Next = v14;
    v15 = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        12,
        47,
        (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
        (char)a1);
    }
    v15 = -1073741823;
  }
  if ( (a1->Flags & 0x48000) == 0x8000 && !v15 )
    KeInsertQueueDpc(&a1->DeferredDpc, 0LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x31u,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)a1,
      a3);
  a1->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  v10 = -1073741670;
  if ( !v15 )
    v10 = 259;
LABEL_26:
  if ( v8 != 2 )
    KeLowerIrql(v8);
  return v10;
}
