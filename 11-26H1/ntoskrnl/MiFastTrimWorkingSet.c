/*
 * XREFs of MiFastTrimWorkingSet @ 0x1403216C0
 * Callers:
 *     MiTrimWorkingSet @ 0x1403C437C (MiTrimWorkingSet.c)
 *     MiEmptyWorkingSetBuckets @ 0x1403C4D5C (MiEmptyWorkingSetBuckets.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x14029C380 (MiAcquirePrcbAgeTrimLists.c)
 *     MiRebuildPageTableAges @ 0x14029D740 (MiRebuildPageTableAges.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiDemoteCombinedPte @ 0x1402E01A0 (MiDemoteCombinedPte.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiLogPageAccess @ 0x140322960 (MiLogPageAccess.c)
 *     MiTrimPte @ 0x140323430 (MiTrimPte.c)
 *     MiTrimThisWsle @ 0x1403241C0 (MiTrimThisWsle.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     MiTrimWorkingSetTailHelper @ 0x14045D148 (MiTrimWorkingSetTailHelper.c)
 *     MiReleasePrcbAgeTrimLists @ 0x14045D41C (MiReleasePrcbAgeTrimLists.c)
 *     MiProcessVpabAccessedInfo @ 0x14045D47C (MiProcessVpabAccessedInfo.c)
 *     MiQueryVpabAccessedState @ 0x14045D66C (MiQueryVpabAccessedState.c)
 *     MiIsPageTableLocked @ 0x140479F4C (MiIsPageTableLocked.c)
 *     MiLockActivePageTableInList @ 0x1404867B4 (MiLockActivePageTableInList.c)
 *     MiTrimWorkingSetBuildup @ 0x14048DB10 (MiTrimWorkingSetBuildup.c)
 *     MiLockWorkingSetExclusiveAtDpc @ 0x1404BCA10 (MiLockWorkingSetExclusiveAtDpc.c)
 *     MiCompressTbFlushList @ 0x1404D427C (MiCompressTbFlushList.c)
 *     qsort @ 0x140539380 (qsort.c)
 */

__int64 __fastcall MiFastTrimWorkingSet(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r10d
  __int64 v5; // r13
  __int64 v6; // rdi
  __int64 result; // rax
  char v8; // r9
  unsigned int v9; // edx
  __int64 v10; // r14
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  int v13; // r12d
  __int64 v14; // rbx
  unsigned int v15; // ebp
  unsigned int v16; // r10d
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rsi
  _QWORD *v21; // r15
  int v22; // r14d
  _QWORD *v23; // rdi
  __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  _DWORD *v28; // rax
  __int64 v29; // rax
  int v30; // ecx
  unsigned __int8 v31; // al
  __int64 *v32; // rax
  __int64 v33; // r8
  unsigned int *MmInternal; // rcx
  __int64 v35; // rax
  int v36; // r9d
  __int64 v37; // rdx
  unsigned __int64 v38; // rdi
  __int64 v39; // r11
  unsigned __int64 v40; // rbx
  __int64 v41; // r15
  unsigned __int64 v42; // r8
  __int64 v43; // rdx
  unsigned __int64 *v44; // r8
  unsigned __int64 v45; // rdx
  __int64 v46; // rdi
  unsigned int v47; // r12d
  _QWORD *v48; // r14
  __int64 v49; // r8
  __int64 v50; // r13
  unsigned __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r14
  __int64 ProcessorFlushList; // rax
  BOOL v56; // ecx
  BOOL v57; // ecx
  bool v58; // zf
  __int64 v59; // rbx
  unsigned __int64 v60; // r9
  unsigned __int64 v61; // r12
  int i; // r11d
  int v63; // r8d
  __int64 v64; // r10
  __int64 v65; // rax
  unsigned __int64 v66; // r9
  __int64 v67; // r9
  __int64 v68; // r8
  unsigned __int64 *v69; // r9
  __int64 v70; // rax
  __int64 v71; // r8
  unsigned int v72; // r10d
  __int64 v73; // rdx
  int v74; // r8d
  _KPROCESS *v75; // rax
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v77; // rax
  unsigned __int64 v78; // rcx
  _KPROCESS *v79; // rax
  unsigned __int64 v80; // r8
  unsigned __int64 v81; // rax
  __int64 v82; // rax
  unsigned __int64 v83; // rcx
  __int64 *v84; // rcx
  unsigned __int64 PteShadow; // rax
  __int64 v86; // r9
  __int64 v87; // rbx
  unsigned __int64 v88; // r8
  __int64 v89; // rcx
  unsigned __int64 v90; // rbx
  unsigned __int64 v91; // rdx
  int v92; // ecx
  int PagePrivilege; // eax
  __int64 v94; // rax
  _KPROCESS *v95; // rax
  unsigned __int64 v96; // rdx
  unsigned __int64 v97; // rax
  __int64 v98; // rax
  unsigned __int64 v99; // rcx
  _KPROCESS *v100; // rax
  unsigned __int64 v101; // rcx
  __int64 v102; // rax
  unsigned __int64 v103; // rcx
  int v104; // ecx
  unsigned __int64 v105; // r8
  __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 v108; // r8
  unsigned int j; // edx
  _DWORD *v110; // rcx
  unsigned __int64 v111; // rax
  __int64 *v112; // r9
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // r8
  unsigned __int64 v116; // rbx
  char v117; // bl
  int VpabAccessedState; // eax
  char v119; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v120; // [rsp+30h] [rbp-A8h]
  unsigned int v121; // [rsp+38h] [rbp-A0h]
  __int64 v122; // [rsp+40h] [rbp-98h]
  __int64 v123; // [rsp+48h] [rbp-90h]
  int v124; // [rsp+50h] [rbp-88h] BYREF
  __int64 v125; // [rsp+58h] [rbp-80h]
  unsigned int v126; // [rsp+60h] [rbp-78h]
  unsigned int v127; // [rsp+64h] [rbp-74h]
  __int64 v128; // [rsp+68h] [rbp-70h]
  unsigned __int64 v129; // [rsp+70h] [rbp-68h]
  __int64 v130; // [rsp+78h] [rbp-60h]
  unsigned __int8 v132; // [rsp+E8h] [rbp+10h]
  unsigned int v134; // [rsp+F8h] [rbp+20h]

  v132 = a2;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = a3;
  v5 = a1;
  v123 = v3;
  v6 = *(_QWORD *)(a1 + 184);
  v130 = v6;
  result = *(unsigned int *)(*(_QWORD *)(v3 + 16) + 24LL * (unsigned __int8)a2 + 84);
  do
  {
    if ( !(_DWORD)result )
      return result;
    v8 = ~(unsigned __int8)(*(_DWORD *)v5 >> 2);
    v127 = result - 1;
    result = MiLockActivePageTableInList(v3, a2, v4, v8 & 1);
    v129 = result;
    if ( !result )
      return result;
    v9 = 0;
    v121 = 0;
    v10 = 0LL;
    v128 = 0LL;
    v11 = result << 25 >> 16;
    v12 = (__int64)(v11 << 25) >> 16;
    if ( v12 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v12 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        ++v9;
        v12 = (__int64)(v12 << 25) >> 16;
      }
      while ( v12 >= 0xFFFFF68000000000uLL );
      v121 = v9;
    }
    if ( (*(_DWORD *)v5 & 4) != 0 )
      *(_QWORD *)(v5 + 56) = result;
    v13 = 0;
    v14 = *(_QWORD *)(v6 + 16);
    v15 = 0;
    v122 = v14;
    if ( result == 0xFFFFF6FB7DBEDF68uLL )
      v16 = 256;
    else
      v16 = 512;
    v134 = v16;
    while ( 1 )
    {
      v17 = *(_QWORD *)v11;
      if ( v9 == 3 && v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        LOBYTE(v17) = MiReadPteShadow(v11, *(_QWORD *)v11);
        v9 = v121;
      }
      if ( (v17 & 1) == 0 )
        goto LABEL_12;
      if ( v9 )
      {
        if ( (v17 & 0x80u) != 0LL )
          goto LABEL_12;
        v37 = (v11 << 25) - v10;
        v38 = v37 >> 16;
        v36 = 0;
      }
      else
      {
        if ( (HIBYTE(*(_QWORD *)(((((__int64)((v11 << 25) - v10) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL)) & 0xFu) >= 8 )
          goto LABEL_12;
        v122 = v14;
        v36 = 1;
        v37 = (v11 << 25) - v10;
        v38 = v37 >> 16;
      }
      v39 = *(_QWORD *)(v5 + 32);
      v40 = *(_QWORD *)v11;
      v125 = v39;
      v120 = v38;
      v124 = 0;
      if ( v11 >= 0xFFFFF6FB7DBED000uLL
        && v11 <= 0xFFFFF6FB7DBED7F8uLL
        && (v40 & 1) != 0
        && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
      {
        v75 = MiPteHasShadow();
        if ( v75 )
        {
          KernelWaitTime = v75[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v77 = *(_QWORD *)(KernelWaitTime + 8 * ((v11 >> 3) & 0x1FF));
            if ( (v77 & 0x20) != 0 )
              v40 |= 0x20uLL;
            v78 = v40;
            v40 |= 0x42uLL;
            if ( (v77 & 0x42) == 0 )
              v40 = v78;
          }
        }
      }
      v41 = *(_QWORD *)(v5 + 184);
      ++*(_QWORD *)(v41 + 32);
      if ( *(_QWORD *)(v41 + 16) == *(_QWORD *)(v41 + 8) )
        goto LABEL_93;
      if ( (*(_DWORD *)v41 & 0x4000) != 0 )
      {
        v42 = (*(_DWORD *)v41 & 0x8000) != 0 ? *(_QWORD *)(v39 + 136) : *(_QWORD *)(v39 + 152);
        if ( v42 <= *(_QWORD *)(v41 + 56) - *(_QWORD *)(v41 + 8) )
          goto LABEL_93;
      }
      if ( v36 )
      {
        v43 = v11 + 8;
      }
      else
      {
        v43 = (v37 + 0x10000000) >> 16;
        v105 = ((v43 << 25) - v10) >> 16;
        if ( v105 >= 0xFFFFF68000000000uLL )
        {
          do
          {
            if ( v105 > 0xFFFFF6FFFFFFFFFFuLL )
              break;
            v43 = v105;
            v105 = (__int64)((v105 << 25) - v10) >> 16;
          }
          while ( v105 >= 0xFFFFF68000000000uLL );
          v16 = v134;
        }
      }
      **(_QWORD **)(*(_QWORD *)(v5 + 32) + 16LL) = v43;
      if ( v38 < 0xFFFFF68000000000uLL || v38 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v44 = (unsigned __int64 *)(((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v45 = *v44;
        if ( (unsigned __int64)v44 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v44 <= 0xFFFFF6FB7DBED7F8uLL
          && (v45 & 1) != 0
          && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
        {
          v79 = MiPteHasShadow();
          if ( v79 )
          {
            v81 = v79[2].KernelWaitTime;
            if ( v81 )
            {
              v82 = *(_QWORD *)(v81 + 8 * ((v80 >> 3) & 0x1FF));
              if ( (v82 & 0x20) != 0 )
                v45 |= 0x20uLL;
              v83 = v45;
              v45 |= 0x42uLL;
              if ( (v82 & 0x42) == 0 )
                v45 = v83;
            }
          }
        }
        v46 = HIBYTE(v45) & 0xF;
      }
      else
      {
        v84 = (__int64 *)(((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        PteShadow = *v84;
        if ( (unsigned __int64)v84 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v84 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow((unsigned __int64)v84, *v84);
        v46 = (*(_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 46) & 7LL;
      }
      v47 = *(_DWORD *)v41 & 0xF;
      v126 = v47;
      v48 = (_QWORD *)(48 * ((v40 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
      if ( v36 )
        goto LABEL_56;
      if ( (v48[3] & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        break;
LABEL_61:
      if ( (unsigned int)v46 >= v47 && ++*(_QWORD *)(v41 + 40) >= *(_QWORD *)(v41 + 48) )
        goto LABEL_93;
      v10 = v128;
      v13 = 0;
      v14 = v122;
LABEL_12:
      ++v15;
      v11 += 8LL;
      if ( v15 >= v16 )
        goto LABEL_13;
      v9 = v121;
    }
    if ( (unsigned int)MiIsPageTableLocked(v39, v11) )
      goto LABEL_60;
LABEL_56:
    v49 = v48[1];
    if ( v49 > 0
      && (v48[5] & 0x10000000000LL) == 0
      && (unsigned int)MiDemoteCombinedPte(v39, v11, v49 | 0x8000000000000000uLL) )
    {
      v40 = *(_QWORD *)v11;
    }
    v50 = *(_QWORD *)(v5 + 32);
    v119 = (v40 & 0x20) != 0;
    v51 = v120;
    if ( !(unsigned int)MiTrimThisWsle(v50, v120, (_DWORD)v48, v41, v119, (__int64)&v124) )
    {
LABEL_58:
      v5 = a1;
LABEL_59:
      if ( v124 )
      {
        if ( *(_QWORD *)(v41 + 88) == 1LL )
          MiAcquirePrcbAgeTrimLists(v125, (__int64 *)(v41 + 72));
        v110 = *(_DWORD **)(v41 + 88);
        *(_QWORD *)&v110[2 * (*v110)++ + 2] = v51 & 0xFFFFFFFFFFFFF000uLL;
      }
LABEL_60:
      v16 = v134;
      goto LABEL_61;
    }
    v54 = *(_QWORD *)(v41 + 80);
    if ( !v54 )
    {
      ProcessorFlushList = MiGetProcessorFlushList(v53, v52);
      *(_DWORD *)(ProcessorFlushList + 16) = 0;
      *(_DWORD *)(ProcessorFlushList + 20) = 2;
      *(_QWORD *)ProcessorFlushList = v50;
      *(_BYTE *)(ProcessorFlushList + 24) = (*(_DWORD *)(v50 + 184) & 0x40) != 0;
      if ( (*(_DWORD *)(v50 + 184) & 0xF) != 0
        || (struct _LIST_ENTRY **)v50 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
      {
        v56 = (*(_DWORD *)(v50 + 184) & 0xF) == 0;
      }
      else
      {
        *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
        v56 = 0;
      }
      *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
      *(_DWORD *)(ProcessorFlushList + 8) = v56;
      *(_WORD *)(ProcessorFlushList + 25) = 0;
      *(_DWORD *)(ProcessorFlushList + 28) = 0;
      *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
      *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
      *(_QWORD *)(v41 + 72) = ProcessorFlushList;
      *(_DWORD *)(ProcessorFlushList + 4152) = 2;
      *(_DWORD *)(ProcessorFlushList + 4156) = 1;
      *(_QWORD *)(ProcessorFlushList + 4136) = v50;
      *(_BYTE *)(ProcessorFlushList + 4160) = (*(_DWORD *)(v50 + 184) & 0x40) != 0;
      if ( (*(_DWORD *)(v50 + 184) & 0xF) != 0
        || (struct _LIST_ENTRY **)v50 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
      {
        v57 = (*(_DWORD *)(v50 + 184) & 0xF) == 0;
      }
      else
      {
        *(_DWORD *)(ProcessorFlushList + 4152) |= 9u;
        v57 = 0;
      }
      *(_DWORD *)(ProcessorFlushList + 4152) &= 0xFFFFFFDB;
      *(_DWORD *)(ProcessorFlushList + 4144) = v57;
      *(_WORD *)(ProcessorFlushList + 4161) = 0;
      *(_DWORD *)(ProcessorFlushList + 4164) = 0;
      *(_QWORD *)(ProcessorFlushList + 4168) = 0LL;
      *(_QWORD *)(ProcessorFlushList + 4176) = 0LL;
      v58 = *(_QWORD *)(v41 + 88) == 1LL;
      *(_QWORD *)(v41 + 80) = ProcessorFlushList + 4136;
      if ( v58 )
        *(_QWORD *)(v41 + 88) = ProcessorFlushList + 8272;
      v54 = ProcessorFlushList + 4136;
    }
    v59 = 1LL;
    v60 = v120;
    v61 = v120;
    if ( *(_DWORD *)(v54 + 8) != 1 )
    {
      v104 = *(_DWORD *)(v54 + 16);
      if ( (v104 & 4) == 0 && v120 >= 0xFFFFF68000000000uLL && v120 <= 0xFFFFF6FFFFFFFFFFuLL )
        *(_DWORD *)(v54 + 16) = v104 | 4;
    }
    for ( i = 0; ; i = 1 )
    {
LABEL_75:
      v63 = *(_DWORD *)(v54 + 28);
      if ( v63 && (*(_DWORD *)(v54 + 16) & 2) == 0 )
      {
        v64 = v54 + 8LL * (unsigned int)(v63 - 1);
        v65 = *(_QWORD *)(v64 + 40);
        if ( (v65 & 0xC00) != 0
          || (v66 = *(_QWORD *)(v64 + 40) & 0x3FFLL, (v65 & 0xFFFFFFFFFFFFF000uLL) + ((v66 + 1) << 12) != v61)
          || v66 + v59 <= v66 )
        {
          v86 = (unsigned int)(v63 - 1) + 5LL;
          v68 = *(_QWORD *)(v54 + 8 * v86);
          v69 = (unsigned __int64 *)(v54 + 8 * v86);
          v70 = v68;
          if ( (v68 & 0xC00) != 0 )
          {
LABEL_83:
            v60 = v120;
            goto LABEL_84;
          }
        }
        else
        {
          if ( v66 + v59 <= 0x3FF )
          {
            *(_QWORD *)(v54 + 32) += v59;
            *(_QWORD *)(v64 + 40) = (v65 + v59) ^ ((v65 + v59) ^ v65) & 0xFFFFFFFFFFFFFC00uLL;
            goto LABEL_123;
          }
          v67 = (unsigned int)(v63 - 1) + 5LL;
          v68 = *(_QWORD *)(v54 + 8 * v67);
          v69 = (unsigned __int64 *)(v54 + 8 * v67);
          v70 = v68;
        }
        if ( (v70 & 0xFFFFFFFFFFFFF000uLL) == (v59 << 12) + v61 )
        {
          v111 = v70 & 0x3FF;
          if ( v111 + v59 <= 0x3FF && v111 + v59 > v111 )
          {
            *(_QWORD *)(v54 + 32) += v59;
            *v69 = (v59 + v68 - (v59 << 12)) ^ ((v68 - (v59 << 12)) ^ (v59 + v68 - (v59 << 12))) & 0xFFFFFFFFFFFFFC00uLL;
            goto LABEL_123;
          }
        }
        goto LABEL_83;
      }
LABEL_84:
      v71 = *(unsigned int *)(v54 + 28);
      if ( (_DWORD)v71 != *(_DWORD *)(v54 + 12) )
        break;
      if ( i )
      {
        if ( !*(_BYTE *)(v54 + 25) )
          *(_BYTE *)(v54 + 25) = 1;
        goto LABEL_123;
      }
      if ( *(_BYTE *)(v54 + 25) )
        goto LABEL_123;
      qsort((void *)(v54 + 40), *(unsigned int *)(v54 + 28), 8uLL, MiTbFlushSort);
      MiCompressTbFlushList(v54);
      v60 = v120;
    }
    v72 = v134;
    while ( v59 )
    {
      v134 = v72;
      v120 = v60;
      v73 = 1024LL;
      if ( (unsigned __int64)(v59 - 1) <= 0x3FF )
        v73 = v59;
      *(_QWORD *)(v54 + 8 * v71 + 40) = v61 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v73 - 1) & 0x3FF;
      v74 = *(_DWORD *)(v54 + 28);
      *(_QWORD *)(v54 + 32) += v73;
      v71 = (unsigned int)(v74 + 1);
      v61 += v73 << 12;
      *(_DWORD *)(v54 + 28) = v71;
      v59 -= v73;
      if ( v59 && (_DWORD)v71 == *(_DWORD *)(v54 + 12) )
      {
        i = 0;
        v120 = v60;
        v134 = v72;
        goto LABEL_75;
      }
    }
LABEL_123:
    if ( (*(_DWORD *)v41 & 0x100) != 0 )
    {
      LODWORD(v87) = -1;
      v88 = (__int64)((v11 << 25) - v128) >> 16;
      if ( v88 >= 0xFFFFF68000000000uLL && v88 <= 0xFFFFF6FFFFFFFFFFuLL )
        goto LABEL_127;
      v89 = (v88 >> 9) & 0x7FFFFFFFF8LL;
      v90 = *(_QWORD *)(v89 - 0x98000000000LL);
      if ( (unsigned __int64)(v89 - 0x98000000000LL) >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)(v89 - 0x98000000000LL) <= 0xFFFFF6FB7DBED7F8uLL
        && (v90 & 1) != 0
        && ((v90 & 0x20) == 0 || (v90 & 0x42) == 0) )
      {
        v95 = MiPteHasShadow();
        if ( v95 )
        {
          v97 = v95[2].KernelWaitTime;
          if ( v97 )
          {
            v98 = *(_QWORD *)(v97 + 8 * ((v96 >> 3) & 0x1FF));
            if ( (v98 & 0x20) != 0 )
              v90 |= 0x20uLL;
            v99 = v90;
            v90 |= 0x42uLL;
            if ( (v98 & 0x42) == 0 )
              v90 = v99;
          }
        }
      }
      v87 = HIBYTE(v90) & 0xF;
      if ( (_DWORD)v87 != 7 )
      {
LABEL_127:
        v91 = *(_QWORD *)v11;
        if ( v11 >= 0xFFFFF6FB7DBED000uLL
          && v11 <= 0xFFFFF6FB7DBED7F8uLL
          && (v91 & 1) != 0
          && ((v91 & 0x20) == 0 || (v91 & 0x42) == 0) )
        {
          v100 = MiPteHasShadow();
          if ( v100 )
          {
            v101 = v100[2].KernelWaitTime;
            if ( v101 )
            {
              v102 = *(_QWORD *)(v101 + 8 * ((v11 >> 3) & 0x1FF));
              if ( (v102 & 0x20) != 0 )
                v91 |= 0x20uLL;
              v103 = v91;
              v91 |= 0x42uLL;
              if ( (v102 & 0x42) == 0 )
                v91 = v103;
            }
          }
        }
        if ( (v91 & 0x20) != 0 )
        {
          v92 = *(_DWORD *)(v50 + 184);
          if ( (v92 & 0xF) != 0 )
          {
            if ( !_bittest64(&MiFlags, 0x26u) || (v92 & 0x40) == 0 )
              goto LABEL_142;
LABEL_132:
            if ( (*(_DWORD *)(v50 + 184) & 0xF) != 0 )
            {
              if ( (MiGetPagePrivilege((_QWORD *)(48 * ((v91 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL), 2LL, 0LL) & 0x41) == 0 )
                goto LABEL_142;
            }
            else
            {
              if ( v88 >= 0x7FFFFFFF0000LL )
                goto LABEL_142;
              if ( !*(_QWORD *)(v50 + 624) )
              {
                PagePrivilege = MiGetPagePrivilege(
                                  (_QWORD *)(48 * ((v91 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL),
                                  2LL,
                                  0LL);
                if ( !PagePrivilege || (*(_BYTE *)(v50 - 656) & 1) == 0 && (PagePrivilege & 8) != 0 )
                  goto LABEL_142;
              }
            }
            if ( !(_DWORD)v87 )
              goto LABEL_142;
          }
          else
          {
            if ( *(_QWORD *)(v50 + 624) || (*(_QWORD *)(v50 - 656) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
              goto LABEL_132;
LABEL_142:
            MiLogPageAccess(v50, v11);
          }
        }
      }
    }
    v94 = *(_QWORD *)(v41 + 16) + 1LL;
    *(_QWORD *)(v41 + 16) = v94;
    if ( v94 != *(_QWORD *)(v41 + 8) && *(_DWORD *)(v54 + 28) != *(_DWORD *)(v54 + 12) )
    {
      v47 = v126;
      v51 = v120;
      goto LABEL_58;
    }
    v5 = a1;
    MiTrimWorkingSetBuildup(a1, v41);
    if ( *(_QWORD *)(v41 + 16) != *(_QWORD *)(v41 + 8) )
    {
      v47 = v126;
      v51 = v120;
      goto LABEL_59;
    }
LABEL_93:
    v13 = 4;
LABEL_13:
    v18 = v129;
    if ( v129 == 0xFFFFF6FB7DBEDF68uLL && !v13 )
    {
      v112 = (__int64 *)(8 * (((unsigned __int64)qword_140E2DFC0 >> 39) & 0x1FF) - 0x90482413000LL);
      v113 = *v112;
      if ( (unsigned __int64)v112 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v112 <= 0xFFFFF6FB7DBED7F8uLL )
        LOBYTE(v113) = MiReadPteShadow(8 * (((unsigned __int64)qword_140E2DFC0 >> 39) & 0x1FF) - 0x90482413000LL, *v112);
      if ( (v113 & 1) != 0 )
        MiTrimPte(v5, v112, v121);
    }
    v19 = *(_QWORD *)v18;
    v20 = (__int64)(v18 << 25) >> 16 << 25 >> 16;
    if ( v18 >= 0xFFFFF6FB7DBED000uLL && v18 <= 0xFFFFF6FB7DBED7F8uLL )
      v19 = MiReadPteShadow(v18, *(_QWORD *)v18);
    v21 = (_QWORD *)(48 * ((v19 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    v22 = 1;
    v23 = *(_QWORD **)(v5 + 184);
    v24 = (*v21 >> 59) & 7LL;
    while ( 1 )
    {
      MiTrimWorkingSetTailHelper(v5);
      v27 = v23[9];
      if ( !v27 )
        break;
      if ( *(_DWORD *)(v27 + 28) )
        MiFlushTbList(v27);
      v26 = v23[10];
      if ( *(_DWORD *)(v26 + 28) )
        MiFreeWsleList(*(_QWORD *)(v5 + 32), v25, v26, 0LL);
      v28 = (_DWORD *)v23[11];
      if ( !v28
        || !*v28
        || (v117 = *(_BYTE *)(v5 + 9),
            *(_BYTE *)(v5 + 9) = 17,
            VpabAccessedState = MiQueryVpabAccessedState(v5, v23 + 9, 0LL),
            *(_BYTE *)(v5 + 9) = v117,
            (v22 = VpabAccessedState) == 0) )
      {
        if ( v23[9] )
        {
          MiReleasePrcbAgeTrimLists(v23 + 9);
          if ( !v22 )
          {
            v116 = *(unsigned __int8 *)(v5 + 9);
            if ( (_BYTE)v116 != 17 )
            {
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v116);
              __writecr8(v116);
            }
          }
        }
        break;
      }
      MiProcessVpabAccessedInfo(v5, v23[11], MiTrimWorkingSetVpabCallback, *(_QWORD *)(v5 + 184));
    }
    v6 = v130;
    v29 = *(_QWORD *)(v130 + 16);
    if ( v29 == *(_QWORD *)(v130 + 8) )
    {
      v13 = 4;
      goto LABEL_26;
    }
    if ( v122 != v29
      || v13 == 4
      || (*(_DWORD *)v130 & 0x600) != 0
      || *(_QWORD *)(v130 + 88)
      || (*(_DWORD *)(v5 + 4) & 1) != 0 )
    {
LABEL_26:
      v3 = v123;
    }
    else
    {
      v3 = v123;
      if ( v24 )
      {
        *v21 &= 0xF801FFFFFFFFFFFFuLL;
        MiRebuildPageTableAges(v123, v20, 1);
      }
    }
    v30 = *(_DWORD *)v5 & 4;
    if ( (*(_DWORD *)(v5 + 4) & 1) != 0 )
    {
      if ( v30 )
        MiLockWorkingSetShared(v3, v25, v26);
      else
        MiLockWorkingSetExclusive(v3, v25, v26);
      *(_DWORD *)(v5 + 4) &= ~1u;
    }
    else
    {
      if ( v30 )
      {
        MiUnlockPageTableInternal(v3, v129);
        *(_QWORD *)(v5 + 56) = 0LL;
      }
      if ( (*(_DWORD *)v5 & 2) != 0 )
      {
        v31 = *(_DWORD *)(v3 + 184) & 0xF;
        if ( v31 != 5 && v31 > 4u )
          goto LABEL_38;
        if ( (*(_DWORD *)(v3 + 184) & 0xF) == 1 )
          v32 = &qword_140E37980;
        else
          v32 = (__int64 *)(v3 + 192);
        v33 = *v32;
        if ( (*(_DWORD *)v5 & 4) != 0 )
        {
          MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
          if ( MmInternal )
            v35 = MmInternal[81];
          else
            v35 = 0LL;
          if ( (*(_DWORD *)((v35 << 6) + v33) & 0x40000000) == 0 )
            goto LABEL_38;
          goto LABEL_197;
        }
        for ( j = 0; j < 4; ++j )
        {
          if ( (*(_DWORD *)(((unsigned __int64)j << 6) + v33) & 0x40000000) != 0 )
            goto LABEL_197;
        }
LABEL_38:
        if ( *(_BYTE *)(v5 + 9) < 2u && KeShouldYieldProcessor() )
        {
LABEL_197:
          *(_DWORD *)(v5 + 4) |= 0x10000u;
          v106 = *(unsigned __int8 *)(v5 + 9);
          if ( (*(_DWORD *)v5 & 4) != 0 )
          {
            MiUnlockWorkingSetShared(v3, v106);
            if ( *(_BYTE *)(v5 + 9) >= 2u )
              MiLockWorkingSetSharedAtDpc(v3);
            else
              MiLockWorkingSetShared(v3, v107, v108);
          }
          else
          {
            MiUnlockWorkingSetExclusive(v3, v106);
            if ( *(_BYTE *)(v5 + 9) >= 2u )
              MiLockWorkingSetExclusiveAtDpc(v3);
            else
              MiLockWorkingSetExclusive(v3, v114, v115);
          }
        }
      }
    }
    result = v127;
    a2 = v132;
    v4 = a3;
  }
  while ( !v13 );
  return result;
}
