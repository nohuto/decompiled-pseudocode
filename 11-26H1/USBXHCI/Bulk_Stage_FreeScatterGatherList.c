/*
 * XREFs of Bulk_Stage_FreeScatterGatherList @ 0x140029210
 * Callers:
 *     Bulk_CompleteTransfers @ 0x14001FAFC (Bulk_CompleteTransfers.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x140022EF0 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1400242DC (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 * Callees:
 *     TR_SendCompleteStageRequest @ 0x1400292EC (TR_SendCompleteStageRequest.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x140029364 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall Bulk_Stage_FreeScatterGatherList(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  KIRQL v6; // bp

  if ( *(_BYTE *)(a1 + 288) )
  {
    if ( *(_DWORD *)(a2 + 160) )
    {
      TR_SendCompleteStageRequest(a1);
      SecureDmaEnabler_ReleaseResourcesAfterDma(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL), a2 + 128);
    }
  }
  else if ( *(_QWORD *)(a2 + 56) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
    v6 = KfRaiseIrql(2u);
    (*(void (__fastcall **)(__int64, _QWORD, bool))(*(_QWORD *)(v5 + 8) + 96LL))(
      v5,
      *(_QWORD *)(a2 + 56),
      (*(_BYTE *)(v4 + 32) & 1) == 0);
    KeLowerIrql(v6);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
}
