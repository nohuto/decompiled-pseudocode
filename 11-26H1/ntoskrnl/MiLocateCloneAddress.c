/*
 * XREFs of MiLocateCloneAddress @ 0x14036BA4C
 * Callers:
 *     MiSharedVaToPartition @ 0x14028370C (MiSharedVaToPartition.c)
 *     MiProtoFaultApplyPrivateFixups @ 0x1402DA280 (MiProtoFaultApplyPrivateFixups.c)
 *     MiProbeLeafPteAccess @ 0x1402EF490 (MiProbeLeafPteAccess.c)
 *     MiSectionProtectValidPte @ 0x140304460 (MiSectionProtectValidPte.c)
 *     MiGetPageProtection @ 0x1403061E4 (MiGetPageProtection.c)
 *     MiMakeProtoPrivate @ 0x1403114CC (MiMakeProtoPrivate.c)
 *     MiComputePageCommitment @ 0x140311CE0 (MiComputePageCommitment.c)
 *     MiTrimThisWsle @ 0x140322190 (MiTrimThisWsle.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140360F60 (MiDecommitHandleProtoFormatPte.c)
 *     MiReferenceExistingCloneProto @ 0x14036AC14 (MiReferenceExistingCloneProto.c)
 *     MiCopyOnWriteCombineCloneDereference @ 0x14036ACB0 (MiCopyOnWriteCombineCloneDereference.c)
 *     MiCopyOnWriteUpdatePte @ 0x14036B2E0 (MiCopyOnWriteUpdatePte.c)
 *     MiQueryLeafPte @ 0x1403DA3A0 (MiQueryLeafPte.c)
 *     MiGetPfnProtection @ 0x140433FF0 (MiGetPfnProtection.c)
 *     MiCopyToUserVa @ 0x1404A2F88 (MiCopyToUserVa.c)
 *     MiClonePteReadonly @ 0x1404D91C0 (MiClonePteReadonly.c)
 *     MiSplitReducedCommitClonePage @ 0x14052CA98 (MiSplitReducedCommitClonePage.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406E3E20 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

_QWORD *__fastcall MiLocateCloneAddress(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v5; // rbx

  if ( !*(_QWORD *)(a1 + 640) )
    return 0LL;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 1040) + 1280LL));
  v5 = *(_QWORD **)(a1 + 640);
  while ( v5 )
  {
    if ( a2 > v5[4] )
    {
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      if ( a2 >= v5[3] )
        break;
      v5 = (_QWORD *)*v5;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 1040) + 1280LL));
  return v5;
}
