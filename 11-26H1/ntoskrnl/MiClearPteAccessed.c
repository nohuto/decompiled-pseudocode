/*
 * XREFs of MiClearPteAccessed @ 0x1402FF9B0
 * Callers:
 *     MiResetAccessBitPteWorker @ 0x14029C4C8 (MiResetAccessBitPteWorker.c)
 *     MiResetAccessBitPte @ 0x14029C890 (MiResetAccessBitPte.c)
 *     MiAgePteWorker @ 0x1402FF060 (MiAgePteWorker.c)
 *     MiCrcStillIntact @ 0x140307648 (MiCrcStillIntact.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiSetVaAgeListEx @ 0x14029D300 (MiSetVaAgeListEx.c)
 *     MiLockNestedPageTable @ 0x14029EBE0 (MiLockNestedPageTable.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140314FF0 (MiReadPteShadow.c)
 *     MiLogPageAccess @ 0x140320930 (MiLogPageAccess.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140325648 (MiUnlockNestedPageTableWritePte.c)
 *     MiCompressTbFlushList @ 0x1404DAB9C (MiCompressTbFlushList.c)
 *     qsort @ 0x140536F00 (qsort.c)
 */

__int64 __fastcall MiClearPteAccessed(
        signed __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // r13
  unsigned __int64 v7; // r9
  int v9; // r12d
  int v10; // ebx
  int v11; // r15d
  unsigned __int64 v12; // rdi
  char v13; // si
  int v14; // ecx
  __int64 v15; // r9
  unsigned __int64 Process; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // r10
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r11
  __int64 v25; // rsi
  __int64 *v26; // r8
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // r12
  int i; // r11d
  __int64 v31; // r9
  __int64 v32; // r10
  __int64 v33; // rax
  unsigned __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // r9d
  _QWORD *v38; // r9
  __int64 v39; // rdx
  int v40; // ebx
  __int64 v41; // r8
  __int64 v43; // rax
  char v44; // r8^7
  unsigned __int64 v45; // r9
  __int64 v46; // rax
  __int64 HasShadow; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 *v56; // rcx
  unsigned __int64 v57; // rax
  unsigned int v58; // r13d
  __int64 PteShadow; // rax
  unsigned __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // rcx
  int v63; // [rsp+30h] [rbp-58h]
  int v64; // [rsp+34h] [rbp-54h]
  unsigned __int64 v68; // [rsp+A8h] [rbp+20h]

  v5 = a4;
  v7 = a2;
  if ( v5 || (v9 = 0, (a5 & 4) != 0) )
    v9 = 1;
  v64 = 0;
  v10 = (a5 >> 1) & 1;
  v11 = 0;
  v12 = (__int64)(a3 << 25) >> 16;
  v13 = *(_DWORD *)(a1 + 184) & 0xF;
  if ( !v13 )
  {
    v14 = 0;
    v63 = 0;
    v15 = 0LL;
    if ( !v9 )
      goto LABEL_8;
    goto LABEL_5;
  }
  if ( v12 >= 0xFFFFF68000000000uLL && v12 <= 0xFFFFF6FFFFFFFFFFuLL
    || (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && *(__int64 *)(a2 + 40) >= 0
    || (unsigned __int16)*(_DWORD *)(a2 + 32) > 1u )
  {
    return 0LL;
  }
  v14 = 1;
  v63 = 1;
  if ( !v9 )
    goto LABEL_95;
  if ( v12 < 0xFFFFF68000000000uLL )
  {
LABEL_5:
    if ( v12 < 0xFFFFF68000000000uLL )
      goto LABEL_6;
  }
  if ( v12 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v11 = 1;
    MiLockNestedPageTable(a1, a3);
    v14 = v63;
  }
LABEL_6:
  if ( v14 )
  {
    v7 = a2;
LABEL_95:
    v64 = 1;
    v58 = 0;
LABEL_96:
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      v5 = a4;
      if ( ((*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || *(__int64 *)(v7 + 40) < 0)
        && (!v13 || (unsigned __int16)*(_DWORD *)(v7 + 32) <= 1u) )
      {
        goto LABEL_7;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v11 )
        MiUnlockPageTableInternal(a1, a3);
      return 0LL;
    }
    while ( 1 )
    {
      if ( (++v58 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v58);
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
  v15 = 0LL;
LABEL_8:
  Process = 0xFFFFF6FB7DBED000uLL;
  if ( !v9 )
  {
    v25 = a1;
    goto LABEL_39;
  }
  if ( v11 )
  {
    PteShadow = *(_QWORD *)a3;
    if ( a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(a3, *(_QWORD *)a3);
    v25 = a1;
    MiUnlockNestedPageTableWritePte(a1, a3, PteShadow & 0xCFFFFFFFFFFFFFDFuLL, v15);
    goto LABEL_20;
  }
  v17 = *(_QWORD *)a3;
  if ( a3 < 0xFFFFF6FB7DBED000uLL || a3 > 0xFFFFF6FB7DBED7F8uLL )
  {
    v18 = 0xFFFFF6FB7DBED7F8uLL;
  }
  else
  {
    v18 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (v17 & 1) != 0 && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
    {
      HasShadow = MiPteHasShadow(0xFFFFF6FB7DBED000uLL, *(_QWORD *)a3, v17);
      if ( HasShadow )
      {
        v49 = *(_QWORD *)(HasShadow + 1288);
        if ( v49 )
        {
          v50 = *(_QWORD *)(v49 + 8 * ((a3 >> 3) & 0x1FF));
          if ( (v50 & 0x20) != 0 )
            v48 |= 0x20uLL;
          Process = 0xFFFFF6FB7DBED000uLL;
          v17 = v48 | 0x42;
          if ( (v50 & 0x42) == 0 )
            v17 = v48;
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
  v19 = *(_QWORD *)a3;
  if ( a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= v18 && (v19 & 1) != 0 && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
  {
    v51 = MiPteHasShadow(0xFFFFF6FB7DBED000uLL, v19, v17);
    if ( v51 )
    {
      v53 = *(_QWORD *)(v51 + 1288);
      if ( v53 )
      {
        v54 = *(_QWORD *)(v53 + 8 * ((a3 >> 3) & 0x1FF));
        if ( (v54 & 0x20) != 0 )
          v52 |= 0x20uLL;
        v19 = v52 | 0x42;
        if ( (v54 & 0x42) == 0 )
          v19 = v52;
      }
    }
    Process = 0xFFFFF6FB7DBED000uLL;
  }
  v20 = v17 & 0x80FFFFFFFFFFFFDFuLL | v19 & 0x7F00000000000000LL;
  v21 = 0LL;
  v68 = v20;
  if ( a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= v18 )
  {
    if ( MiPteHasShadow(0xFFFFF6FB7DBED000uLL, v20, 0LL) )
    {
      v21 = 1LL;
      if ( !BYTE5(stru_140E2D930.Header.WaitListHead.Blink) )
      {
        v55 = v68;
        if ( (v68 & 1) != 0 )
          goto LABEL_130;
      }
    }
    else
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      if ( (*(_DWORD *)(Process + 1532) & 0x1000) != 0 )
      {
        v55 = v68;
        if ( (v68 & 1) != 0 )
        {
LABEL_130:
          Process = 0x8000000000000000uLL;
          v20 = v55 | 0x8000000000000000uLL;
        }
      }
    }
  }
  *(_QWORD *)a3 = v20;
  if ( (_DWORD)v21 && (v22 = MiPteHasShadow(Process, v20, v21)) != 0 )
  {
    Process = *(_QWORD *)(v22 + 1288);
    v25 = a1;
    if ( Process )
    {
      v26 = (__int64 *)(Process + 8 * ((a3 >> 3) & 0x1FF));
      v27 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      Process = v24 & v23;
      if ( (v23 & 1) != 0 )
        v27 = v24 & v23;
      *v26 = v27;
    }
  }
  else
  {
    v25 = a1;
  }
LABEL_20:
  v10 = 1;
  if ( !v5 )
    goto LABEL_39;
  v28 = 1LL;
  v29 = (__int64)(a3 << 25) >> 16;
  if ( *(_DWORD *)(v5 + 8) != 1 )
  {
    Process = *(unsigned int *)(v5 + 16);
    if ( (Process & 4) == 0 && v12 >= 0xFFFFF68000000000uLL && v12 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      Process = (unsigned int)Process | 4;
      *(_DWORD *)(v5 + 16) = Process;
    }
  }
LABEL_22:
  for ( i = 0; ; i = 1 )
  {
    v31 = *(unsigned int *)(v5 + 28);
    if ( (_DWORD)v31 && (*(_DWORD *)(v5 + 16) & 2) == 0 )
    {
      v32 = 8LL * (unsigned int)(v31 - 1);
      v33 = *(_QWORD *)(v32 + v5 + 40);
      if ( (v33 & 0xC00) != 0
        || (v34 = *(_QWORD *)(v32 + v5 + 40) & 0x3FFLL,
            Process = v33 & 0xFFFFFFFFFFFFF000uLL,
            (v33 & 0xFFFFFFFFFFFFF000uLL) + ((v34 + 1) << 12) != v29)
        || (Process = v34 + v28, v34 + v28 <= v34) )
      {
        v35 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v31 - 1) + 40);
        if ( (v35 & 0xC00) != 0 )
          goto LABEL_31;
      }
      else
      {
        if ( Process <= 0x3FF )
        {
          *(_QWORD *)(v5 + 32) += v28;
          Process = v33 + v28;
          *(_QWORD *)(v32 + v5 + 40) = (v33 + v28) ^ (v33 ^ (v33 + v28)) & 0xFFFFFFFFFFFFFC00uLL;
          goto LABEL_39;
        }
        v35 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v31 - 1) + 40);
      }
      Process = v35 & 0xFFFFFFFFFFFFF000uLL;
      if ( (v35 & 0xFFFFFFFFFFFFF000uLL) == v29 + (v28 << 12) )
      {
        v60 = v35 & 0x3FF;
        Process = v60 + v28;
        if ( v60 + v28 <= 0x3FF && Process > v60 )
        {
          v61 = 8LL * (unsigned int)(v31 - 1);
          v62 = *(_QWORD *)(v61 + v5 + 40);
          *(_QWORD *)(v5 + 32) += v28;
          Process = v62 - (v28 << 12);
          *(_QWORD *)(v61 + v5 + 40) = (Process + v28) ^ (Process ^ (Process + v28)) & 0xFFFFFFFFFFFFFC00uLL;
          goto LABEL_39;
        }
      }
    }
LABEL_31:
    if ( (_DWORD)v31 != *(_DWORD *)(v5 + 12) )
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
  while ( v28 )
  {
    v36 = 1024LL;
    if ( (unsigned __int64)(v28 - 1) <= 0x3FF )
      v36 = v28;
    Process = v29 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v36 - 1) & 0x3FF;
    *(_QWORD *)(v5 + 8 * v31 + 40) = Process;
    v37 = *(_DWORD *)(v5 + 28);
    *(_QWORD *)(v5 + 32) += v36;
    v31 = (unsigned int)(v37 + 1);
    v29 += v36 << 12;
    *(_DWORD *)(v5 + 28) = v31;
    v28 -= v36;
    if ( v28 && (_DWORD)v31 == *(_DWORD *)(v5 + 12) )
      goto LABEL_22;
  }
LABEL_39:
  if ( v64 )
  {
    Process = a2;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v10 )
  {
    if ( v12 < 0xFFFFF68000000000uLL || v12 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v38 = (_QWORD *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v39 = *v38;
      if ( (unsigned __int64)v38 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v38 <= 0xFFFFF6FB7DBED7F8uLL
        && (v39 & 1) != 0
        && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
      {
        v43 = MiPteHasShadow(Process, v39, *v38);
        if ( v43 )
        {
          v46 = *(_QWORD *)(v43 + 1288);
          if ( v46 )
          {
            HIBYTE(v39) = v44;
            if ( (*(_QWORD *)(v46 + 8 * ((v45 >> 3) & 0x1FF)) & 0x42) == 0 )
              HIBYTE(v39) = v44;
          }
        }
      }
      v40 = HIBYTE(v39) & 0xF;
    }
    else
    {
      v56 = (unsigned __int64 *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v57 = *v56;
      if ( (unsigned __int64)v56 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v56 <= 0xFFFFF6FB7DBED7F8uLL )
        v57 = MiReadPteShadow(v56, *v56);
      v40 = (*(_QWORD *)(48 * ((v57 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 46) & 7;
    }
    if ( (a5 & 1) != 0 )
    {
      if ( v40 != 7 )
      {
        MiLogPageAccess(v25, a3);
        goto LABEL_46;
      }
LABEL_48:
      v41 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(v25 + 174));
      if ( *(_QWORD *)(v25 + 112) >= *(_QWORD *)(v41 + 21216) )
        _InterlockedCompareExchange((volatile signed __int32 *)(v41 + 21392), 5, 0);
    }
    else
    {
LABEL_46:
      if ( v40 )
      {
        if ( v40 == 7 )
          goto LABEL_48;
      }
      else if ( (a5 & 8) == 0 )
      {
        MiSetVaAgeListEx(v25, (__int64)(a3 << 25) >> 16, 1u, 1u, 0);
      }
    }
  }
  return 1LL;
}
