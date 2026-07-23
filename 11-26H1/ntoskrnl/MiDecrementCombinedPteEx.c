/*
 * XREFs of MiDecrementCombinedPteEx @ 0x14036BF5C
 * Callers:
 *     MiConvertStandbyToProto @ 0x1402E8EE8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x1402E9B0C (MiConvertPrivateToProto.c)
 *     MiDecommitHandleProtoFormatPte @ 0x140362D00 (MiDecommitHandleProtoFormatPte.c)
 *     MiCopyOnWriteCombineCloneDereference @ 0x14036CA50 (MiCopyOnWriteCombineCloneDereference.c)
 *     MiCopyOnWriteUpdatePte @ 0x14036D080 (MiCopyOnWriteUpdatePte.c)
 * Callees:
 *     MiFreeCombineBlock @ 0x140311464 (MiFreeCombineBlock.c)
 *     MiDecrementCloneBlock @ 0x14036BFF0 (MiDecrementCloneBlock.c)
 *     MiLogCombinedPteDelete @ 0x140709680 (MiLogCombinedPteDelete.c)
 */

__int64 __fastcall MiDecrementCombinedPteEx(int a1, __int64 a2, int a3)
{
  volatile signed __int32 *v5; // r9
  __int64 v6; // rcx
  unsigned int v7; // esi
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0;
  v5 = *(volatile signed __int32 **)(((a2 - 32) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  v6 = *(_QWORD *)v5;
  _InterlockedDecrement(v5 + 98);
  v7 = MiDecrementCloneBlock(v6, a1, a2, a3, (__int64)&v9);
  if ( v9 )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogCombinedPteDelete(a2);
    MiFreeCombineBlock(a2 - 32, 1);
  }
  return v7;
}
