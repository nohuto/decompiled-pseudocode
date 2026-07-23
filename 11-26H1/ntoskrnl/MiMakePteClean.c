/*
 * XREFs of MiMakePteClean @ 0x14031C2D0
 * Callers:
 *     MiWalkPtesForWriteWatchState @ 0x140319928 (MiWalkPtesForWriteWatchState.c)
 *     MiMoveDirtyBitsToPfns @ 0x14031B4A0 (MiMoveDirtyBitsToPfns.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403459B0 (MiInsertLargeTbFlushEntry.c)
 *     MiCompressTbFlushList @ 0x1404D427C (MiCompressTbFlushList.c)
 *     qsort @ 0x140539380 (qsort.c)
 */

char __fastcall MiMakePteClean(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r11
  unsigned int v7; // r14d
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  int v13; // edx
  _KPROCESS *v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdi
  int i; // r10d
  int v21; // r8d
  __int64 v22; // r11
  __int64 v23; // rax
  unsigned __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // r8d
  _KPROCESS *v29; // rax
  __int64 v30; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rbx
  ULONG_PTR v36; // rbx
  struct _KEVENT *v37; // rcx
  int v38; // ecx
  unsigned __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rcx
  unsigned __int64 v43; // [rsp+50h] [rbp+8h] BYREF

  v43 = a1;
  v4 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFFBDuLL;
  v5 = 0xFFFFF68000000000uLL;
  v7 = 0;
  v8 = (__int64)(a2 << 25) >> 16;
  if ( v8 >= 0xFFFFF68000000000uLL )
  {
    do
    {
      if ( v8 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      ++v7;
      v8 = (__int64)(v8 << 25) >> 16;
    }
    while ( v8 >= 0xFFFFF68000000000uLL );
    if ( v7 )
    {
      MiRewritePteWithLockBit(
        (signed __int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
        0,
        a2,
        *(_QWORD *)a2 & 0xFFFFFFFFFFFFFFBDuLL);
      MiInsertLargeTbFlushEntry(a3, v7, a2);
      goto LABEL_48;
    }
  }
  v9 = *(_QWORD *)a2;
  v10 = 0xFFFFF6FB7DBED000uLL;
  if ( a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBED7F8uLL )
  {
    v11 = 0xFFFFF6FB7DBED7F8uLL;
  }
  else
  {
    v11 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (v9 & 1) != 0 && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
    {
      v29 = MiPteHasShadow();
      if ( v29 )
      {
        KernelWaitTime = v29[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v32 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v32 & 0x20) != 0 )
            v30 |= 0x20uLL;
          v9 = v30 | 0x42;
          if ( (v32 & 0x42) == 0 )
            v9 = v30;
        }
      }
    }
  }
  v12 = v9 ^ (v4 ^ v9) & 0x80FFFFFFFFFFFFFFuLL;
  v13 = 0;
  v43 = v12;
  if ( a2 < v10 || a2 > v11 )
    goto LABEL_5;
  if ( MiPteHasShadow() )
  {
    v13 = 1;
    if ( !BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink) )
    {
      v33 = v43;
      if ( (v43 & 1) != 0 )
        goto LABEL_63;
    }
  }
  else if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
  {
    v33 = v43;
    if ( (v43 & 1) != 0 )
LABEL_63:
      v12 = v33 | 0x8000000000000000uLL;
  }
LABEL_5:
  *(_QWORD *)a2 = v12;
  if ( v13 )
  {
    v14 = MiPteHasShadow();
    if ( v14 )
    {
      v16 = v14[2].KernelWaitTime;
      if ( v16 )
      {
        v17 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v18 = (a2 >> 3) & 0x1FF;
        if ( (v15 & 1) != 0 )
          v17 = v15 & 0x7FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v16 + 8 * v18) = v17;
      }
    }
  }
  v19 = 1LL;
  if ( *(_DWORD *)(a3 + 8) != 1 )
  {
    v38 = *(_DWORD *)(a3 + 16);
    if ( (v38 & 4) == 0 && v8 >= v5 && v8 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_DWORD *)(a3 + 16) = v38 | 4;
  }
LABEL_12:
  for ( i = 0; ; i = 1 )
  {
    v21 = *(_DWORD *)(a3 + 28);
    if ( v21 && (*(_DWORD *)(a3 + 16) & 2) == 0 )
    {
      v22 = 8LL * (unsigned int)(v21 - 1);
      v23 = *(_QWORD *)(v22 + a3 + 40);
      if ( (v23 & 0xC00) != 0
        || (v24 = *(_QWORD *)(v22 + a3 + 40) & 0x3FFLL, (v23 & 0xFFFFFFFFFFFFF000uLL) + ((v24 + 1) << 12) != v8)
        || v24 + v19 <= v24 )
      {
        v25 = *(_QWORD *)(a3 + 8LL * (unsigned int)(v21 - 1) + 40);
        if ( (v25 & 0xC00) != 0 )
          goto LABEL_21;
      }
      else
      {
        if ( v24 + v19 <= 0x3FF )
        {
          *(_QWORD *)(a3 + 32) += v19;
          *(_QWORD *)(v22 + a3 + 40) = (v23 + v19) ^ ((v23 + v19) ^ v23) & 0xFFFFFFFFFFFFFC00uLL;
          goto LABEL_48;
        }
        v25 = *(_QWORD *)(a3 + 8LL * (unsigned int)(v21 - 1) + 40);
      }
      if ( (v25 & 0xFFFFFFFFFFFFF000uLL) == v8 + (v19 << 12) )
      {
        v39 = v25 & 0x3FF;
        if ( v19 + v39 <= 0x3FF && v19 + v39 > v39 )
        {
          v40 = 8LL * (unsigned int)(v21 - 1);
          v41 = *(_QWORD *)(v40 + a3 + 40);
          *(_QWORD *)(a3 + 32) += v19;
          *(_QWORD *)(v40 + a3 + 40) = (v41 - (v19 << 12) + v19) ^ ((v41 - (v19 << 12)) ^ (v41 - (v19 << 12) + v19)) & 0xFFFFFFFFFFFFFC00uLL;
          goto LABEL_48;
        }
      }
    }
LABEL_21:
    v26 = *(unsigned int *)(a3 + 28);
    if ( (_DWORD)v26 != *(_DWORD *)(a3 + 12) )
      break;
    if ( i )
    {
      if ( !*(_BYTE *)(a3 + 25) )
        *(_BYTE *)(a3 + 25) = 1;
      goto LABEL_48;
    }
    if ( *(_BYTE *)(a3 + 25) )
      goto LABEL_48;
    qsort((void *)(a3 + 40), *(unsigned int *)(a3 + 28), 8uLL, MiTbFlushSort);
    MiCompressTbFlushList(a3);
  }
  while ( v19 )
  {
    v27 = 1024LL;
    if ( (unsigned __int64)(v19 - 1) <= 0x3FF )
      v27 = v19;
    *(_QWORD *)(a3 + 8 * v26 + 40) = v8 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v27 - 1) & 0x3FF;
    v28 = *(_DWORD *)(a3 + 28);
    *(_QWORD *)(a3 + 32) += v27;
    v26 = (unsigned int)(v28 + 1);
    v8 += v27 << 12;
    *(_DWORD *)(a3 + 28) = v26;
    v19 -= v27;
    if ( v19 && (_DWORD)v26 == *(_DWORD *)(a3 + 12) )
      goto LABEL_12;
  }
LABEL_48:
  LOBYTE(v34) = -1;
  v35 = (v4 >> 12) & 0xFFFFFFFFFFLL;
  if ( v35 <= qword_140E2D920 )
  {
    v34 = *(_QWORD *)(48 * v35 - 0x21FFFFFFFFD8LL);
    if ( (v34 & 0x40000000000000LL) != 0 )
    {
      v36 = 48 * v35 - 0x220000000000LL;
      LODWORD(v43) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v43);
        while ( *(__int64 *)(v36 + 24) < 0 );
      }
      v34 = MiCaptureDirtyBitToPfn(v36);
      if ( v34 )
      {
        v37 = *(struct _KEVENT **)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v36 + 40) >> 43) & 0x3FFLL));
        _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v34) = MiReleasePageFileInfo(v37, v34, 1LL);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  return v34;
}
