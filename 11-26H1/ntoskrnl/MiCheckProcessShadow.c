/*
 * XREFs of MiCheckProcessShadow @ 0x1402B2E70
 * Callers:
 *     MiUnlockWorkingSetExclusive @ 0x14027E758 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiReleaseFaultState @ 0x14038DD90 (MiReleaseFaultState.c)
 *     MmCheckProcessShadow @ 0x1404E5E90 (MmCheckProcessShadow.c)
 * Callees:
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x1402B3438 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 *     MiLockPageTableInternal @ 0x1402B34E0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiCheckRelevantKernelShadows @ 0x14040D30C (MiCheckRelevantKernelShadows.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckProcessShadow(__int64 a1, unsigned int a2)
{
  int v4; // ecx
  bool v5; // zf
  unsigned __int64 v6; // r14
  ULONG_PTR i; // rdx
  __int64 v8; // rbp
  unsigned __int8 v9; // al
  __int64 *v10; // rax
  __int64 v11; // r8
  unsigned int *MmInternal; // rcx
  __int64 v13; // rax
  struct _KPRCB *CurrentPrcb; // r8
  char v15; // al
  unsigned int v16; // ecx
  _KLOCK_QUEUE_HANDLE *v17; // r8
  ULONG_PTR v19; // r8
  int v20; // r10d
  unsigned __int64 v21; // r11
  ULONG_PTR v22; // r9
  __int64 HasShadow; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  ULONG_PTR v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  ULONG_PTR v30; // rcx
  ULONG_PTR BugCheckParameter4; // r9
  unsigned int v32; // r10d
  unsigned __int64 v33; // r14
  ULONG_PTR v34; // r9
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  ULONG_PTR v38; // rcx
  __int64 v39; // rax
  unsigned __int64 v40; // r11
  __int64 v41; // rax
  __int64 v42; // rax
  ULONG_PTR v43; // rcx

  if ( (MiFlags & 0x1800000) == 0 || (*(_DWORD *)(a1 + 184) & 0xF) != 0 || *(_BYTE *)(a1 - 672) == 1 )
    return 0xFFFFFFFFLL;
  v4 = a2 & 4;
  if ( (a2 & 4) != 0 )
  {
    v5 = (*(_DWORD *)(a1 - 524) & 0x4000000) == 0;
    v6 = *(_QWORD *)(a1 + 264);
  }
  else
  {
    if ( (__rdtsc() & 0x3FF0) != 0 )
      return 0xFFFFFFFFLL;
    v6 = *(_QWORD *)(a1 + 264);
    v5 = v6 == 0;
  }
  if ( v5 || !*(_QWORD *)(a1 + 16) || !*(_QWORD *)(a1 + 24) )
    return 0xFFFFFFFFLL;
  i = a2 & 2;
  if ( v4 )
  {
    if ( (a2 & 1) != 0 )
      MiLockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
    v9 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v9 == 5 || v9 <= 4u )
    {
      if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
        v10 = &qword_140E37800;
      else
        v10 = (__int64 *)(a1 + 192);
      v11 = *v10;
      if ( (_DWORD)i )
      {
        for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
        {
          if ( (*(_DWORD *)(((unsigned __int64)(unsigned int)i << 6) + v11) & 0x40000000) != 0 )
            return 0xFFFFFFFFLL;
        }
      }
      else
      {
        MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
        if ( MmInternal )
          v13 = MmInternal[81];
        else
          v13 = 0LL;
        if ( (*(_DWORD *)((v13 << 6) + v11) & 0x40000000) != 0 )
          return 0xFFFFFFFFLL;
      }
    }
    if ( (a2 & 1) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = *(_DWORD *)(a1 + 184) & 0xF;
      if ( v15 )
      {
        if ( v15 == 7 )
        {
          v16 = 1;
          i = (ULONG_PTR)&unk_140E2E918 + 8;
        }
        else
        {
          v16 = 3;
          if ( v15 == 5 )
            v16 = 0;
          i = (ULONG_PTR)&unk_140E2E918 + 8 * v16;
        }
      }
      else
      {
        v16 = 2;
        i = a1 + 176;
      }
      v17 = &CurrentPrcb->SelfmapLockHandle[v16];
      v17->LockQueue.Lock = (unsigned __int64 *volatile)i;
      v17->LockQueue.Next = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      {
        _m_prefetchw((const void *)i);
        if ( *(_QWORD *)i || _InterlockedCompareExchange64((volatile signed __int64 *)i, (signed __int64)v17, 0LL) )
        {
          _mm_pause();
          return 0xFFFFFFFFLL;
        }
      }
      else if ( !(unsigned int)KiTryToAcquireQueuedSpinLockInstrumented(v17) )
      {
        return 0xFFFFFFFFLL;
      }
    }
  }
  v19 = 0xFFFFF6FB7DBED000uLL;
  v20 = 256;
  v21 = 0x8000000000000000uLL;
  while ( v20 )
  {
    i = *(_QWORD *)v19;
    if ( v19 >= 0xFFFFF6FB7DBED000uLL
      && v19 <= 0xFFFFF6FB7DBED7F8uLL
      && (i & 1) != 0
      && ((i & 0x20) == 0 || (i & 0x42) == 0) )
    {
      HasShadow = MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, i, v19);
      if ( HasShadow )
      {
        v24 = *(_QWORD *)(HasShadow + 1288);
        if ( v24 )
        {
          v25 = *(_QWORD *)(v24 + 8 * ((v19 >> 3) & 0x1FF));
          if ( (v25 & 0x20) != 0 )
            i |= 0x20uLL;
          v26 = i;
          i |= 0x42uLL;
          if ( (v25 & 0x42) == 0 )
            i = v26;
        }
      }
    }
    v22 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBED7F8uLL
      && (v22 & 1) != 0
      && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
    {
      v27 = MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, i, v19);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 1288);
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 8 * ((v6 >> 3) & 0x1FF));
          if ( (v29 & 0x20) != 0 )
            v22 |= 0x20uLL;
          v30 = v22;
          v22 |= 0x42uLL;
          if ( (v29 & 0x42) == 0 )
            v22 = v30;
        }
      }
    }
    if ( (i & 1) != 0 )
    {
      i = i & 0xCFFFFFFFFFFFFFDFuLL | 0x20;
      if ( !BYTE5(stru_140E2D930.Header.WaitListHead.Blink) )
        v22 |= v21;
      BugCheckParameter4 = v22 | 0x20;
      if ( i != BugCheckParameter4 )
      {
        if ( (a2 & 8) == 0 )
          KeBugCheckEx(0x1Au, 0x1300uLL, v19, i, BugCheckParameter4);
        goto LABEL_115;
      }
    }
    else if ( v22 )
    {
      if ( (a2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x1301uLL, v19, v22, v22);
      goto LABEL_115;
    }
    v19 += 8LL;
    v6 += 8LL;
    ++v8;
    --v20;
  }
  v32 = 512 - (((unsigned int)v19 >> 3) & 0x1FF);
  v33 = v6 - v19;
  while ( v32 )
  {
    v34 = *(_QWORD *)v19;
    if ( v19 >= 0xFFFFF6FB7DBED000uLL
      && v19 <= 0xFFFFF6FB7DBED7F8uLL
      && (v34 & 1) != 0
      && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
    {
      v35 = MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, i, v19);
      if ( v35 )
      {
        v36 = *(_QWORD *)(v35 + 1288);
        if ( v36 )
        {
          v37 = *(_QWORD *)(v36 + 8 * ((v19 >> 3) & 0x1FF));
          if ( (v37 & 0x20) != 0 )
            v34 |= 0x20uLL;
          v38 = v34;
          v34 |= 0x42uLL;
          if ( (v37 & 0x42) == 0 )
            v34 = v38;
        }
      }
    }
    i = *(_QWORD *)(v33 + v19);
    if ( v33 + v19 >= 0xFFFFF6FB7DBED000uLL
      && v33 + v19 <= 0xFFFFF6FB7DBED7F8uLL
      && (i & 1) != 0
      && ((i & 0x20) == 0 || (i & 0x42) == 0) )
    {
      v39 = MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, i, v19);
      if ( v39 )
      {
        v41 = *(_QWORD *)(v39 + 1288);
        if ( v41 )
        {
          v42 = *(_QWORD *)(v41 + 8 * ((v40 >> 3) & 0x1FF));
          if ( (v42 & 0x20) != 0 )
            i |= 0x20uLL;
          v43 = i;
          i |= 0x42uLL;
          if ( (v42 & 0x42) == 0 )
            i = v43;
        }
      }
    }
    if ( (v34 & 1) != 0 && (v34 & 4) != 0 )
    {
      if ( (a2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x1304uLL, v19, v34, i);
      break;
    }
    if ( (i & 1) != 0 && (i & 4) != 0 )
    {
      if ( (a2 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x1305uLL, v19, v34, i);
      break;
    }
    v19 += 8LL;
    ++v8;
    --v32;
  }
  if ( (v19 & 0xFFF) == 0 )
    v8 = 0xFFFFFFFFLL;
LABEL_115:
  if ( (a2 & 1) != 0 )
    MiUnlockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL);
  if ( v8 == 0xFFFFFFFFLL && (a2 & 0x10) != 0 )
    return MiCheckRelevantKernelShadows(a2);
  return v8;
}
