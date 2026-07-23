/*
 * XREFs of MiClearPteAccessed @ 0x1402E1A30
 * Callers:
 *     MiResetAccessBitPteWorker @ 0x14029BA28 (MiResetAccessBitPteWorker.c)
 *     MiResetAccessBitPte @ 0x14029BDF0 (MiResetAccessBitPte.c)
 *     MiAgePteWorker @ 0x1402E10E0 (MiAgePteWorker.c)
 *     MiCrcStillIntact @ 0x1402E96C8 (MiCrcStillIntact.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiSetVaAgeListEx @ 0x14029C850 (MiSetVaAgeListEx.c)
 *     MiLockNestedPageTable @ 0x14029E130 (MiLockNestedPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiLogPageAccess @ 0x140322960 (MiLogPageAccess.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140327678 (MiUnlockNestedPageTableWritePte.c)
 *     MiCompressTbFlushList @ 0x1404D427C (MiCompressTbFlushList.c)
 *     qsort @ 0x140539380 (qsort.c)
 */

__int64 __fastcall MiClearPteAccessed(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // r13
  unsigned __int64 v7; // r9
  signed __int64 v8; // r8
  int v9; // r12d
  int v10; // ebx
  unsigned __int64 v11; // rdx
  int v12; // r15d
  unsigned __int64 v13; // rdi
  char v14; // si
  __int64 v15; // rcx
  __int64 v16; // r9
  unsigned __int64 Process; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // r10
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r11
  __int64 v26; // rsi
  __int64 *v27; // r8
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // r12
  int i; // r11d
  __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // rax
  unsigned __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // r9d
  _QWORD *v39; // r9
  __int64 v40; // rdx
  int v41; // ebx
  __int64 v42; // r8
  __int64 v44; // rax
  char v45; // r8^7
  unsigned __int64 v46; // r9
  __int64 v47; // rax
  __int64 HasShadow; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 *v57; // rcx
  unsigned __int64 v58; // rax
  unsigned int v59; // r13d
  __int64 PteShadow; // rax
  unsigned __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // rcx
  unsigned int v64; // [rsp+30h] [rbp-58h]
  int v65; // [rsp+34h] [rbp-54h]
  unsigned __int64 v69; // [rsp+A8h] [rbp+20h]

  v5 = a4;
  v7 = a2;
  v8 = a1;
  if ( v5 || (v9 = 0, (a5 & 4) != 0) )
    v9 = 1;
  v65 = 0;
  v10 = (a5 >> 1) & 1;
  v11 = 0xFFFFF68000000000uLL;
  v12 = 0;
  v13 = (__int64)(a3 << 25) >> 16;
  v14 = *(_DWORD *)(a1 + 184) & 0xF;
  if ( !v14 )
  {
    v15 = 0LL;
    v64 = 0;
    v16 = 0LL;
    if ( !v9 )
      goto LABEL_8;
    goto LABEL_5;
  }
  if ( v13 >= 0xFFFFF68000000000uLL && v13 <= 0xFFFFF6FFFFFFFFFFuLL
    || (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && *(__int64 *)(v7 + 40) >= 0
    || (unsigned __int16)*(_DWORD *)(v7 + 32) > 1u )
  {
    return 0LL;
  }
  v15 = 1LL;
  v64 = 1;
  if ( !v9 )
    goto LABEL_95;
  if ( v13 < 0xFFFFF68000000000uLL )
  {
LABEL_5:
    if ( v13 < 0xFFFFF68000000000uLL )
      goto LABEL_6;
  }
  if ( v13 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v12 = 1;
    MiLockNestedPageTable(v8, a3);
    v15 = v64;
  }
LABEL_6:
  if ( (_DWORD)v15 )
  {
    v7 = a2;
LABEL_95:
    v65 = 1;
    v59 = 0;
LABEL_96:
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      v5 = a4;
      if ( ((*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || *(__int64 *)(v7 + 40) < 0)
        && (!v14 || (unsigned __int16)*(_DWORD *)(v7 + 32) <= 1u) )
      {
        goto LABEL_7;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v12 )
        MiUnlockPageTableInternal(a1, a3);
      return 0LL;
    }
    while ( 1 )
    {
      if ( (++v59 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15, v11, v8) )
        {
          HvlNotifyLongSpinWait(v59);
          v7 = a2;
          goto LABEL_107;
        }
        v7 = a2;
      }
      _mm_pause();
LABEL_107:
      if ( *(__int64 *)(v7 + 24) >= 0 )
        goto LABEL_96;
    }
  }
LABEL_7:
  v16 = 0LL;
LABEL_8:
  Process = 0xFFFFF6FB7DBED000uLL;
  if ( !v9 )
  {
    v26 = a1;
    goto LABEL_39;
  }
  if ( v12 )
  {
    PteShadow = *(_QWORD *)a3;
    if ( a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(a3, *(_QWORD *)a3);
    v26 = a1;
    MiUnlockNestedPageTableWritePte(a1, a3, PteShadow & 0xCFFFFFFFFFFFFFDFuLL, v16);
    goto LABEL_20;
  }
  v18 = *(_QWORD *)a3;
  if ( a3 < 0xFFFFF6FB7DBED000uLL || a3 > 0xFFFFF6FB7DBED7F8uLL )
  {
    v19 = 0xFFFFF6FB7DBED7F8uLL;
  }
  else
  {
    v19 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (v18 & 1) != 0 && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
    {
      HasShadow = MiPteHasShadow(0xFFFFF6FB7DBED000uLL, *(_QWORD *)a3, v18);
      if ( HasShadow )
      {
        v50 = *(_QWORD *)(HasShadow + 1288);
        if ( v50 )
        {
          v51 = *(_QWORD *)(v50 + 8 * ((a3 >> 3) & 0x1FF));
          if ( (v51 & 0x20) != 0 )
            v49 |= 0x20uLL;
          Process = 0xFFFFF6FB7DBED000uLL;
          v18 = v49 | 0x42;
          if ( (v51 & 0x42) == 0 )
            v18 = v49;
        }
        else
        {
          Process = 0xFFFFF6FB7DBED000uLL;
        }
      }
      else
      {
        Process = 0xFFFFF6FB7DBED000uLL;
      }
    }
  }
  v20 = *(_QWORD *)a3;
  if ( a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= v19 && (v20 & 1) != 0 && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
  {
    v52 = MiPteHasShadow(0xFFFFF6FB7DBED000uLL, v20, v18);
    if ( v52 )
    {
      v54 = *(_QWORD *)(v52 + 1288);
      if ( v54 )
      {
        v55 = *(_QWORD *)(v54 + 8 * ((a3 >> 3) & 0x1FF));
        if ( (v55 & 0x20) != 0 )
          v53 |= 0x20uLL;
        v20 = v53 | 0x42;
        if ( (v55 & 0x42) == 0 )
          v20 = v53;
      }
    }
    Process = 0xFFFFF6FB7DBED000uLL;
  }
  v21 = v18 & 0x80FFFFFFFFFFFFDFuLL | v20 & 0x7F00000000000000LL;
  v22 = 0LL;
  v69 = v21;
  if ( a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= v19 )
  {
    if ( MiPteHasShadow(0xFFFFF6FB7DBED000uLL, v21, 0LL) )
    {
      v22 = 1LL;
      if ( !BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink) )
      {
        v56 = v69;
        if ( (v69 & 1) != 0 )
          goto LABEL_130;
      }
    }
    else
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      if ( (*(_DWORD *)(Process + 1532) & 0x1000) != 0 )
      {
        v56 = v69;
        if ( (v69 & 1) != 0 )
        {
LABEL_130:
          Process = 0x8000000000000000uLL;
          v21 = v56 | 0x8000000000000000uLL;
        }
      }
    }
  }
  *(_QWORD *)a3 = v21;
  if ( (_DWORD)v22 && (v23 = MiPteHasShadow(Process, v21, v22)) != 0 )
  {
    Process = *(_QWORD *)(v23 + 1288);
    v26 = a1;
    if ( Process )
    {
      v27 = (__int64 *)(Process + 8 * ((a3 >> 3) & 0x1FF));
      v28 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      Process = v25 & v24;
      if ( (v24 & 1) != 0 )
        v28 = v25 & v24;
      *v27 = v28;
    }
  }
  else
  {
    v26 = a1;
  }
LABEL_20:
  v10 = 1;
  if ( !v5 )
    goto LABEL_39;
  v29 = 1LL;
  v30 = (__int64)(a3 << 25) >> 16;
  if ( *(_DWORD *)(v5 + 8) != 1 )
  {
    Process = *(unsigned int *)(v5 + 16);
    if ( (Process & 4) == 0 && v13 >= 0xFFFFF68000000000uLL && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      Process = (unsigned int)Process | 4;
      *(_DWORD *)(v5 + 16) = Process;
    }
  }
LABEL_22:
  for ( i = 0; ; i = 1 )
  {
    v32 = *(unsigned int *)(v5 + 28);
    if ( (_DWORD)v32 && (*(_DWORD *)(v5 + 16) & 2) == 0 )
    {
      v33 = 8LL * (unsigned int)(v32 - 1);
      v34 = *(_QWORD *)(v33 + v5 + 40);
      if ( (v34 & 0xC00) != 0
        || (v35 = *(_QWORD *)(v33 + v5 + 40) & 0x3FFLL,
            Process = v34 & 0xFFFFFFFFFFFFF000uLL,
            (v34 & 0xFFFFFFFFFFFFF000uLL) + ((v35 + 1) << 12) != v30)
        || (Process = v35 + v29, v35 + v29 <= v35) )
      {
        v36 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v32 - 1) + 40);
        if ( (v36 & 0xC00) != 0 )
          goto LABEL_31;
      }
      else
      {
        if ( Process <= 0x3FF )
        {
          *(_QWORD *)(v5 + 32) += v29;
          Process = v34 + v29;
          *(_QWORD *)(v33 + v5 + 40) = (v34 + v29) ^ (v34 ^ (v34 + v29)) & 0xFFFFFFFFFFFFFC00uLL;
          goto LABEL_39;
        }
        v36 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v32 - 1) + 40);
      }
      Process = v36 & 0xFFFFFFFFFFFFF000uLL;
      if ( (v36 & 0xFFFFFFFFFFFFF000uLL) == v30 + (v29 << 12) )
      {
        v61 = v36 & 0x3FF;
        Process = v61 + v29;
        if ( v61 + v29 <= 0x3FF && Process > v61 )
        {
          v62 = 8LL * (unsigned int)(v32 - 1);
          v63 = *(_QWORD *)(v62 + v5 + 40);
          *(_QWORD *)(v5 + 32) += v29;
          Process = v63 - (v29 << 12);
          *(_QWORD *)(v62 + v5 + 40) = (Process + v29) ^ (Process ^ (Process + v29)) & 0xFFFFFFFFFFFFFC00uLL;
          goto LABEL_39;
        }
      }
    }
LABEL_31:
    if ( (_DWORD)v32 != *(_DWORD *)(v5 + 12) )
      break;
    if ( i )
    {
      if ( !*(_BYTE *)(v5 + 25) )
        *(_BYTE *)(v5 + 25) = 1;
      goto LABEL_39;
    }
    if ( *(_BYTE *)(v5 + 25) )
      goto LABEL_39;
    qsort((void *)(v5 + 40), *(unsigned int *)(v5 + 28), 8uLL, MiTbFlushSort);
    MiCompressTbFlushList(v5);
  }
  while ( v29 )
  {
    v37 = 1024LL;
    if ( (unsigned __int64)(v29 - 1) <= 0x3FF )
      v37 = v29;
    Process = v30 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v37 - 1) & 0x3FF;
    *(_QWORD *)(v5 + 8 * v32 + 40) = Process;
    v38 = *(_DWORD *)(v5 + 28);
    *(_QWORD *)(v5 + 32) += v37;
    v32 = (unsigned int)(v38 + 1);
    v30 += v37 << 12;
    *(_DWORD *)(v5 + 28) = v32;
    v29 -= v37;
    if ( v29 && (_DWORD)v32 == *(_DWORD *)(v5 + 12) )
      goto LABEL_22;
  }
LABEL_39:
  if ( v65 )
  {
    Process = a2;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v10 )
  {
    if ( v13 < 0xFFFFF68000000000uLL || v13 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v39 = (_QWORD *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v40 = *v39;
      if ( (unsigned __int64)v39 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v39 <= 0xFFFFF6FB7DBED7F8uLL
        && (v40 & 1) != 0
        && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
      {
        v44 = MiPteHasShadow(Process, v40, *v39);
        if ( v44 )
        {
          v47 = *(_QWORD *)(v44 + 1288);
          if ( v47 )
          {
            HIBYTE(v40) = v45;
            if ( (*(_QWORD *)(v47 + 8 * ((v46 >> 3) & 0x1FF)) & 0x42) == 0 )
              HIBYTE(v40) = v45;
          }
        }
      }
      v41 = HIBYTE(v40) & 0xF;
    }
    else
    {
      v57 = (unsigned __int64 *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v58 = *v57;
      if ( (unsigned __int64)v57 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v57 <= 0xFFFFF6FB7DBED7F8uLL )
        v58 = MiReadPteShadow(v57, *v57);
      v41 = (*(_QWORD *)(48 * ((v58 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 46) & 7;
    }
    if ( (a5 & 1) != 0 )
    {
      if ( v41 != 7 )
      {
        MiLogPageAccess(v26, a3);
        goto LABEL_46;
      }
LABEL_48:
      v42 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v26 + 174));
      if ( *(_QWORD *)(v26 + 112) >= *(_QWORD *)(v42 + 21216) )
        _InterlockedCompareExchange((volatile signed __int32 *)(v42 + 21392), 5, 0);
    }
    else
    {
LABEL_46:
      if ( v41 )
      {
        if ( v41 == 7 )
          goto LABEL_48;
      }
      else if ( (a5 & 8) == 0 )
      {
        MiSetVaAgeListEx(v26, (__int64)(a3 << 25) >> 16, 1u, 1u, 0);
      }
    }
  }
  return 1LL;
}
