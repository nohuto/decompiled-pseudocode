/*
 * XREFs of MiGetPageChain @ 0x140285330
 * Callers:
 *     MiCreateSharedZeroPages @ 0x140282EF0 (MiCreateSharedZeroPages.c)
 *     MiGetPageChainForFault @ 0x140284190 (MiGetPageChainForFault.c)
 *     MiGetPageToTrade @ 0x140294740 (MiGetPageToTrade.c)
 *     MiResolvePrivateZeroFault @ 0x1402B71E0 (MiResolvePrivateZeroFault.c)
 *     MiGetPoolPages @ 0x1403677D0 (MiGetPoolPages.c)
 *     MiAllocatePageFileReadResources @ 0x1403737A8 (MiAllocatePageFileReadResources.c)
 *     MiGetHardFaultPages @ 0x140374708 (MiGetHardFaultPages.c)
 *     MiGetClusterPage @ 0x140508040 (MiGetClusterPage.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetLargePagesForChain @ 0x140283FC4 (MiGetLargePagesForChain.c)
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiGetPageChainSmallPageProcess @ 0x140287000 (MiGetPageChainSmallPageProcess.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiPageAvailable @ 0x1402A9BBC (MiPageAvailable.c)
 *     MiSwapNumaStandbyPage @ 0x1402AAAF0 (MiSwapNumaStandbyPage.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x1402BA8E0 (MiZeroPhysicalPage.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiGetPageChainYield @ 0x14031A290 (MiGetPageChainYield.c)
 *     MiWorkingSetIsContended @ 0x14031A300 (MiWorkingSetIsContended.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 *     MiMakeLinkedListPte @ 0x1403675E4 (MiMakeLinkedListPte.c)
 *     MiChangePageAttributeBatch @ 0x14036ABBC (MiChangePageAttributeBatch.c)
 *     MiPerformFinalZeroing @ 0x14050D60C (MiPerformFinalZeroing.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KeZeroPages @ 0x1407353B0 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x140C86058 (MxGetPhase0Mapping.c)
 */

int __fastcall MiGetPageChain(_QWORD *a1)
{
  _QWORD *v1; // rax
  unsigned int v3; // r12d
  int v4; // edi
  int v5; // ecx
  unsigned int v6; // r14d
  unsigned int v7; // esi
  __int64 SlabPage; // rax
  int v9; // edx
  int v10; // edx
  int v11; // ebx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  unsigned int v14; // edx
  int v15; // edx
  ULONG_PTR v16; // r15
  unsigned int v17; // ecx
  int v18; // r8d
  __int64 v19; // r10
  __int64 v20; // r9
  unsigned int v21; // ecx
  __int64 v22; // r15
  int v23; // ecx
  int v24; // ebx
  unsigned int v25; // edx
  unsigned int v26; // r11d
  int v27; // ebx
  unsigned int v28; // eax
  unsigned __int64 v29; // rbx
  unsigned __int8 v30; // dl
  signed __int64 v31; // rcx
  signed __int64 v32; // rdx
  signed __int64 v33; // rcx
  int v34; // eax
  signed __int64 v35; // rcx
  signed __int64 v36; // rdx
  signed __int64 v37; // rcx
  bool v38; // zf
  unsigned int v39; // r12d
  __int64 *i; // rdx
  int v41; // ecx
  unsigned __int64 Phase0Mapping; // r15
  _QWORD *v43; // rbx
  char v44; // r8
  int v45; // r9d
  int v46; // eax
  __int64 v47; // rax
  __int64 LinkedListPte; // rax
  unsigned int v49; // ecx
  __int64 v50; // r9
  ULONG_PTR v51; // rbx
  __int64 v52; // r8
  __int64 v53; // rcx
  __int64 Page; // rax
  __int64 v55; // rax
  int v56; // r9d
  signed __int32 v58[8]; // [rsp+0h] [rbp-89h] BYREF
  __int64 v59; // [rsp+20h] [rbp-69h]
  int v60; // [rsp+28h] [rbp-61h]
  char v61; // [rsp+30h] [rbp-59h] BYREF
  char v62; // [rsp+31h] [rbp-58h]
  unsigned int v63; // [rsp+34h] [rbp-55h]
  __int64 v64; // [rsp+38h] [rbp-51h]
  unsigned int v65; // [rsp+40h] [rbp-49h]
  __int64 v66; // [rsp+48h] [rbp-41h]
  unsigned int v67; // [rsp+50h] [rbp-39h]
  unsigned int v68; // [rsp+54h] [rbp-35h]
  unsigned int v69; // [rsp+58h] [rbp-31h]
  unsigned int v70; // [rsp+5Ch] [rbp-2Dh]
  int v71; // [rsp+60h] [rbp-29h]
  __int64 v72; // [rsp+68h] [rbp-21h]
  __int64 v73; // [rsp+70h] [rbp-19h] BYREF
  int v74; // [rsp+78h] [rbp-11h]
  __int64 v75; // [rsp+88h] [rbp-1h]
  __int64 v76; // [rsp+90h] [rbp+7h] BYREF
  int v77; // [rsp+98h] [rbp+Fh]
  char v78; // [rsp+9Ch] [rbp+13h]
  __int64 v79; // [rsp+A0h] [rbp+17h]
  __int64 v80; // [rsp+A8h] [rbp+1Fh]

  v1 = (_QWORD *)a1[9];
  if ( v1 )
    *v1 = 0LL;
  v3 = *((_DWORD *)a1 + 8);
  v4 = 0;
  v5 = *((_DWORD *)a1 + 12) >> 9;
  v6 = 0;
  v73 = 0x7FFFFFFFFFLL;
  v7 = v5 & 0x3F;
  v75 = 0LL;
  v76 = 0x7FFFFFFFFFLL;
  v80 = 0LL;
  v71 = v5;
  while ( 2 )
  {
    LODWORD(SlabPage) = (unsigned __int16)KeNumberNodes;
    if ( v6 >= (unsigned __int16)KeNumberNodes )
      goto LABEL_50;
    v4 &= ~1u;
    v9 = *(_DWORD *)(qword_140E2D810 + 4LL * (v6 + v7 * (unsigned __int16)KeNumberNodes));
    *((_DWORD *)a1 + 12) ^= ((unsigned __int16)*((_DWORD *)a1 + 12) ^ (unsigned __int16)((_WORD)v9 << 9)) & 0x7E00;
    if ( (*((_BYTE *)a1 + 28) & 0xF) == 9 )
    {
      if ( a1[7] == -1LL )
      {
        if ( a1[10] - a1[13] >= 0x10uLL )
        {
          v4 |= 1u;
          MiGetLargePagesForChain((__int64)a1, v9);
          if ( a1[13] )
          {
            SlabPage = a1[13];
            if ( SlabPage == a1[10] )
              break;
            LODWORD(SlabPage) = MiGetPageChainYield(a1, 0LL);
            if ( (_DWORD)SlabPage )
              break;
          }
        }
      }
      else
      {
        v3 |= 0x40u;
      }
    }
    if ( (v4 & 1) != 0 && a1[10] - a1[13] >= 0x10uLL && (a1[4] & 0x3000) == 0 && (unsigned __int16)KeNumberNodes > 1u )
      v3 |= 0x31000u;
    while ( 1 )
    {
      v10 = *((_DWORD *)a1 + 12);
      v11 = (unsigned __int8)(v10 ^ _InterlockedExchangeAdd((volatile signed __int32 *)a1[5], 1u));
      v12 = a1[7];
      v13 = v10 ^ v11;
      v14 = v13;
      if ( v12 != -1 )
        break;
      v15 = *((_DWORD *)a1 + 7) & 0xF;
      if ( v15 == 9 )
        goto LABEL_11;
      v55 = a1[9];
      v60 = 0;
      v59 = v55;
      v56 = (v3 >> 12) & 1 | 0x10;
      if ( (v3 & 1) == 0 )
        v56 = (v3 >> 12) & 1;
      SlabPage = MiGetSlabPage(*a1, v15, v13, v56, v59, v60);
      v64 = SlabPage;
      v16 = SlabPage;
      if ( SlabPage == -1 )
        goto LABEL_36;
LABEL_12:
      v17 = v3;
      v3 |= 0x40u;
      if ( a1[7] == -1LL )
        v3 = v17;
      if ( (v3 & 0x20000) != 0 && (v4 & 2) == 0 && (unsigned int)MiPageToNode(v16) != v7 )
      {
        v50 = *((unsigned int *)a1 + 8);
        LODWORD(v50) = v50 | 0x1000;
        v51 = v16;
        v64 = MiSwapNumaStandbyPage(v16, v7, 0LL, v50);
        v16 = v64;
        if ( v64 == v51 )
          v4 |= 2u;
      }
      v18 = *((_DWORD *)a1 + 8);
      v19 = 6 * v16;
      v20 = (*((_DWORD *)a1 + 12) >> 18) & 3;
      v63 = v20;
      v21 = *(_DWORD *)(48 * v16 - 0x220000000000LL + 32);
      v22 = 48 * v16 - 0x220000000000LL;
      v23 = (v21 >> 22) & 3;
      v72 = v22;
      if ( v23 == (_DWORD)v20 || ((unsigned __int8)((1 << v23) | (1 << v20)) & (unsigned __int8)byte_140E2D918) == 0 )
      {
        v24 = 0;
        v25 = 16 * (v18 & 1);
        v69 = v25;
        v26 = 2 * (v18 & 1);
        v70 = v26;
        if ( (v18 & 0x20) != 0 && (*(_QWORD *)(v22 + 16) & 0x3E0LL) != 0 )
        {
          v27 = (*(_DWORD *)(8 * v19 - 0x220000000000LL + 32) >> 22) & 3;
          v66 = 8 * v19 - 0x220000000000LL;
          v68 = v27;
          v65 = v26 != 0 ? 0x10 : 0;
          v28 = *(_DWORD *)(qword_140E2D838
                          + 384LL * (unsigned int)MiPageToNode(8 * v19 / 48)
                          + 4 * (v63 + 4LL * ((*(_DWORD *)(v66 + 32) >> 22) & 3))
                          + 120);
          v67 = v28;
          if ( v28 != v27 )
            MiChangePageAttribute(v66, v28, v65);
          v61 = 17;
          if ( KeGetCurrentPrcb()->MmInternal )
          {
            v29 = MiMapPageInHyperSpaceWorker(v64, &v61, 0x80000000LL);
            KeZeroPages(v29, 4096LL);
            v30 = v61;
            v62 = v61;
            *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
            *(_QWORD *)(((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            if ( v30 != 17 )
            {
              if ( KiIrqlFlags )
              {
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v30);
                v30 = v62;
              }
              __writecr8(v30);
            }
          }
          else
          {
            Phase0Mapping = MxGetPhase0Mapping();
            v43 = (_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            *v43 = MiMakeValidPte(v43, v64, 2684354564LL);
            KeZeroPages(Phase0Mapping, 4096LL);
            *v43 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            MiFlushSingleTbEntry(Phase0Mapping, 2LL);
            v22 = v72;
          }
          v20 = v63;
          if ( v67 != v68 && v67 != v63 )
          {
            MiChangePageAttribute(v66, v68, v65);
            v20 = v63;
          }
          *(_QWORD *)(v22 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
          v31 = *(_QWORD *)(v22 + 24);
          v32 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 24), v31 & 0xC7FFFFFFFFFFFFFFuLL, v31);
          if ( v31 != v32 )
          {
            do
            {
              v33 = v32;
              v32 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v22 + 24),
                      v32 & 0xC7FFFFFFFFFFFFFFuLL,
                      v32);
            }
            while ( v33 != v32 );
          }
          v25 = v69;
          v24 = 1;
          v26 = v70;
        }
        v34 = (*(_DWORD *)(v22 + 32) >> 22) & 3;
        if ( v34 != (_DWORD)v20 )
        {
          if ( v34 == 1 )
            goto LABEL_74;
          if ( v34 != 3 )
          {
            v47 = (*(_QWORD *)(v22 + 24) >> 59) & 7LL;
            if ( ((*(_QWORD *)(v22 + 24) >> 59) & 7) == 0
              || (_InterlockedOr(v58, 0), v49 = ((_BYTE)KiTbFlushTimeStamp - (_BYTE)v47) & 7, v49 <= 2)
              && ((v47 & 1) != 0 || v49 < 2) )
            {
LABEL_74:
              if ( (*(_QWORD *)(v22 + 16) & 0x3E0LL) != 0 )
                MiZeroPhysicalPage(0LL, v64, v26, v20);
              LinkedListPte = MiMakeLinkedListPte(v76);
              ++v80;
              *(_QWORD *)(v22 + 16) = LinkedListPte;
              v76 = v64;
              goto LABEL_33;
            }
            v25 |= 4u;
          }
          MiChangePageAttribute(v22, (unsigned int)v20, v25);
        }
        if ( !v24 )
        {
          v35 = *(_QWORD *)(v22 + 24);
          v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 24), v35 & 0xC7FFFFFFFFFFFFFFuLL, v35);
          if ( v35 != v36 )
          {
            do
            {
              v37 = v36;
              v36 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v22 + 24),
                      v36 & 0xC7FFFFFFFFFFFFFFuLL,
                      v36);
            }
            while ( v37 != v36 );
          }
        }
      }
      else
      {
        *(_QWORD *)(v22 + 16) = MiMakeLinkedListPte(v73);
        v73 = v64;
        if ( ++v75 == 16 )
        {
          v74 = v45;
          MiPerformFinalZeroing(&v73, v44 & 1);
        }
      }
LABEL_33:
      *(_QWORD *)v22 = a1[11];
      v38 = a1[12] == 0LL;
      a1[11] = v22;
      if ( v38 )
        a1[12] = v22;
      SlabPage = ++a1[13];
      if ( SlabPage != a1[10] )
      {
        if ( (a1[13] & 0xF) != 0 || (a1[4] & 1) == 0 )
          continue;
        if ( ((*((_DWORD *)a1 + 7) >> 4) & 3) == 2
          || (LODWORD(SlabPage) = MiWorkingSetIsContended(a1[1]), !(_DWORD)SlabPage) )
        {
          LODWORD(SlabPage) = KeShouldYieldProcessor();
          if ( !(_DWORD)SlabPage )
            continue;
        }
      }
      goto LABEL_36;
    }
    v52 = 15LL;
    if ( (unsigned int)dword_140E2D90C < 0xFuLL )
      v52 = (unsigned int)dword_140E2D90C;
    v53 = v52 & v12;
    v66 = v52;
    a1[7] = v53;
    v13 ^= (unsigned __int8)(v53 ^ v13);
    Page = MiGetPage(*a1, v14 ^ (unsigned __int8)(v53 ^ v14), v3);
    v64 = Page;
    v16 = Page;
    if ( Page == -1 )
      v3 &= ~0x40u;
    a1[7] = v66 & (a1[7] + 1LL);
    if ( Page != -1 )
      goto LABEL_12;
LABEL_11:
    v64 = MiGetPage(*a1, v13, v3);
    v16 = v64;
    if ( v64 != -1 )
      goto LABEL_12;
    LODWORD(SlabPage) = *((_DWORD *)a1 + 8);
    if ( (SlabPage & 0x1000) != 0 || (v3 & 0x1000) == 0 )
    {
LABEL_50:
      if ( (v3 & 0x10000) != 0 )
      {
        v3 = v3 & 0xFFFAFFFF | 0x40000;
        *((_DWORD *)a1 + 12) ^= ((unsigned __int16)*((_DWORD *)a1 + 12) ^ (unsigned __int16)((_WORD)v71 << 9)) & 0x7E00;
        do
        {
          SlabPage = MiGetPage(
                       *a1,
                       *((_DWORD *)a1 + 12) ^ (unsigned int)(unsigned __int8)(*((_DWORD *)a1 + 12) ^ _InterlockedExchangeAdd((volatile signed __int32 *)a1[5], 1u)),
                       v3);
          if ( SlabPage == -1 )
            break;
          MiGetPageChainSmallPageProcess(a1, &v73, SlabPage);
          SlabPage = a1[13];
          if ( SlabPage == a1[10] )
            break;
          LODWORD(SlabPage) = MiGetPageChainYield(a1, 16LL);
        }
        while ( !(_DWORD)SlabPage );
      }
      break;
    }
    LODWORD(SlabPage) = MiPageAvailable(*a1, (unsigned int)SlabPage);
    if ( (_DWORD)SlabPage )
    {
      v3 &= ~0x1000u;
      ++v6;
      continue;
    }
    break;
  }
LABEL_36:
  v39 = v3 & 1;
  if ( v73 != 0x7FFFFFFFFFLL )
  {
    v74 = (*((_DWORD *)a1 + 12) >> 18) & 3;
    LODWORD(SlabPage) = MiPerformFinalZeroing(&v73, v39);
  }
  if ( v76 != 0x7FFFFFFFFFLL )
  {
    v46 = (*((_DWORD *)a1 + 12) >> 18) & 3;
    v78 = 0;
    v77 = v46;
    v79 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    LODWORD(SlabPage) = MiChangePageAttributeBatch(&v76, v39);
  }
  for ( i = (__int64 *)a1[11]; i; i = (__int64 *)*i )
  {
    SlabPage = i[5];
    v41 = 0;
    if ( (SlabPage & 0x10000000000LL) != 0 )
      v41 = *((_DWORD *)i + 9) & 0x18000000;
    *((_DWORD *)i + 9) = v41;
  }
  return SlabPage;
}
