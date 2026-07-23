/*
 * XREFs of MiIncreaseUsedPtesInPfn @ 0x1402ED680
 * Callers:
 *     MiInitializePfn @ 0x1402B9440 (MiInitializePfn.c)
 *     MiHandleForkValidPrivatePte @ 0x1402ECE40 (MiHandleForkValidPrivatePte.c)
 *     MiHandleForkValidProtoPte @ 0x1402ED390 (MiHandleForkValidProtoPte.c)
 *     MiHandleForkPagefilePte @ 0x1402EEED4 (MiHandleForkPagefilePte.c)
 *     MiWriteUselessChildPte @ 0x1402EF15C (MiWriteUselessChildPte.c)
 *     MiDuplicateCloneLeaf @ 0x1402EF3F4 (MiDuplicateCloneLeaf.c)
 *     MiBuildForkPageTable @ 0x1402EFCDC (MiBuildForkPageTable.c)
 *     MiHandleForkTransitionPte @ 0x1402F04A0 (MiHandleForkTransitionPte.c)
 *     MiHandleForkProtoPte @ 0x1402F0C18 (MiHandleForkProtoPte.c)
 *     MiHandleForkDemandZeroPte @ 0x14049460C (MiHandleForkDemandZeroPte.c)
 *     MiWriteSharedDemandZeroPte @ 0x140494784 (MiWriteSharedDemandZeroPte.c)
 *     MiInitializeDummyPages @ 0x140CF9670 (MiInitializeDummyPages.c)
 *     MxCreatePfnsForPtes @ 0x140CFC580 (MxCreatePfnsForPtes.c)
 *     MiFillGapPtes @ 0x140CFFA10 (MiFillGapPtes.c)
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
