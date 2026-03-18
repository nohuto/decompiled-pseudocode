/*
 * XREFs of Isoch_Transfer_Complete @ 0x140016AB4
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x140010510 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     Isoch_Transfer_PrepareForCompletion @ 0x140014BC0 (Isoch_Transfer_PrepareForCompletion.c)
 *     TR_QueueDpcForTransferCompletion @ 0x140016E34 (TR_QueueDpcForTransferCompletion.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall Isoch_Transfer_Complete(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  __int64 *v7; // rcx
  KIRQL v8; // bl

  Isoch_Transfer_PrepareForCompletion(a1, a2, a3, a4);
  if ( a5 )
  {
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v7 = *(__int64 **)(a1 + 432);
    if ( *v7 != a1 + 424 )
      __fastfail(3u);
    *(_QWORD *)(a2 + 8) = v7;
    *(_QWORD *)a2 = a1 + 424;
    *v7 = a2;
    *(_QWORD *)(a1 + 432) = a2;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    TR_QueueDpcForTransferCompletion(a1);
  }
  else
  {
    v8 = KfRaiseIrql(2u);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2104))(
      WdfDriverGlobals,
      *(_QWORD *)(a2 + 24),
      *(unsigned int *)(a2 + 68));
    KeLowerIrql(v8);
  }
}
