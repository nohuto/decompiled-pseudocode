/*
 * XREFs of MiAgePte @ 0x1402FE880
 * Callers:
 *     <none>
 * Callees:
 *     MiAcquirePrcbAgeTrimLists @ 0x14029CE20 (MiAcquirePrcbAgeTrimLists.c)
 *     MiGetPagePrivilege @ 0x1402F9878 (MiGetPagePrivilege.c)
 *     MiDemoteCombinedPte @ 0x1402FE120 (MiDemoteCombinedPte.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x1402FE650 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1402FE7B0 (MiLockWorkingSetCoreExclusive.c)
 *     MiAgePteWorker @ 0x1402FF060 (MiAgePteWorker.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiPeriodicGoodCitizen @ 0x140313E40 (MiPeriodicGoodCitizen.c)
 */

__int64 __fastcall MiAgePte(__int64 a1, unsigned __int64 a2, int a3)
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
  unsigned int v18; // ebx
  int v19; // esi
  __int64 v20; // r15
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rsi
  _QWORD *v24; // rbp
  __int64 v25; // r8
  int v26; // edx
  __int64 v27; // rbx
  int v28; // ecx
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rcx
  int PagePrivilege; // eax
  _DWORD *v35; // rcx
  __int64 v36; // rcx
  int v37; // eax
  unsigned __int64 v38; // rdx
  bool v39; // zf
  int v40; // r9d
  __int64 v41; // rdx
  __int64 HasShadow; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  char v47; // al
  _QWORD *v48; // rcx
  unsigned __int64 i; // rcx
  unsigned __int64 v50; // rax
  unsigned int v51; // [rsp+30h] [rbp-58h]
  __int64 v52; // [rsp+38h] [rbp-50h]
  __int64 v53; // [rsp+40h] [rbp-48h]

  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 184);
  v7 = a2;
  v52 = v3;
  v8 = a1;
  v9 = a2;
  v53 = *(_QWORD *)(v3 + 16);
  if ( *(_BYTE *)(v5 + 6) )
  {
    *(_BYTE *)(v5 + 6) = 0;
    v53 = *(_QWORD *)(v3 + 16);
    v10 = *(_QWORD *)(v53 + 32);
    v11 = *(_QWORD *)(v3 + 152);
    if ( v11 <= v10 )
      return 4LL;
    v12 = v11 - v10;
    v13 = *(unsigned int *)(v5 + 12);
    v14 = (unsigned int *)(*(_QWORD *)(v3 + 16) + 2 * (~(unsigned __int8)*(_DWORD *)v5 & 2 | 0xCLL));
    MiLockWorkingSetCoreExclusive(v3);
    v15 = *v14;
    MiUnlockWorkingSetCoreExclusive(v52);
    v16 = 0LL;
    if ( v15 + v12 >= v12 )
      v16 = (unsigned int)v15;
    v17 = v13 * (v12 + v16) / 0x3E8;
    if ( v17 > v12 )
      v17 = v12 * (unsigned int)v13 / 0x3E8;
    v18 = *(_DWORD *)(v5 + 12);
    v19 = *(_DWORD *)v5;
    v20 = *(_QWORD *)(v52 + 16);
    MiLockWorkingSetCoreExclusive(v52);
    if ( (v19 & 2) != 0 )
      *(_DWORD *)(v20 + 24) = (v12 + *(unsigned int *)(v20 + 24)) % v18;
    else
      *(_DWORD *)(v20 + 28) = (v12 + *(unsigned int *)(v20 + 28)) % v18;
    MiUnlockWorkingSetCoreExclusive(v52);
    *(_QWORD *)(v5 + 48) = v17;
    if ( *(_QWORD *)(v5 + 40) >= v17 )
      return 4LL;
    v8 = a1;
    v4 = 0;
    v3 = v52;
    v7 = a2;
  }
  v51 = ((*(_DWORD *)v5 & 2) != 0) + 1;
  if ( !a3 )
  {
    v7 = *(_QWORD *)(v8 + 128);
    if ( v7 > (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088 )
      v7 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  }
  v21 = 0xFFFFF68000000000uLL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v9 > v7 )
        goto LABEL_64;
      v22 = *(_QWORD *)v9;
      if ( v9 >= 0xFFFFF6FB7DBED000uLL
        && v9 <= 0xFFFFF6FB7DBED7F8uLL
        && (v22 & 1) != 0
        && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0)
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
              v31 = *(_QWORD *)(KernelWaitTime + 8 * ((v9 >> 3) & 0x1FF));
              if ( (v31 & 0x20) != 0 )
                v22 |= 0x20uLL;
              v32 = v22;
              v22 |= 0x42uLL;
              if ( (v31 & 0x42) == 0 )
                v22 = v32;
            }
          }
        }
      }
      if ( (v22 & 1) != 0 )
        break;
LABEL_28:
      v3 = v52;
      v9 += 8LL;
    }
    v23 = (__int64)(v9 << 25) >> 16;
    if ( a3 || (HIBYTE(v22) & 0xFu) < 8 )
      break;
    v9 += 8LL;
  }
  ++*(_QWORD *)(v5 + 40);
  v24 = (_QWORD *)(48 * ((v22 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  if ( a3 )
  {
    v36 = 0x3FFFFFFFFFFFFFFFLL;
    if ( (v24[3] & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      goto LABEL_63;
    v37 = *(_DWORD *)(v3 + 184);
    if ( v9 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v47 = v37 & 0xF;
      if ( v47 )
      {
        if ( v47 == 7 )
        {
          v39 = unk_140E2E920 == 0LL;
        }
        else
        {
          v48 = &unk_140E2E930;
          if ( v47 == 5 )
            v48 = &unk_140E2E918;
          v39 = *v48 == 0LL;
        }
      }
      else
      {
        v39 = *(_QWORD *)(v3 + 176) == 0LL;
      }
    }
    else if ( (v37 & 0xF) != 0
           || v9 < 0xFFFFF6FB7DBED000uLL
           || v9 > 0xFFFFF6FB7DBEDFFFuLL
           || (v36 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[6].Count) == 0 )
    {
      if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0 && v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v50 = 2 * (unsigned int)((__int64)(v9 + 0x90482413000LL) >> 3);
        v39 = ((*(_DWORD *)&stru_140E2D930.PriorityFloorCounts[4 * (v50 >> 5) + 4] >> (v50 & 0x1F)) & 1) == 0;
      }
      else
      {
        v38 = *(_QWORD *)v9;
        if ( v9 >= 0xFFFFF6FB7DBED000uLL
          && v9 <= 0xFFFFF6FB7DBED7F8uLL
          && (v38 & 1) != 0
          && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
        {
          HasShadow = MiPteHasShadow(v36, v38, 0xFFFFF6FB7DBED000uLL);
          if ( HasShadow )
          {
            v44 = *(_QWORD *)(HasShadow + 1288);
            if ( v44 )
            {
              v45 = *(_QWORD *)(v44 + 8 * ((v9 >> 3) & 0x1FF));
              if ( (v45 & 0x20) != 0 )
                v38 |= 0x20uLL;
              v46 = v38;
              v38 |= 0x42uLL;
              if ( (v45 & 0x42) == 0 )
                v38 = v46;
            }
          }
        }
        v39 = (v38 & 0x1000000000000000LL) == 0;
      }
    }
    else
    {
      v39 = *(_DWORD *)(v36 + 4 * ((v9 >> 3) & 0x1FF)) == 0;
    }
    if ( !v39 )
    {
LABEL_63:
      v9 += 8LL;
LABEL_64:
      v40 = 0;
      goto LABEL_65;
    }
  }
  v25 = v24[1];
  if ( v25 > 0
    && (v24[5] & 0x10000000000LL) == 0
    && (unsigned int)MiDemoteCombinedPte(v3, v9, v25 | 0x8000000000000000uLL) )
  {
    v22 = *(_QWORD *)v9;
  }
  if ( (v22 & 0x20) != 0 && *(_QWORD *)(v5 + 72) )
  {
    v33 = v52;
    if ( (*(_DWORD *)(v52 + 184) & 0xF) != 0 )
    {
      if ( (MiGetPagePrivilege((_QWORD *)(48 * ((v22 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL), 2LL, 0LL) & 0x41) != 0 )
      {
        v33 = v52;
        goto LABEL_50;
      }
      goto LABEL_22;
    }
    if ( v23 < 0x7FFFFFFF0000LL )
    {
      if ( *(_QWORD *)(v52 + 624) )
      {
LABEL_50:
        if ( *(_QWORD *)(v5 + 72) == 1LL )
          MiAcquirePrcbAgeTrimLists(v33, (__int64 *)(v5 + 56));
        v35 = *(_DWORD **)(v5 + 72);
        v27 = a1;
        *(_QWORD *)&v35[2 * (*v35)++ + 2] = v23 & 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_26;
      }
      PagePrivilege = MiGetPagePrivilege((_QWORD *)(48 * ((v22 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL), 2LL, 0LL);
      if ( !PagePrivilege )
        goto LABEL_22;
      if ( (*(_BYTE *)(v52 - 656) & 1) != 0 || (PagePrivilege & 8) == 0 )
      {
        v33 = v52;
        goto LABEL_50;
      }
    }
  }
  v26 = 0;
  if ( (v22 & 0x20) != 0 )
LABEL_22:
    v26 = 1;
  v27 = a1;
  v28 = v26 | 2;
  if ( (*(_BYTE *)v5 & 3) == 0 )
    v28 = v26;
  MiAgePteWorker(a1, v9, v23, (_DWORD)v24, v5, v28);
LABEL_26:
  if ( (*(_BYTE *)(v5 + 40) & 0x7F) != 0 || !(unsigned int)MiPeriodicGoodCitizen(v27, v9, 1LL) )
  {
    v21 = 0xFFFFF68000000000uLL;
    if ( *(_QWORD *)(v5 + 40) >= *(_QWORD *)(v5 + 48) )
      goto LABEL_63;
    goto LABEL_28;
  }
  v40 = 1;
  v21 = 0xFFFFF68000000000uLL;
  v9 += 8LL;
LABEL_65:
  v41 = *(_QWORD *)(a1 + 160) + (unsigned int)((__int64)(v9 - a2) >> 3) - 1;
  *(_DWORD *)(a1 + 12) = ((__int64)(v9 - a2) >> 3) - 1;
  *(_QWORD *)(a1 + 160) = v41;
  if ( v40 )
    *(_QWORD *)(a1 + 160) = v41 | *(unsigned __int8 *)(a1 + 8);
  if ( a3 )
  {
    v9 = (__int64)(((v9 - 8) << 25) - (v21 << 25) + 0x10000000) >> 16;
    for ( i = (__int64)((v9 << 25) - (v21 << 25)) >> 16; i >= v21; i = (__int64)((i << 25) - (v21 << 25)) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v9 = i;
    }
  }
  *(_QWORD *)(v53 + 8LL * v51) = v9;
  if ( *(_QWORD *)(v5 + 40) >= *(_QWORD *)(v5 + 48) )
    return 4;
  return v4;
}
