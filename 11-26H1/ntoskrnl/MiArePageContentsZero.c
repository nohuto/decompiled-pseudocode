/*
 * XREFs of MiArePageContentsZero @ 0x140522A28
 * Callers:
 *     MiCreateSharedZeroPages @ 0x140282EF0 (MiCreateSharedZeroPages.c)
 *     MiGetBestPageFromNode @ 0x140287CB0 (MiGetBestPageFromNode.c)
 *     MiRemovePageAnyColor @ 0x140289560 (MiRemovePageAnyColor.c)
 *     MiReplenishPageSlist @ 0x140289C70 (MiReplenishPageSlist.c)
 *     MiGetPageSlist @ 0x14028A870 (MiGetPageSlist.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     MiDeleteUltraThreadContext @ 0x14028EB40 (MiDeleteUltraThreadContext.c)
 *     MiCreateSystemPageTable @ 0x14033B880 (MiCreateSystemPageTable.c)
 *     MiInitializeSystemPageTable @ 0x14033CC0C (MiInitializeSystemPageTable.c)
 *     MiConvertLargeActivePageToChain @ 0x1404035D0 (MiConvertLargeActivePageToChain.c)
 *     MiDeleteUltraMapContext @ 0x14045E5A0 (MiDeleteUltraMapContext.c)
 *     MiManageUltraSpacePageTable @ 0x14048EB9C (MiManageUltraSpacePageTable.c)
 *     MiSoftFaultClusterTradeGetPage @ 0x140717154 (MiSoftFaultClusterTradeGetPage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiIsPageOnBadList @ 0x14028EF30 (MiIsPageOnBadList.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14042AE90 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPageNotZero @ 0x14050EAD8 (MiPageNotZero.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeCheckForZeroPage @ 0x1407352D0 (KeCheckForZeroPage.c)
 */

__int64 __fastcall MiArePageContentsZero(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  ULONG_PTR v3; // r14
  __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // si
  int v6; // eax
  __int64 v7; // rdi
  _QWORD *v8; // rax
  ULONG_PTR v9; // rbx
  unsigned __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax

  v2 = a2;
  v3 = BugCheckParameter2;
  v4 = 48 * BugCheckParameter2 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(BugCheckParameter2) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter2, a2);
  }
  if ( KeGetCurrentPrcb()->MmInternal )
  {
    v6 = (*(_DWORD *)(v4 + 32) >> 22) & 3;
    if ( v6 != 3 )
    {
      if ( v6 != 1 && (v7 = 16LL, v2 > 0x10) || (v7 = v2) != 0 )
      {
        do
        {
          if ( (*(_DWORD *)(v4 + 32) & 0x40000000) != 0 || MiIsPageOnBadList(v4) )
            goto LABEL_20;
          v8 = (_QWORD *)MiMapPageInHyperSpaceWorker(v3, 0LL, 0x20000000);
          v9 = (ULONG_PTR)v8;
          if ( (MiFlags & 0x100) != 0 )
          {
            if ( *v8 || v8[511] )
            {
LABEL_18:
              MiPageNotZero(v9, v3);
              goto LABEL_19;
            }
            v10 = __rdtsc();
            v11 = *(_QWORD *)((((((unsigned __int64)HIDWORD(v10) << 32) | (unsigned int)v10) >> 4) & 0xFF8) + v9) == 0LL;
          }
          else
          {
            v11 = KeCheckForZeroPage(v8) == 0;
          }
          if ( !v11 )
            goto LABEL_18;
LABEL_19:
          MiUnmapPageInHyperSpaceWorker(v9, 0x11u, 0);
LABEL_20:
          v4 += 48LL;
          ++v3;
          if ( (--v7 & 0x3F) == 0 && KeShouldYieldProcessor() )
          {
            if ( CurrentIrql == 2 )
              break;
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
            v13 = KeGetCurrentIrql();
            if ( (_BYTE)v13 != 2 )
              __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v12) = 2;
              KiRaiseIrqlProcessIrqlFlags(v13, v12);
            }
          }
        }
        while ( v7 );
      }
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
