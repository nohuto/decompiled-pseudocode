/*
 * XREFs of MiTrimPte @ 0x140323430
 * Callers:
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 * Callees:
 *     MiAcquirePrcbAgeTrimLists @ 0x14029C380 (MiAcquirePrcbAgeTrimLists.c)
 *     MiFlushDeferredAgingBucket @ 0x14029C4F0 (MiFlushDeferredAgingBucket.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiDemoteCombinedPte @ 0x1402E01A0 (MiDemoteCombinedPte.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiLogPageAccess @ 0x140322960 (MiLogPageAccess.c)
 *     MiTrimThisWsle @ 0x1403241C0 (MiTrimThisWsle.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MiCompressTbFlushList @ 0x1404D427C (MiCompressTbFlushList.c)
 *     qsort @ 0x140539380 (qsort.c)
 */

__int64 __fastcall MiTrimPte(__int64 a1, ULONG_PTR a2, int a3)
{
  unsigned int v3; // r15d
  int v4; // r11d
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  ULONG_PTR v9; // r9
  unsigned __int64 v10; // r13
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 v13; // r9
  unsigned __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // rdi
  _QWORD *v17; // rbp
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 ProcessorFlushList; // r8
  BOOL v27; // ecx
  BOOL v28; // ecx
  int j; // r11d
  int v30; // r9d
  __int64 v31; // r10
  __int64 v32; // rax
  unsigned __int64 v33; // r8
  unsigned __int64 *v34; // r9
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rdx
  int v39; // r8d
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v42; // rax
  unsigned __int64 v43; // rcx
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // rbx
  unsigned __int64 v47; // r8
  __int64 v48; // rcx
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // r9
  unsigned __int64 v51; // rdx
  int v52; // ecx
  int PagePrivilege; // eax
  __int64 v54; // rax
  _KPROCESS *v55; // rax
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  unsigned __int64 v59; // rcx
  _KPROCESS *v60; // rax
  unsigned __int64 v61; // rcx
  __int64 v62; // rax
  unsigned __int64 v63; // rcx
  int v64; // eax
  unsigned __int64 v65; // rdx
  int v66; // ecx
  __int64 v67; // rbx
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // r9
  unsigned __int64 i; // rdx
  _KPROCESS *v72; // rax
  unsigned __int64 v73; // rcx
  __int64 v74; // rax
  unsigned __int64 v75; // rcx
  _KPROCESS *v76; // rax
  unsigned __int64 v77; // r8
  unsigned __int64 v78; // rax
  __int64 v79; // rax
  unsigned __int64 v80; // rcx
  char v81; // al
  _QWORD *v82; // rcx
  __int64 v83; // rcx
  _DWORD *v84; // rcx
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rax
  __int64 v87; // [rsp+30h] [rbp-58h]
  unsigned __int64 v88; // [rsp+38h] [rbp-50h]
  unsigned int v90; // [rsp+98h] [rbp+10h]
  int v91; // [rsp+A0h] [rbp+18h] BYREF

  v3 = 0;
  v4 = a3;
  v91 = 0;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_QWORD *)a2;
  v9 = a2 << 25;
  v87 = v7;
  v10 = (__int64)(a2 << 25) >> 16;
  v88 = v10;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (v8 & 1) != 0 && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        if ( Process )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v42 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
            if ( (v42 & 0x20) != 0 )
              v8 |= 0x20uLL;
            v43 = v8;
            v8 |= 0x42uLL;
            if ( (v42 & 0x42) == 0 )
              v8 = v43;
          }
        }
      }
    }
    v7 = v87;
  }
  v11 = *(_QWORD *)(a1 + 184);
  ++*(_QWORD *)(v11 + 32);
  if ( *(_QWORD *)(v11 + 16) == *(_QWORD *)(v11 + 8) )
    return 4LL;
  if ( (*(_DWORD *)v11 & 0x4000) != 0 )
  {
    v12 = (*(_DWORD *)v11 & 0x8000) != 0 ? *(_QWORD *)(v7 + 136) : *(_QWORD *)(v7 + 152);
    if ( v12 <= *(_QWORD *)(v11 + 56) - *(_QWORD *)(v11 + 8) )
      return 4LL;
  }
  if ( a3 )
  {
    v13 = (__int64)(v9 + 0x10000000) >> 16;
    for ( i = v13 << 25 >> 16; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v13 = i;
    }
  }
  else
  {
    v13 = a2 + 8;
  }
  **(_QWORD **)(*(_QWORD *)(a1 + 32) + 16LL) = v13;
  v14 = 0xFFFFDE0000000000uLL;
  v15 = 0xFFFFFFFFFFLL;
  if ( v10 < 0xFFFFF68000000000uLL || v10 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v15 = 0xFFFFFFFFFFLL;
    LODWORD(v16) = HIBYTE(*(_QWORD *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) & 0xF;
  }
  else
  {
    v44 = (v10 >> 9) & 0x7FFFFFFFF8LL;
    v45 = *(_QWORD *)(v44 - 0x98000000000LL);
    if ( (unsigned __int64)(v44 - 0x98000000000LL) >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)(v44 - 0x98000000000LL) <= 0xFFFFF6FB7DBED7F8uLL
      && (v45 & 1) != 0
      && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
    {
      v76 = MiPteHasShadow();
      if ( v76 )
      {
        v78 = v76[2].KernelWaitTime;
        if ( v78 )
        {
          v79 = *(_QWORD *)(v78 + 8 * ((v77 >> 3) & 0x1FF));
          if ( (v79 & 0x20) != 0 )
            v45 |= 0x20uLL;
          v80 = v45;
          v45 |= 0x42uLL;
          if ( (v79 & 0x42) == 0 )
            v45 = v80;
        }
      }
    }
    v16 = (*(_QWORD *)(v14 + 48 * (v15 & (v45 >> 12))) >> 46) & 7LL;
  }
  v90 = *(_DWORD *)v11 & 0xF;
  v17 = (_QWORD *)(v14 + 48 * (v15 & (v8 >> 12)));
  if ( v4 )
  {
    if ( (v17[3] & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      goto LABEL_16;
    v18 = v87;
    v64 = *(_DWORD *)(v87 + 184);
    if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v81 = v64 & 0xF;
      if ( v81 )
      {
        if ( v81 == 7 )
        {
          v82 = &unk_140E2EAA0;
        }
        else
        {
          v82 = &unk_140E2EAB0;
          if ( v81 == 5 )
            v82 = &unk_140E2EA98;
        }
      }
      else
      {
        v82 = (_QWORD *)(v87 + 176);
      }
      if ( *v82 )
        goto LABEL_16;
    }
    else if ( (v64 & 0xF) != 0
           || a2 < 0xFFFFF6FB7DBED000uLL
           || a2 > 0xFFFFF6FB7DBEDFFFuLL
           || (v83 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
    {
      if ( (*(_DWORD *)(v87 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v86 = 2 * (unsigned int)((__int64)(a2 + 0x90482413000LL) >> 3);
        if ( ((*(_DWORD *)&stru_140E2DAB0.PriorityFloorCounts[4 * (v86 >> 5) + 4] >> (v86 & 0x1F)) & 1) != 0 )
          goto LABEL_16;
      }
      else
      {
        v65 = *(_QWORD *)a2;
        if ( a2 >= 0xFFFFF6FB7DBED000uLL
          && a2 <= 0xFFFFF6FB7DBED7F8uLL
          && (v65 & 1) != 0
          && ((v65 & 0x20) == 0 || (v65 & 0x42) == 0) )
        {
          v72 = MiPteHasShadow();
          if ( v72 )
          {
            v73 = v72[2].KernelWaitTime;
            if ( v73 )
            {
              v74 = *(_QWORD *)(v73 + 8 * ((a2 >> 3) & 0x1FF));
              if ( (v74 & 0x20) != 0 )
                v65 |= 0x20uLL;
              v75 = v65;
              v65 |= 0x42uLL;
              if ( (v74 & 0x42) == 0 )
                v65 = v75;
            }
          }
        }
        if ( (v65 & 0x1000000000000000LL) != 0 )
          goto LABEL_16;
      }
    }
    else if ( *(_DWORD *)(v83 + 4 * ((a2 >> 3) & 0x1FF)) )
    {
      goto LABEL_16;
    }
  }
  else
  {
    v18 = v87;
  }
  v19 = v17[1];
  if ( v19 > 0
    && (v17[5] & 0x10000000000LL) == 0
    && (unsigned int)MiDemoteCombinedPte(v18, a2, v19 | 0x8000000000000000uLL) )
  {
    v8 = *(_QWORD *)a2;
  }
  v20 = *(_QWORD *)(a1 + 32);
  if ( !(unsigned int)MiTrimThisWsle(v20, v10, (_DWORD)v17, v11, (v8 & 0x20) != 0, (__int64)&v91) )
    goto LABEL_15;
  v24 = *(_QWORD *)(v11 + 80);
  v25 = 1LL;
  if ( !v24 )
  {
    ProcessorFlushList = MiGetProcessorFlushList(v22, v21);
    *(_DWORD *)(ProcessorFlushList + 16) = 0;
    *(_DWORD *)(ProcessorFlushList + 20) = 2;
    *(_QWORD *)ProcessorFlushList = v20;
    *(_BYTE *)(ProcessorFlushList + 24) = (*(_DWORD *)(v20 + 184) & 0x40) != 0;
    if ( (*(_DWORD *)(v20 + 184) & 0xF) != 0
      || (struct _LIST_ENTRY **)v20 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v27 = (*(_DWORD *)(v20 + 184) & 0xF) == 0;
    }
    else
    {
      *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
      v27 = 0;
    }
    *(_DWORD *)(ProcessorFlushList + 16) &= 0xFFFFFFDB;
    *(_DWORD *)(ProcessorFlushList + 8) = v27;
    *(_WORD *)(ProcessorFlushList + 25) = 0;
    *(_DWORD *)(ProcessorFlushList + 28) = 0;
    *(_QWORD *)(ProcessorFlushList + 32) = 0LL;
    *(_QWORD *)(ProcessorFlushList + 40) = 0LL;
    *(_QWORD *)(v11 + 72) = ProcessorFlushList;
    *(_DWORD *)(ProcessorFlushList + 4152) = 2;
    *(_DWORD *)(ProcessorFlushList + 4156) = 1;
    *(_QWORD *)(ProcessorFlushList + 4136) = v20;
    *(_BYTE *)(ProcessorFlushList + 4160) = (*(_DWORD *)(v20 + 184) & 0x40) != 0;
    if ( (*(_DWORD *)(v20 + 184) & 0xF) != 0
      || (struct _LIST_ENTRY **)v20 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v28 = (*(_DWORD *)(v20 + 184) & 0xF) == 0;
    }
    else
    {
      *(_DWORD *)(ProcessorFlushList + 4152) |= 9u;
      v28 = 0;
    }
    *(_DWORD *)(ProcessorFlushList + 4152) &= 0xFFFFFFDB;
    *(_DWORD *)(ProcessorFlushList + 4144) = v28;
    *(_WORD *)(ProcessorFlushList + 4161) = 0;
    *(_DWORD *)(ProcessorFlushList + 4164) = 0;
    *(_QWORD *)(ProcessorFlushList + 4168) = 0LL;
    *(_QWORD *)(ProcessorFlushList + 4176) = 0LL;
    *(_QWORD *)(v11 + 80) = ProcessorFlushList + 4136;
    if ( *(_QWORD *)(v11 + 88) == 1LL )
      *(_QWORD *)(v11 + 88) = ProcessorFlushList + 8272;
    v24 = ProcessorFlushList + 4136;
  }
  if ( *(_DWORD *)(v24 + 8) != 1 )
  {
    v66 = *(_DWORD *)(v24 + 16);
    if ( (v66 & 4) == 0 && v10 >= 0xFFFFF68000000000uLL && v10 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_DWORD *)(v24 + 16) = v66 | 4;
  }
LABEL_29:
  for ( j = 0; ; j = 1 )
  {
    v30 = *(_DWORD *)(v24 + 28);
    if ( v30 && (*(_DWORD *)(v24 + 16) & 2) == 0 )
    {
      v31 = 8LL * (unsigned int)(v30 - 1);
      v32 = *(_QWORD *)(v31 + v24 + 40);
      if ( (v32 & 0xC00) != 0
        || (v33 = *(_QWORD *)(v31 + v24 + 40) & 0x3FFLL, (v32 & 0xFFFFFFFFFFFFF000uLL) + ((v33 + 1) << 12) != v10)
        || v25 + v33 <= v33 )
      {
        v34 = (unsigned __int64 *)(v24 + 8LL * (unsigned int)(v30 - 1) + 40);
        v35 = *v34;
        v36 = *v34;
        if ( (*v34 & 0xC00) != 0 )
          goto LABEL_38;
      }
      else
      {
        if ( v25 + v33 <= 0x3FF )
        {
          *(_QWORD *)(v24 + 32) += v25;
          *(_QWORD *)(v31 + v24 + 40) = (v25 + v32) ^ (v32 ^ (v25 + v32)) & 0xFFFFFFFFFFFFFC00uLL;
          goto LABEL_68;
        }
        v34 = (unsigned __int64 *)(v24 + 8LL * (unsigned int)(v30 - 1) + 40);
        v35 = *v34;
        v36 = *v34;
      }
      if ( (v36 & 0xFFFFFFFFFFFFF000uLL) == (v25 << 12) + v10 )
      {
        v85 = v36 & 0x3FF;
        if ( v85 + v25 <= 0x3FF && v85 + v25 > v85 )
        {
          *(_QWORD *)(v24 + 32) += v25;
          *v34 = (v35 - (v25 << 12) + v25) ^ ((v35 - (v25 << 12)) ^ (v35 - (v25 << 12) + v25)) & 0xFFFFFFFFFFFFFC00uLL;
          goto LABEL_68;
        }
      }
    }
LABEL_38:
    v37 = *(unsigned int *)(v24 + 28);
    if ( (_DWORD)v37 != *(_DWORD *)(v24 + 12) )
      break;
    if ( j )
    {
      if ( !*(_BYTE *)(v24 + 25) )
        *(_BYTE *)(v24 + 25) = 1;
      goto LABEL_68;
    }
    if ( *(_BYTE *)(v24 + 25) )
      goto LABEL_68;
    qsort((void *)(v24 + 40), *(unsigned int *)(v24 + 28), 8uLL, MiTbFlushSort);
    MiCompressTbFlushList(v24);
  }
  while ( v25 )
  {
    v38 = 1024LL;
    if ( (unsigned __int64)(v25 - 1) <= 0x3FF )
      v38 = v25;
    *(_QWORD *)(v24 + 8 * v37 + 40) = v10 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v38 - 1) & 0x3FF;
    v39 = *(_DWORD *)(v24 + 28);
    *(_QWORD *)(v24 + 32) += v38;
    v37 = (unsigned int)(v39 + 1);
    v10 += v38 << 12;
    *(_DWORD *)(v24 + 28) = v37;
    v25 -= v38;
    if ( v25 && (_DWORD)v37 == *(_DWORD *)(v24 + 12) )
      goto LABEL_29;
  }
LABEL_68:
  if ( (*(_DWORD *)v11 & 0x100) != 0 )
  {
    LODWORD(v46) = -1;
    v47 = (__int64)(a2 << 25) >> 16;
    if ( v47 >= 0xFFFFF68000000000uLL && v47 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v50 = 0xFFFFF6FB7DBED000uLL;
      goto LABEL_72;
    }
    v48 = (v47 >> 9) & 0x7FFFFFFFF8LL;
    v49 = *(_QWORD *)(v48 - 0x98000000000LL);
    v50 = 0xFFFFF6FB7DBED000uLL;
    if ( (unsigned __int64)(v48 - 0x98000000000LL) >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)(v48 - 0x98000000000LL) <= 0xFFFFF6FB7DBED7F8uLL
      && (v49 & 1) != 0
      && ((v49 & 0x20) == 0 || (v49 & 0x42) == 0) )
    {
      v55 = MiPteHasShadow();
      if ( v55 )
      {
        v57 = v55[2].KernelWaitTime;
        if ( v57 )
        {
          v58 = *(_QWORD *)(v57 + 8 * ((v56 >> 3) & 0x1FF));
          if ( (v58 & 0x20) != 0 )
            v49 |= 0x20uLL;
          v59 = v49;
          v49 |= 0x42uLL;
          if ( (v58 & 0x42) == 0 )
            v49 = v59;
        }
      }
    }
    v46 = HIBYTE(v49) & 0xF;
    if ( (_DWORD)v46 != 7 )
    {
LABEL_72:
      v51 = *(_QWORD *)a2;
      if ( a2 >= v50 && a2 <= 0xFFFFF6FB7DBED7F8uLL && (v51 & 1) != 0 && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
      {
        v60 = MiPteHasShadow();
        if ( v60 )
        {
          v61 = v60[2].KernelWaitTime;
          if ( v61 )
          {
            v62 = *(_QWORD *)(v61 + 8 * ((a2 >> 3) & 0x1FF));
            if ( (v62 & 0x20) != 0 )
              v51 |= 0x20uLL;
            v63 = v51;
            v51 |= 0x42uLL;
            if ( (v62 & 0x42) == 0 )
              v51 = v63;
          }
        }
      }
      if ( (v51 & 0x20) != 0 )
      {
        v52 = *(_DWORD *)(v20 + 184);
        if ( (v52 & 0xF) != 0 )
        {
          if ( !_bittest64(&MiFlags, 0x26u) || (v52 & 0x40) == 0 )
            goto LABEL_87;
LABEL_77:
          if ( (*(_DWORD *)(v20 + 184) & 0xF) != 0 )
          {
            if ( (MiGetPagePrivilege((_QWORD *)(48 * ((v51 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL), 2LL, 0LL) & 0x41) == 0 )
              goto LABEL_87;
          }
          else
          {
            if ( v47 >= 0x7FFFFFFF0000LL )
              goto LABEL_87;
            if ( !*(_QWORD *)(v20 + 624) )
            {
              PagePrivilege = MiGetPagePrivilege(
                                (_QWORD *)(48 * ((v51 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL),
                                2LL,
                                0LL);
              if ( !PagePrivilege || (*(_BYTE *)(v20 - 656) & 1) == 0 && (PagePrivilege & 8) != 0 )
                goto LABEL_87;
            }
          }
          if ( !(_DWORD)v46 )
            goto LABEL_87;
        }
        else
        {
          if ( *(_QWORD *)(v20 + 624) || (*(_QWORD *)(v20 - 656) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
            goto LABEL_77;
LABEL_87:
          MiLogPageAccess(v20, a2, v47);
        }
      }
    }
  }
  v54 = *(_QWORD *)(v11 + 16) + 1LL;
  *(_QWORD *)(v11 + 16) = v54;
  if ( v54 == *(_QWORD *)(v11 + 8) || *(_DWORD *)(v24 + 28) == *(_DWORD *)(v24 + 12) )
  {
    v67 = *(_QWORD *)(a1 + 32);
    if ( *(_BYTE *)(v11 + 168) )
      MiFlushDeferredAgingBucket(v11 + 96, *(_QWORD *)(a1 + 32), 0);
    if ( *(_BYTE *)(v11 + 248) )
      MiFlushDeferredAgingBucket(v11 + 176, v67, 6u);
    v68 = *(_QWORD *)(v11 + 80);
    if ( v68 && *(_DWORD *)(v68 + 28) )
    {
      v69 = (*(_DWORD *)v11 >> 12) & 1;
      v70 = (*(_DWORD *)v11 >> 12) & 1 | 0x10u;
      if ( (*(_BYTE *)a1 & 4) != 0 )
        v70 = (unsigned int)v69;
      *(_QWORD *)(v11 + 16) -= MiFreeWsleList(v67, v69, v68, v70);
    }
    if ( *(_QWORD *)(v11 + 16) == *(_QWORD *)(v11 + 8) )
      return 4LL;
  }
  v10 = v88;
LABEL_15:
  if ( v91 )
  {
    if ( *(_QWORD *)(v11 + 88) == 1LL )
      MiAcquirePrcbAgeTrimLists(v87, (__int64 *)(v11 + 72));
    v84 = *(_DWORD **)(v11 + 88);
    *(_QWORD *)&v84[2 * (*v84)++ + 2] = v10 & 0xFFFFFFFFFFFFF000uLL;
  }
LABEL_16:
  if ( (unsigned int)v16 < v90 )
    return 0LL;
  if ( ++*(_QWORD *)(v11 + 40) >= *(_QWORD *)(v11 + 48) )
    return 4;
  return v3;
}
