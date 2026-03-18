/*
 * XREFs of ?CleanupVadReference@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@@Z @ 0x140116DE4
 * Callers:
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CE814 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CFED0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14002FDD8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140038D60 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     Feature_3358814523__private_IsEnabledDeviceUsageNoInline @ 0x14004DC48 (Feature_3358814523__private_IsEnabledDeviceUsageNoInline.c)
 *     CleanupVaRangeReference @ 0x14009D1F8 (CleanupVaRangeReference.c)
 */

void __fastcall VIDMM_GLOBAL::CleanupVadReference(VIDMM_GLOBAL *this, struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *a2)
{
  VIDMM_GLOBAL *v3; // rcx
  VIDMM_GLOBAL *v4; // rcx

  if ( *((_QWORD *)a2 + 4) )
  {
    if ( (unsigned int)Feature_3358814523__private_IsEnabledDeviceUsageNoInline() )
    {
      CleanupVaRangeReference(*((VIDMM_MAPPED_VA_RANGE **)a2 + 1));
      VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v4, *((struct _LIST_ENTRY **)a2 + 4));
    }
    else
    {
      VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v3, *((struct _LIST_ENTRY **)a2 + 4));
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(*((VIDMM_MAPPED_VA_RANGE **)a2 + 1));
    }
    operator delete(*((void **)a2 + 4));
    *((_QWORD *)a2 + 4) = 0LL;
    *(_QWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
  }
}
