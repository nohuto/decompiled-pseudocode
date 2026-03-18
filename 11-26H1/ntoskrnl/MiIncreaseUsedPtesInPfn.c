/*
 * XREFs of MiIncreaseUsedPtesInPfn @ 0x14030B600
 * Callers:
 *     MiInitializePfn @ 0x1402D7680 (MiInitializePfn.c)
 *     MiHandleForkValidPrivatePte @ 0x14030ADC0 (MiHandleForkValidPrivatePte.c)
 *     MiHandleForkValidProtoPte @ 0x14030B310 (MiHandleForkValidProtoPte.c)
 *     MiHandleForkPagefilePte @ 0x14030CE54 (MiHandleForkPagefilePte.c)
 *     MiWriteUselessChildPte @ 0x14030D0DC (MiWriteUselessChildPte.c)
 *     MiDuplicateCloneLeaf @ 0x14030D374 (MiDuplicateCloneLeaf.c)
 *     MiBuildForkPageTable @ 0x14030DC5C (MiBuildForkPageTable.c)
 *     MiHandleForkTransitionPte @ 0x14030E420 (MiHandleForkTransitionPte.c)
 *     MiHandleForkProtoPte @ 0x14030EB98 (MiHandleForkProtoPte.c)
 *     MiHandleForkDemandZeroPte @ 0x14049AABC (MiHandleForkDemandZeroPte.c)
 *     MiWriteSharedDemandZeroPte @ 0x14049AC34 (MiWriteSharedDemandZeroPte.c)
 *     MiInitializeDummyPages @ 0x140CF32F0 (MiInitializeDummyPages.c)
 *     MxCreatePfnsForPtes @ 0x140CF6200 (MxCreatePfnsForPtes.c)
 *     MiFillGapPtes @ 0x140CF9690 (MiFillGapPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIncreaseUsedPtesInPfn(__int64 a1, int a2)
{
  __int64 v2; // rax
  unsigned int v3; // r10d

  if ( (*(_DWORD *)(a1 + 36) & 0x4000000) != 0 )
    v2 = *(_QWORD *)a1 >> 36;
  else
    v2 = *(_QWORD *)(a1 + 16) >> 17;
  v3 = (v2 & 0x3FF) + a2;
  if ( (*(_DWORD *)(a1 + 36) & 0x4000000) != 0 )
    *(_QWORD *)a1 = ((unsigned __int64)v3 << 36) ^ (*(_QWORD *)a1 ^ ((unsigned __int64)v3 << 36)) & 0xFFFFC00FFFFFFFFFuLL;
  else
    *(_QWORD *)(a1 + 16) = ((unsigned __int64)v3 << 17) ^ (*(_QWORD *)(a1 + 16) ^ ((unsigned __int64)v3 << 17)) & 0xFFFFFFFFF801FFFFuLL;
  return v3;
}
