/*
 * XREFs of MiUnlinkProtoPages @ 0x140296F60
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiPurgeSubsection @ 0x1404199B0 (MiPurgeSubsection.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiDetermineModifiedPageListHead @ 0x140297EF0 (MiDetermineModifiedPageListHead.c)
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     MiUnlockAllBatchPages @ 0x140298560 (MiUnlockAllBatchPages.c)
 *     MiFinishUnlinkBatch @ 0x140298600 (MiFinishUnlinkBatch.c)
 *     MiAcquirePrcbPageBatchList @ 0x140298760 (MiAcquirePrcbPageBatchList.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiGetSlabAllocatorRepurposedStandbyList @ 0x1402AB91C (MiGetSlabAllocatorRepurposedStandbyList.c)
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiInvalidPteConforms @ 0x1402D64B0 (MiInvalidPteConforms.c)
 *     MiUnlinkSingleBatchPage @ 0x1402DA130 (MiUnlinkSingleBatchPage.c)
 *     MiUnlinkPagesUpdateCounts @ 0x1402DAF00 (MiUnlinkPagesUpdateCounts.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiWritePurgeReplacementPte @ 0x14047822C (MiWritePurgeReplacementPte.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiUnlinkProtoPages(_QWORD *a1)
{
  ULONG_PTR v1; // r14
  _QWORD *v2; // r12
  unsigned __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rdi
  __int64 v7; // r10
  unsigned __int64 v8; // r8
  ULONG_PTR v9; // r9
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  _QWORD *v15; // rax
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rbp
  int v19; // eax
  __int64 SlabAllocatorRepurposedStandbyList; // r8
  __int64 v21; // r11
  int v22; // r10d
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r9
  int v25; // ebx
  unsigned int v26; // r8d
  unsigned int v27; // r8d
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rcx
  int v31; // eax
  _DWORD *v32; // rcx
  signed __int32 v33; // eax
  __int64 v34; // rdx
  signed __int32 v35; // ett
  __int64 v36; // r11
  int v37; // ebx
  unsigned __int64 v38; // rdx
  BOOL v39; // r10d
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  _QWORD *v43; // rcx
  __int64 v44; // rdx
  ULONG_PTR v45; // r15
  unsigned __int64 v46; // r14
  __int64 v47; // r13
  unsigned int v48; // eax
  unsigned int v49; // ebp
  __int64 v50; // rbx
  unsigned int v51; // ebp
  unsigned __int8 v52; // dl
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  _QWORD *v58; // rcx
  unsigned __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  _QWORD *v62; // rcx
  unsigned __int64 v63; // rax
  __int16 v64; // ax
  unsigned __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rcx
  _QWORD *v72; // rcx
  __int64 v73; // r9
  __int64 v74; // rax
  __int64 v75; // rcx
  unsigned __int64 v76; // rcx
  __int16 v77; // ax
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rax
  __int64 v81; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r10
  __int64 v84; // rcx
  __int64 v85; // rdx
  unsigned __int8 v86; // cl
  __int64 result; // rax
  _DWORD *MmInternal; // rdx
  unsigned __int64 v89; // [rsp+30h] [rbp-78h] BYREF
  __int64 v90; // [rsp+38h] [rbp-70h]
  ULONG_PTR v91; // [rsp+40h] [rbp-68h]
  unsigned __int64 v92; // [rsp+48h] [rbp-60h]
  __int64 v93; // [rsp+50h] [rbp-58h]
  int v95; // [rsp+B8h] [rbp+10h]
  unsigned __int64 v96; // [rsp+C0h] [rbp+18h]
  __int64 v97; // [rsp+C8h] [rbp+20h]

  v1 = a1[2];
  v2 = a1;
  v3 = a1[3];
  v4 = 0LL;
  v5 = a1[6];
  v93 = a1[4];
  v91 = v1;
  v90 = v5;
  v97 = 0LL;
  if ( v3 > (v1 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
    v3 = (v1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  v96 = v3;
  v6 = MiAcquirePrcbPageBatchList();
  *(_QWORD *)(v6 + 16) = v2[1];
  *(_QWORD *)(v6 + 8) = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(*(_QWORD *)v2[1] + 60LL) & 0x3FF));
  *(_QWORD *)(v6 + 24) = v1;
  *(_QWORD *)(v6 + 32) = v3;
  if ( (*(_DWORD *)v2 & 1) != 0 )
  {
    *(_DWORD *)v6 |= 0x50u;
  }
  else if ( (*(_DWORD *)v2 & 2) != 0 )
  {
    *(_DWORD *)v6 |= 0x20u;
  }
  v7 = 0xFFFFFFFFFFLL;
  v8 = 0xFFFFDE0000000000uLL;
  v9 = 0x40000000000000LL;
  v10 = 0x7FFFFFFFFFFFFFFFLL;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( v1 >= v3 )
        goto LABEL_218;
      v11 = *(_QWORD *)v1;
      if ( (*(_QWORD *)v1 & 0xC01LL) != 0x800 )
        goto LABEL_111;
      v12 = 1;
      if ( !*(_DWORD *)(v6 + 56) )
      {
        v14 = MiLockLeafPage(v1, 0LL, v8, v9);
        v7 = 0xFFFFFFFFFFLL;
        if ( v14 )
          break;
        v10 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_109;
      }
      if ( qword_140E2D8C0 )
      {
        v13 = v11 & qword_140E2D8C8;
        v11 &= ~0x10uLL;
        if ( (*(_QWORD *)v1 & 0x10) == 0 )
          v11 = v13;
      }
      v14 = v8 + 48 * (v7 & (v11 >> 12));
      if ( *(__int64 *)(v14 + 24) < 0 )
      {
        v15 = (_QWORD *)(v6 + 8 * (*(unsigned int *)(v6 + 60) + 17LL));
        while ( v15 != (_QWORD *)(v6 + 136) )
        {
          if ( *--v15 == v14 )
          {
            v12 = 0;
            goto LABEL_17;
          }
        }
        goto LABEL_110;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v78 = *(_QWORD *)v1;
          v79 = *(_QWORD *)v1;
          if ( (*(_QWORD *)v1 & 1) != 0 )
            goto LABEL_153;
          if ( (*(_QWORD *)v1 & 0xC00LL) != 0x800 )
            goto LABEL_110;
          if ( (unsigned int)MiInvalidPteConforms(v78) )
          {
            v79 = v78;
            if ( qword_140E2D8C0 )
            {
              if ( (v78 & 0x10) != 0 )
                v79 = v78 & 0xFFFFFFFFFFFFFFEFuLL;
              else
                v79 = qword_140E2D8C8 & v78;
            }
LABEL_153:
            v80 = v7 & (v79 >> 12);
            if ( v80 <= qword_140E2D920 )
            {
              v14 = v8 + 48 * v80;
              if ( (*(_QWORD *)(v14 + 40) & v9) != 0 )
                break;
            }
          }
        }
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
          goto LABEL_110;
        if ( *(_QWORD *)v1 == v78 )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), v10);
      }
      if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v14 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), v10);
        v3 = v96;
        v1 += 8LL;
        v91 = v1;
        continue;
      }
      break;
    }
LABEL_17:
    v9 = *(_QWORD *)v1;
    if ( (*(_QWORD *)(v14 + 8) | 0x8000000000000000uLL) != v1 )
      KeBugCheckEx(0x1Au, 0x403uLL, v1, v9, *(_QWORD *)(v14 + 8));
    if ( (v9 & 1) != 0 )
    {
      v19 = 0;
    }
    else
    {
      v16 = *(_QWORD *)v1;
      if ( qword_140E2D8C0 )
      {
        v16 = v9 & 0xFFFFFFFFFFFFFFEFuLL;
        if ( (v9 & 0x10) == 0 )
          v16 = v9 & qword_140E2D8C8;
      }
      v17 = *(_QWORD *)v1;
      v18 = v7 & (v16 >> 12);
      v92 = v18;
      v19 = guard_dispatch_icall_no_overrides(v5, v1, v17);
      if ( v19 >= 0 )
      {
        *(_DWORD *)(v6 + 4) = 0;
        if ( !v12 )
          goto LABEL_24;
        v81 = *(unsigned int *)(v6 + 60);
        if ( (_DWORD)v81 == 64 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v4 += MiFinishUnlinkBatch(v6, v2[5], v5, v9);
          v97 = v4;
        }
        else
        {
          *(_QWORD *)(v6 + 8 * v81 + 136) = v14;
          ++*(_DWORD *)(v6 + 60);
          ++*(_DWORD *)(v6 + 56);
LABEL_24:
          if ( (unsigned __int16)*(_DWORD *)(v14 + 32) )
          {
            *(_QWORD *)(v6 + 8LL * *(_QWORD *)(v6 + 120) + 648) = v18;
            v77 = *(_WORD *)(v6 + 128);
            ++*(_QWORD *)(v6 + 120);
            *(_WORD *)(v6 + 128) = v77 | (1 << (v18 & 0xF));
            goto LABEL_92;
          }
          if ( v12 && (*(_QWORD *)(v14 + 40) & 0x20000000000000LL) != 0 && (*(_BYTE *)(v14 + 34) & 7) == 2 )
          {
            *(_QWORD *)v14 = 0LL;
            *(_QWORD *)(v14 + 24) &= 0xFFFFFF0000000000uLL;
            *(_QWORD *)(v14 + 24) &= 0xC000000000000000uLL;
            *(_DWORD *)(v14 + 36) = 0;
            *(_DWORD *)v6 |= 0x100u;
            if ( (*(_DWORD *)v6 & 0x10) != 0 )
              MiWritePurgeReplacementPte(v6, v14);
            goto LABEL_91;
          }
          v21 = *(_QWORD *)(v6 + 8);
          v22 = *(_BYTE *)(v14 + 34) & 7;
          SlabAllocatorRepurposedStandbyList = *(_QWORD *)(v21 + 8LL * (*(_BYTE *)(v14 + 34) & 7) + 7520);
          v23 = (unsigned __int128)((__int64)(v14 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
          v24 = (__int64)(v14 + 0x220000000000LL) / 48;
          if ( v24 < qword_140E34930 || v24 >= qword_140E34930 + 2048 )
          {
            if ( byte_140E3BEA6 )
            {
              v23 = *(unsigned __int8 *)(qword_140E3D240 + 2 * (v24 >> 9));
              if ( *(_BYTE *)(qword_140E3D240 + 2 * (v24 >> 9)) )
                v25 = v23 - 1;
              else
                v25 = 9;
            }
            else
            {
              v25 = 9;
            }
          }
          else
          {
            *(_DWORD *)(v6 + 4) |= 2u;
            v25 = 9;
          }
          if ( (*(_DWORD *)v6 & 4) != 0 && *(_DWORD *)(v6 + 44) != v25 )
            goto LABEL_92;
          *(_DWORD *)(v6 + 4) |= 1u;
          if ( v22 == 2 )
          {
            v26 = *(_DWORD *)(v14 + 32);
            if ( (*(_QWORD *)(v14 + 40) & 0x20000000000000LL) != 0 )
              goto LABEL_214;
            if ( (*(_DWORD *)(v14 + 32) & 0x8000000) == 0 )
              goto LABEL_34;
            if ( v14 < 0xFFFFDE0000000000uLL
              || (v23 = 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL, v14 >= v23)
              || (unsigned int)MiIsDecayPfn((__int64)(v14 + 0x220000000000LL) / 48) )
            {
LABEL_214:
              v27 = 5;
            }
            else if ( (v26 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(v14) != 9 )
            {
LABEL_34:
              v27 = HIBYTE(v26) & 7;
            }
            else
            {
              v27 = 5;
            }
            v28 = *(_DWORD *)(v6 + 4) | 4;
            *(_DWORD *)(v6 + 4) = v28;
            if ( (v28 & 2) != 0 )
            {
              *(_DWORD *)(v6 + 4) = v28 & 0xFFFFFFFA;
            }
            else if ( v25 == 9 && (*(_DWORD *)(v14 + 32) & 0x8000000) != 0 )
            {
              *(_DWORD *)(v6 + 4) |= 8u;
              v29 = 88LL * v27 + 3648;
              goto LABEL_39;
            }
            SlabAllocatorRepurposedStandbyList = v21 + 88LL * v27 + 3648;
            if ( v25 < 9 )
            {
              if ( (*(_DWORD *)(v14 + 32) & 0x8000000) != 0 )
              {
                SlabAllocatorRepurposedStandbyList = MiGetSlabAllocatorRepurposedStandbyList(
                                                       v14,
                                                       (unsigned int)v25,
                                                       0LL);
                *(_DWORD *)(v6 + 4) = *(_DWORD *)(v6 + 4) & 0xFFFFFFEB | 0x10;
              }
              else
              {
                *(_DWORD *)(v6 + 4) &= 0xFFFFFFFA;
              }
            }
          }
          else if ( v22 == 3 )
          {
            if ( (*(_DWORD *)(v14 + 16) & 0x400LL) != 0 )
            {
              v29 = 88LL * (*(_BYTE *)(v14 + 36) & 0xF) + 6016;
LABEL_39:
              SlabAllocatorRepurposedStandbyList = v21 + v29;
            }
            else
            {
              SlabAllocatorRepurposedStandbyList = MiDetermineModifiedPageListHead(v14, v21, 0LL);
            }
          }
          v30 = *(_QWORD *)(v6 + 48);
          if ( v30 )
          {
            if ( v30 != SlabAllocatorRepurposedStandbyList )
              goto LABEL_92;
          }
          else
          {
            *(_QWORD *)(v6 + 48) = SlabAllocatorRepurposedStandbyList;
            v30 = SlabAllocatorRepurposedStandbyList;
          }
          v31 = *(_DWORD *)v6;
          if ( (*(_DWORD *)v6 & 4) == 0 )
          {
            v31 |= 4u;
            *(_DWORD *)(v6 + 44) = v25;
            *(_DWORD *)v6 = v31;
          }
          if ( (v31 & 1) == 0 )
          {
            v32 = (_DWORD *)(v30 + 32);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
            {
              _m_prefetchw(v32);
              v33 = *v32 & 0x7FFFFFFF;
              while ( 1 )
              {
                v34 = (unsigned int)(v33 + 1);
                v35 = v33;
                v33 = _InterlockedCompareExchange(v32, v34, v33);
                if ( v35 == v33 )
                  break;
                if ( v33 < 0 )
                {
                  LOBYTE(v34) = -1;
                  ExpWaitForSpinLockSharedAndAcquire(v32, v34);
                  break;
                }
              }
            }
            else
            {
              LOBYTE(v23) = -1;
              ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v32, v23);
            }
            *(_DWORD *)v6 |= 1u;
          }
          v36 = *(_QWORD *)(v6 + 48);
          v37 = 0;
          v38 = (__int64)(v14 + 0x220000000000LL) / 48;
          v39 = v38 >= qword_140E34930 && v38 < qword_140E34930 + 2048;
          v95 = *(_DWORD *)(v6 + 44);
          if ( v95 < 9 && *(_DWORD *)(v36 + 28) == 2 && (*(_DWORD *)(v14 + 32) & 0x8000000) != 0 )
            v37 = 1;
          SlabAllocatorRepurposedStandbyList = *(_QWORD *)v14 & 0xFFFFFFFFFFLL;
          v40 = *(_QWORD *)(v14 + 24) & 0xFFFFFFFFFFLL;
          if ( v40 == 0x3FFFFFFFFFLL )
            v41 = v36 + 40;
          else
            v41 = 48 * v40 - 0x220000000000LL;
          v42 = *(unsigned int *)(v6 + 60);
          if ( (_DWORD)v42 == 64 )
            goto LABEL_92;
          if ( *(__int64 *)(v41 + 24) < 0 )
          {
            v43 = (_QWORD *)(v6 + 8 * (*(unsigned int *)(v6 + 60) + 17LL));
            while ( v43 != (_QWORD *)(v6 + 136) )
            {
              if ( *--v43 == v41 )
                goto LABEL_59;
            }
            goto LABEL_92;
          }
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
            goto LABEL_92;
          *(_QWORD *)(v6 + 8 * v42 + 136) = v41;
          ++*(_DWORD *)(v6 + 60);
          ++*(_DWORD *)(v6 + 56);
LABEL_59:
          if ( SlabAllocatorRepurposedStandbyList == 0x3FFFFFFFFFLL )
            v44 = v36 + 40;
          else
            v44 = 48 * SlabAllocatorRepurposedStandbyList - 0x220000000000LL;
          if ( SlabAllocatorRepurposedStandbyList != v40 )
          {
            v71 = *(unsigned int *)(v6 + 60);
            if ( (_DWORD)v71 == 64 )
              goto LABEL_92;
            if ( *(__int64 *)(v44 + 24) < 0 )
            {
              v72 = (_QWORD *)(v6 + 8 * (*(unsigned int *)(v6 + 60) + 17LL));
              while ( v72 != (_QWORD *)(v6 + 136) )
              {
                if ( *--v72 == v44 )
                  goto LABEL_62;
              }
              goto LABEL_92;
            }
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
              goto LABEL_92;
            *(_QWORD *)(v6 + 8 * v71 + 136) = v44;
            ++*(_DWORD *)(v6 + 60);
            ++*(_DWORD *)(v6 + 56);
          }
LABEL_62:
          if ( *(_DWORD *)(v36 + 28) != 2 || v39 || v37 )
          {
LABEL_87:
            MiUnlinkSingleBatchPage(v6, v14);
            if ( (*(_DWORD *)v6 & 0x10) != 0 )
            {
              SlabAllocatorRepurposedStandbyList = *(_QWORD *)(v14 + 8) | 0x8000000000000000uLL;
              if ( (*(_DWORD *)(v14 + 16) & 0x400LL) != 0 )
              {
                ++*(_QWORD *)(v6 + 112);
                v73 = *(_QWORD *)(v14 + 16);
                v89 = v73;
                v74 = v73;
                if ( (unsigned __int64)&v89 >= 0xFFFFF6FB7DBED000uLL
                  && (unsigned __int64)&v89 <= 0xFFFFF6FB7DBED7F8uLL
                  && (v89 & 1) != 0
                  && ((v89 & 0x20) == 0 || (v89 & 0x42) == 0)
                  && (MiFlags & 0x1800000) != 0 )
                {
                  Process = KeGetCurrentThread()->ApcState.Process;
                  if ( Process->AddressPolicy != 1 )
                  {
                    if ( Process )
                    {
                      KernelWaitTime = Process[2].KernelWaitTime;
                      if ( KernelWaitTime )
                      {
                        v84 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)&v89 >> 3) & 0x1FF));
                        if ( (v84 & 0x20) != 0 )
                          v74 = v89 | 0x20;
                        v85 = v74;
                        v74 |= 0x42uLL;
                        if ( (v84 & 0x42) == 0 )
                          v74 = v85;
                      }
                    }
                  }
                }
                v75 = -65537LL;
                if ( (v74 & 0x400) != 0 )
                  v75 = -5LL;
                v76 = v74 & v75;
                v89 = v76;
                v63 = v76;
                if ( (v73 & 0x400) == 0 )
                  v63 = v76 & 0xFFFFFFFFFFFFFFF3uLL;
              }
              else
              {
                v63 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
              }
              *(_QWORD *)SlabAllocatorRepurposedStandbyList = v63;
            }
LABEL_91:
            *(_QWORD *)(v6 + 8LL * *(_QWORD *)(v6 + 120) + 648) = v18;
            v64 = *(_WORD *)(v6 + 128);
            ++*(_QWORD *)(v6 + 120);
            *(_WORD *)(v6 + 128) = v64 | (1 << (v18 & 0xF));
            goto LABEL_92;
          }
          v45 = (__int64)(v14 + 0x220000000000LL) / 48;
          v46 = 48 * v45 - 0x220000000000LL;
          v47 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v46 + 40) >> 43) & 0x3FFLL));
          v48 = MiPageToNode(v45);
          v49 = *(_DWORD *)(v46 + 32);
          v50 = v48;
          if ( (*(_QWORD *)(v46 + 40) & 0x20000000000000LL) != 0 )
            goto LABEL_212;
          if ( (*(_DWORD *)(v46 + 32) & 0x8000000) == 0 )
            goto LABEL_67;
          if ( v46 < 0xFFFFDE0000000000uLL
            || v46 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
            || (unsigned int)MiIsDecayPfn((__int64)(48 * v45) / 48) )
          {
LABEL_212:
            v51 = 5;
          }
          else if ( (v49 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(48 * v45 - 0x220000000000LL) != 9 )
          {
LABEL_67:
            v51 = HIBYTE(v49) & 7;
          }
          else
          {
            v51 = 5;
          }
          if ( qword_140E2D868 )
            v52 = *(_BYTE *)(MiSearchChannelTable((__int64)(v14 + 0x220000000000LL) / 48) + 12);
          else
            v52 = 0;
          v53 = *(_QWORD *)(v47 + 16) + 56320 * v50;
          if ( v95 < 9 )
          {
            if ( v95 == 8 )
              v86 = *(_BYTE *)(qword_140E3D240 + 2 * ((unsigned __int64)((__int64)(48 * v45) / 48) >> 9) + 1) & 0x7F;
            else
              v86 = 0;
            v54 = *(_QWORD *)(232LL * v95 + v53 + 14824) + 88 * (v51 + 8LL * v86);
          }
          else
          {
            v54 = v53 + 88 * (v51 + 8LL * v52) + 4160;
          }
          SlabAllocatorRepurposedStandbyList = 0xF80000000000000LL;
          v55 = (8LL * (*(_DWORD *)(v14 + 36) & 0xFFE00000)) | ((*(_QWORD *)(v14 + 40) & 0xF80000000000000uLL | (*(_QWORD *)v14 >> 20)) >> 20);
          if ( v55 == 0x3FFFFFFFFFLL )
            v56 = v54 + 40;
          else
            v56 = 48 * v55 - 0x220000000000LL;
          v57 = *(unsigned int *)(v6 + 60);
          if ( (_DWORD)v57 == 64 )
            goto LABEL_92;
          if ( *(__int64 *)(v56 + 24) < 0 )
          {
            v58 = (_QWORD *)(v6 + 8 * (*(unsigned int *)(v6 + 60) + 17LL));
            while ( v58 != (_QWORD *)(v6 + 136) )
            {
              if ( *--v58 == v56 )
                goto LABEL_79;
            }
            goto LABEL_92;
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v56 + 24), 0x3FuLL) )
          {
            *(_QWORD *)(v6 + 8 * v57 + 136) = v56;
            ++*(_DWORD *)(v6 + 60);
            ++*(_DWORD *)(v6 + 56);
LABEL_79:
            v59 = (*(_QWORD *)(v14 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*(_DWORD *)(v14 + 36) & 0x1FFFFF) << 19);
            v60 = v59 == 0x3FFFFFFFFFLL ? v54 + 40 : 48 * v59 - 0x220000000000LL;
            v61 = *(unsigned int *)(v6 + 60);
            if ( (_DWORD)v61 != 64 )
            {
              if ( *(__int64 *)(v60 + 24) < 0 )
              {
                v62 = (_QWORD *)(v6 + 8 * (*(unsigned int *)(v6 + 60) + 17LL));
                while ( v62 != (_QWORD *)(v6 + 136) )
                {
                  if ( *--v62 == v60 )
                    goto LABEL_86;
                }
                goto LABEL_92;
              }
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v60 + 24), 0x3FuLL) )
                goto LABEL_92;
              *(_QWORD *)(v6 + 8 * v61 + 136) = v60;
              ++*(_DWORD *)(v6 + 60);
              ++*(_DWORD *)(v6 + 56);
LABEL_86:
              v18 = v92;
              goto LABEL_87;
            }
          }
LABEL_92:
          v2 = a1;
          if ( (unsigned int)(*(_DWORD *)(v6 + 60) + 5) <= 0x40 )
          {
            v1 = v91;
            v4 = v97;
            v5 = v90;
          }
          else
          {
            v65 = *(_QWORD *)(v6 + 80);
            if ( v65 )
            {
              v66 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 7544LL);
              if ( v65 == 1 )
              {
                _InterlockedDecrement64((volatile signed __int64 *)(v66 + 16));
              }
              else
              {
                v65 = -(__int64)v65;
                _InterlockedAdd64((volatile signed __int64 *)(v66 + 16), v65);
              }
              *(_QWORD *)(v6 + 80) = 0LL;
            }
            v67 = *(_QWORD *)(v6 + 104);
            if ( v67 )
            {
              v68 = *(_QWORD *)(v6 + 48);
              if ( v67 == 1 )
                _InterlockedDecrement64((volatile signed __int64 *)(v68 + 16));
              else
                _InterlockedAdd64((volatile signed __int64 *)(v68 + 16), -v67);
              *(_QWORD *)(v6 + 104) = 0LL;
            }
            if ( (*(_DWORD *)v6 & 1) != 0 )
            {
              ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v6 + 48) + 32LL));
              *(_DWORD *)v6 &= ~1u;
              *(_QWORD *)(v6 + 48) = 0LL;
            }
            MiUnlinkPagesUpdateCounts(v6, v65, SlabAllocatorRepurposedStandbyList);
            v69 = *(_QWORD *)(v6 + 120);
            if ( v69 )
            {
              if ( (*(_DWORD *)v6 & 0x40) != 0 && *(_WORD *)(v6 + 128) == 0xFFFF && (*(_DWORD *)v6 & 0x100) == 0 )
              {
                qsort((void *)(v6 + 648), *(_QWORD *)(v6 + 120), 8uLL, MiTbFlushSort);
                *(_DWORD *)v6 |= 0x80u;
              }
              v5 = v90;
              v70 = guard_dispatch_icall_no_overrides(v6, v90, *(_QWORD *)(v6 + 120));
              *(_DWORD *)v6 &= 0xFFFFFE7F;
              v69 = v70;
              *(_WORD *)(v6 + 128) = 0;
              *(_QWORD *)(v6 + 120) = 0LL;
            }
            else
            {
              MiUnlockAllBatchPages(v6, 0LL);
              v5 = v90;
            }
            *(_DWORD *)v6 &= ~4u;
            v1 = v91;
            v4 = v69 + v97;
            v97 += v69;
          }
        }
        v10 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_108:
        v7 = 0xFFFFFFFFFFLL;
LABEL_109:
        v8 = 0xFFFFDE0000000000uLL;
        v9 = 0x40000000000000LL;
LABEL_110:
        v3 = v96;
LABEL_111:
        v1 += 8LL;
        v91 = v1;
        continue;
      }
    }
    break;
  }
  v10 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v12 )
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v19 != -1073741800 )
    goto LABEL_108;
LABEL_218:
  result = v4 + MiFinishUnlinkBatch(v6, v2[5], v5, v9);
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  --MmInternal[986];
  return result;
}
