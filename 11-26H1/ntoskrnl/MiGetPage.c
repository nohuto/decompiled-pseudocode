/*
 * XREFs of MiGetPage @ 0x140285C00
 * Callers:
 *     MiMakePageAvoidRead @ 0x140282330 (MiMakePageAvoidRead.c)
 *     MiDemoteLocalLargePage @ 0x140283A10 (MiDemoteLocalLargePage.c)
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     MiGetPageToTrade @ 0x140294740 (MiGetPageToTrade.c)
 *     MiReplaceLockedPage @ 0x140294BC4 (MiReplaceLockedPage.c)
 *     MiSwitchToTransition @ 0x1402A1680 (MiSwitchToTransition.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x1402A90E0 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiPruneStandbyPages @ 0x1402AA540 (MiPruneStandbyPages.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402D4790 (MiCreateUltraThreadContextHelper.c)
 *     MiCreateUltraThreadContext @ 0x1402D6670 (MiCreateUltraThreadContext.c)
 *     MiMigratePfn @ 0x1402D8A10 (MiMigratePfn.c)
 *     MiTradePageMarkedTransition @ 0x1402DF640 (MiTradePageMarkedTransition.c)
 *     MiReplenishCloneLeafPage @ 0x1402F0A60 (MiReplenishCloneLeafPage.c)
 *     MiAllocateMdlPagesByLists @ 0x14033A004 (MiAllocateMdlPagesByLists.c)
 *     MiGetSystemPage @ 0x14033AC10 (MiGetSystemPage.c)
 *     MiGetPageForSystemCache @ 0x14033BDD0 (MiGetPageForSystemCache.c)
 *     MiGetPageTablePages @ 0x14033BE80 (MiGetPageTablePages.c)
 *     MiGetUltraPage @ 0x14033C230 (MiGetUltraPage.c)
 *     MiCopyOnWriteGetPage @ 0x14036E07C (MiCopyOnWriteGetPage.c)
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1403D1EE0 (MiGetLargePageDemoteAsNeeded.c)
 *     MiAllocateKernelStackPages @ 0x1403D4748 (MiAllocateKernelStackPages.c)
 *     MiSwapStackPage @ 0x140409E34 (MiSwapStackPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x14040B6F8 (MmAllocateNonChargedSecurePages.c)
 *     MiMakeOutswappedPageResident @ 0x1404296E4 (MiMakeOutswappedPageResident.c)
 *     MiResolveMappedFileFaultByCopying @ 0x140482F1C (MiResolveMappedFileFaultByCopying.c)
 *     MiGetFileHashPage @ 0x1404D5A28 (MiGetFileHashPage.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     MiGetLargePage @ 0x1405209D4 (MiGetLargePage.c)
 *     MiGetExtendedStandbyPage @ 0x1407084F4 (MiGetExtendedStandbyPage.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140714FCC (MiComputeCacheAttributeSpeeds.c)
 *     MiPfPrepareReadList @ 0x140A5B120 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x140ABFDA0 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x140AEDA3C (MiAllocateDriverPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x140AF6D60 (MiDoneWithThisPageGetAnother.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3F88C (MmAllocateIndependentPagesEx.c)
 *     MiAllocateDummyPage @ 0x140CF89FC (MiAllocateDummyPage.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140D004C4 (MmInitializeImageViewExtensionCfg.c)
 *     MiInitializeCacheFlushing @ 0x140D0572C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiAssignDefaultChannel @ 0x140283900 (MiAssignDefaultChannel.c)
 *     MiDemoteLocalLargePage @ 0x140283A10 (MiDemoteLocalLargePage.c)
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetBestPageFromNode @ 0x140287CB0 (MiGetBestPageFromNode.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiRemovePageAnyColor @ 0x140289560 (MiRemovePageAnyColor.c)
 *     MiGetPageSlist @ 0x14028A870 (MiGetPageSlist.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiPageToChannel @ 0x140294DD0 (MiPageToChannel.c)
 *     MiPfnBestZeroAttribute @ 0x1402A0DFC (MiPfnBestZeroAttribute.c)
 *     MiZeroLargePage @ 0x1402A0F54 (MiZeroLargePage.c)
 *     MiPageAvailable @ 0x1402A9BBC (MiPageAvailable.c)
 *     MiSwapNumaStandbyPage @ 0x1402AAAF0 (MiSwapNumaStandbyPage.c)
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402DC490 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiColorHasSlists @ 0x14041CE00 (MiColorHasSlists.c)
 *     MiPreemptivePageDemote @ 0x14042B6E8 (MiPreemptivePageDemote.c)
 *     MiObtainedPageIsGood @ 0x14042B75C (MiObtainedPageIsGood.c)
 *     MiCacheAttributeHasValue @ 0x14046AEA0 (MiCacheAttributeHasValue.c)
 *     MiCheckNodeChannelStandbyCount @ 0x1404D1090 (MiCheckNodeChannelStandbyCount.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KeZeroPages @ 0x1407353B0 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x140C86058 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MiGetPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r14
  unsigned int v4; // edi
  __int64 v5; // r13
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  int v8; // r11d
  unsigned int v9; // ebx
  char v10; // dl
  unsigned int v11; // r15d
  unsigned int v12; // esi
  unsigned __int64 v13; // r9
  unsigned int v14; // r12d
  int v15; // r8d
  __int64 v16; // r14
  __int64 v17; // r10
  __int64 v18; // r13
  __int64 v19; // r9
  unsigned int v20; // r8d
  __int64 v21; // rax
  unsigned int i; // ecx
  unsigned __int64 v23; // rdx
  __int64 *v24; // r11
  __int64 *v25; // rcx
  __int64 v26; // rax
  int v27; // edx
  unsigned int v28; // ecx
  int v29; // eax
  unsigned __int64 BestPageFromNode; // rax
  __int64 v31; // r12
  ULONG_PTR v32; // r14
  int v33; // ecx
  int v34; // edx
  char *v35; // r9
  char v36; // al
  unsigned int v37; // esi
  int v38; // ecx
  char v40; // dl
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rax
  unsigned int v43; // eax
  unsigned int v44; // ebx
  unsigned int v45; // edi
  unsigned int v46; // r15d
  __int64 v47; // r13
  int v48; // eax
  BOOL v49; // edx
  __int64 v50; // rdx
  __int64 v51; // rdi
  unsigned int v52; // ebx
  unsigned int v53; // r15d
  unsigned __int64 v54; // rdx
  unsigned int v55; // eax
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // r13
  unsigned int v58; // r15d
  __int64 v59; // rdi
  int v60; // r11d
  __int64 v61; // rax
  unsigned int j; // ecx
  unsigned __int64 v63; // r8
  unsigned int v64; // eax
  unsigned int v65; // esi
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rax
  __int64 v68; // rsi
  __int64 *v69; // rsi
  __int64 v70; // rax
  unsigned int v71; // eax
  int m; // r8d
  int v73; // r10d
  unsigned __int8 v74; // al
  unsigned __int8 k; // cl
  __int64 v76; // rdx
  __int16 v77; // ax
  unsigned int v78; // ecx
  __int64 *v79; // rcx
  __int64 *v80; // r8
  __int64 v81; // rax
  unsigned __int64 Phase0Mapping; // rdi
  _QWORD *v83; // rbx
  __int64 v84; // rax
  unsigned int v85; // eax
  __int64 v86; // rcx
  unsigned int v87; // esi
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // rax
  unsigned int v92; // esi
  __int64 v93; // r9
  unsigned int v94; // r14d
  unsigned int v95; // ecx
  __int64 v96; // rax
  __int64 v97; // r8
  __int64 v98; // r8
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  unsigned __int8 v102; // al
  __int64 v103; // rcx
  unsigned __int64 v104; // rdx
  struct _KTHREAD *CurrentThread; // r8
  int v106; // eax
  __int64 v107; // r9
  unsigned __int8 v108; // r8
  char *v109; // rcx
  char v110; // dl
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rdx
  __int64 v114; // r9
  unsigned int v115; // eax
  unsigned __int8 v116[4]; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v117; // [rsp+34h] [rbp-65h]
  int v118; // [rsp+38h] [rbp-61h]
  int v119; // [rsp+3Ch] [rbp-5Dh]
  unsigned int v120; // [rsp+40h] [rbp-59h]
  __int64 PageSlist; // [rsp+48h] [rbp-51h]
  __int64 v122; // [rsp+50h] [rbp-49h]
  unsigned int v123; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v124; // [rsp+5Ch] [rbp-3Dh]
  __int64 v125; // [rsp+60h] [rbp-39h] BYREF
  __int64 v126; // [rsp+68h] [rbp-31h]
  __int64 v127; // [rsp+70h] [rbp-29h]
  unsigned int v128; // [rsp+78h] [rbp-21h]
  __int64 v129; // [rsp+80h] [rbp-19h]
  __int64 v130; // [rsp+88h] [rbp-11h]
  __int64 v131; // [rsp+90h] [rbp-9h]
  unsigned int v132; // [rsp+98h] [rbp-1h]
  __int64 v133; // [rsp+A0h] [rbp+7h]
  int v134; // [rsp+A8h] [rbp+Fh] BYREF
  __int16 v135; // [rsp+ACh] [rbp+13h]

  v132 = a3;
  v129 = a1;
  LODWORD(v3) = a2;
  v122 = a2;
  v133 = 0LL;
  v4 = a3;
  v5 = 0LL;
  if ( (a3 & 2) != 0 )
    v6 = BYTE2(a2) & 0xC | (16 * (~(unsigned __int8)(1 << ((unsigned __int8)(BYTE2(a2) & 0xC) >> 2)) & 7));
  else
    v6 = BYTE2(a2) & 0xC;
  v7 = (unsigned __int16)KeNumberNodes;
  v8 = HIWORD(a2) & 3;
  v118 = v8;
  v9 = (v6 >> 2) & 3 | v6;
  if ( (a3 & 0x40000) != 0 )
  {
    v7 = 0;
  }
  else if ( (a3 & 0x1040) != 0 )
  {
    v7 = 1;
  }
  v10 = byte_140E2D898;
  v134 = 0;
  v11 = ((unsigned int)v3 >> 9) & 0x3F;
  v120 = v7;
  v128 = v11;
  PageSlist = 0LL;
  v135 = 0;
  v116[0] = byte_140E2D898;
  HIBYTE(v134) = byte_140E2D898;
  if ( (unsigned __int8)byte_140E2D898 <= 1u )
  {
    v10 = 1;
    v116[0] = 1;
    HIBYTE(v134) = 1;
  }
  v12 = (unsigned int)v3 >> 8;
  LOBYTE(v12) = BYTE1(v3) & 1;
  v123 = 0;
  v117 = v12;
  LOBYTE(v135) = BYTE1(v3) & 1;
  if ( *(_DWORD *)&stru_140E2ED08.WaitBlockFill11[32] )
  {
    do
      KeYieldProcessorEx(&v123);
    while ( *(_DWORD *)&stru_140E2ED08.WaitBlockFill11[32] );
    v10 = v116[0];
    v8 = v118;
    v7 = v120;
  }
  v13 = 0LL;
  v130 = 0LL;
  v14 = 0;
  v123 = 16;
  while ( 1 )
  {
    v119 = v14;
    v15 = v3;
    if ( v14 >= v7 )
      break;
    v16 = *(unsigned int *)(qword_140E2D810 + 4LL * (v14 + v11 * (unsigned __int16)KeNumberNodes));
    v17 = *(_QWORD *)(v129 + 16) + 56320 * v16;
    v127 = v17;
    v3 = v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)((_WORD)v16 << 9)) & 0x7E00u;
    v122 = v3;
    if ( *(_QWORD *)(v17 + 13888) || (MiFlags & 0x30) == 0 )
    {
      if ( v17 )
      {
        BYTE2(v134) = 0;
        if ( (unsigned __int8)v10 > 1u )
        {
          HIBYTE(v135) = (*(_BYTE *)(v17 + 14096) & 1) == 0;
          LOWORD(v134) = *(_WORD *)(v17 + 14145);
          if ( (v4 & 0x2000) != 0 )
          {
            v108 = 0;
            v109 = (char *)&v134;
            do
            {
              v110 = *v109;
              *v109 = v12;
              v117 = (unsigned __int8)v135;
              v116[0] = HIBYTE(v134);
              if ( v110 == (_BYTE)v135 )
                break;
              ++v109;
              ++v108;
              LOBYTE(v12) = v110;
            }
            while ( v108 < HIBYTE(v134) );
          }
        }
      }
      else
      {
        v134 = 0;
        HIBYTE(v134) = byte_140E2D898;
        v135 = 0;
        v116[0] = byte_140E2D898;
        if ( (unsigned __int8)byte_140E2D898 <= 1u )
        {
          v116[0] = 1;
          HIBYTE(v134) = 1;
        }
        v43 = (unsigned int)v3 >> 8;
        LOBYTE(v43) = BYTE1(v3) & 1;
        v117 = v43;
        LOBYTE(v135) = BYTE1(v3) & 1;
      }
      if ( !_bittest64((const __int64 *)&v13, v14) )
      {
        v18 = 14112LL;
        if ( v8 == 3 )
          v18 = 14104LL;
        _bittestandset64((__int64 *)&v13, v14);
        v130 = v13;
        v5 = *(_QWORD *)(v17 + v18);
        v133 = v5;
      }
      v125 = v9 & 3;
      v19 = WORD1(v3) & 3;
      v20 = 0;
      v21 = ((unsigned int)v3 >> 15) & 1;
      v124 = ((unsigned int)v3 >> 15) & 1;
      v131 = v17 + (v19 << 10);
      if ( (_DWORD)v19 == 3 )
        v21 = 0LL;
      if ( *(_QWORD *)(v17 + ((unsigned __int64)(WORD1(v3) & 3) << 10) + 8 * (v125 + 3 * (v21 + 1)))
        || (unsigned __int16)*(_QWORD *)(v17 + 14112) )
      {
LABEL_30:
        v27 = 1 << v125;
        if ( ((unsigned __int8)(1 << v125) & (unsigned __int8)(v9 >> 4) & 0xF) == 0 )
          goto LABEL_31;
      }
      else
      {
        for ( i = 0; i <= (unsigned int)v19; ++i )
        {
          v23 = (unsigned __int64)i << 10;
          if ( *(_QWORD *)(v23 + v17 + 8) || *(_QWORD *)(v23 + v17 + 16) )
            goto LABEL_30;
        }
        v40 = v125;
        if ( (_DWORD)v125 == 1 && (_DWORD)v19 == 3 )
        {
          v41 = *(&MiState + v19 + 1152);
          while ( v20 < 2 )
          {
            v42 = *(_QWORD *)(v17 + 16 * (v20 + 860LL));
            if ( !v42 )
              goto LABEL_30;
            if ( v41 > 1 )
            {
              if ( v42 < v41 )
                goto LABEL_30;
              v24 = *(__int64 **)(v17 + 16 * (v20 + 860LL) + 8);
              v25 = &v24[(v41 - 1) >> 6];
              v26 = *v24;
              v126 = *v24;
              if ( v24 == v25 )
              {
                if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v41)) & v126) != 0 )
                  goto LABEL_30;
              }
              else
              {
                if ( v26 )
                  goto LABEL_30;
                while ( 1 )
                {
                  v84 = v24[1];
                  ++v24;
                  v126 = v84;
                  if ( v24 == v25 )
                    break;
                  if ( v84 )
                    goto LABEL_30;
                }
                if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v41 - 1)) & v126) != 0 )
                  goto LABEL_30;
              }
            }
            else if ( v41 != 1 || _bittest64(*(const signed __int64 **)(v17 + 16 * (v20 + 860LL) + 8), 0) )
            {
              goto LABEL_30;
            }
            ++v20;
          }
          v40 = v125;
        }
        v27 = 1 << v40;
      }
      v58 = v124;
      v59 = v131;
      v9 = v9 & 0xFFFFF80F | v9 & 0xF0 | (unsigned __int8)(16 * v27);
      do
      {
        LODWORD(v125) = v9;
        v60 = 1 << (BYTE1(v9) & 7);
        if ( ((unsigned __int8)v60 & (unsigned __int8)(v9 >> 4) & 0xF) != 0 )
          goto LABEL_109;
        v61 = v58;
        if ( (_DWORD)v19 == 3 )
          v61 = 0LL;
        if ( *(_QWORD *)(v59 + 8 * (((v9 >> 8) & 7) + 3 * (v61 + 1))) || (unsigned __int16)*(_QWORD *)(v17 + 14112) )
          break;
        for ( j = 0; j <= (unsigned int)v19; ++j )
        {
          v63 = (unsigned __int64)j << 10;
          if ( *(_QWORD *)(v63 + v17 + 8) || *(_QWORD *)(v63 + v17 + 16) )
            goto LABEL_110;
        }
        if ( (_DWORD)v19 == 3 && (BYTE1(v9) & 3) == 1 )
        {
          v64 = *(&MiState + v19 + 1152);
          v65 = 0;
          v124 = v64;
          while ( 1 )
          {
            if ( v65 >= 2 )
              goto LABEL_108;
            v66 = v64;
            v67 = *(_QWORD *)(v17 + 16 * (v65 + 860LL));
            if ( !v67 )
              goto LABEL_110;
            if ( v66 <= 1 )
              break;
            if ( v67 < v66 )
              goto LABEL_110;
            v79 = *(__int64 **)(v17 + 16 * (v65 + 860LL) + 8);
            v80 = &v79[(v66 - 1) >> 6];
            v81 = *v79;
            v131 = *v79;
            if ( v79 == v80 )
            {
              if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v66)) & v131) != 0 )
                goto LABEL_110;
              v64 = v124;
              ++v65;
            }
            else
            {
              if ( v81 )
                goto LABEL_110;
              while ( 1 )
              {
                v100 = v79[1];
                ++v79;
                v131 = v100;
                if ( v79 == v80 )
                  break;
                if ( v100 )
                  goto LABEL_110;
              }
              if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v66 - 1)) & v131) != 0 )
                goto LABEL_110;
LABEL_107:
              v64 = v124;
              ++v65;
            }
          }
          if ( v66 != 1 || _bittest64(*(const signed __int64 **)(v17 + 16 * (v65 + 860LL) + 8), 0) )
            break;
          goto LABEL_107;
        }
LABEL_108:
        v9 = v125 & 0xFFFFFF0F ^ (unsigned __int8)((16 * v60) | v9 & 0xF0);
LABEL_109:
        v9 ^= ((unsigned __int16)v9 ^ (unsigned __int16)(v9 + 256)) & 0x700;
      }
      while ( (v9 & 0x700) < 0x300 );
LABEL_110:
      v4 = v132;
      v11 = v128;
      v14 = v119;
      v5 = v133;
      LODWORD(v3) = v122;
      if ( (v9 & 0xF0) == 0x70 )
        goto LABEL_111;
      v9 ^= ((unsigned __int8)v9 ^ BYTE1(v9)) & 3;
LABEL_31:
      v124 = v9;
      v28 = v9 & 3;
      v29 = (v3 ^ (v9 << 18)) & 0xC0000;
      LODWORD(v125) = (unsigned __int8)v28;
      while ( 2 )
      {
        LODWORD(v3) = v29 ^ v3;
        v122 = (unsigned int)v3;
        BestPageFromNode = MiGetBestPageFromNode(v17, (unsigned int)v3, v28, v4);
        PageSlist = BestPageFromNode;
        v13 = BestPageFromNode;
        if ( BestPageFromNode < 2 )
        {
          if ( BestPageFromNode != 1 )
          {
            v17 = v127;
LABEL_126:
            v74 = BYTE2(v134) + 1;
            BYTE2(v134) = v74;
            if ( v74 >= v116[0] )
            {
              v102 = v117;
              if ( (_BYTE)v117 == 2 )
                v102 = MiAssignDefaultChannel(((unsigned int)v3 >> 9) & 0x3F);
              LODWORD(v3) = ((unsigned __int16)v3 ^ (unsigned __int16)(v102 << 8)) & 0x100 ^ v3;
              v122 = (unsigned int)v3;
              break;
            }
            k = *((_BYTE *)&v134 + v74);
            if ( k == 2 )
            {
              v76 = qword_140E37E50 + 56320LL * (((unsigned int)v3 >> 9) & 0x3F);
              if ( (*(_DWORD *)(v76 + 14096) & 1) != 0 )
              {
                v111 = v76 + 14149;
                for ( k = 0; k < (unsigned __int8)byte_140E2D898; ++k )
                {
                  if ( *(_BYTE *)(k + v111) == 1 )
                    goto LABEL_130;
                }
                for ( k = 0; k < (unsigned __int8)byte_140E2D898; ++k )
                {
                  if ( *(_BYTE *)(k + v111) == 2 )
                    goto LABEL_130;
                }
              }
              k = 0;
            }
LABEL_130:
            v77 = k;
            v28 = v125;
            v29 = ((unsigned __int16)v3 ^ (unsigned __int16)(v77 << 8)) & 0x100;
            continue;
          }
          v119 = 0;
          if ( (v4 & 2) != 0 || (v3 & 0x30000) != 0x30000 || (v85 = ((unsigned int)v3 >> 18) & 3, v85 != 1) && v85 != 2 )
          {
            v86 = v127;
            v87 = v4;
            v126 = *(_QWORD *)(v127 + 13896);
            if ( (v3 & 0x30000) == 0x30000 )
              goto LABEL_159;
            goto LABEL_160;
          }
          while ( 1 )
          {
            PageSlist = MiDemoteLocalLargePage(v129, v3 ^ (v3 ^ (v9 << 16)) & 0xC0000, v4);
            v13 = PageSlist;
            if ( !PageSlist )
              break;
            if ( (unsigned int)MiObtainedPageIsGood(PageSlist) )
              goto LABEL_34;
          }
          v86 = v127;
          v87 = v4;
          v119 = 1;
          v126 = *(_QWORD *)(v127 + 13896);
LABEL_159:
          if ( (v3 & 0xC0000) == 0x40000
            && (PageSlist = MiGetPageSlist(v86, (unsigned int)v3, v4, v13), (v13 = PageSlist) != 0) )
          {
LABEL_166:
            if ( v13 >= 2 )
              break;
          }
          else
          {
LABEL_160:
            v88 = MiRemovePageAnyColor(v126, (unsigned int)v3, v4, 1LL);
            PageSlist = v88;
            v13 = v88;
            if ( v88 == 2 )
              return -1LL;
            if ( v88 )
              goto LABEL_166;
            if ( (v4 & 0x40) != 0 )
            {
              v87 = v4 & 0xFFFFFFBF;
              if ( (unsigned int)MiColorHasSlists((unsigned int)v3, v89, v90, v88) )
              {
                PageSlist = MiGetPageSlist(v127, (unsigned int)v3, v87, v112);
                v13 = PageSlist;
                if ( PageSlist )
                  goto LABEL_166;
              }
            }
            if ( (v87 & 0x400) == 0 )
            {
              v91 = MiRemovePageAnyColor(v126, (unsigned int)v3, v87 | 0x400, 1LL);
              PageSlist = v91;
              v13 = v91;
              if ( v91 == 2 )
                return -1LL;
              if ( v91 )
                goto LABEL_166;
            }
          }
          v92 = v4 | 0x10;
          if ( (v4 & 0x10) != 0 )
            v92 = v4 & 0xFFFFFFEF;
          if ( v119 )
            goto LABEL_170;
          if ( (v4 & 2) != 0 )
          {
            v119 = 1;
            goto LABEL_170;
          }
          if ( (v3 & 0x30000) != 0x30000 || !(unsigned int)MiCacheAttributeHasValue(((unsigned int)v3 >> 18) & 3) )
          {
LABEL_170:
            v93 = v127;
            v94 = v92;
            v95 = v122;
            v126 = *(_QWORD *)(v127 + 13896);
            if ( (v122 & 0x30000) == 0x30000 )
              goto LABEL_171;
            goto LABEL_172;
          }
          PageSlist = MiPreemptivePageDemote(v129, (unsigned int)v3, v92, (v9 >> 2) & 3);
          if ( PageSlist )
            goto LABEL_34;
          v93 = v127;
          v94 = v92;
          v95 = v122;
          v119 = 1;
          v126 = *(_QWORD *)(v127 + 13896);
LABEL_171:
          if ( (v95 & 0xC0000) == 0x40000 )
          {
            PageSlist = MiGetPageSlist(v93, v95, v92, v93);
            v13 = PageSlist;
            if ( !PageSlist )
            {
              v95 = v122;
              goto LABEL_172;
            }
          }
          else
          {
LABEL_172:
            v96 = MiRemovePageAnyColor(v126, v95, v92, 1LL);
            PageSlist = v96;
            v13 = v96;
            if ( v96 == 2 )
              return -1LL;
            if ( !v96 )
            {
              if ( (v92 & 0x40) == 0
                || (v94 = v92 & 0xFFFFFFBF, !(unsigned int)MiColorHasSlists((unsigned int)v122, v122, v97, v96))
                || (PageSlist = MiGetPageSlist(v127, v113, v94, v114), (v13 = PageSlist) == 0) )
              {
                if ( (v94 & 0x400) != 0 )
                {
                  LODWORD(v3) = v122;
                  goto LABEL_178;
                }
                v98 = v94 | 0x400;
                LODWORD(v3) = v122;
                v99 = MiRemovePageAnyColor(v126, (unsigned int)v122, v98, 1LL);
                PageSlist = v99;
                v13 = v99;
                if ( v99 == 2 )
                  return -1LL;
                if ( !v99 )
                {
LABEL_178:
                  v13 = 0LL;
                  PageSlist = 0LL;
LABEL_211:
                  if ( !v119 )
                  {
                    while ( 1 )
                    {
                      PageSlist = MiDemoteLocalLargePage(v129, v3 ^ (v3 ^ (v9 << 16)) & 0xC0000, v4);
                      v13 = PageSlist;
                      if ( !PageSlist )
                        break;
                      if ( (unsigned int)MiObtainedPageIsGood(PageSlist) )
                        goto LABEL_34;
                    }
                    PageSlist = 0LL;
                  }
                  v17 = v127;
                  v103 = *(_QWORD *)(v127 + 13896);
                  v104 = *(_QWORD *)(v103 + 22464);
                  if ( v104 )
                    --v104;
                  if ( v104 < 0x31 && (v4 & 0x200) == 0 )
                  {
                    CurrentThread = KeGetCurrentThread();
                    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0xC) != 8 )
                    {
                      v106 = *(_DWORD *)(v103 + 4);
                      if ( v104 < 0x20 && (v106 & 4) != 0 )
                        return -1LL;
                      if ( ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0 || v104 < 0x21)
                        && (v106 & 0x10) == 0 )
                      {
                        return -1LL;
                      }
                    }
                  }
                  goto LABEL_126;
                }
LABEL_210:
                if ( v13 >= 2 )
                  break;
                goto LABEL_211;
              }
            }
          }
          LODWORD(v3) = v122;
          goto LABEL_210;
        }
        break;
      }
      if ( v13 )
      {
LABEL_34:
        LOBYTE(v12) = v117;
        break;
      }
      v9 = v124 & 0xFFFFFF0F ^ ((unsigned __int8)(16 << (v9 & 3)) | (unsigned __int8)v9) & 0xF0;
      if ( (v9 & 0xF0) != 0x70 )
      {
        LOBYTE(v12) = v117;
        v8 = v118;
        v10 = v116[0];
        v7 = v120;
        v13 = v130;
        continue;
      }
      v17 = v127;
LABEL_111:
      v8 = v118;
      if ( (v4 & 2) == 0 )
      {
        LODWORD(v125) = 0;
        v68 = 14112LL;
        if ( v118 == 3 )
          v68 = 14104LL;
        v69 = (__int64 *)(v17 + v68);
        v70 = *v69;
        if ( (unsigned __int16)*v69 )
        {
          do
          {
            KeYieldProcessorEx(&v125);
            v70 = *v69;
          }
          while ( (unsigned __int16)*v69 );
          v8 = v118;
        }
        if ( ((v5 ^ v70) & 0xFFFFFFFFFFFF0000uLL) != 0 )
        {
          v5 = v70;
          v133 = v70;
          --v14;
          v71 = (v9 & 0xFFFFFFFC ^ (v9 >> 2) & 3) & 0xFFFFFF0F;
          goto LABEL_132;
        }
      }
      v78 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(v9 >> 2)) & 3;
      v71 = v78 & 0xFFFFFF0F;
      if ( (v4 & 2) == 0 )
      {
LABEL_132:
        LOBYTE(v12) = v117;
        goto LABEL_133;
      }
      LOBYTE(v12) = v117;
      v9 = v71 | (16 * (~(unsigned __int8)(1 << ((v78 >> 2) & 3)) & 7));
LABEL_134:
      v10 = v116[0];
      ++v14;
      v7 = v120;
      v13 = v130;
    }
    else
    {
      if ( !(unsigned int)MiPageAvailable(v129, v4) )
        return -1LL;
      v71 = (v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(v9 >> 2)) & 3) & 0xFFFFFF0F;
      if ( (v4 & 2) == 0 )
      {
LABEL_133:
        v9 = v71;
        goto LABEL_134;
      }
      v10 = v116[0];
      v13 = v130;
      v7 = v120;
      v9 = v71 | (16
                * (~(unsigned __int8)(1 << (((v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(v9 >> 2)) & 3) >> 2) & 3)) & 7));
      ++v14;
    }
  }
  v31 = PageSlist;
  if ( PageSlist == 2 )
    return -1LL;
  if ( PageSlist )
  {
    v32 = (PageSlist + 0x220000000000LL) / 48;
    goto LABEL_38;
  }
  if ( (v4 & 2) != 0
    || (v4 & 0x10000) != 0
    || (v4 & 0x3000) != 0 && !(unsigned int)MiCheckNodeChannelStandbyCount(v129, v11, (unsigned __int8)v12, v13) )
  {
    return -1LL;
  }
  v101 = MiRemoveLowestPriorityStandbyPage(v129, 8LL, v4, v13);
  v32 = v101;
  if ( v101 == -1 )
    return -1LL;
  v31 = 48 * v101 - 0x220000000000LL;
LABEL_38:
  *(_QWORD *)v31 = 0LL;
  v33 = 0;
  if ( (*(_QWORD *)(v31 + 40) & 0x10000000000LL) != 0 )
    v33 = *(_DWORD *)(v31 + 36) & 0x18000000;
  *(_DWORD *)(v31 + 36) = v33;
  v34 = dword_140E2D804;
  if ( dword_140E2D800 > (unsigned int)dword_140E2D804
    || (v35 = (char *)qword_140E2D860 + 16 * dword_140E2D800, v32 < *(_QWORD *)v35)
    || dword_140E2D800 != dword_140E2D804 && v32 >= *((_QWORD *)v35 + 2) )
  {
    for ( m = 0; ; m = v73 + 1 )
    {
      while ( 1 )
      {
        if ( v34 < m )
          KeBugCheckEx(0x1Au, 0x5180uLL, v32, 0LL, 0LL);
        v73 = (m + v34) >> 1;
        v35 = (char *)qword_140E2D860 + 16 * v73;
        if ( v32 >= *(_QWORD *)v35 )
          break;
        if ( !v73 )
          KeBugCheckEx(0x1Au, 0x5180uLL, v32, (ULONG_PTR)v35, 0LL);
        v34 = v73 - 1;
      }
      if ( v73 == dword_140E2D804 || v32 < *((_QWORD *)v35 + 2) )
        break;
    }
    dword_140E2D800 = (m + v34) >> 1;
  }
  if ( *((_DWORD *)v35 + 2) != v11
    || (qword_140E2D868 ? (v36 = *(_BYTE *)(MiSearchChannelTable(v32) + 12)) : (v36 = 0),
        v36 != (_BYTE)v12 && !HIBYTE(v135)) )
  {
    if ( (v4 & 2) == 0 )
    {
      if ( (v4 & 0x20000) == 0 )
      {
        v107 = v4;
        LODWORD(v107) = v4 | 0x1000;
        v32 = MiSwapNumaStandbyPage(v32, v11, (unsigned __int8)v12, v107);
        v31 = 48 * v32 - 0x220000000000LL;
      }
      if ( (v4 & 0x1000) != 0 && (unsigned int)MiPageToNode(v32) != v11
        || (v4 & 0x2000) != 0 && (unsigned __int8)MiPageToChannel(v32) != (_BYTE)v12 && !HIBYTE(v135) )
      {
        MiReleaseFreshPage(v31);
        return -1LL;
      }
    }
  }
  if ( (v4 & 0x20) == 0 )
    goto LABEL_288;
  v37 = (v9 >> 2) & 3;
  if ( (*(_QWORD *)(v31 + 16) & 0x3E0LL) != 0 )
    goto LABEL_64;
  v38 = (*(_DWORD *)(v31 + 32) >> 22) & 3;
  if ( v38 == v37 || ((unsigned __int8)((1 << v38) | (1 << v37)) & (unsigned __int8)byte_140E2D918) == 0 )
  {
LABEL_288:
    if ( (v4 & 8) != 0 )
      return v32;
    v37 = (v9 >> 2) & 3;
    if ( ((*(_DWORD *)(v31 + 32) >> 22) & 3) == v37 )
      return v32;
LABEL_64:
    v44 = 4 * (v4 & 1 | 0x40);
    if ( (v4 & 0x20) != 0 )
      goto LABEL_65;
    goto LABEL_66;
  }
  v44 = 4 * (v4 | 0x40);
LABEL_65:
  v44 |= 1u;
LABEL_66:
  v45 = WORD1(v122) & 3;
  v46 = 4 * (v44 & 4 | 2);
  v120 = v46;
  v47 = (v31 + 0x220000000000LL) / 48;
  if ( (*(_DWORD *)(v31 + 32) & 0xC00000) == 0xC00000 )
  {
    v115 = MiPfnBestZeroAttribute(v31, v37);
    MiChangePageAttribute(v31, v115, v46);
  }
  v48 = (*(_DWORD *)(v31 + 32) >> 22) & 3;
  v49 = v48 != v37;
  if ( (v44 & 1) != 0 )
  {
    v118 = v48 != v37;
    if ( v48 != v37 )
    {
      v118 = 1;
      if ( (unsigned int)MiPfnBestZeroAttribute(v31, v37) == v37 )
      {
        MiChangePageAttribute(v31, v37, v46);
        v118 = 0;
      }
    }
    if ( v45 == 3 )
    {
      v50 = 48 * v47;
      v51 = 48 * v47 - 0x220000000000LL;
      if ( (v44 & 4) != 0 )
      {
        v52 = 16;
        v53 = (*(_DWORD *)(v50 - 0x220000000000LL + 32) >> 22) & 3;
      }
      else
      {
        v53 = (*(_DWORD *)(v50 - 0x220000000000LL + 32) >> 22) & 3;
        v52 = 0;
        v123 = 0;
      }
      v130 = 48 * v47 - 0x220000000000LL;
      v54 = (__int64)((unsigned __int128)(v50 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
      v55 = *(_DWORD *)(qword_140E2D838
                      + 384LL * (unsigned int)MiPageToNode(v54 + (v54 >> 63))
                      + 4 * ((int)v37 + 4LL * ((*(_DWORD *)(v51 + 32) >> 22) & 3))
                      + 120);
      v128 = v55;
      if ( v55 != v53 )
        MiChangePageAttribute(v51, v55, v52);
      v116[0] = 17;
      if ( KeGetCurrentPrcb()->MmInternal )
      {
        v56 = MiMapPageInHyperSpaceWorker((v31 + 0x220000000000LL) / 48, v116, 0x80000000LL);
        KeZeroPages(v56, 4096LL);
        v57 = v116[0];
        *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
        *(_QWORD *)(((v56 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        if ( (_BYTE)v57 != 17 )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v57);
          __writecr8(v57);
        }
      }
      else
      {
        Phase0Mapping = MxGetPhase0Mapping();
        v83 = (_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        *v83 = MiMakeValidPte(v83, (v31 + 0x220000000000LL) / 48, 2684354564LL);
        KeZeroPages(Phase0Mapping, 4096LL);
        *v83 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        MiFlushSingleTbEntry(Phase0Mapping, 2LL);
        v51 = v130;
      }
      if ( v128 != v53 && v128 != v37 )
        MiChangePageAttribute(v51, v53, v123);
      v46 = v120;
    }
    else
    {
      MiZeroLargePage(0, v31, v45, v37, (v44 >> 2) & 1);
    }
    v49 = v118;
    *(_QWORD *)(v31 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
  }
  if ( v49 )
    MiChangePageAttribute(v31, v37, v46);
  return v32;
}
