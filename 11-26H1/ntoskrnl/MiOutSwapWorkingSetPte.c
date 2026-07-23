/*
 * XREFs of MiOutSwapWorkingSetPte @ 0x140295DB0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiTransferSoftwarePte @ 0x140296D90 (MiTransferSoftwarePte.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031CE60 (MiCaptureDirtyBitToPfn.c)
 *     MiLockTransitionLeafPageEx @ 0x1403400D0 (MiLockTransitionLeafPageEx.c)
 *     MiReservePageFileSpaceForPage @ 0x14036944C (MiReservePageFileSpaceForPage.c)
 */

__int64 __fastcall MiOutSwapWorkingSetPte(__int64 a1, ULONG_PTR a2, int a3)
{
  __int64 v3; // r13
  unsigned __int64 v5; // rdi
  char v6; // r14
  ULONG_PTR v7; // r15
  ULONG_PTR v8; // r8
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rbx
  unsigned __int64 v24; // rax
  _QWORD *v25; // rbx
  __int64 HasShadow; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // r10
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  int v35; // eax
  __int64 v36; // r8
  __int64 v37; // r9
  char v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  __int64 *v42; // r8
  __int64 v43; // r12
  __int64 *v44; // rcx
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rcx
  bool v50; // zf
  unsigned __int64 v51; // [rsp+20h] [rbp-58h] BYREF
  __int64 v52; // [rsp+28h] [rbp-50h]
  unsigned __int64 v53; // [rsp+30h] [rbp-48h]
  __int64 v54; // [rsp+80h] [rbp+8h]
  int v55; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v56; // [rsp+98h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 184);
  v53 = *(_QWORD *)(v3 + 16);
  if ( a3 )
    return 0LL;
  v5 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v6 = 0;
  v7 = 0LL;
  v8 = 0xFFFFF6FB7DBED7F8uLL;
  v52 = *(_QWORD *)(v3 + 24);
  v56 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  while ( 1 )
  {
    v9 = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (v9 & 1) != 0
      && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
    {
      HasShadow = MiPteHasShadow(a1, *(_QWORD *)a2, 0xFFFFF6FB7DBED7F8uLL);
      if ( HasShadow )
      {
        v28 = *(_QWORD *)(HasShadow + 1288);
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v29 & 0x20) != 0 )
            v27 |= 0x20uLL;
          v9 = v27 | 0x42;
          if ( (v29 & 0x42) == 0 )
            v9 = v27;
        }
      }
    }
    v51 = v9;
    if ( (v9 & 1) != 0 )
      break;
    if ( (v9 & 0x400) != 0 )
    {
      v21 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      goto LABEL_20;
    }
    if ( (v9 & 0x800) == 0 )
    {
      if ( (v9 & 4) == 0 )
      {
        v18 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        goto LABEL_17;
      }
      v10 = v51;
      v5 = v9;
      v56 = v9;
      v11 = 0xFFFFF6FB7DBED000uLL;
      if ( (unsigned __int64)&v51 >= 0xFFFFF6FB7DBED000uLL )
      {
        v11 = v8;
        if ( (unsigned __int64)&v51 <= v8 )
        {
          v11 = v51;
          if ( (v51 & 1) != 0 && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process->AddressPolicy != 1 )
            {
              KernelWaitTime = Process[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v32 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)&v51 >> 3) & 0x1FF));
                if ( (v32 & 0x20) != 0 )
                  v11 = v51 | 0x20;
                v10 = v11 | 0x42;
                if ( (v32 & 0x42) == 0 )
                  v10 = v11;
              }
            }
          }
        }
      }
      v51 = v10 & 0xFFFFFFFFFFFFFFFBuLL;
      v12 = v10 & 0xFFFFFFFFFFFFFFFBuLL;
      v53 = v10 & 0xFFFFFFFFFFFFFFFBuLL;
      if ( a2 < 0xFFFFF6FB7DBED000uLL || a2 > v8 )
      {
LABEL_10:
        v13 = 0LL;
      }
      else
      {
        if ( !MiPteHasShadow(v11, v12, v8) )
        {
          v11 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( (*(_DWORD *)(v11 + 1532) & 0x1000) != 0 && (v53 & 1) != 0 )
          {
            v11 = 0x8000000000000000uLL;
            v12 = v53 | 0x8000000000000000uLL;
          }
          goto LABEL_10;
        }
        v13 = 1LL;
        if ( !BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink) && (v53 & 1) != 0 )
        {
          v11 = 0x8000000000000000uLL;
          v12 = v53 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)a2 = v12;
      if ( (_DWORD)v13 && (v14 = MiPteHasShadow(v11, v12, v13)) != 0 )
      {
        v17 = *(_QWORD *)(v14 + 1288);
        v18 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        if ( v17 )
        {
          v19 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          v20 = (a2 >> 3) & 0x1FF;
          if ( (v15 & 1) != 0 )
            v19 = v16 & v15;
          *(_QWORD *)(v17 + 8 * v20) = v19;
        }
      }
      else
      {
        v18 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      }
LABEL_17:
      v21 = v18;
LABEL_18:
      if ( (v6 & 1) == 0 )
        goto LABEL_20;
      goto LABEL_19;
    }
    v33 = MiLockTransitionLeafPageEx(a2);
    v8 = 0xFFFFF6FB7DBED7F8uLL;
    v7 = v33;
    if ( v33 )
    {
      v6 = 1;
      v21 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      if ( (*(_BYTE *)(v33 + 34) & 0x28) == 0 )
      {
        v34 = *(_QWORD *)(v33 + 16);
        v18 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        if ( (v34 & 4) != 0 )
        {
          v5 = v34;
          v56 = v34;
          v35 = *(_DWORD *)(v7 + 32);
          if ( (_WORD)v35 || (BYTE2(v35) & 7) != 3 )
          {
            *(_QWORD *)(v7 + 16) &= ~4uLL;
          }
          else
          {
            MiUnlinkPageFromListEx(v7);
            *(_QWORD *)(v7 + 16) &= ~4uLL;
            MiInsertPageInList(v7, 8LL, v36, v37);
          }
          goto LABEL_17;
        }
      }
LABEL_19:
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_20;
    }
  }
  v24 = (v9 >> 12) & 0xFFFFFFFFFFLL;
  v21 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( v24 <= qword_140E2D920 && (*(_QWORD *)(48 * v24 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
  {
    v7 = 48 * v24 - 0x220000000000LL;
    if ( *(__int64 *)(v7 + 40) < 0 )
    {
      v25 = *(_QWORD **)(v3 + 8);
      if ( !v25 )
        goto LABEL_20;
LABEL_90:
      v41 = v25[2];
      if ( v41 < v25[1] )
      {
        v42 = (__int64 *)(*v25 + 16 * v41);
        v43 = (__int64)(a2 << 25) >> 16;
        v44 = v42 - 2;
        if ( !v41 || *v44 + v44[1] != v43 )
        {
          v44 = (__int64 *)(*v25 + 16 * v41);
          v25[2] = v41 + 1;
          *v42 = v43;
          v42[1] = 0LL;
        }
        v44[1] += 4096LL;
        ++v25[3];
        if ( (v6 & 2) != 0 )
          ++*(_QWORD *)(v3 + 136);
        if ( (v6 & 4) != 0 )
        {
          ++*(_QWORD *)(v3 + 120);
        }
        else if ( (v6 & 8) != 0 )
        {
          ++*(_QWORD *)(v3 + 128);
        }
      }
      goto LABEL_18;
    }
    if ( (*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL) == a2 )
    {
      v38 = 1;
      v55 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v55);
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      v39 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      if ( (*(_BYTE *)(v7 + 34) & 8) != 0 )
        goto LABEL_19;
      if ( (*(_DWORD *)(v7 + 16) & 4) != 0 )
      {
        v5 = *(_QWORD *)(v7 + 16);
        v56 = v5;
        *(_QWORD *)(v7 + 16) = v5 & 0xFFFFFFFFFFFFFFFBuLL;
      }
      if ( !*(_DWORD *)(v3 + 144) )
      {
        if ( (unsigned __int16)*(_DWORD *)(v7 + 32) != 1 )
          goto LABEL_19;
        if ( (*(_DWORD *)(v53 + 184) & 0xF) == 0 )
        {
          if ( (MiGetWsleContents(0xFFFFF68000000000uLL, (__int64)(a2 << 25) >> 16) & 0xF) == 8 )
            goto LABEL_19;
          v39 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        }
      }
      if ( (v9 & 0x40) == 0 && (v9 & 2) == 0 && (*(_BYTE *)(v7 + 34) & 0x10) == 0 )
      {
        v21 = v39;
        if ( (*(_DWORD *)(v7 + 16) & 8) == 0 )
          goto LABEL_19;
        v38 = 3;
      }
      v21 = MiCaptureDirtyBitToPfn(v7);
      if ( (*(_DWORD *)(v7 + 32) & 0xC00000) != 0x400000 )
      {
        if ( (*(_DWORD *)(v7 + 32) & 0xC00000) == 0x800000 )
        {
          v38 |= 4u;
        }
        else if ( (*(_DWORD *)(v7 + 32) & 0xC00000) == 0 )
        {
          v38 |= 8u;
        }
      }
      if ( *(_DWORD *)(v3 + 32) == -1 )
        *(_QWORD *)(v7 + 16) = MiTransferSoftwarePte(
                                 *(_QWORD *)(v7 + 16),
                                 *(_QWORD *)(v52 + 8LL * *(unsigned int *)(v52 + 1300) + 22304),
                                 2LL,
                                 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v40 = *(unsigned int *)(v3 + 32);
      v6 = v38 & 0xFE;
      v25 = *(_QWORD **)v3;
      if ( (_DWORD)v40 != -1 )
      {
        v45 = v3 + 16 * v40 + 40;
        v54 = v45;
        if ( (unsigned int)v40 >= 5 || !*(_DWORD *)(v45 + 8) )
          goto LABEL_18;
        MiReservePageFileSpaceForPage(v52, a2, 128LL, v45);
        v46 = *(_QWORD *)v54;
        v47 = *(_QWORD *)v54;
        if ( qword_140E2D8C0 && (v46 & 0x10) == 0 )
          v47 = qword_140E2D8C8 & v46;
        v48 = HIDWORD(v47);
        if ( v46 && qword_140E2D8C0 )
        {
          if ( (v46 & 0x10) != 0 )
            LODWORD(v46) = v46 & 0xFFFFFFEF;
          else
            LODWORD(v46) = qword_140E2D8C8 & v46;
        }
        v49 = (unsigned int)v46 | ((unsigned __int64)(unsigned int)(v48 + 1) << 32);
        if ( qword_140E2D8C0 )
        {
          if ( (qword_140E2D8C0 & v49) != 0 )
            v49 |= 0x10uLL;
          else
            v49 |= qword_140E2D8C0;
        }
        v50 = (*(_DWORD *)(v54 + 8))-- == 1;
        *(_QWORD *)v54 = v49;
        if ( v50 )
          ++*(_DWORD *)(v3 + 32);
        v6 |= 0x10u;
      }
      goto LABEL_90;
    }
  }
LABEL_20:
  if ( v5 )
  {
    if ( (v5 & 8) != 0 )
    {
      v56 &= ~8uLL;
      v5 = v56;
    }
    v22 = v52;
    MiReleasePageFileInfo(v52, v5, 1LL);
  }
  else
  {
    v22 = v52;
  }
  if ( v21 )
    MiReleasePageFileInfo(v22, v21, 1LL);
  return 0LL;
}
