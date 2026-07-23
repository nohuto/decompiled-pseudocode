/*
 * XREFs of MiAgePte @ 0x1402E0900
 * Callers:
 *     <none>
 * Callees:
 *     MiAcquirePrcbAgeTrimLists @ 0x14029C380 (MiAcquirePrcbAgeTrimLists.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiDemoteCombinedPte @ 0x1402E01A0 (MiDemoteCombinedPte.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x1402E06D0 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1402E0830 (MiLockWorkingSetCoreExclusive.c)
 *     MiAgePteWorker @ 0x1402E10E0 (MiAgePteWorker.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiPeriodicGoodCitizen @ 0x140315E70 (MiPeriodicGoodCitizen.c)
 */

__int64 __fastcall MiAgePte(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // r15d
  __int64 v5; // r12
  unsigned __int64 v7; // r14
  __int64 v8; // r8
  ULONG_PTR v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r14
  __int64 v13; // rsi
  unsigned int *v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rbp
  unsigned __int64 v17; // rbp
  unsigned __int128 v18; // rax
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rbp
  unsigned int v21; // ebx
  int v22; // esi
  __int64 v23; // r15
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rsi
  _QWORD *v27; // rbp
  __int64 v28; // r8
  int v29; // edx
  __int64 v30; // rbx
  int v31; // ecx
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rcx
  int PagePrivilege; // eax
  _DWORD *v38; // rcx
  __int64 v39; // rcx
  int v40; // eax
  unsigned __int64 v41; // rdx
  bool v42; // zf
  int v43; // r9d
  __int64 v44; // rdx
  __int64 HasShadow; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  char v50; // al
  _QWORD *v51; // rcx
  unsigned __int64 i; // rcx
  unsigned __int64 v53; // rax
  unsigned int v54; // [rsp+30h] [rbp-58h]
  __int64 v55; // [rsp+38h] [rbp-50h]
  __int64 v56; // [rsp+40h] [rbp-48h]

  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 184);
  v7 = a2;
  v55 = v3;
  v8 = a1;
  v9 = a2;
  v56 = *(_QWORD *)(v3 + 16);
  if ( *(_BYTE *)(v5 + 6) )
  {
    *(_BYTE *)(v5 + 6) = 0;
    v56 = *(_QWORD *)(v3 + 16);
    v10 = *(_QWORD *)(v56 + 32);
    v11 = *(_QWORD *)(v3 + 152);
    if ( v11 <= v10 )
      return 4LL;
    v12 = v11 - v10;
    v13 = *(unsigned int *)(v5 + 12);
    v14 = (unsigned int *)(*(_QWORD *)(v3 + 16) + 2 * (~(unsigned __int8)*(_DWORD *)v5 & 2 | 0xCLL));
    MiLockWorkingSetCoreExclusive(v3, a2, a1);
    v15 = *v14;
    MiUnlockWorkingSetCoreExclusive(v55);
    v16 = 0LL;
    if ( v15 + v12 >= v12 )
      v16 = (unsigned int)v15;
    v17 = v13 * (v12 + v16);
    v18 = v17 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
    v19 = v17 / 0x3E8;
    if ( v19 > v12 )
    {
      v20 = v12 * (unsigned int)v13;
      v18 = v20 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
      v19 = v20 / 0x3E8;
    }
    v21 = *(_DWORD *)(v5 + 12);
    v22 = *(_DWORD *)v5;
    v23 = *(_QWORD *)(v55 + 16);
    MiLockWorkingSetCoreExclusive(v55, *((__int64 *)&v18 + 1), 0x624DD2F1A9FBE77LL);
    if ( (v22 & 2) != 0 )
      *(_DWORD *)(v23 + 24) = (v12 + *(unsigned int *)(v23 + 24)) % v21;
    else
      *(_DWORD *)(v23 + 28) = (v12 + *(unsigned int *)(v23 + 28)) % v21;
    MiUnlockWorkingSetCoreExclusive(v55);
    *(_QWORD *)(v5 + 48) = v19;
    if ( *(_QWORD *)(v5 + 40) >= v19 )
      return 4LL;
    v8 = a1;
    v4 = 0;
    v3 = v55;
    v7 = a2;
  }
  v54 = ((*(_DWORD *)v5 & 2) != 0) + 1;
  if ( !a3 )
  {
    v7 = *(_QWORD *)(v8 + 128);
    if ( v7 > (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088 )
      v7 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  }
  v24 = 0xFFFFF68000000000uLL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v9 > v7 )
        goto LABEL_64;
      v25 = *(_QWORD *)v9;
      if ( v9 >= 0xFFFFF6FB7DBED000uLL
        && v9 <= 0xFFFFF6FB7DBED7F8uLL
        && (v25 & 1) != 0
        && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0)
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
              v34 = *(_QWORD *)(KernelWaitTime + 8 * ((v9 >> 3) & 0x1FF));
              if ( (v34 & 0x20) != 0 )
                v25 |= 0x20uLL;
              v35 = v25;
              v25 |= 0x42uLL;
              if ( (v34 & 0x42) == 0 )
                v25 = v35;
            }
          }
        }
      }
      if ( (v25 & 1) != 0 )
        break;
LABEL_28:
      v3 = v55;
      v9 += 8LL;
    }
    v26 = (__int64)(v9 << 25) >> 16;
    if ( a3 || (HIBYTE(v25) & 0xFu) < 8 )
      break;
    v9 += 8LL;
  }
  ++*(_QWORD *)(v5 + 40);
  v27 = (_QWORD *)(48 * ((v25 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  if ( a3 )
  {
    v39 = 0x3FFFFFFFFFFFFFFFLL;
    if ( (v27[3] & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      goto LABEL_63;
    v40 = *(_DWORD *)(v3 + 184);
    if ( v9 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v50 = v40 & 0xF;
      if ( v50 )
      {
        if ( v50 == 7 )
        {
          v42 = unk_140E2EAA0 == 0LL;
        }
        else
        {
          v51 = &unk_140E2EAB0;
          if ( v50 == 5 )
            v51 = &unk_140E2EA98;
          v42 = *v51 == 0LL;
        }
      }
      else
      {
        v42 = *(_QWORD *)(v3 + 176) == 0LL;
      }
    }
    else if ( (v40 & 0xF) != 0
           || v9 < 0xFFFFF6FB7DBED000uLL
           || v9 > 0xFFFFF6FB7DBEDFFFuLL
           || (v39 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
    {
      if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0 && v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v53 = 2 * (unsigned int)((__int64)(v9 + 0x90482413000LL) >> 3);
        v42 = ((*(_DWORD *)&stru_140E2DAB0.PriorityFloorCounts[4 * (v53 >> 5) + 4] >> (v53 & 0x1F)) & 1) == 0;
      }
      else
      {
        v41 = *(_QWORD *)v9;
        if ( v9 >= 0xFFFFF6FB7DBED000uLL
          && v9 <= 0xFFFFF6FB7DBED7F8uLL
          && (v41 & 1) != 0
          && ((v41 & 0x20) == 0 || (v41 & 0x42) == 0) )
        {
          HasShadow = MiPteHasShadow(v39, v41, 0xFFFFF6FB7DBED000uLL);
          if ( HasShadow )
          {
            v47 = *(_QWORD *)(HasShadow + 1288);
            if ( v47 )
            {
              v48 = *(_QWORD *)(v47 + 8 * ((v9 >> 3) & 0x1FF));
              if ( (v48 & 0x20) != 0 )
                v41 |= 0x20uLL;
              v49 = v41;
              v41 |= 0x42uLL;
              if ( (v48 & 0x42) == 0 )
                v41 = v49;
            }
          }
        }
        v42 = (v41 & 0x1000000000000000LL) == 0;
      }
    }
    else
    {
      v42 = *(_DWORD *)(v39 + 4 * ((v9 >> 3) & 0x1FF)) == 0;
    }
    if ( !v42 )
    {
LABEL_63:
      v9 += 8LL;
LABEL_64:
      v43 = 0;
      goto LABEL_65;
    }
  }
  v28 = v27[1];
  if ( v28 > 0
    && (v27[5] & 0x10000000000LL) == 0
    && (unsigned int)MiDemoteCombinedPte(v3, v9, v28 | 0x8000000000000000uLL) )
  {
    v25 = *(_QWORD *)v9;
  }
  if ( (v25 & 0x20) != 0 && *(_QWORD *)(v5 + 72) )
  {
    v36 = v55;
    if ( (*(_DWORD *)(v55 + 184) & 0xF) != 0 )
    {
      if ( (MiGetPagePrivilege((_QWORD *)(48 * ((v25 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL), 2LL, 0LL) & 0x41) != 0 )
      {
        v36 = v55;
        goto LABEL_50;
      }
      goto LABEL_22;
    }
    if ( v26 < 0x7FFFFFFF0000LL )
    {
      if ( *(_QWORD *)(v55 + 624) )
      {
LABEL_50:
        if ( *(_QWORD *)(v5 + 72) == 1LL )
          MiAcquirePrcbAgeTrimLists(v36, (__int64 *)(v5 + 56));
        v38 = *(_DWORD **)(v5 + 72);
        v30 = a1;
        *(_QWORD *)&v38[2 * (*v38)++ + 2] = v26 & 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_26;
      }
      PagePrivilege = MiGetPagePrivilege((_QWORD *)(48 * ((v25 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL), 2LL, 0LL);
      if ( !PagePrivilege )
        goto LABEL_22;
      if ( (*(_BYTE *)(v55 - 656) & 1) != 0 || (PagePrivilege & 8) == 0 )
      {
        v36 = v55;
        goto LABEL_50;
      }
    }
  }
  v29 = 0;
  if ( (v25 & 0x20) != 0 )
LABEL_22:
    v29 = 1;
  v30 = a1;
  v31 = v29 | 2;
  if ( (*(_BYTE *)v5 & 3) == 0 )
    v31 = v29;
  MiAgePteWorker(a1, v9, v26, (_DWORD)v27, v5, v31);
LABEL_26:
  if ( (*(_BYTE *)(v5 + 40) & 0x7F) != 0 || !(unsigned int)MiPeriodicGoodCitizen(v30, v9, 1LL) )
  {
    v24 = 0xFFFFF68000000000uLL;
    if ( *(_QWORD *)(v5 + 40) >= *(_QWORD *)(v5 + 48) )
      goto LABEL_63;
    goto LABEL_28;
  }
  v43 = 1;
  v24 = 0xFFFFF68000000000uLL;
  v9 += 8LL;
LABEL_65:
  v44 = *(_QWORD *)(a1 + 160) + (unsigned int)((__int64)(v9 - a2) >> 3) - 1;
  *(_DWORD *)(a1 + 12) = ((__int64)(v9 - a2) >> 3) - 1;
  *(_QWORD *)(a1 + 160) = v44;
  if ( v43 )
    *(_QWORD *)(a1 + 160) = v44 | *(unsigned __int8 *)(a1 + 8);
  if ( a3 )
  {
    v9 = (__int64)(((v9 - 8) << 25) - (v24 << 25) + 0x10000000) >> 16;
    for ( i = (__int64)((v9 << 25) - (v24 << 25)) >> 16; i >= v24; i = (__int64)((i << 25) - (v24 << 25)) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v9 = i;
    }
  }
  *(_QWORD *)(v56 + 8LL * v54) = v9;
  if ( *(_QWORD *)(v5 + 40) >= *(_QWORD *)(v5 + 48) )
    return 4;
  return v4;
}
