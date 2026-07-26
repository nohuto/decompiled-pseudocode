/*
 * XREFs of ndisDereferenceDmaAdapterForMiniport @ 0x140022580
 * Callers:
 *     ?ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z @ 0x140022550 (-ndisDereferenceDmaAdapter@@YAXPEAU_NDIS_SG_DMA_BLOCK@@@Z.c)
 * Callees:
 *     PplDestroyLookasideList @ 0x140096C04 (PplDestroyLookasideList.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisDereferenceDmaAdapterForMiniport(PVOID P)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v3; // si
  __int64 v4; // rcx
  void *v5; // rcx
  struct _KEVENT *v6; // rcx

  v1 = (KSPIN_LOCK *)*((_QWORD *)P + 1);
  v3 = KeAcquireSpinLockRaiseToDpc(v1 + 12);
  v1[65] = (KSPIN_LOCK)KeGetCurrentThread();
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 22, 0xFFFFFFFF) == 1 )
  {
    v4 = *((_QWORD *)P + 5);
    if ( v4 )
    {
      *((_QWORD *)P + 18) = v4;
      (*(void (**)(void))(*(_QWORD *)(v4 + 8) + 8LL))();
      *((_QWORD *)P + 5) = 0LL;
    }
    v5 = (void *)*((_QWORD *)P + 10);
    if ( v5 )
    {
      PplDestroyLookasideList(v5);
      *((_QWORD *)P + 10) = 0LL;
    }
    v6 = (struct _KEVENT *)*((_QWORD *)P + 12);
    if ( v6 )
      KeSetEvent(v6, 0, 0);
    v1[63] = 0LL;
    ExFreePoolWithTag(P, 0);
  }
  v1[65] = 0LL;
  KeReleaseSpinLock(v1 + 12, v3);
}
