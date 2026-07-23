/*
 * XREFs of MiWalkPageTablesRecursively @ 0x140329110
 * Callers:
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x140329110 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiPeriodicGoodCitizen @ 0x140315E70 (MiPeriodicGoodCitizen.c)
 *     MiWalkPageTablesPrepareToDescend @ 0x140327B50 (MiWalkPageTablesPrepareToDescend.c)
 *     MiGetNextVad @ 0x140328048 (MiGetNextVad.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     MiWalkPageTablesRecursively @ 0x140329110 (MiWalkPageTablesRecursively.c)
 *     MiWalkPageTablesEvaluatePte @ 0x140329B60 (MiWalkPageTablesEvaluatePte.c)
 *     MiYieldPageTableWalk @ 0x140364BF0 (MiYieldPageTableWalk.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     MiWaitForFreePage @ 0x1403D4D84 (MiWaitForFreePage.c)
 *     MiMarkResumptionPoint @ 0x1404553E0 (MiMarkResumptionPoint.c)
 *     MiLockWorkingSetExclusiveAtDpc @ 0x1404BCA10 (MiLockWorkingSetExclusiveAtDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall MiWalkPageTablesRecursively(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  int v5; // r15d
  unsigned __int64 *v6; // rbp
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r13
  int v9; // eax
  unsigned __int64 v10; // rsi
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  int v15; // ecx
  unsigned int v16; // ecx
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // ecx
  unsigned __int64 *v21; // r9
  unsigned __int64 v22; // rdx
  int v23; // ecx
  __int64 v24; // rax
  int v25; // ecx
  unsigned __int64 LeafVa; // r14
  int v27; // r15d
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 i; // rbp
  int v31; // ecx
  __int64 v32; // rcx
  unsigned __int64 v33; // r9
  int v34; // r8d
  __int64 v35; // rsi
  unsigned __int64 v36; // rax
  __int64 *v37; // rcx
  _KPROCESS *v38; // rax
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // r9
  unsigned __int64 KernelWaitTime; // rax
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rdi
  int v45; // eax
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rcx
  __int64 v50; // r14
  int v51; // eax
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rax
  int v55; // edi
  unsigned int v56; // ecx
  char v57; // cl
  int v58; // eax
  int v59; // eax
  unsigned __int64 v60; // [rsp+30h] [rbp-58h]
  unsigned __int64 *v61; // [rsp+38h] [rbp-50h]
  __int64 *v62; // [rsp+90h] [rbp+8h]
  unsigned __int64 v63; // [rsp+98h] [rbp+10h]
  int v64; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v65; // [rsp+A8h] [rbp+20h] BYREF

  v64 = a3;
  *(_DWORD *)(a1 + 4) &= 0xFFE3FFFF;
  v3 = a2;
  v5 = a3;
  v65 = 0LL;
  v6 = (unsigned __int64 *)(a1 + 96 + 8LL * (int)a3);
  v7 = (int)a3;
  v63 = (int)a3;
  v62 = (__int64 *)v6;
  if ( a2 < *v6 )
    v3 = *v6;
  v61 = (unsigned __int64 *)(a1 + 128 + 8LL * (int)a3);
  v8 = (v3 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( v8 > *v61 )
    v8 = *v61;
  v60 = v8;
  while ( v3 <= v8 )
  {
    v9 = MiWalkPageTablesEvaluatePte(a1, v3, v5, v8, (__int64)&v65);
    v10 = v65;
    v3 = v65;
    if ( v9 != 2 )
    {
      if ( v9 == 1 )
        break;
      v11 = *(_DWORD *)(a1 + 4);
      if ( (v11 & 0xE00000) == 0x200000 )
      {
        v12 = (unsigned int)(*(_DWORD *)(a1 + 12) + 1);
        *(_DWORD *)(a1 + 4) = v11 & 0xFFE3FFFF;
        v3 = v10 + 8 * v12;
        *v6 = v3;
        v13 = v3;
        if ( v7 )
        {
          v14 = v7;
          a3 = 0LL;
          a2 = (unsigned __int64)v6;
          do
          {
            a2 -= 8LL;
            v13 = v13 << 25 >> 16;
            *(_QWORD *)a2 = v13;
            --v14;
          }
          while ( v14 );
        }
        v15 = *(_DWORD *)(a1 + 4);
        *(_DWORD *)(a1 + 12) = 0;
        if ( (v15 & 1) != 0 || (v15 & 0x1C0000u) >= 0x100000 )
          *(_DWORD *)(a1 + 4) = v15 | 0x20000;
      }
      else
      {
        if ( (v11 & 0xE00000) == 0x400000 )
        {
          if ( !v5 && (*(_DWORD *)a1 & 1) == 0 && (*(_QWORD *)v65 & 1) != 0 )
          {
            a3 = 0xFFFFF68000000000uLL;
            v21 = (unsigned __int64 *)(((((__int64)(v65 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL);
            v22 = *v21;
            if ( (unsigned __int64)v21 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v21 <= 0xFFFFF6FB7DBED7F8uLL )
            {
              if ( (v22 & 1) != 0 && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
              {
                v38 = MiPteHasShadow();
                if ( v38 )
                {
                  KernelWaitTime = v38[2].KernelWaitTime;
                  if ( KernelWaitTime )
                  {
                    v42 = *(_QWORD *)(KernelWaitTime + 8 * ((v40 >> 3) & 0x1FF));
                    if ( (v42 & 0x20) != 0 )
                      v39 |= 0x20uLL;
                    v22 = v39 | 0x42;
                    if ( (v42 & 0x42) == 0 )
                      v22 = v39;
                  }
                }
              }
              a3 = 0xFFFFF68000000000uLL;
            }
            a2 = HIBYTE(v22);
            LOBYTE(a2) = a2 & 0xF;
            if ( (_BYTE)a2 == 9 || (_BYTE)a2 == 10 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 184LL) & 0xF) == 0 )
              {
                if ( v10 >= 0xFFFFF68000000000uLL )
                {
                  do
                  {
                    if ( v3 > 0xFFFFF6FFFFFFFFFFuLL )
                      break;
                    v3 = (__int64)(v3 << 25) >> 16;
                  }
                  while ( v3 >= 0xFFFFF68000000000uLL );
                  v8 = v60;
                }
                LeafVa = MiGetLeafVa(v10);
                v27 = 0;
                MiLockVadTree(1u, v28, v29);
                for ( i = (unsigned __int64)MiLocateAddress(LeafVa); i; i = MiGetNextVad(i) )
                {
                  v31 = *(_DWORD *)(i + 48);
                  if ( (((v31 & 0x1C) - 4) & 0xFFFFFFF7) != 0
                    && ((v31 & 0x80000) == 0 || (v31 & 0x200000) == 0 && (v31 & 0x60000u) < 0x40000)
                    && (v31 & 0x1C) != 0x14 )
                  {
                    break;
                  }
                  ++v27;
                  LeafVa = ((*(unsigned int *)(i + 28) | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) << 12) | 0xFFF;
                  if ( !(_BYTE)v27 && MiPeriodicGoodCitizen((int *)a1, v10, 0) )
                    break;
                }
                MiUnlockVadTree(1, 0x11u);
                if ( v3 != LeafVa )
                {
                  v32 = ((LeafVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                  v33 = *v61;
                  a2 = v32 + 8;
                  v34 = *v61 < v32 + 8 ? 4 : 0;
                  if ( ((v32 ^ v10) & 0xFFFFFFFFF000LL) != 0 )
                  {
                    v49 = v32 + 8;
                    if ( a2 >= 0xFFFFF68000000000uLL )
                    {
                      do
                      {
                        if ( v49 > 0xFFFFF6FFFFFFFFFFuLL )
                          break;
                        v49 = (__int64)(v49 << 25) >> 16;
                      }
                      while ( v49 >= 0xFFFFF68000000000uLL );
                      v8 = v60;
                    }
                    *(_QWORD *)(a1 + 80) = v49;
                    v35 = (v10 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) + 8;
                  }
                  else
                  {
                    v35 = v32 + 8;
                  }
                  v7 = v63;
                  *v62 = v35;
                  if ( v63 )
                  {
                    v36 = v63;
                    v37 = v62;
                    do
                    {
                      --v37;
                      v35 = v35 << 25 >> 16;
                      *v37 = v35;
                      --v36;
                    }
                    while ( v36 );
                  }
                  a3 = *(_DWORD *)(a1 + 4) & 0xFF1FFFFF | (v34 << 21);
                  *(_DWORD *)(a1 + 12) = 0;
                  *(_DWORD *)(a1 + 4) = a3;
                  if ( a2 > v33 )
                  {
                    a3 = (unsigned int)a3 & 0xFFF3FFFF;
                    LODWORD(a3) = a3 | 0x100000;
                    *(_DWORD *)(a1 + 4) = a3;
                  }
                  v3 = *v62;
                  LODWORD(a3) = a3 | 0x20000;
                  *(_DWORD *)(a1 + 4) = a3;
                  goto LABEL_14;
                }
                *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 4) & 0xFF1FFFFF | 0x400000;
                goto LABEL_33;
              }
              *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 4) & 0xFF1FFFFF | 0x400000;
LABEL_34:
              v23 = *(_DWORD *)(a1 + 4);
              v3 = v10;
              if ( (v23 & 0x1C0000) == 0x80000 )
              {
                v7 = v63;
                *(_DWORD *)(a1 + 4) = v23 & 0xFFE3FFFF;
              }
              else if ( (v23 & 0x1C0000) == 0xC0000 )
              {
                *(_DWORD *)(a1 + 4) = v23 & 0xFFE3FFFF;
                MiYieldPageTableWalk(a1, 1LL);
                MiWaitForFreePage(*(_QWORD *)(a1 + 88), 0LL);
                *(_DWORD *)(a1 + 4) |= 0x20000u;
                v7 = v63;
              }
              else
              {
                v7 = v63;
                a3 = v63;
                v3 = v10 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 12) + 1);
                *v6 = v3;
                v24 = v3;
                if ( v63 )
                {
                  a2 = (unsigned __int64)v6;
                  do
                  {
                    a2 -= 8LL;
                    v24 = v24 << 25 >> 16;
                    *(_QWORD *)a2 = v24;
                    --a3;
                  }
                  while ( a3 );
                }
                *(_DWORD *)(a1 + 12) = 0;
              }
              v25 = *(_DWORD *)(a1 + 4);
              if ( (v25 & 1) != 0 || (v25 & 0x1C0000u) >= 0x100000 )
                *(_DWORD *)(a1 + 4) = v25 | 0x20000;
              goto LABEL_14;
            }
            if ( (_BYTE)a2 == 8 && (*(_DWORD *)a1 & 0x8000) == 0 )
              goto LABEL_34;
          }
          *(_DWORD *)(a1 + 4) &= 0xFFE3FFFF;
          goto LABEL_30;
        }
        if ( v5 <= (int)((v11 >> 6) & 7) )
          goto LABEL_30;
        v43 = MiWalkPageTablesPrepareToDescend(a1, v65, a3);
        if ( v43 == 2 )
        {
          *(_DWORD *)(a1 + 4) |= 0x20000u;
        }
        else
        {
          if ( v43 )
            goto LABEL_94;
          *(_DWORD *)(a1 + 4) &= 0xFF1FFFFF;
          v44 = v3 << 25;
          MiWalkPageTablesRecursively(a1, v44 >> 16, (unsigned int)(v5 - 1));
          v45 = *(_DWORD *)(a1 + 4);
          if ( (v45 & 3) != 0 )
          {
            if ( (v45 & 0x1C) == 0 && *(_QWORD *)(a1 + 8 * v7 + 88) >= (unsigned __int64)((v44 + 0x10000000) >> 16) )
              MiMarkResumptionPoint(a1, v10, (unsigned int)v5, 2LL);
          }
          else
          {
            if ( (v45 & 0x1C0000u) < 0x100000 )
            {
              v3 = v10;
LABEL_94:
              if ( (*(_DWORD *)a1 & 4) != 0 )
              {
                if ( (v50 = *(_QWORD *)(a1 + 32), (*(_DWORD *)a1 & 0x800) != 0)
                  && ((v10 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL
                  || (unsigned int)MiLockPageTableInternal(
                                     *(_QWORD *)(a1 + 32),
                                     ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                                     1) )
                {
                  MiUnlockPageTableInternal(v50, v10);
                  *(_DWORD *)(a1 + 4) &= 0xFFE3FFFF;
                  v51 = *(_DWORD *)(a1 + 4);
                  *(_QWORD *)(a1 + 56) = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                }
                else
                {
                  if ( v5 )
                  {
                    v58 = *(_DWORD *)(a1 + 4);
                    *(_QWORD *)(a1 + 72) = v10;
                    *(_DWORD *)(a1 + 4) = v58 ^ ((unsigned __int8)v58 ^ (unsigned __int8)(4 * v5)) & 0x1C;
                  }
                  v59 = MiYieldPageTableWalk(a1, 1LL);
                  if ( v59 != 5 )
                    v59 = 2;
                  v51 = *(_DWORD *)(a1 + 4) ^ (*(_DWORD *)(a1 + 4) ^ (v59 << 18)) & 0x1C0000;
                  *(_DWORD *)(a1 + 4) = v51;
                }
                if ( (v51 & 0x1C0000) != 0 )
                {
                  if ( (v51 & 0x1C0000) == 0x80000 )
                    v51 &= 0xFFE3FFFF;
                  v7 = v63;
                  *(_DWORD *)(a1 + 4) = v51 | 0x20000;
                  goto LABEL_14;
                }
              }
LABEL_30:
              if ( (*(_DWORD *)a1 & 0x20) != 0
                || v5 >= 1 && (*(_DWORD *)a1 & 1) == 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 184LL) & 0xF) != 0 )
              {
                *(_DWORD *)(a1 + 4) &= 0xFFE3FFFF;
              }
              else
              {
                *(_DWORD *)(a1 + 4) ^= (*(_DWORD *)(a1 + 4) ^ ((unsigned int)guard_dispatch_icall_no_overrides(
                                                                               a1,
                                                                               v10,
                                                                               (unsigned int)v5) << 18)) & 0x1C0000;
              }
LABEL_33:
              v6 = (unsigned __int64 *)v62;
              goto LABEL_34;
            }
            v46 = *(_QWORD *)(a1 + 8 * v7 + 88);
            if ( v46 >= (v44 + 0x10000000) >> 16 )
            {
              v10 = ((v46 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v65 = v10;
              v47 = v10;
              *v62 = v10;
              if ( v7 )
              {
                v48 = v7;
                a2 = (unsigned __int64)v62;
                do
                {
                  a2 -= 8LL;
                  v47 = v47 << 25 >> 16;
                  *(_QWORD *)a2 = v47;
                  --v48;
                }
                while ( v48 );
              }
            }
          }
          *(_DWORD *)(a1 + 4) |= 0x20000u;
          v3 = v10;
        }
      }
    }
LABEL_14:
    v5 = v64;
    v6 = (unsigned __int64 *)v62;
  }
  v16 = *(_DWORD *)(a1 + 4) & 0xFF1DFFFF;
  v17 = *(_BYTE *)(a1 + 4) & 1;
  *(_DWORD *)(a1 + 4) = v16;
  if ( v5 == 3 )
  {
    v52 = *(_QWORD *)(a1 + 32);
    v53 = v16;
    if ( !v17 && ((*(_DWORD *)a1 & 0x20) == 0 || (v16 & 0x1C0000) != 0x100000) )
    {
      v54 = *(_QWORD *)(a1 + 176);
      *(_DWORD *)(a1 + 4) = v16 | 0x20;
      if ( v54 )
        v55 = guard_dispatch_icall_no_overrides(a1, v16, a3);
      else
        v55 = 0;
      a3 = *(_QWORD *)(a1 + 56);
      v56 = *(_DWORD *)(a1 + 4) & 0xFFFFFFDF;
      v53 = v56;
      *(_DWORD *)(a1 + 4) = v56;
      if ( a3 )
      {
        if ( (*(_DWORD *)a1 & 0x800) == 0 || a3 != 0xFFFFF6FB7DBEDF68uLL )
        {
          MiUnlockPageTableInternal(v52, a3);
          v53 = *(unsigned int *)(a1 + 4);
          v56 = *(_DWORD *)(a1 + 4);
        }
        *(_QWORD *)(a1 + 56) = 0LL;
      }
      if ( v55 == 5 )
      {
        v53 = v56 & 0xFFE3FFFF | 0x140000;
        *(_DWORD *)(a1 + 4) = v53;
      }
    }
    if ( (v53 & 1) != 0 )
    {
      v57 = *(_BYTE *)(a1 + 9);
      if ( (*(_DWORD *)a1 & 4) != 0 )
      {
        if ( v57 != 17 )
        {
          MiLockWorkingSetShared(v52, v53, a3);
          *(_DWORD *)(a1 + 4) &= ~1u;
          return;
        }
        MiLockWorkingSetSharedAtDpc(v52);
      }
      else if ( v57 == 17 )
      {
        MiLockWorkingSetExclusiveAtDpc(v52);
      }
      else
      {
        MiLockWorkingSetExclusive(v52, v53, a3);
      }
      *(_DWORD *)(a1 + 4) &= ~1u;
    }
  }
  else if ( !v17 )
  {
    v18 = *(_QWORD *)(a1 + 176);
    *(_DWORD *)(a1 + 4) = v16 | 0x20;
    if ( v18 )
    {
      v19 = guard_dispatch_icall_no_overrides(a1, a2, a3);
      v20 = *(_DWORD *)(a1 + 4) & 0xFFFFFFDF;
      *(_DWORD *)(a1 + 4) = v20;
      if ( v19 == 5 )
        *(_DWORD *)(a1 + 4) = v20 & 0xFFE3FFFF | 0x140000;
    }
    else
    {
      *(_DWORD *)(a1 + 4) &= ~0x20u;
    }
  }
}
