/*
 * XREFs of MiTrimPteWorker @ 0x140322C20
 * Callers:
 *     MiTrimWorkingSetVpabCallback @ 0x1403C47C0 (MiTrimWorkingSetVpabCallback.c)
 * Callees:
 *     MiFlushDeferredAgingBucket @ 0x14029C4F0 (MiFlushDeferredAgingBucket.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiLogPageAccess @ 0x140322960 (MiLogPageAccess.c)
 *     MiTrimThisWsle @ 0x1403241C0 (MiTrimThisWsle.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MiCompressTbFlushList @ 0x1404D427C (MiCompressTbFlushList.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     qsort @ 0x140539380 (qsort.c)
 */

__int64 __fastcall MiTrimPteWorker(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  __int64 v7; // r14
  unsigned __int64 v8; // r13
  __int64 v11; // rbp
  unsigned int v12; // esi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 *MmInternal; // rdx
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 *v17; // rax
  BOOL v18; // edx
  BOOL v19; // edx
  __int64 v20; // rbx
  int i; // r12d
  int v22; // r9d
  __int64 v23; // r10
  __int64 v24; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 *v26; // r10
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // rbx
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // r11
  unsigned __int64 *v35; // rdx
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rdx
  int v38; // ecx
  int PagePrivilege; // eax
  _QWORD *v40; // rbx
  __int64 v41; // rdx
  _QWORD *v42; // rbp
  __int64 v43; // r14
  __int64 v44; // r8
  _QWORD *v45; // rbp
  __int64 v46; // r9
  _KPROCESS *v47; // rax
  unsigned __int64 v48; // rdx
  unsigned __int64 KernelWaitTime; // rax
  __int64 v50; // rax
  unsigned __int64 v51; // rcx
  _KPROCESS *v52; // rax
  unsigned __int64 v53; // rcx
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  int v56; // ecx
  unsigned __int64 v57; // rax

  v7 = *(_QWORD *)(a1 + 32);
  v8 = a3;
  if ( !(unsigned int)MiTrimThisWsle(v7, a3, a4, a5, a6, a7) )
    return 0LL;
  v11 = *(_QWORD *)(a5 + 80);
  v12 = 0;
  if ( !v11 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    MmInternal = (__int64 *)CurrentPrcb->MmInternal;
    if ( !MmInternal )
    {
      dword_141032C94 = 512;
      MmInternal = MxTempPrcb;
      dword_14102FE18 = 1;
    }
    v15 = *((unsigned int *)MmInternal + 85);
    if ( (_DWORD)v15 == *((_DWORD *)MmInternal + 86) )
      KeBugCheckEx(0x1Au, 0x440uLL, (ULONG_PTR)CurrentPrcb, (unsigned int)v15, 0LL);
    v16 = &MmInternal[2575 * v15];
    v16[3070] = (__int64)KeGetCurrentThread();
    ++*((_DWORD *)MmInternal + 85);
    v17 = v16 + 1013;
    *((_DWORD *)v16 + 994) = 0;
    v16[499] = 0LL;
    v16[500] = 0LL;
    *((_DWORD *)v16 + 995) = 512;
    *(_OWORD *)(v16 + 1013) = 0LL;
    *(_OWORD *)(v16 + 1015) = 0LL;
    v16[1017] = 0LL;
    *((_DWORD *)v16 + 2029) = 512;
    *((_DWORD *)v16 + 996) = 0;
    *((_DWORD *)v16 + 997) = 2;
    v16[496] = v7;
    *((_BYTE *)v16 + 3992) = (*(_DWORD *)(v7 + 184) & 0x40) != 0;
    if ( (*(_DWORD *)(v7 + 184) & 0xF) != 0
      || (struct _LIST_ENTRY **)v7 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v18 = (*(_DWORD *)(v7 + 184) & 0xF) == 0;
    }
    else
    {
      *((_DWORD *)v16 + 996) |= 9u;
      v18 = 0;
    }
    *((_DWORD *)v16 + 996) &= 0xFFFFFFDB;
    *((_DWORD *)v16 + 994) = v18;
    *(_WORD *)((char *)v16 + 3993) = 0;
    *((_DWORD *)v16 + 999) = 0;
    v16[500] = 0LL;
    v16[501] = 0LL;
    *(_QWORD *)(a5 + 72) = v16 + 496;
    *((_DWORD *)v16 + 2030) = 2;
    *((_DWORD *)v16 + 2031) = 1;
    *v17 = v7;
    *((_BYTE *)v16 + 8128) = (*(_DWORD *)(v7 + 184) & 0x40) != 0;
    if ( (*(_DWORD *)(v7 + 184) & 0xF) != 0
      || (struct _LIST_ENTRY **)v7 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v19 = (*(_DWORD *)(v7 + 184) & 0xF) == 0;
    }
    else
    {
      *((_DWORD *)v16 + 2030) |= 9u;
      v19 = 0;
    }
    *((_DWORD *)v16 + 2030) &= 0xFFFFFFDB;
    *((_DWORD *)v16 + 2028) = v19;
    *(_WORD *)((char *)v16 + 8129) = 0;
    *((_DWORD *)v16 + 2033) = 0;
    v16[1017] = 0LL;
    v16[1018] = 0LL;
    *(_QWORD *)(a5 + 80) = v17;
    if ( *(_QWORD *)(a5 + 88) == 1LL )
      *(_QWORD *)(a5 + 88) = v16 + 1530;
    v11 = *(_QWORD *)(a5 + 80);
  }
  v20 = 1LL;
  if ( *(_DWORD *)(v11 + 8) != 1 )
  {
    v56 = *(_DWORD *)(v11 + 16);
    if ( (v56 & 4) == 0 && v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_DWORD *)(v11 + 16) = v56 | 4;
  }
LABEL_18:
  for ( i = 0; ; i = 1 )
  {
    v22 = *(_DWORD *)(v11 + 28);
    if ( v22 && (*(_DWORD *)(v11 + 16) & 2) == 0 )
    {
      v23 = 8LL * (unsigned int)(v22 - 1);
      v24 = *(_QWORD *)(v23 + v11 + 40);
      if ( (v24 & 0xC00) != 0
        || (v25 = *(_QWORD *)(v23 + v11 + 40) & 0x3FFLL, (v24 & 0xFFFFFFFFFFFFF000uLL) + ((v25 + 1) << 12) != v8)
        || v25 + v20 <= v25 )
      {
        v26 = (unsigned __int64 *)(v11 + 8LL * (unsigned int)(v22 - 1) + 40);
        v27 = *v26;
        v28 = *v26;
        if ( (*v26 & 0xC00) != 0 )
          goto LABEL_27;
      }
      else
      {
        if ( v25 + v20 <= 0x3FF )
        {
          *(_QWORD *)(v11 + 32) += v20;
          *(_QWORD *)(v23 + v11 + 40) = (v24 + v20) ^ ((v24 + v20) ^ v24) & 0xFFFFFFFFFFFFFC00uLL;
          goto LABEL_38;
        }
        v26 = (unsigned __int64 *)(v11 + 8LL * (unsigned int)(v22 - 1) + 40);
        v27 = *v26;
        v28 = *v26;
      }
      if ( (v28 & 0xFFFFFFFFFFFFF000uLL) == (v20 << 12) + v8 )
      {
        v57 = v28 & 0x3FF;
        if ( v57 + v20 <= 0x3FF && v57 + v20 > v57 )
        {
          *(_QWORD *)(v11 + 32) += v20;
          *v26 = (v27 - (v20 << 12) + v20) ^ ((v27 - (v20 << 12)) ^ (v27 - (v20 << 12) + v20)) & 0xFFFFFFFFFFFFFC00uLL;
          goto LABEL_38;
        }
      }
    }
LABEL_27:
    if ( v22 != *(_DWORD *)(v11 + 12) )
      break;
    if ( i )
    {
      if ( !*(_BYTE *)(v11 + 25) )
        *(_BYTE *)(v11 + 25) = 1;
      goto LABEL_38;
    }
    if ( *(_BYTE *)(v11 + 25) )
      goto LABEL_38;
    qsort((void *)(v11 + 40), *(unsigned int *)(v11 + 28), 8uLL, MiTbFlushSort);
    MiCompressTbFlushList(v11);
  }
  while ( v20 )
  {
    v29 = 1024LL;
    if ( (unsigned __int64)(v20 - 1) <= 0x3FF )
      v29 = v20;
    v30 = v8 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v29 - 1) & 0x3FF;
    v8 += v29 << 12;
    *(_QWORD *)(v11 + 8LL * (unsigned int)(*(_DWORD *)(v11 + 28))++ + 40) = v30;
    *(_QWORD *)(v11 + 32) += v29;
    v20 -= v29;
    if ( v20 && *(_DWORD *)(v11 + 28) == *(_DWORD *)(v11 + 12) )
      goto LABEL_18;
  }
LABEL_38:
  if ( (*(_DWORD *)a5 & 0x100) != 0 )
  {
    LODWORD(v31) = -1;
    v32 = (__int64)(a2 << 25) >> 16;
    v33 = 0xFFFFF6FB7DBED000uLL;
    v34 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v32 >= 0xFFFFF68000000000uLL && v32 <= 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_42;
    v35 = (unsigned __int64 *)(((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v36 = *v35;
    if ( (unsigned __int64)v35 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v35 <= 0xFFFFF6FB7DBED7F8uLL
      && (v36 & 1) != 0
      && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
    {
      v47 = MiPteHasShadow();
      if ( v47 )
      {
        KernelWaitTime = v47[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v50 = *(_QWORD *)(KernelWaitTime + 8 * ((v48 >> 3) & 0x1FF));
          if ( (v50 & 0x20) != 0 )
            v36 |= 0x20uLL;
          v51 = v36;
          v36 |= 0x42uLL;
          if ( (v50 & 0x42) == 0 )
            v36 = v51;
        }
      }
    }
    v31 = HIBYTE(v36) & 0xF;
    if ( (_DWORD)v31 != 7 )
    {
LABEL_42:
      v37 = *(_QWORD *)a2;
      if ( a2 >= v33 && a2 <= v34 && (v37 & 1) != 0 && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
      {
        v52 = MiPteHasShadow();
        if ( v52 )
        {
          v53 = v52[2].KernelWaitTime;
          if ( v53 )
          {
            v54 = *(_QWORD *)(v53 + 8 * ((a2 >> 3) & 0x1FF));
            if ( (v54 & 0x20) != 0 )
              v37 |= 0x20uLL;
            v55 = v37;
            v37 |= 0x42uLL;
            if ( (v54 & 0x42) == 0 )
              v37 = v55;
          }
        }
      }
      if ( (v37 & 0x20) != 0 )
      {
        v38 = *(_DWORD *)(v7 + 184);
        if ( (v38 & 0xF) != 0 )
        {
          if ( !_bittest64(&MiFlags, 0x26u) || (v38 & 0x40) == 0 )
            goto LABEL_57;
LABEL_47:
          if ( (*(_DWORD *)(v7 + 184) & 0xF) != 0 )
          {
            if ( (MiGetPagePrivilege((_QWORD *)(48 * ((v37 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL), 2LL, 0LL) & 0x41) == 0 )
              goto LABEL_57;
          }
          else
          {
            if ( v32 >= 0x7FFFFFFF0000LL )
              goto LABEL_57;
            if ( !*(_QWORD *)(v7 + 624) )
            {
              PagePrivilege = MiGetPagePrivilege(
                                (_QWORD *)(48 * ((v37 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL),
                                2LL,
                                0LL);
              if ( !PagePrivilege || (*(_BYTE *)(v7 - 656) & 1) == 0 && (PagePrivilege & 8) != 0 )
                goto LABEL_57;
            }
          }
          if ( !(_DWORD)v31 )
            goto LABEL_57;
        }
        else
        {
          if ( *(_QWORD *)(v7 + 624) || (*(_QWORD *)(v7 - 656) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
            goto LABEL_47;
LABEL_57:
          MiLogPageAccess(v7, a2, v32);
        }
      }
    }
  }
  v40 = (_QWORD *)(a5 + 8);
  v41 = *(_QWORD *)(a5 + 16) + 1LL;
  *(_QWORD *)(a5 + 16) = v41;
  if ( v41 != *(_QWORD *)(a5 + 8) && *(_DWORD *)(v11 + 28) != *(_DWORD *)(v11 + 12) )
    return 0LL;
  v42 = (_QWORD *)(a5 + 8);
  v43 = *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(a5 + 168) )
  {
    MiFlushDeferredAgingBucket(a5 + 96, *(_QWORD *)(a1 + 32), 0);
    v41 = *(_QWORD *)(a5 + 16);
    v42 = (_QWORD *)(a5 + 8);
  }
  if ( *(_BYTE *)(a5 + 248) )
  {
    MiFlushDeferredAgingBucket(a5 + 176, v43, 6u);
    v41 = *(_QWORD *)(a5 + 16);
    v40 = v42;
  }
  v44 = *(_QWORD *)(a5 + 80);
  v45 = v40;
  if ( v44 && *(_DWORD *)(v44 + 28) )
  {
    v46 = (*(_DWORD *)a5 >> 12) & 1;
    if ( (*(_DWORD *)a1 & 4) == 0 )
    {
      v46 = (unsigned int)v46 | 0x10;
      v45 = (_QWORD *)(a5 + 8);
    }
    v41 = *(_QWORD *)(a5 + 16) - MiFreeWsleList(v43, v41, v44, v46);
    *(_QWORD *)(a5 + 16) = v41;
  }
  LOBYTE(v12) = v41 == *v45;
  return v12;
}
