/*
 * XREFs of MiScrubNodeHugeRanges @ 0x1407113F0
 * Callers:
 *     MiScrubMemoryWorker @ 0x140884240 (MiScrubMemoryWorker.c)
 * Callees:
 *     MiScrubInterrupted @ 0x1404C3F28 (MiScrubInterrupted.c)
 *     MiScrubLargePage @ 0x14071116C (MiScrubLargePage.c)
 *     MiGetNodeHugeScrubRanges @ 0x14086DF80 (MiGetNodeHugeScrubRanges.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiScrubNodeHugeRanges(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rbx
  unsigned __int16 *v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 *NodeHugeScrubRanges; // rdi
  unsigned __int64 v8; // r13
  __int64 *v9; // r12
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  v14 = 0LL;
  v3 = 0LL;
  v4 = *(unsigned __int16 **)(v1 + 48);
  v5 = 56320LL * *(unsigned int *)(a1 + 8);
  v6 = *((_QWORD *)v4 + 2);
  NodeHugeScrubRanges = (__int64 *)MiGetNodeHugeScrubRanges(*v4, *(unsigned int *)(a1 + 8), &v14);
  if ( NodeHugeScrubRanges )
  {
    v8 = *(_QWORD *)(a1 + 200);
    v9 = &NodeHugeScrubRanges[v14];
    while ( v9 != NodeHugeScrubRanges )
    {
      v10 = (*--v9 & 0x3FFFFFFF) + 1;
      v11 = v10 + ((v3 ^ (*v9 >> 30)) & 0xFFFFFFFFFFC00000uLL ^ (*v9 >> 30));
      v3 = v11 ^ (v11 ^ v3) & 0xFFFFFFFFFFC00000uLL;
      while ( v10 )
      {
        --v10;
        v12 = ((_DWORD)v3 - 1) & 0x3FFFFF;
        v3 = (v3 - 1) ^ ((v3 - 1) ^ v3) & 0xFFFFFFFFFFC00000uLL;
        if ( v12 < v8 )
        {
          MiScrubLargePage((_DWORD *)a1, v12 << 18, 0, 1u);
          if ( MiScrubInterrupted(a1) )
          {
            v13 = v3 & 0x3FFFFF;
            goto LABEL_11;
          }
        }
      }
    }
    v13 = -1LL;
LABEL_11:
    *(_QWORD *)(v6 + v5 + 14168) = v13;
    ExFreePoolWithTag(NodeHugeScrubRanges, 0);
  }
  else
  {
    *(_QWORD *)(v6 + v5 + 14168) = -1LL;
  }
}
