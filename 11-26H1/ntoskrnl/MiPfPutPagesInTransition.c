/*
 * XREFs of MiPfPutPagesInTransition @ 0x140372C60
 * Callers:
 *     MiPrefetchControlArea @ 0x140A4F258 (MiPrefetchControlArea.c)
 *     MmPrefetchForCacheManager @ 0x140A50CB0 (MmPrefetchForCacheManager.c)
 *     MmPrefetchPagesEx @ 0x140A51A98 (MmPrefetchPagesEx.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiUpdatePfnPriority @ 0x1402992A0 (MiUpdatePfnPriority.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1402AA2EC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiZeroPhysicalPage @ 0x1402D8B20 (MiZeroPhysicalPage.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiObtainProtoReference @ 0x1402E5B70 (MiObtainProtoReference.c)
 *     MiFreeInPageSupportBlock @ 0x14031D5D8 (MiFreeInPageSupportBlock.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x14031E324 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiReleasePrefetchGapPages @ 0x140337DB8 (MiReleasePrefetchGapPages.c)
 *     MiGetPageForHeader @ 0x14033897C (MiGetPageForHeader.c)
 *     MiReturnFaultCharges @ 0x140338D0C (MiReturnFaultCharges.c)
 *     MiInsertPageChainHead @ 0x14033A060 (MiInsertPageChainHead.c)
 *     MiGetSlabPage @ 0x14033A284 (MiGetSlabPage.c)
 *     MiPfnZeroingNeeded @ 0x14033AAB0 (MiPfnZeroingNeeded.c)
 *     MiUnlinkPageChainHead @ 0x140365EF0 (MiUnlinkPageChainHead.c)
 *     MiInitializePageColorBase @ 0x14036FE20 (MiInitializePageColorBase.c)
 *     MiPfIsPageNeeded @ 0x1403736F8 (MiPfIsPageNeeded.c)
 *     MiInitializeReadInProgressPfn @ 0x1403737C0 (MiInitializeReadInProgressPfn.c)
 *     MiUseSlabAllocator @ 0x140373DF4 (MiUseSlabAllocator.c)
 *     MiPrefetchNormally @ 0x140373EDC (MiPrefetchNormally.c)
 *     PsGetIoPriorityThread @ 0x1403750A0 (PsGetIoPriorityThread.c)
 *     MiGetInPageSupportBlock @ 0x140396FF0 (MiGetInPageSupportBlock.c)
 *     MiLockProtoPoolPageForce @ 0x1403A10E0 (MiLockProtoPoolPageForce.c)
 *     MiSetInPagePriority @ 0x140490468 (MiSetInPagePriority.c)
 *     MiPrefetchPagesViable @ 0x1404C4104 (MiPrefetchPagesViable.c)
 *     MiPfPrepareForPageFileRead @ 0x1406F6F80 (MiPfPrepareForPageFileRead.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiFreeReadListPages @ 0x140A525E0 (MiFreeReadListPages.c)
 *     MiPfInitializeInPageSupport @ 0x140A90BA8 (MiPfInitializeInPageSupport.c)
 *     MiPfOptimizeMdl @ 0x140AB5C08 (MiPfOptimizeMdl.c)
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
  ULONG_PTR v27; // rsi
  ULONG_PTR v28; // rbx
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rdi
  unsigned int v33; // r14d
  unsigned __int64 v34; // rax
  ULONG_PTR v35; // rdx
  unsigned __int64 v36; // rbx
  __int64 v37; // r9
  __int64 v38; // rdi
  __int64 PageForHeader; // rax
  __int64 v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdi
  ULONG *v45; // r14
  int v46; // esi
  __int64 v47; // rdi
  __int64 v48; // rbx
  __int64 *v49; // rcx
  __int64 v50; // rax
  bool v51; // zf
  unsigned __int64 v52; // r8
  __int64 v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // r13
  __int64 v56; // r8
  char v57; // r12
  int v58; // eax
  __int64 v59; // r15
  _QWORD *v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rax
  struct _SLIST_ENTRY *v63; // r10
  __int64 *v65; // rdi
  __int64 *v66; // rbx
  char v67; // dl
  _QWORD *v68; // rbx
  __int64 v69; // rcx
  char v70; // cl
  unsigned int v71; // edx
  __int64 Page; // rax
  unsigned int v73; // r8d
  __int64 v74; // [rsp+30h] [rbp-D0h]
  __int64 v75; // [rsp+38h] [rbp-C8h]
  __int64 v76; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v77; // [rsp+48h] [rbp-B8h]
  unsigned int v78; // [rsp+50h] [rbp-B0h]
  unsigned int v79; // [rsp+54h] [rbp-ACh]
  int v80; // [rsp+58h] [rbp-A8h]
  unsigned int v81; // [rsp+5Ch] [rbp-A4h]
  _QWORD *v82; // [rsp+60h] [rbp-A0h]
  __int64 v83; // [rsp+70h] [rbp-90h] BYREF
  ULONG *v84; // [rsp+78h] [rbp-88h]
  volatile signed __int32 *v85; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v86; // [rsp+88h] [rbp-78h]
  int v87; // [rsp+90h] [rbp-70h]
  int v88; // [rsp+94h] [rbp-6Ch]
  int v89; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v90; // [rsp+A0h] [rbp-60h]
  char v91; // [rsp+A8h] [rbp-58h]
  char v92; // [rsp+A9h] [rbp-57h]
  __int128 v93; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v94; // [rsp+C0h] [rbp-40h]
  PSLIST_ENTRY ListEntry; // [rsp+C8h] [rbp-38h]
  int v96; // [rsp+D0h] [rbp-30h]
  __int64 v97; // [rsp+E0h] [rbp-20h]
  ULONG_PTR v98; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v99; // [rsp+F0h] [rbp-10h]
  ULONG_PTR v100; // [rsp+F8h] [rbp-8h]
  __int64 v101; // [rsp+100h] [rbp+0h]
  unsigned int v102; // [rsp+108h] [rbp+8h] BYREF
  unsigned int v103; // [rsp+10Ch] [rbp+Ch]
  int v104; // [rsp+110h] [rbp+10h]
  ULONG_PTR v105; // [rsp+118h] [rbp+18h]
  unsigned __int64 v106; // [rsp+120h] [rbp+20h]
  _QWORD *v107; // [rsp+128h] [rbp+28h]
  _QWORD *v108; // [rsp+130h] [rbp+30h]
  __int64 retaddr; // [rsp+188h] [rbp+88h]
  int v111; // [rsp+198h] [rbp+98h]
  unsigned int v112; // [rsp+198h] [rbp+98h]

  v5 = a1;
  memset_0(&v83, 0, 0xB0uLL);
  v10 = 0LL;
  v78 = *(_DWORD *)(v5 + 184);
  v79 = *(_DWORD *)(v5 + 188);
  v90 = a2;
  v11 = 0LL;
  v97 = a4;
  v89 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = *(_QWORD *)(v5 + 8);
  v83 = v5;
  v74 = 0LL;
  v75 = 0LL;
  v14 = *(_DWORD *)(v13 + 60);
  v15 = *(_QWORD *)(v5 + 8);
  v84 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * (v14 & 0x3FF));
  if ( (*(_DWORD *)(v15 + 56) & 0x20) == 0 )
  {
    v16 = v91;
    if ( (*(_DWORD *)(*(_QWORD *)(v5 + 8) + 56LL) & 8) != 0 )
      v16 = 1;
    v91 = v16;
  }
  v17 = *(_DWORD *)(v5 + 184);
  v80 = *(_DWORD *)(v5 + 192) + 1;
  v81 = v17;
  IoPriorityThread = PsGetIoPriorityThread(KeGetCurrentThread(), v8, v9, Process);
  v22 = v92;
  v111 = 0;
  if ( IoPriorityThread < 2 )
    v22 = v21;
  v92 = v22;
  LOBYTE(v111) = v20 & 7 | 0x18;
  v96 = v111;
  v88 = (*(_DWORD *)(*(_QWORD *)(v5 + 8) + 56LL) >> 20) & 0x7F;
  MiInitializePageColorBase(v19 + 1024, 3, v88, (__int64)&v85);
  v23 = *(_QWORD **)(v5 + 224);
  v108 = (_QWORD *)(v5 + 224);
  v87 = (v86 >> 9) & 0x3F;
  if ( v23 != (_QWORD *)(v5 + 224) )
  {
    while ( 1 )
    {
      v24 = v23;
      v82 = v23;
      v107 = (_QWORD *)*v23;
      v25 = (_QWORD *)v23[31];
      v26 = v23[25];
      v77 = v25;
      v106 = v26;
      MiPfInitializeInPageSupport(&v83, v23);
      v112 = 0;
      while ( 2 )
      {
        if ( (unsigned __int64)v25 > v26 )
          goto LABEL_96;
        if ( !ListEntry )
        {
          v62 = MiGetInPageSupportBlock(0LL, a4);
          if ( v62 )
          {
            MiSetInPagePriority(v62, v79, v78);
            ListEntry = v63;
          }
        }
        v27 = *v25 & 0xFFFFFFFFFFFFFFFCuLL;
        v103 = v80;
        v28 = v27 >> 9;
        v101 = 0LL;
        if ( v10 )
        {
          if ( v11 == (v28 & 0x7FFFFFFFF8LL) - 0x98000000000LL )
            goto LABEL_13;
          MiUnlockProtoPoolPage(v10, 0x11u);
        }
        v75 = (v28 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v10 = MiLockProtoPoolPageForce(v27);
        v74 = v10;
        while ( 1 )
        {
          while ( 1 )
          {
LABEL_13:
            v29 = *(_QWORD *)v27;
            v30 = *(_QWORD *)v27;
            if ( (*(_QWORD *)v27 & 1) != 0 )
              goto LABEL_20;
            if ( (*(_QWORD *)v27 & 0xC00LL) != 0x800 )
            {
              v34 = *(_QWORD *)v27;
              goto LABEL_28;
            }
            if ( !v29 || !qword_140E2D740 || (qword_140E2D740 & v29) != 0 )
            {
              v30 = *(_QWORD *)v27;
              if ( qword_140E2D740 )
              {
                v30 = v29 & 0xFFFFFFFFFFFFFFEFuLL;
                if ( (v29 & 0x10) == 0 )
                  v30 = qword_140E2D748 & v29;
              }
LABEL_20:
              v31 = (v30 >> 12) & 0xFFFFFFFFFFLL;
              if ( v31 <= qword_140E2D7A0 && (*(_QWORD *)(48 * v31 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
                break;
            }
          }
          v32 = 48 * v31 - 0x220000000000LL;
          v33 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v33 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v33);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v32 + 24) < 0 );
          }
          if ( *(_QWORD *)v27 == v29 )
            break;
          _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v32 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
          v32 = MiLockSpecialPurposeMemoryCachedPage(v32, 2);
        v34 = *(_QWORD *)v27;
        if ( v32 )
        {
          MiUpdatePfnPriority(v32, v81, 0);
          _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_56:
          v11 = v75;
          ++v25;
          v10 = v74;
          v26 = v106;
          v77 = v25;
          continue;
        }
        break;
      }
LABEL_28:
      v98 = v27;
      v99 = v34;
      MiPfIsPageNeeded(&v83);
      if ( !v104 )
        goto LABEL_56;
      v35 = v98;
      v94 = 0LL;
      v93 = 0LL;
      if ( !v100 )
      {
        v42 = (__int64)(v98 - v105) >> 3;
        if ( v42 )
        {
          if ( (*((_DWORD *)v24 + 47) & 0x400000) != 0 )
            v43 = 0LL;
          else
            v43 = v24[26];
          v105 = v98;
          *(_WORD *)(v43 + 8) += -8 * v42;
          *(_DWORD *)(v43 + 40) -= (_DWORD)v42 << 12;
          *((_DWORD *)v24 + 46) -= (_DWORD)v42 << 12;
          v24[12] += v42 << 12;
          v24[31] = v35 & 0xFFFFFFFFFFFFFFFCuLL;
        }
        goto LABEL_61;
      }
      if ( !v91 )
        goto LABEL_61;
      v36 = ((__int64)(v98 - v100) >> 3) - 1;
      if ( (__int64)(v98 - v100) >> 3 == 1 )
        goto LABEL_61;
      if ( !(unsigned int)MiPrefetchNormally(v84, v36, v103) )
        goto LABEL_95;
      if ( v90 )
      {
        if ( *v90 >= v36 )
        {
          *v90 -= v36;
          goto LABEL_34;
        }
      }
      else
      {
LABEL_34:
        v38 = 0LL;
        while ( 1 )
        {
          PageForHeader = MiGetPageForHeader(v84, v88, 1u, v37);
          if ( PageForHeader == -1 )
            break;
          MiInsertPageChainHead((__int64 *)&v93, (__int64 *)(48 * PageForHeader - 0x220000000000LL));
          if ( ++v38 == v36 )
            goto LABEL_61;
        }
        if ( v38 != v36 )
        {
          MiReleasePrefetchGapPages((__int64)&v93);
          goto LABEL_95;
        }
LABEL_61:
        v44 = v83;
        v45 = v84;
        if ( v104 != 1 || !(unsigned int)MiUseSlabAllocator((_DWORD)v84, v101, v99, v87, (__int64)&v102) )
        {
          v46 = v102;
          goto LABEL_64;
        }
        v46 = v102;
        if ( v102 > 4 )
        {
LABEL_64:
          v47 = v44 + 40;
          v48 = v47;
        }
        else
        {
          v48 = v44 + 8 * (v102 + 2 * (v102 + 4LL));
          v47 = v44 + 40;
        }
        v49 = *(__int64 **)v48;
        if ( *(_QWORD *)v48 )
        {
          v50 = *v49;
          v51 = (*(_QWORD *)(v48 + 16))-- == 1LL;
          *(_QWORD *)v48 = v50;
          if ( v51 )
            *(_QWORD *)(v48 + 8) = 0LL;
          v52 = 0xFFFFDE0000000000uLL;
          v53 = (__int64)(v49 + 0x44000000000LL) / 48;
          goto LABEL_69;
        }
        if ( (unsigned int)MiPrefetchPagesViable((_DWORD)v45, (_DWORD)v90, v103, 1, 1) )
        {
          v70 = _InterlockedExchangeAdd(v85, 1u);
          v71 = v86 ^ (unsigned __int8)(v86 ^ v70);
          if ( v48 == v47 )
          {
            v73 = 49;
            if ( (*(_BYTE *)v25 & 1) == 0 )
              v73 = 1;
            Page = MiGetPage((__int64)v45, v71, v73);
          }
          else
          {
            Page = MiGetSlabPage((__int64)v45, v46, v71, 0x14u, 0LL, 0);
          }
          v53 = Page;
          if ( Page == -1 )
            MiReturnFaultCharges((__int64)v45, 1LL);
          v52 = 0xFFFFDE0000000000uLL;
LABEL_69:
          if ( v53 != -1 )
          {
            if ( (*((_DWORD *)v24 + 47) & 0x400000) != 0 )
              v54 = 0LL;
            else
              v54 = v24[26];
            if ( v94 )
            {
              v65 = (__int64 *)(v54 + 8 * (((__int64)(v100 - v105) >> 3) + 7));
              v66 = MiUnlinkPageChainHead((__int64)&v93);
              if ( v66 )
              {
                do
                {
                  LODWORD(v76) = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)v66 + 6, 0x3FuLL) )
                  {
                    do
                      KeYieldProcessorEx(&v76);
                    while ( v66[3] < 0 );
                  }
                  v66[1] = -3LL;
                  *((_DWORD *)v66 + 8) |= 0x70000u;
                  *((_DWORD *)v66 + 8) |= 0x200000u;
                  *v66 = 0LL;
                  _InterlockedAnd64(v66 + 3, 0x7FFFFFFFFFFFFFFFuLL);
                  *v65++ = (__int64)(v66 + 0x44000000000LL) / 48;
                  v66 = MiUnlinkPageChainHead((__int64)&v93);
                }
                while ( v66 );
                v24 = v82;
                v25 = v77;
              }
            }
            v55 = v52 + 48 * v53;
            v56 = 1LL;
            if ( (*(_BYTE *)v25 & 1) != 0 && MiPfnZeroingNeeded(v55, 1) )
              v57 = v67;
            else
              v57 = 0;
            if ( v104 == 1 )
            {
              v100 = v98;
              v58 = *((_DWORD *)v24 + 47);
              v76 = v53;
              if ( (v58 & 0x400000) != 0 )
                v59 = 0LL;
              else
                v59 = v24[26];
              v60 = v82;
              if ( !v82[32] )
                v82[32] = v55;
              MiInitializeReadInProgressPfn(-1LL, &v76, v56, v98, v60, v96);
              v61 = *(_QWORD *)(v83 + 8);
              if ( (*(_DWORD *)(v61 + 56) & 0x20) != 0 || !*(_QWORD *)(v61 + 64) )
                v40 = 0LL;
              else
                v40 = v101;
              ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v61 + 72));
              ++*(_QWORD *)(v61 + 32);
              if ( v40 )
                ++*(_DWORD *)(v40 + 104);
              if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
                *(_DWORD *)(v61 + 72) = 0;
              else
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v61 + 72), retaddr);
              v41 = v74;
              *(_QWORD *)(v59 + 8 * ((__int64)(v98 - v105) >> 3) + 48) = v76;
              v24 = v82;
              if ( !v82[20] )
              {
                MiObtainProtoReference(v74, 0);
                v24[20] = v74;
              }
              ++v112;
            }
            else
            {
              MiPfPrepareForPageFileRead(&v83, v24, v53, v74);
              MiUnlockProtoPoolPage(v74, 0x11u);
              v41 = 0LL;
              v74 = 0LL;
            }
            if ( v57 )
            {
              if ( v41 )
              {
                MiUnlockProtoPoolPage(v41, 0x11u);
                v74 = 0LL;
              }
              MiZeroPhysicalPage(0LL, v53, 0, (*(_DWORD *)(v55 + 32) >> 22) & 3);
            }
            v25 = v77;
            goto LABEL_56;
          }
        }
        v68 = (_QWORD *)v93;
        while ( 1 )
        {
          v69 = (__int64)v68;
          if ( !v68 )
            break;
          v68 = (_QWORD *)*v68;
          if ( !--v94 )
            *((_QWORD *)&v93 + 1) = 0LL;
          MiReturnPfnReferenceCountAtDpc(v69);
        }
        *(_QWORD *)&v93 = 0LL;
      }
LABEL_95:
      v11 = v75;
LABEL_96:
      if ( v10 )
      {
        MiUnlockProtoPoolPage(v10, 0x11u);
        v10 = 0LL;
        v74 = 0LL;
      }
      MiPfOptimizeMdl(&v83, v24, v112);
      v23 = v107;
      if ( v107 == v108 )
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
