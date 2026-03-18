/*
 * XREFs of MiAbortCombineScan @ 0x1403691D0
 * Callers:
 *     MiCreateSlabEntry @ 0x140206284 (MiCreateSlabEntry.c)
 *     MiCopyPage @ 0x140293FA4 (MiCopyPage.c)
 *     MiChangePageAttribute @ 0x1402D8660 (MiChangePageAttribute.c)
 *     MiInitializeMdlPfnSecureState @ 0x14033BD48 (MiInitializeMdlPfnSecureState.c)
 *     MiChangePageAttributeBatch @ 0x140368E1C (MiChangePageAttributeBatch.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x140369290 (MiUpdateSlabPagePlaceholderState.c)
 *     MiFreePageToSlabAllocator @ 0x140369964 (MiFreePageToSlabAllocator.c)
 *     MiCompleteSecureProcessFault @ 0x14038AED0 (MiCompleteSecureProcessFault.c)
 *     MiDeleteDynamicPfns @ 0x1406E81E0 (MiDeleteDynamicPfns.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x140285050 (MiFlushSingleTbEntry.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall MiAbortCombineScan(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  _QWORD *v5; // rcx

  if ( dword_140E2EA44 )
  {
    v2 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2EA40);
    v3 = (_QWORD *)(v2 + 17664);
    for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
    {
      if ( i[6] == a1 )
      {
        v5 = (_QWORD *)i[7];
        if ( (*v5 & 1) != 0 )
        {
          *v5 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          MiFlushSingleTbEntry((__int64)((_QWORD)v5 << 25) >> 16, 1LL);
        }
      }
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2EA40);
  }
}
