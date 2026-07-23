/*
 * XREFs of MiMapMdlCommon @ 0x140314C5C
 * Callers:
 *     MmMapLockedPagesWithReservedMapping @ 0x1404AECD0 (MmMapLockedPagesWithReservedMapping.c)
 *     MmMapLockedRestartPages @ 0x14086AB50 (MmMapLockedRestartPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiAssignInitialPageAttribute @ 0x1402A2190 (MiAssignInitialPageAttribute.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiReferenceIoPages @ 0x1402D2018 (MiReferenceIoPages.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiIoSpaceGetBounds @ 0x140315778 (MiIoSpaceGetBounds.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033E850 (MiMakeProtectionPfnCompatible.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 *     MiShowBadMapper @ 0x14036876C (MiShowBadMapper.c)
 *     MiLookupIoPageNode @ 0x140369BEC (MiLookupIoPageNode.c)
 *     MiMapMdlWithLargePages @ 0x1404FC1D0 (MiMapMdlWithLargePages.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiMapMdlCommon(_DWORD *a1, unsigned __int64 *a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 v5; // r10
  unsigned int v6; // edi
  int v7; // r9d
  int v8; // r11d
  _DWORD *v9; // r13
  unsigned __int64 v10; // r9
  int v11; // esi
  __int64 v12; // rcx
  _DWORD *v13; // r10
  BOOL v14; // ebx
  __int64 v15; // r15
  __int64 CurrentIrql; // rcx
  unsigned __int64 v17; // rdx
  _QWORD *v18; // r12
  __int64 v19; // r13
  __int64 v20; // r14
  unsigned __int8 v21; // di
  unsigned __int64 v22; // rax
  __int64 v23; // r15
  unsigned __int64 v24; // r8
  unsigned __int64 *v25; // rdx
  unsigned __int64 v26; // rcx
  int v27; // eax
  int ProtectionPfnCompatible; // edx
  int v29; // r15d
  unsigned __int64 v30; // rdi
  unsigned int v31; // r14d
  int v32; // ebx
  unsigned __int64 *v33; // rsi
  signed __int64 v34; // r12
  unsigned __int64 v35; // rsi
  int v36; // r13d
  __int64 v37; // rcx
  unsigned __int8 v38; // bl
  int v39; // r10d
  int v40; // ecx
  int v41; // eax
  unsigned __int64 ValidPte; // rax
  __int64 result; // rax
  __int16 v44; // cx
  ULONG_PTR v45; // rdi
  bool v46; // zf
  char v47; // [rsp+38h] [rbp-51h]
  int v48; // [rsp+3Ch] [rbp-4Dh]
  int v49; // [rsp+3Ch] [rbp-4Dh]
  int v50; // [rsp+40h] [rbp-49h]
  unsigned __int64 v51; // [rsp+48h] [rbp-41h]
  unsigned __int64 v52; // [rsp+50h] [rbp-39h]
  __int128 v53; // [rsp+58h] [rbp-31h] BYREF
  __int64 v54; // [rsp+68h] [rbp-21h]
  __int64 v55; // [rsp+70h] [rbp-19h] BYREF
  __int64 v56; // [rsp+78h] [rbp-11h]
  ULONG_PTR v57; // [rsp+80h] [rbp-9h]
  __int64 v58; // [rsp+88h] [rbp-1h]
  unsigned __int64 *v60; // [rsp+F0h] [rbp+67h]
  __int64 v61; // [rsp+F8h] [rbp+6Fh]

  v61 = a3;
  v60 = a2;
  v5 = (unsigned int)a1[11];
  v6 = a4;
  v7 = a1[8];
  v54 = 0LL;
  v8 = (int)a2;
  v9 = a1;
  v10 = ((unsigned int)a1[10] + 4095LL + (((int)v5 + v7) & 0xFFFuLL)) >> 12;
  v52 = v10;
  v55 = 0LL;
  v53 = 0LL;
  v48 = 24;
  v11 = 1;
  v12 = v5 + ((__int64)((_QWORD)a2 << 25) >> 16);
  v50 = 1;
  v13 = 0LL;
  v58 = v12;
  v14 = 0;
  v15 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v56 = CurrentIrql;
  if ( ((unsigned __int16)a2 & 0xFFF) == 0 && !a3 && (v10 & 0x1FF) == 0 )
    v14 = (v9[12] & 0x1FFLL) == 0;
  v17 = 0LL;
  v51 = 0LL;
  if ( v10 )
  {
    v18 = v9 + 10;
    v19 = v55;
    while ( 1 )
    {
      v57 = v18[1];
      v20 = v57;
      if ( v57 > qword_140E2D920 )
        goto LABEL_5;
      if ( ((*(_QWORD *)(48 * v57 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
        break;
      v45 = 48 * v57 - 0x220000000000LL;
      if ( !(unsigned __int16)*(_DWORD *)(v45 + 32) && LODWORD(stru_140E2ED08.Timer.TimerListEntry.Flink) == 2 )
        MiShowBadMapper(v57, 2uLL);
      if ( (*(_DWORD *)(v45 + 32) & 0xC00000) == 0xC00000 )
        MiAssignInitialPageAttribute(48 * v20 - 0x220000000000LL, a5);
      v6 = a4;
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(a4, 48 * v20 - 0x220000000000LL);
      v13 = 0LL;
LABEL_31:
      if ( v14 )
      {
        if ( (v51 & 0x1FF) == 0 )
        {
          v46 = (v20 & 0x1FF) == 0;
          v48 = ProtectionPfnCompatible;
          v50 = v11;
          goto LABEL_111;
        }
        if ( v20 == *v18 + 1LL && ProtectionPfnCompatible == v48 )
        {
          v46 = v11 == v50;
LABEL_111:
          if ( !v46 )
            v14 = (int)v13;
          goto LABEL_32;
        }
        v14 = (int)v13;
      }
LABEL_32:
      ++v18;
      v10 = v52;
      v17 = v51 + 1;
      CurrentIrql = v56;
      v51 = v17;
      if ( v17 >= v52 )
      {
        v9 = a1;
        a3 = v61;
        v8 = (int)v60;
        goto LABEL_34;
      }
    }
    CurrentIrql = v56;
LABEL_5:
    if ( v15 )
    {
      v11 = (*(_DWORD *)(v19
                       + 4
                       * ((unsigned __int64)(2
                                           * (((unsigned int)v57 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2D878
                                                                                         - 12))
                                                                  - 1))
                                            - *(_DWORD *)(v19 + 24))) >> 5)
                       + 44) >> (2
                               * ((v57 & ((1LL << ((unsigned __int8)dword_140E2D878 - 12)) - 1)) - *(_BYTE *)(v19 + 24)))) & 3;
      --v15;
    }
    else
    {
      if ( HIDWORD(v54) == (_DWORD)v13 || v57 < (unsigned __int64)v53 || v57 > *((_QWORD *)&v53 + 1) )
      {
        if ( (_BYTE)CurrentIrql == 2 )
        {
          v21 = 17;
        }
        else
        {
          v21 = KeGetCurrentIrql();
          if ( v21 != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags != (_DWORD)v13 )
          {
            LOBYTE(v17) = 2;
            LOBYTE(CurrentIrql) = v21;
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v17);
          }
        }
        MiIoSpaceGetBounds(&v53, v20);
        if ( v21 != 17 )
        {
          if ( KiIrqlFlags != (_DWORD)v13 )
          {
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v21);
            v13 = 0LL;
          }
          __writecr8(v21);
        }
        v6 = a4;
        v10 = v52;
        v17 = v51;
      }
      if ( HIDWORD(v54) == 3 )
      {
        v22 = v10 - v17;
        v23 = 1LL;
        if ( v10 - v17 > 1 )
        {
          v24 = v22 - 1;
          v25 = v18 + 2;
          if ( v22 != 1 )
          {
            do
            {
              v26 = *v25;
              if ( *v25 != *(v25 - 1) + 1
                || (v26 & 0x1FF) == 0
                || v26 <= qword_140E2D920 && ((*(_QWORD *)(48 * v26 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
              {
                break;
              }
              ++v23;
              ++v25;
              --v24;
            }
            while ( v24 );
            v20 = v57;
          }
        }
        v27 = MiReferenceIoPages(1u, v20, v23, a5, v13, &v55);
        v13 = 0LL;
        if ( v27 < 0 )
        {
          v23 = 1LL;
          v14 = 0;
          v19 = v55;
          v11 = a5;
        }
        else
        {
          v19 = v55;
          v11 = (*(_DWORD *)(v55
                           + 4
                           * ((unsigned __int64)(2
                                               * (((unsigned int)v20 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2D878
                                                                                             - 12))
                                                                      - 1))
                                                - *(_DWORD *)(v55 + 24))) >> 5)
                           + 44) >> (2
                                   * ((v20 & ((1LL << ((unsigned __int8)dword_140E2D878 - 12)) - 1))
                                    - *(_BYTE *)(v55 + 24)))) & 3;
        }
        v6 = a4;
        v15 = v23 - 1;
      }
      else
      {
        v11 = v54;
      }
    }
    ProtectionPfnCompatible = v6 & 7;
    if ( v11 )
    {
      if ( v11 == 2 )
        ProtectionPfnCompatible |= 0x18u;
    }
    else
    {
      ProtectionPfnCompatible |= 0x10u;
    }
    goto LABEL_31;
  }
LABEL_34:
  HIDWORD(v54) = (_DWORD)v13;
  v29 = (int)v13;
  if ( v14 )
  {
    MiMapMdlWithLargePages((_DWORD)v9, v8, a3, v6, a5, (__int64)&v53);
    goto LABEL_61;
  }
  v30 = (unsigned __int64)v13;
  v31 = (unsigned int)v13;
  if ( a3 )
  {
    v32 = 1;
    v49 = 1;
    if ( (_BYTE)CurrentIrql == 2 )
    {
      v47 = 17;
      MiLockWorkingSetSharedAtDpc(a3);
    }
    else
    {
      v47 = MiLockWorkingSetShared(a3, v17, a3);
    }
    LODWORD(v13) = 0;
  }
  else
  {
    v32 = (int)v13;
    v47 = 17;
    v49 = (int)v13;
  }
  v33 = v60;
  v34 = (char *)v9 - (char *)v60;
  do
  {
    if ( v32 )
    {
      if ( !v30 )
        goto LABEL_116;
      if ( ((unsigned __int16)v33 & 0xFFF) == 0 )
      {
        if ( v31 )
        {
          MiIncreaseUsedPtes(CurrentIrql, v30, v31, 2LL);
          v31 = 0;
        }
        MiUnlockPageTableInternal(v61, v30);
LABEL_116:
        v30 = (((unsigned __int64)v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal(v61, v30, 0);
        LODWORD(v13) = 0;
      }
    }
    v35 = *(unsigned __int64 *)((char *)v33 + v34 + 48);
    v36 = (int)v13;
    v37 = 6 * v35;
    if ( v35 <= qword_140E2D920 && ((*(_QWORD *)(48 * v35 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      v41 = MiMakeProtectionPfnCompatible(a4, 48 * v35 - 0x220000000000LL);
      goto LABEL_56;
    }
    if ( !v29 || v35 < (unsigned __int64)v53 || v35 > *((_QWORD *)&v53 + 1) )
    {
      if ( (_BYTE)v56 == 2 )
      {
        v38 = 17;
      }
      else
      {
        v38 = KeGetCurrentIrql();
        if ( v38 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags != (_DWORD)v13 )
        {
          LOBYTE(v17) = 2;
          LOBYTE(v37) = v38;
          KiRaiseIrqlProcessIrqlFlags(v37, v17);
        }
      }
      MiIoSpaceGetBounds(&v53, v35);
      if ( v38 != 17 )
      {
        if ( KiIrqlFlags != v39 )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v38);
        __writecr8(v38);
      }
      v32 = v49;
      v29 = HIDWORD(v54);
    }
    if ( v29 == 3 )
    {
      v40 = MiLookupIoPageNode(v35);
      if ( v40 != 3 )
        goto LABEL_53;
      v40 = a5;
    }
    else
    {
      v40 = v54;
    }
    v36 = 1;
LABEL_53:
    v41 = a4 & 7;
    if ( v40 )
    {
      if ( v40 == 2 )
        v41 |= 0x18u;
    }
    else
    {
      v41 |= 0x10u;
    }
LABEL_56:
    ValidPte = MiMakeValidPte((unsigned __int64)v60, v35, v41 | 0xA0000000);
    LODWORD(v13) = 0;
    if ( v36 )
      ValidPte |= 0x200uLL;
    *v60 = ValidPte;
    v33 = v60 + 1;
    ++v31;
    v46 = v52-- == 1;
    ++v60;
  }
  while ( !v46 );
  if ( v32 )
  {
    if ( v30 )
    {
      if ( v31 )
        MiIncreaseUsedPtes(CurrentIrql, v30, v31, 2LL);
      MiUnlockPageTableInternal(v61, v30);
    }
    LOBYTE(v17) = v47;
    MiUnlockWorkingSetShared(v61, v17);
  }
  v9 = a1;
LABEL_61:
  result = v58;
  v44 = *((_WORD *)v9 + 5) | 1;
  *((_QWORD *)v9 + 3) = v58;
  *((_WORD *)v9 + 5) = v44;
  if ( (v44 & 0x10) != 0 )
    *((_WORD *)v9 + 5) = v44 | 0x20;
  return result;
}
