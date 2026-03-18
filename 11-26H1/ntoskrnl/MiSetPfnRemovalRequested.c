/*
 * XREFs of MiSetPfnRemovalRequested @ 0x1406F1D98
 * Callers:
 *     MiMakePageBad @ 0x1404BAA50 (MiMakePageBad.c)
 *     MiInsertPageLockBadList @ 0x1404E5A90 (MiInsertPageLockBadList.c)
 *     MiAllocateBadPagesForMdl @ 0x1405245B4 (MiAllocateBadPagesForMdl.c)
 *     MiDeleteDynamicPfns @ 0x1406E81E0 (MiDeleteDynamicPfns.c)
 *     MiHotRemoveHugeRange @ 0x1406EBF04 (MiHotRemoveHugeRange.c)
 *     MiGetBadPageResources @ 0x1406F1108 (MiGetBadPageResources.c)
 *     MiRemoveBadPages @ 0x1406F17A0 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x1406F1FDC (MiUnlinkBadPages.c)
 * Callees:
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     MiGetPfnPageSizeIndex @ 0x14028B290 (MiGetPfnPageSizeIndex.c)
 *     MiGetBaseResidentPage @ 0x1402F1BA0 (MiGetBaseResidentPage.c)
 *     MiAnyPagesRemovalPending @ 0x140434D64 (MiAnyPagesRemovalPending.c)
 *     MiAddPendingBadPageNode @ 0x1406F0BC0 (MiAddPendingBadPageNode.c)
 *     MiRemovePendingBadPageNode @ 0x1406F1970 (MiRemovePendingBadPageNode.c)
 */

void __fastcall MiSetPfnRemovalRequested(unsigned __int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 BaseResidentPage; // rsi
  __int64 v8; // rdi
  __int64 v9; // r15
  int PfnPageSizeIndex; // r12d
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rax

  v3 = *(_DWORD *)(a1 + 32);
  if ( ((v3 >> 30) & 1) != a2 )
  {
    BaseResidentPage = 0LL;
    v8 = 0LL;
    v9 = -1LL;
    PfnPageSizeIndex = 3;
    if ( (*(_QWORD *)(a1 + 40) & 0x20000000000000LL) == 0 )
    {
      v11 = 56320LL * (unsigned int)MiPageToNode((__int64)(a1 + 0x220000000000LL) / 48);
      v12 = *(_QWORD *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 16LL);
      if ( a2 )
        _InterlockedIncrement64((volatile signed __int64 *)(v12 + v11 + 14176));
      else
        _InterlockedAdd64((volatile signed __int64 *)(v12 + v11 + 14176), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 )
      {
        BaseResidentPage = MiGetBaseResidentPage(a1);
        v8 = *(_QWORD *)(BaseResidentPage + 40);
        v9 = (BaseResidentPage + 0x220000000000LL) / 48;
        PfnPageSizeIndex = MiGetPfnPageSizeIndex(BaseResidentPage);
      }
    }
    if ( !a2 )
      MiRemovePendingBadPageNode(a1);
    *(_DWORD *)(a1 + 32) = ((unsigned __int8)a2 << 30) ^ (v3 ^ ((unsigned __int8)a2 << 30)) & 0xBFFFFFFF;
    if ( a2 )
      MiAddPendingBadPageNode(a1, a3);
    if ( BaseResidentPage )
    {
      if ( a2 )
      {
        if ( (v8 & 0x20000000000LL) != 0 )
          goto LABEL_19;
        v13 = *(_QWORD *)(BaseResidentPage + 40) | 0x20000000000LL;
      }
      else
      {
        if ( (unsigned int)MiAnyPagesRemovalPending(v9, PfnPageSizeIndex) )
          goto LABEL_19;
        v13 = *(_QWORD *)(BaseResidentPage + 40) & 0xFFFFFDFFFFFFFFFFuLL;
      }
      *(_QWORD *)(BaseResidentPage + 40) = v13;
LABEL_19:
      if ( BaseResidentPage != a1 )
        _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
}
