/*
 * XREFs of MiLocateCloneAddress @ 0x14036D7EC
 * Callers:
 *     MiSharedVaToPartition @ 0x140282C7C (MiSharedVaToPartition.c)
 *     MiProtoFaultApplyPrivateFixups @ 0x1402BC040 (MiProtoFaultApplyPrivateFixups.c)
 *     MiProbeLeafPteAccess @ 0x1402D1510 (MiProbeLeafPteAccess.c)
 *     MiSectionProtectValidPte @ 0x1402E64E0 (MiSectionProtectValidPte.c)
 *     MiGetPageProtection @ 0x1402E8264 (MiGetPageProtection.c)
 *     MiMakeProtoPrivate @ 0x140313500 (MiMakeProtoPrivate.c)
 *     MiComputePageCommitment @ 0x140313D10 (MiComputePageCommitment.c)
 *     MiTrimThisWsle @ 0x1403241C0 (MiTrimThisWsle.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140362D00 (MiDecommitHandleProtoFormatPte.c)
 *     MiReferenceExistingCloneProto @ 0x14036C9B4 (MiReferenceExistingCloneProto.c)
 *     MiCopyOnWriteCombineCloneDereference @ 0x14036CA50 (MiCopyOnWriteCombineCloneDereference.c)
 *     MiCopyOnWriteUpdatePte @ 0x14036D080 (MiCopyOnWriteUpdatePte.c)
 *     MiQueryLeafPte @ 0x1403DD590 (MiQueryLeafPte.c)
 *     MiGetPfnProtection @ 0x1404290C0 (MiGetPfnProtection.c)
 *     MiCopyToUserVa @ 0x14049C9A8 (MiCopyToUserVa.c)
 *     MiClonePteReadonly @ 0x1404D28A0 (MiClonePteReadonly.c)
 *     MiSplitReducedCommitClonePage @ 0x14052EFB8 (MiSplitReducedCommitClonePage.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406E8AD0 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
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
