/*
 * XREFs of ndisQueuePeriodicReceivesWorkItem @ 0x1400300F0
 * Callers:
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140030C50 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x140013F00 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisTraceQueueWorkItem@@YAXXZ @ 0x1400C8844 (-ndisTraceQueueWorkItem@@YAXXZ.c)
 */

LONG __fastcall ndisQueuePeriodicReceivesWorkItem(__int64 a1, char a2)
{
  LONG result; // eax
  KIRQL v5; // al
  struct _NDIS_REFCOUNT_BLOCK *v6; // rcx
  KIRQL v7; // si
  int v8; // ecx
  KIRQL v9; // r14
  struct _KSEMAPHORE *v10; // rbx
  KSPIN_LOCK *p_Blink; // rcx
  _LIST_ENTRY *Flink; // rcx
  struct _KSEMAPHORE **v13; // rdi
  KSPIN_LOCK *v14; // rcx

  result = _InterlockedExchange((volatile __int32 *)(a1 + 3288), 1);
  if ( !result )
  {
    if ( HIBYTE(word_14011EFA4) )
      ndisTraceQueueWorkItem();
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4432));
    v6 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4896);
    v7 = v5;
    if ( v6 )
      NdisReferenceWithTag(v6, 0x4Cu);
    v8 = *(_DWORD *)(a1 + 4440) + 1;
    *(_DWORD *)(a1 + 4440) = v8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0xDu,
        (struct _GUID *)&WPP_5c1c115ae3d7308ea4dc20929af9c88a_Traceguids,
        a1,
        v8);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4432), v7);
    v9 = 2;
    v10 = (struct _KSEMAPHORE *)((char *)qword_14011D440 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number);
    p_Blink = (KSPIN_LOCK *)&v10->Header.WaitListHead.Blink;
    if ( a2 )
      KeAcquireSpinLockAtDpcLevel(p_Blink);
    else
      v9 = KeAcquireSpinLockRaiseToDpc(p_Blink);
    Flink = v10->Header.WaitListHead.Flink;
    v13 = (struct _KSEMAPHORE **)(a1 + 3256);
    if ( (struct _KSEMAPHORE *)Flink->Flink != v10 )
      __fastfail(3u);
    v13[1] = (struct _KSEMAPHORE *)Flink;
    *v13 = v10;
    Flink->Flink = (_LIST_ENTRY *)v13;
    v14 = (KSPIN_LOCK *)&v10->Header.WaitListHead.Blink;
    v10->Header.WaitListHead.Flink = (_LIST_ENTRY *)v13;
    ++v10->Limit;
    if ( a2 )
      KeReleaseSpinLockFromDpcLevel(v14);
    else
      KeReleaseSpinLock(v14, v9);
    return KeReleaseSemaphore(v10 + 1, 0, 1, 0);
  }
  return result;
}
