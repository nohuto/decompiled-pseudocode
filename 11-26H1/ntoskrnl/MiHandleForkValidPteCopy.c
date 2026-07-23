/*
 * XREFs of MiHandleForkValidPteCopy @ 0x1402EFB58
 * Callers:
 *     MiBuildForkPte @ 0x1402ECBF4 (MiBuildForkPte.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiLockAndInsertPageInFreeList @ 0x1402925F8 (MiLockAndInsertPageInFreeList.c)
 *     MiFinalizePageAttribute @ 0x1402BA3A0 (MiFinalizePageAttribute.c)
 *     MiDuplicateCloneLeaf @ 0x1402EF3F4 (MiDuplicateCloneLeaf.c)
 *     MiReplenishCloneLeafPage @ 0x1402F0A60 (MiReplenishCloneLeafPage.c)
 *     MiComputePreferredNode @ 0x1402F0B60 (MiComputePreferredNode.c)
 */

__int64 __fastcall MiHandleForkValidPteCopy(_QWORD *a1, unsigned __int64 a2)
{
  ULONG_PTR v3; // rsi
  __int64 v4; // rbp
  unsigned int v5; // r14d
  int v7; // ebx

  v3 = a1[42];
  v4 = a1[1];
  v5 = (*(_DWORD *)(48 * ((a2 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFE0LL) >> 22) & 3;
  if ( v3 != -1LL )
  {
    v7 = MiComputePreferredNode(v4 + 1024, a1[34]);
    if ( (unsigned int)MiPageToNode(v3) != v7 )
    {
      MiLockAndInsertPageInFreeList(48 * v3 - 0x220000000000LL);
      a1[42] = -1LL;
    }
  }
  if ( a1[42] == -1LL && !(unsigned int)MiReplenishCloneLeafPage(a1) )
    return 3221226029LL;
  MiFinalizePageAttribute(48LL * a1[42] - 0x220000000000LL, v5, 16LL);
  MiDuplicateCloneLeaf((__int64)a1);
  _InterlockedIncrement64((volatile signed __int64 *)(v4 + 648));
  return 0LL;
}
