/*
 * XREFs of MiGetPageChainSmallPageProcess @ 0x140287000
 * Callers:
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x1402BA8E0 (MiZeroPhysicalPage.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiMakeLinkedListPte @ 0x1403675E4 (MiMakeLinkedListPte.c)
 *     MiPerformFinalZeroing @ 0x14050D60C (MiPerformFinalZeroing.c)
 *     KeZeroPages @ 0x1407353B0 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x140C86058 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MiGetPageChainSmallPageProcess(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v3; // r9d
  _QWORD *v5; // rdi
  __int64 v7; // r14
  __int64 v8; // rbx
  int v9; // ecx
  int v10; // esi
  unsigned int v11; // r15d
  unsigned int v12; // ecx
  unsigned int v13; // r13d
  unsigned int v14; // eax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r13
  signed __int64 v17; // rcx
  signed __int64 v18; // rdx
  signed __int64 v19; // rcx
  int v20; // eax
  signed __int64 v21; // rcx
  signed __int64 v22; // rdx
  signed __int64 v23; // rcx
  __int64 result; // rax
  bool v25; // zf
  unsigned __int64 Phase0Mapping; // rsi
  _QWORD *v27; // rdi
  char v28; // r9
  __int64 v29; // rax
  unsigned int v30; // edx
  signed __int32 v31[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v32; // [rsp+20h] [rbp-58h]
  unsigned int v33; // [rsp+24h] [rbp-54h]
  unsigned __int8 v34; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v35; // [rsp+88h] [rbp+10h]
  unsigned int v36; // [rsp+90h] [rbp+18h]
  unsigned int v37; // [rsp+98h] [rbp+20h]

  v35 = a2;
  v3 = *(_DWORD *)(a1 + 32);
  v5 = a2;
  v7 = (*(_DWORD *)(a1 + 48) >> 18) & 3;
  v8 = 48 * a3 - 0x220000000000LL;
  v9 = (*(_DWORD *)(v8 + 32) >> 22) & 3;
  if ( v9 != (_DWORD)v7 && ((unsigned __int8)((1 << v9) | (1 << v7)) & (unsigned __int8)byte_140E2D918) != 0 )
  {
    *(_QWORD *)(v8 + 16) = MiMakeLinkedListPte(*a2);
    v25 = ++v5[3] == 16LL;
    *v5 = a3;
    if ( v25 )
    {
      *((_DWORD *)v5 + 2) = v7;
      MiPerformFinalZeroing(v5, v28 & 1);
    }
    goto LABEL_20;
  }
  v10 = 0;
  v11 = 16 * (v3 & 1);
  v12 = 2 * (v3 & 1);
  v33 = v12;
  if ( (v3 & 0x20) != 0 && (*(_QWORD *)(v8 + 16) & 0x3E0LL) != 0 )
  {
    v32 = (*(_DWORD *)(v8 + 32) >> 22) & 3;
    v13 = v12 != 0 ? 0x10 : 0;
    v36 = v13;
    v14 = *(_DWORD *)(qword_140E2D838
                    + 384LL * (unsigned int)MiPageToNode(48 * a3 / 48)
                    + 4 * (v7 + 4LL * ((*(_DWORD *)(v8 + 32) >> 22) & 3))
                    + 120);
    v37 = v14;
    if ( v14 != v32 )
      MiChangePageAttribute(v8, v14, v13);
    v34 = 17;
    if ( KeGetCurrentPrcb()->MmInternal )
    {
      v15 = MiMapPageInHyperSpaceWorker(a3, &v34, 0x80000000LL);
      KeZeroPages(v15, 4096LL);
      v16 = v34;
      *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
      *(_QWORD *)(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      if ( (_BYTE)v16 != 17 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
        __writecr8(v16);
      }
      v13 = v36;
    }
    else
    {
      Phase0Mapping = MxGetPhase0Mapping();
      v27 = (_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      *v27 = MiMakeValidPte(v27, a3, 2684354564LL);
      KeZeroPages(Phase0Mapping, 4096LL);
      *v27 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      MiFlushSingleTbEntry(Phase0Mapping, 2LL);
    }
    if ( v37 != v32 && v37 != (_DWORD)v7 )
      MiChangePageAttribute(v8, v32, v13);
    *(_QWORD *)(v8 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
    v17 = *(_QWORD *)(v8 + 24);
    v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 24), v17 & 0xC7FFFFFFFFFFFFFFuLL, v17);
    if ( v17 != v18 )
    {
      do
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 24), v18 & 0xC7FFFFFFFFFFFFFFuLL, v18);
      }
      while ( v19 != v18 );
    }
    v12 = v33;
    v10 = 1;
    v5 = v35;
  }
  v20 = (*(_DWORD *)(v8 + 32) >> 22) & 3;
  if ( v20 == (_DWORD)v7 )
    goto LABEL_17;
  if ( v20 != 1 )
  {
    if ( v20 == 3 )
    {
LABEL_37:
      MiChangePageAttribute(v8, (unsigned int)v7, v11);
LABEL_17:
      if ( !v10 )
      {
        v21 = *(_QWORD *)(v8 + 24);
        v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 24), v21 & 0xC7FFFFFFFFFFFFFFuLL, v21);
        if ( v21 != v22 )
        {
          do
          {
            v23 = v22;
            v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 24), v22 & 0xC7FFFFFFFFFFFFFFuLL, v22);
          }
          while ( v23 != v22 );
        }
      }
      goto LABEL_20;
    }
    v29 = (*(_QWORD *)(v8 + 24) >> 59) & 7LL;
    if ( ((*(_QWORD *)(v8 + 24) >> 59) & 7) != 0 )
    {
      _InterlockedOr(v31, 0);
      v30 = ((_BYTE)KiTbFlushTimeStamp - (_BYTE)v29) & 7;
      if ( v30 > 2 || (v29 & 1) == 0 && v30 >= 2 )
      {
        v11 |= 4u;
        goto LABEL_37;
      }
    }
  }
  if ( (*(_QWORD *)(v8 + 16) & 0x3E0LL) != 0 )
    MiZeroPhysicalPage(0LL, a3, v12, (unsigned int)v7);
  *(_QWORD *)(v8 + 16) = MiMakeLinkedListPte(v5[4]);
  ++v5[7];
  v5[4] = a3;
LABEL_20:
  result = *(_QWORD *)(a1 + 88);
  *(_QWORD *)v8 = result;
  ++*(_QWORD *)(a1 + 104);
  v25 = *(_QWORD *)(a1 + 96) == 0LL;
  *(_QWORD *)(a1 + 88) = v8;
  if ( v25 )
    *(_QWORD *)(a1 + 96) = v8;
  return result;
}
