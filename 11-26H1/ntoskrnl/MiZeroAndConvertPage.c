/*
 * XREFs of MiZeroAndConvertPage @ 0x1402A0A00
 * Callers:
 *     MiZeroChainWorker @ 0x1402A02A0 (MiZeroChainWorker.c)
 *     MiAllocateLargeZeroPages @ 0x1403D0630 (MiAllocateLargeZeroPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x1406F32E0 (MiInitializeMdlOneNodeBatchPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiPfnBestZeroAttribute @ 0x1402A0DFC (MiPfnBestZeroAttribute.c)
 *     AccelFillMemory @ 0x1402A0F14 (AccelFillMemory.c)
 *     MiZeroLargePage @ 0x1402A0F54 (MiZeroLargePage.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     KeZeroPages @ 0x1407353B0 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x140C86058 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MiZeroAndConvertPage(__int64 a1, __int64 a2, int a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // ebx
  __int64 v7; // r14
  int v9; // r11d
  __int64 v10; // rdx
  unsigned int v11; // r12d
  __int64 v12; // rsi
  __int64 result; // rax
  BOOL v14; // r15d
  __int64 v15; // rdx
  __int64 v16; // rbx
  unsigned int v17; // r12d
  unsigned int v18; // ebp
  unsigned __int64 v19; // rdx
  unsigned int v20; // r13d
  unsigned __int64 v21; // rax
  __int64 *v22; // rsi
  unsigned __int64 Phase0Mapping; // rbx
  int v24; // r12d
  unsigned __int64 v25; // rsi
  __int64 ValidPte; // rax
  unsigned int v27; // eax
  __int64 *v28; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+98h] [rbp+10h]
  unsigned int v31; // [rsp+A0h] [rbp+18h]
  unsigned int v32; // [rsp+A8h] [rbp+20h]

  v5 = a5;
  v7 = (int)a4;
  v9 = a1;
  v10 = (unsigned __int128)((a2 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v11 = (4 * (a5 & 4)) | 8;
  v12 = ((unsigned __int64)v10 >> 63) + (v10 >> 3);
  if ( (a5 & 0x100) == 0 )
    v11 = 4 * (a5 & 4);
  v32 = v11;
  if ( (*(_DWORD *)(a2 + 32) & 0xC00000) == 0xC00000 )
  {
    v27 = MiPfnBestZeroAttribute(a2, a4);
    MiChangePageAttribute(a2, v27, v11);
    v9 = a1;
  }
  result = (*(_DWORD *)(a2 + 32) >> 22) & 3;
  v14 = result != v7;
  if ( (v5 & 1) != 0 )
  {
    if ( (_DWORD)result != (_DWORD)v7 )
    {
      if ( (unsigned int)MiPfnBestZeroAttribute(a2, (unsigned int)v7) == (_DWORD)v7 )
      {
        MiChangePageAttribute(a2, (unsigned int)v7, v11);
        v14 = 0;
      }
      v9 = a1;
    }
    if ( a3 != 3 )
    {
      MiZeroLargePage(v9, a2, a3, v7, (v5 >> 2) & 1);
LABEL_23:
      result = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
      *(_QWORD *)(a2 + 16) = result;
      goto LABEL_24;
    }
    v15 = 48 * v12;
    if ( (v5 & 4) != 0 )
    {
      v16 = v15 - 0x220000000000LL;
      v17 = 16;
      v18 = (*(_DWORD *)(v15 - 0x220000000000LL + 32) >> 22) & 3;
    }
    else
    {
      v16 = v15 - 0x220000000000LL;
      v18 = (*(_DWORD *)(v15 - 0x220000000000LL + 32) >> 22) & 3;
      v17 = 0;
    }
    v31 = v17;
    v30 = v16;
    v19 = (__int64)((unsigned __int128)(v15 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    v20 = *(_DWORD *)(qword_140E2D838
                    + 384LL * (unsigned int)MiPageToNode(v19 + (v19 >> 63))
                    + 4 * (v7 + 4LL * ((*(_DWORD *)(v16 + 32) >> 22) & 3))
                    + 120);
    if ( v20 != v18 )
      MiChangePageAttribute(v16, v20, v17);
    LOBYTE(a5) = 17;
    if ( KeGetCurrentPrcb()->MmInternal )
    {
      v21 = MiMapPageInHyperSpaceWorker(v12, (unsigned __int8 *)&a5, 0x80000000);
      v22 = 0LL;
      Phase0Mapping = v21;
      v24 = 1;
    }
    else
    {
      v24 = 0;
      Phase0Mapping = MxGetPhase0Mapping();
      v28 = (__int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      ValidPte = MiMakeValidPte(v28, v12, 2684354564LL);
      v22 = v28;
      *v28 = ValidPte;
    }
    if ( a1 )
    {
      if ( (int)AccelFillMemory(a1, Phase0Mapping, 4096, 0, 3LL) >= 0 )
        goto LABEL_16;
      _InterlockedIncrement(&dword_140EF4DEC);
    }
    KeZeroPages(Phase0Mapping, 4096LL);
LABEL_16:
    if ( v24 )
    {
      v25 = (unsigned __int8)a5;
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      *(_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      if ( (_BYTE)v25 != 17 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v25);
        __writecr8(v25);
      }
    }
    else
    {
      *v22 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      MiFlushSingleTbEntry(Phase0Mapping, 2LL);
    }
    if ( v20 != v18 && v20 != (_DWORD)v7 )
      MiChangePageAttribute(v30, v18, v31);
    v11 = v32;
    goto LABEL_23;
  }
LABEL_24:
  if ( v14 )
    return MiChangePageAttribute(a2, (unsigned int)v7, v11);
  return result;
}
