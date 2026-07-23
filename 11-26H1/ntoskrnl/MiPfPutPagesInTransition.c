/*
 * XREFs of MiPfPutPagesInTransition @ 0x140374A10
 * Callers:
 *     MiPrefetchControlArea @ 0x140A58548 (MiPrefetchControlArea.c)
 *     MmPrefetchForCacheManager @ 0x140A59FA0 (MmPrefetchForCacheManager.c)
 *     MmPrefetchPagesEx @ 0x140A5AD88 (MmPrefetchPagesEx.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiUpdatePfnPriority @ 0x140298800 (MiUpdatePfnPriority.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1402A96FC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiZeroPhysicalPage @ 0x1402BA8E0 (MiZeroPhysicalPage.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiObtainProtoReference @ 0x1402C7BB0 (MiObtainProtoReference.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFreeInPageSupportBlock @ 0x14031F608 (MiFreeInPageSupportBlock.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x140320354 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiReleasePrefetchGapPages @ 0x140339E38 (MiReleasePrefetchGapPages.c)
 *     MiGetPageForHeader @ 0x14033A9FC (MiGetPageForHeader.c)
 *     MiReturnFaultCharges @ 0x14033AD8C (MiReturnFaultCharges.c)
 *     MiInsertPageChainHead @ 0x14033C0E0 (MiInsertPageChainHead.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 *     MiPfnZeroingNeeded @ 0x14033CB30 (MiPfnZeroingNeeded.c)
 *     MiUnlinkPageChainHead @ 0x140367C90 (MiUnlinkPageChainHead.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiPfIsPageNeeded @ 0x1403754A8 (MiPfIsPageNeeded.c)
 *     MiInitializeReadInProgressPfn @ 0x140375570 (MiInitializeReadInProgressPfn.c)
 *     MiUseSlabAllocator @ 0x140375BA4 (MiUseSlabAllocator.c)
 *     MiPrefetchNormally @ 0x140375C8C (MiPrefetchNormally.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 *     MiGetInPageSupportBlock @ 0x140398D70 (MiGetInPageSupportBlock.c)
 *     MiLockProtoPoolPageForce @ 0x1403A2E40 (MiLockProtoPoolPageForce.c)
 *     MiSetInPagePriority @ 0x140489F18 (MiSetInPagePriority.c)
 *     MiPrefetchPagesViable @ 0x1404BD9E4 (MiPrefetchPagesViable.c)
 *     MiPfPrepareForPageFileRead @ 0x1406FBBF0 (MiPfPrepareForPageFileRead.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiFreeReadListPages @ 0x140A5B8D0 (MiFreeReadListPages.c)
 *     MiPfInitializeInPageSupport @ 0x140A956F8 (MiPfInitializeInPageSupport.c)
 *     MiPfOptimizeMdl @ 0x140AB6FA8 (MiPfOptimizeMdl.c)
 */

__int64 __fastcall MiPfPutPagesInTransition(__int64 a1, unsigned __int64 *a2, int a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r13
  __int64 v11; // rdi
  _KPROCESS *Process; // r9
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rax
  char v16; // al
  unsigned int v17; // r10d
  int IoPriorityThread; // eax
  __int64 v19; // r9
  char v20; // r10
  char v21; // r11
  char v22; // cl
  _QWORD *v23; // rax
  _QWORD *v24; // r15
  _QWORD *v25; // r12
  unsigned __int64 v26; // rbx
  __int64 v27; // r8
  ULONG_PTR v28; // rsi
  ULONG_PTR v29; // rbx
  __int64 v30; // r8
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rdi
  unsigned int v35; // r14d
  unsigned __int64 v36; // rax
  ULONG_PTR v37; // rdx
  unsigned __int64 v38; // rbx
  __int64 v39; // r9
  __int64 v40; // rdi
  __int64 PageForHeader; // rax
  __int64 v42; // rdi
  __int64 v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdi
  ULONG *v47; // r14
  int v48; // esi
  __int64 v49; // rdi
  __int64 v50; // rbx
  __int64 *v51; // rcx
  __int64 v52; // rax
  bool v53; // zf
  __int64 v54; // rsi
  __int64 v55; // rcx
  __int64 v56; // r13
  __int64 v57; // r8
  char v58; // r12
  int v59; // eax
  __int64 v60; // r15
  _QWORD *v61; // rcx
  __int64 v62; // rbx
  __int64 v63; // rax
  _SLIST_ENTRY *v64; // r10
  __int64 *v66; // rdi
  __int64 *v67; // rbx
  char v68; // dl
  _QWORD *v69; // rbx
  __int64 v70; // rcx
  __int64 v71; // r8
  char v72; // cl
  unsigned int v73; // edx
  __int64 Page; // rax
  unsigned int v75; // r8d
  __int64 v76; // [rsp+30h] [rbp-D0h]
  __int64 v77; // [rsp+38h] [rbp-C8h]
  __int64 v78; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v79; // [rsp+48h] [rbp-B8h]
  unsigned int v80; // [rsp+50h] [rbp-B0h]
  unsigned int v81; // [rsp+54h] [rbp-ACh]
  int v82; // [rsp+58h] [rbp-A8h]
  unsigned int v83; // [rsp+5Ch] [rbp-A4h]
  _QWORD *v84; // [rsp+60h] [rbp-A0h]
  __int64 v85; // [rsp+70h] [rbp-90h] BYREF
  ULONG *v86; // [rsp+78h] [rbp-88h]
  volatile signed __int32 *v87; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v88; // [rsp+88h] [rbp-78h]
  int v89; // [rsp+90h] [rbp-70h]
  int v90; // [rsp+94h] [rbp-6Ch]
  int v91; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v92; // [rsp+A0h] [rbp-60h]
  char v93; // [rsp+A8h] [rbp-58h]
  char v94; // [rsp+A9h] [rbp-57h]
  __int128 v95; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v96; // [rsp+C0h] [rbp-40h]
  PSLIST_ENTRY ListEntry; // [rsp+C8h] [rbp-38h]
  int v98; // [rsp+D0h] [rbp-30h]
  __int64 v99; // [rsp+E0h] [rbp-20h]
  ULONG_PTR v100; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v101; // [rsp+F0h] [rbp-10h]
  ULONG_PTR v102; // [rsp+F8h] [rbp-8h]
  __int64 v103; // [rsp+100h] [rbp+0h]
  unsigned int v104; // [rsp+108h] [rbp+8h] BYREF
  unsigned int v105; // [rsp+10Ch] [rbp+Ch]
  int v106; // [rsp+110h] [rbp+10h]
  ULONG_PTR v107; // [rsp+118h] [rbp+18h]
  unsigned __int64 v108; // [rsp+120h] [rbp+20h]
  _QWORD *v109; // [rsp+128h] [rbp+28h]
  _QWORD *v110; // [rsp+130h] [rbp+30h]
  __int64 retaddr; // [rsp+188h] [rbp+88h]
  int v113; // [rsp+198h] [rbp+98h]
  unsigned int v114; // [rsp+198h] [rbp+98h]

  v5 = a1;
  memset_0(&v85, 0, 0xB0uLL);
  v10 = 0LL;
  v80 = *(_DWORD *)(v5 + 184);
  v81 = *(_DWORD *)(v5 + 188);
  v92 = a2;
  v11 = 0LL;
  v99 = a4;
  v91 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = *(_QWORD *)(v5 + 8);
  v85 = v5;
  v76 = 0LL;
  v77 = 0LL;
  v14 = *(_DWORD *)(v13 + 60);
  v15 = *(_QWORD *)(v5 + 8);
  v86 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * (v14 & 0x3FF));
  if ( (*(_DWORD *)(v15 + 56) & 0x20) == 0 )
  {
    v16 = v93;
    if ( (*(_DWORD *)(*(_QWORD *)(v5 + 8) + 56LL) & 8) != 0 )
      v16 = 1;
    v93 = v16;
  }
  v17 = *(_DWORD *)(v5 + 184);
  v82 = *(_DWORD *)(v5 + 192) + 1;
  v83 = v17;
  IoPriorityThread = PsGetIoPriorityThread(KeGetCurrentThread(), v8, v9, Process);
  v22 = v94;
  v113 = 0;
  if ( IoPriorityThread < 2 )
    v22 = v21;
  v94 = v22;
  LOBYTE(v113) = v20 & 7 | 0x18;
  v98 = v113;
  v90 = (*(_DWORD *)(*(_QWORD *)(v5 + 8) + 56LL) >> 20) & 0x7F;
  MiInitializePageColorBase(v19 + 1024, 3, v90, (__int64)&v87);
  v23 = *(_QWORD **)(v5 + 224);
  v110 = (_QWORD *)(v5 + 224);
  v89 = (v88 >> 9) & 0x3F;
  if ( v23 != (_QWORD *)(v5 + 224) )
  {
    while ( 1 )
    {
      v24 = v23;
      v84 = v23;
      v109 = (_QWORD *)*v23;
      v25 = (_QWORD *)v23[31];
      v26 = v23[25];
      v79 = v25;
      v108 = v26;
      MiPfInitializeInPageSupport(&v85, v23);
      v27 = 0LL;
      v114 = 0;
      while ( 2 )
      {
        if ( (unsigned __int64)v25 > v26 )
          goto LABEL_96;
        if ( !ListEntry )
        {
          v63 = MiGetInPageSupportBlock(0LL, a4);
          if ( v63 )
          {
            MiSetInPagePriority(v63, v81, v80);
            ListEntry = v64;
          }
        }
        v28 = *v25 & 0xFFFFFFFFFFFFFFFCuLL;
        v105 = v82;
        v29 = v28 >> 9;
        v103 = 0LL;
        if ( v10 )
        {
          v30 = (v29 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v11 == v30 )
            goto LABEL_13;
          MiUnlockProtoPoolPage(v10, 17LL, v30);
        }
        v77 = (v29 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v10 = MiLockProtoPoolPageForce(v28);
        v76 = v10;
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_13:
            v31 = *(_QWORD *)v28;
            v32 = *(_QWORD *)v28;
            if ( (*(_QWORD *)v28 & 1) != 0 )
              goto LABEL_20;
            if ( (*(_QWORD *)v28 & 0xC00LL) != 0x800 )
            {
              v36 = *(_QWORD *)v28;
              goto LABEL_28;
            }
            if ( !v31 || !qword_140E2D8C0 || (qword_140E2D8C0 & v31) != 0 )
            {
              v32 = *(_QWORD *)v28;
              if ( qword_140E2D8C0 )
              {
                v32 = v31 & 0xFFFFFFFFFFFFFFEFuLL;
                if ( (v31 & 0x10) == 0 )
                  v32 = qword_140E2D8C8 & v31;
              }
LABEL_20:
              v33 = (v32 >> 12) & 0xFFFFFFFFFFLL;
              if ( v33 <= qword_140E2D920 && (*(_QWORD *)(48 * v33 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
                break;
            }
          }
          v34 = 48 * v33 - 0x220000000000LL;
          v35 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v35 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v35);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v34 + 24) < 0 );
          }
          if ( *(_QWORD *)v28 == v31 )
            break;
          _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v34 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
          v34 = MiLockSpecialPurposeMemoryCachedPage(v34, 2);
        v36 = *(_QWORD *)v28;
        if ( v34 )
        {
          MiUpdatePfnPriority(v34, v83, 0);
          _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_56:
          v11 = v77;
          ++v25;
          v10 = v76;
          v26 = v108;
          v79 = v25;
          continue;
        }
        break;
      }
LABEL_28:
      v100 = v28;
      v101 = v36;
      MiPfIsPageNeeded(&v85);
      if ( !v106 )
        goto LABEL_56;
      v37 = v100;
      v96 = 0LL;
      v95 = 0LL;
      if ( !v102 )
      {
        v44 = (__int64)(v100 - v107) >> 3;
        if ( v44 )
        {
          if ( (*((_DWORD *)v24 + 47) & 0x400000) != 0 )
            v45 = 0LL;
          else
            v45 = v24[26];
          v107 = v100;
          *(_WORD *)(v45 + 8) += -8 * v44;
          *(_DWORD *)(v45 + 40) -= (_DWORD)v44 << 12;
          *((_DWORD *)v24 + 46) -= (_DWORD)v44 << 12;
          v24[12] += v44 << 12;
          v24[31] = v37 & 0xFFFFFFFFFFFFFFFCuLL;
        }
        goto LABEL_61;
      }
      if ( !v93 )
        goto LABEL_61;
      v38 = ((__int64)(v100 - v102) >> 3) - 1;
      if ( (__int64)(v100 - v102) >> 3 == 1 )
        goto LABEL_61;
      if ( !(unsigned int)MiPrefetchNormally(v86, v38, v105) )
        goto LABEL_95;
      if ( v92 )
      {
        if ( *v92 >= v38 )
        {
          *v92 -= v38;
          goto LABEL_34;
        }
      }
      else
      {
LABEL_34:
        v40 = 0LL;
        while ( 1 )
        {
          PageForHeader = MiGetPageForHeader(v86, v90, 1u, v39);
          if ( PageForHeader == -1 )
            break;
          MiInsertPageChainHead((__int64 *)&v95, (__int64 *)(48 * PageForHeader - 0x220000000000LL));
          if ( ++v40 == v38 )
            goto LABEL_61;
        }
        if ( v40 != v38 )
        {
          MiReleasePrefetchGapPages((__int64)&v95);
          goto LABEL_95;
        }
LABEL_61:
        v46 = v85;
        v47 = v86;
        if ( v106 != 1 || !(unsigned int)MiUseSlabAllocator((_DWORD)v86, v103, v101, v89, (__int64)&v104) )
        {
          v48 = v104;
          goto LABEL_64;
        }
        v48 = v104;
        if ( v104 > 4 )
        {
LABEL_64:
          v49 = v46 + 40;
          v50 = v49;
        }
        else
        {
          v50 = v46 + 8 * (v104 + 2 * (v104 + 4LL));
          v49 = v46 + 40;
        }
        v51 = *(__int64 **)v50;
        if ( *(_QWORD *)v50 )
        {
          v52 = *v51;
          v53 = (*(_QWORD *)(v50 + 16))-- == 1LL;
          *(_QWORD *)v50 = v52;
          if ( v53 )
            *(_QWORD *)(v50 + 8) = 0LL;
          v27 = 0xFFFFDE0000000000uLL;
          v54 = (__int64)(v51 + 0x44000000000LL) / 48;
          goto LABEL_69;
        }
        if ( (unsigned int)MiPrefetchPagesViable((_DWORD)v47, (_DWORD)v92, v105, 1, 1) )
        {
          v72 = _InterlockedExchangeAdd(v87, 1u);
          v73 = v88 ^ (unsigned __int8)(v88 ^ v72);
          if ( v50 == v49 )
          {
            v75 = 49;
            if ( (*(_BYTE *)v25 & 1) == 0 )
              v75 = 1;
            Page = MiGetPage((__int64)v47, v73, v75);
          }
          else
          {
            Page = MiGetSlabPage((__int64)v47, v48, v73, 0x14u, 0LL, 0);
          }
          v54 = Page;
          if ( Page == -1 )
            MiReturnFaultCharges((__int64)v47, 1LL);
          v27 = 0xFFFFDE0000000000uLL;
LABEL_69:
          if ( v54 != -1 )
          {
            if ( (*((_DWORD *)v24 + 47) & 0x400000) != 0 )
              v55 = 0LL;
            else
              v55 = v24[26];
            if ( v96 )
            {
              v66 = (__int64 *)(v55 + 8 * (((__int64)(v102 - v107) >> 3) + 7));
              v67 = MiUnlinkPageChainHead((__int64)&v95);
              if ( v67 )
              {
                do
                {
                  LODWORD(v78) = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)v67 + 6, 0x3FuLL) )
                  {
                    do
                      KeYieldProcessorEx(&v78);
                    while ( v67[3] < 0 );
                  }
                  v67[1] = -3LL;
                  *((_DWORD *)v67 + 8) |= 0x70000u;
                  *((_DWORD *)v67 + 8) |= 0x200000u;
                  *v67 = 0LL;
                  _InterlockedAnd64(v67 + 3, 0x7FFFFFFFFFFFFFFFuLL);
                  *v66++ = (__int64)(v67 + 0x44000000000LL) / 48;
                  v67 = MiUnlinkPageChainHead((__int64)&v95);
                }
                while ( v67 );
                v24 = v84;
                v25 = v79;
              }
            }
            v56 = v27 + 48 * v54;
            v57 = 1LL;
            if ( (*(_BYTE *)v25 & 1) != 0 && MiPfnZeroingNeeded(v56, 1) )
              v58 = v68;
            else
              v58 = 0;
            if ( v106 == 1 )
            {
              v102 = v100;
              v59 = *((_DWORD *)v24 + 47);
              v78 = v54;
              if ( (v59 & 0x400000) != 0 )
                v60 = 0LL;
              else
                v60 = v24[26];
              v61 = v84;
              if ( !v84[32] )
                v84[32] = v56;
              MiInitializeReadInProgressPfn(-1LL, &v78, v57, v100, v61, v98);
              v62 = *(_QWORD *)(v85 + 8);
              if ( (*(_DWORD *)(v62 + 56) & 0x20) != 0 || !*(_QWORD *)(v62 + 64) )
                v42 = 0LL;
              else
                v42 = v103;
              ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v62 + 72));
              ++*(_QWORD *)(v62 + 32);
              if ( v42 )
                ++*(_DWORD *)(v42 + 104);
              if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
                *(_DWORD *)(v62 + 72) = 0;
              else
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v62 + 72), retaddr);
              v43 = v76;
              *(_QWORD *)(v60 + 8 * ((__int64)(v100 - v107) >> 3) + 48) = v78;
              v24 = v84;
              if ( !v84[20] )
              {
                MiObtainProtoReference(v76, 0LL, v27);
                v24[20] = v76;
              }
              ++v114;
            }
            else
            {
              MiPfPrepareForPageFileRead(&v85, v24, v54, v76);
              MiUnlockProtoPoolPage(v76, 17LL, v71);
              v43 = 0LL;
              v76 = 0LL;
            }
            if ( v58 )
            {
              if ( v43 )
              {
                MiUnlockProtoPoolPage(v43, 17LL, v27);
                v76 = 0LL;
              }
              MiZeroPhysicalPage(0LL, v54, 0, (*(_DWORD *)(v56 + 32) >> 22) & 3);
            }
            v25 = v79;
            goto LABEL_56;
          }
        }
        v69 = (_QWORD *)v95;
        while ( 1 )
        {
          v70 = (__int64)v69;
          if ( !v69 )
            break;
          v69 = (_QWORD *)*v69;
          if ( !--v96 )
            *((_QWORD *)&v95 + 1) = 0LL;
          MiReturnPfnReferenceCountAtDpc(v70);
        }
        *(_QWORD *)&v95 = 0LL;
      }
LABEL_95:
      v11 = v77;
LABEL_96:
      if ( v10 )
      {
        MiUnlockProtoPoolPage(v10, 17LL, v27);
        v10 = 0LL;
        v76 = 0LL;
      }
      MiPfOptimizeMdl(&v85, v24, v114);
      v23 = v109;
      if ( v109 == v110 )
      {
        v5 = a1;
        break;
      }
    }
  }
  MiFreeReadListPages(v5);
  if ( ListEntry )
    MiFreeInPageSupportBlock(ListEntry);
  return 0LL;
}
