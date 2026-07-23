/*
 * XREFs of MiSynchronizeFastPageInsert @ 0x1402B0720
 * Callers:
 *     MiInsertPagesInList @ 0x1402AF3C0 (MiInsertPagesInList.c)
 *     MiInsertPageLockStandbyList @ 0x1402C0C30 (MiInsertPageLockStandbyList.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPageAlreadyLocked @ 0x14042EA40 (MiPageAlreadyLocked.c)
 */

void __fastcall MiSynchronizeFastPageInsert(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  ULONG_PTR v8; // r9
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 i; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r13
  unsigned int v17; // r12d
  unsigned int Number; // ebp
  int v19; // r15d
  unsigned int v20; // r14d
  unsigned __int64 v21; // rsi
  unsigned int v22; // eax
  __int64 v23; // r10
  __int64 v24; // rbx
  unsigned int v25; // edi
  unsigned int v26; // edi
  unsigned __int8 v27; // cl
  __int64 v28; // r8
  unsigned __int8 v29; // r11
  __int64 v30; // rsi
  __int64 v31; // rdx
  unsigned int v32; // edi
  unsigned int v33; // ebx
  int v34; // r11d
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // r15
  __int64 v38; // r14
  __int64 v39; // rbp
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  volatile signed __int64 *v43; // rsi
  __int64 v44; // r10
  __int64 v45; // rbp
  volatile signed __int64 *v46; // rdx
  _DWORD *v47; // rcx
  signed __int32 v48; // eax
  __int64 v49; // rdx
  signed __int32 v50; // ett
  volatile signed __int32 *v51; // rbx
  __int64 v52; // rax
  ULONG_PTR v53; // rbx
  __int64 v54; // r9
  int j; // edi
  __int64 v56; // r8
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // r10
  ULONG_PTR v60; // rsi
  __int64 v61; // rdi
  unsigned __int64 v62; // r14
  __int64 v63; // r12
  __int64 v64; // rax
  __int64 v65; // r12
  unsigned __int64 v66; // rdx
  int v67; // r13d
  __int64 v68; // r15
  unsigned int v69; // eax
  unsigned int v70; // ebp
  __int64 v71; // rbx
  unsigned int v72; // ebp
  unsigned __int8 v73; // r10
  unsigned __int8 v74; // r11
  int k; // r8d
  __int64 v76; // r9
  __int64 m; // rdx
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // r10
  unsigned __int8 v81; // cl
  unsigned __int8 v82; // cl
  volatile LONG *v83; // rcx
  unsigned __int64 v84; // r8
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rax
  _QWORD *v90; // rax
  __int64 v91; // r8
  unsigned __int8 v92; // cl
  unsigned __int8 v93; // [rsp+20h] [rbp-108h]
  unsigned int v94; // [rsp+24h] [rbp-104h]
  int v95; // [rsp+28h] [rbp-100h]
  __int64 v96; // [rsp+30h] [rbp-F8h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-F0h]
  int v98; // [rsp+40h] [rbp-E8h]
  __int64 v99; // [rsp+48h] [rbp-E0h]
  char v100; // [rsp+50h] [rbp-D8h]
  __int64 v101; // [rsp+58h] [rbp-D0h]
  __int64 v102; // [rsp+58h] [rbp-D0h]
  __int64 v103; // [rsp+60h] [rbp-C8h]
  __int64 v104; // [rsp+68h] [rbp-C0h]
  __int64 v105; // [rsp+70h] [rbp-B8h]
  __int64 v106; // [rsp+78h] [rbp-B0h]
  __int64 v107; // [rsp+80h] [rbp-A8h]
  __int64 v108; // [rsp+88h] [rbp-A0h]
  __int64 v109; // [rsp+90h] [rbp-98h]
  _DWORD v110[10]; // [rsp+A0h] [rbp-88h]
  __int128 v111; // [rsp+C8h] [rbp-60h]
  void *retaddr; // [rsp+128h] [rbp+0h]
  unsigned __int8 v115; // [rsp+140h] [rbp+18h]
  int v117; // [rsp+150h] [rbp+28h]

  v111 = 0LL;
  v8 = (__int64)(a3 + 0x220000000000LL) / 48;
  BugCheckParameter2 = v8;
  if ( a5 )
  {
    v16 = (a5 + 0x220000000000LL) / 48;
    v98 = 1;
    v17 = 1;
    goto LABEL_15;
  }
  v9 = *(_DWORD *)(a3 + 32);
  if ( (*(_QWORD *)(a3 + 40) & 0x20000000000000LL) != 0 )
    goto LABEL_175;
  if ( (*(_DWORD *)(a3 + 32) & 0x8000000) == 0 )
  {
LABEL_4:
    v10 = HIBYTE(v9) & 7;
    goto LABEL_5;
  }
  if ( a3 < 0xFFFFDE0000000000uLL || a3 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL || (unsigned int)MiIsDecayPfn(v8) )
  {
LABEL_175:
    v10 = 5;
  }
  else
  {
    if ( (v9 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(v80) != 9 )
      goto LABEL_4;
    v10 = 5;
  }
LABEL_5:
  v11 = v10;
  v12 = 88LL * v10 + 3680;
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    v14 = *(_QWORD *)(a1 + 8 * (v11 + 8 * i) + 16320);
    if ( v14 >= 0x1000 )
    {
      v83 = (volatile LONG *)(v12 + a1);
      if ( v14 >= 0x2000 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(v83);
LABEL_10:
        v15 = v11 + 8 * i;
        if ( *(_QWORD *)(a1 + 8 * v15 + 16320) >= 0x1000uLL )
        {
          *(_QWORD *)(a1 + 8 * v15 + 16320) = 0LL;
          *(_BYTE *)(a6 + 2) = 1;
          if ( (_DWORD)i )
            *(_BYTE *)(a6 + 2) = 2;
          *(_BYTE *)(a6 + 1) = 1;
        }
        return;
      }
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v83) )
        goto LABEL_10;
    }
  }
  if ( (_DWORD)i != 2 )
    goto LABEL_10;
  v8 = BugCheckParameter2;
  v16 = -1LL;
  v17 = 64;
  v98 = 1;
LABEL_15:
  Number = KeGetPcr()->Prcb.Number;
  v105 = v16;
  if ( (unsigned int)KeNumberProcessors_0 >= 0x40 )
  {
    Number &= 0x3Fu;
  }
  else if ( 0x40 / (unsigned int)KeNumberProcessors_0 > 1 )
  {
    Number *= 0x40 / (unsigned int)KeNumberProcessors_0;
  }
  v100 = Number;
  v19 = 0;
  v20 = 0;
  v106 = 48 * v8;
  v95 = 0;
  v94 = 0;
  v21 = 48 * v8 - 0x220000000000LL;
  v104 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v21 + 40) >> 43) & 0x3FFLL));
  v22 = MiPageToNode(v8);
  v23 = a5;
  v24 = v22;
  if ( a5 )
  {
    v26 = 5;
    goto LABEL_22;
  }
  v25 = *(_DWORD *)(v21 + 32);
  if ( (*(_QWORD *)(v21 + 40) & 0x20000000000000LL) != 0 )
    goto LABEL_176;
  if ( (*(_DWORD *)(v21 + 32) & 0x8000000) != 0 )
  {
    if ( v21 >= 0xFFFFDE0000000000uLL
      && v21 < 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
      && !(unsigned int)MiIsDecayPfn(v106 / 48) )
    {
      if ( (v25 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v21) == 9 )
      {
        v26 = 5;
        goto LABEL_22;
      }
      goto LABEL_21;
    }
LABEL_176:
    v26 = 5;
    goto LABEL_22;
  }
LABEL_21:
  v26 = HIBYTE(v25) & 7;
LABEL_22:
  if ( qword_140E2D868 )
  {
    v90 = MiSearchChannelTable(BugCheckParameter2);
    v23 = a5;
    v27 = *((_BYTE *)v90 + 12);
  }
  else
  {
    v27 = 0;
  }
  v108 = v24;
  v28 = 56320 * v24 + *(_QWORD *)(v104 + 16);
  v93 = v27;
  v107 = 56320 * v24;
  if ( a4 < 9 )
  {
    if ( a4 == 8 )
      v29 = *(_BYTE *)(qword_140E3D240 + 2 * ((unsigned __int64)(v106 / 48) >> 9) + 1) & 0x7F;
    else
      v29 = 0;
    v30 = v26;
    v31 = *(_QWORD *)(232LL * a4 + v28 + 14824) + 88 * (v26 + 8LL * v29);
  }
  else
  {
    v29 = BYTE8(v111);
    v30 = v26;
    v31 = v28 + 88 * (v26 + 8LL * v27) + 4160;
  }
  v32 = 0;
  v115 = v29;
  v101 = v31;
  v33 = Number;
  v96 = v30;
  v109 = v104 + (v30 << 9);
  v34 = 0;
  v35 = 0LL;
  v103 = 0LL;
  v36 = v109 + 12224;
  v99 = v109 + 12224;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_27:
      if ( v32 >= v17 )
      {
        v39 = a6;
        v53 = BugCheckParameter2;
        goto LABEL_79;
      }
      if ( v16 != -1 && !v19 )
        break;
      v37 = *(_QWORD *)(v36 + 8LL * v33);
      if ( v37 != -1 )
      {
        v38 = 48 * v37 - 0x220000000000LL;
        goto LABEL_31;
      }
      v23 = a5;
      ++v20;
      v19 = v95;
      ++v32;
      v94 = v20;
      v33 = ((_BYTE)v33 + 1) & 0x3F;
    }
    v37 = v16;
    v38 = v23;
LABEL_31:
    v39 = a6;
    v40 = 0LL;
    v41 = a6 + 16;
    while ( v40 < 4 )
    {
      if ( *(_BYTE *)(v41 + 8) && v38 == *(_QWORD *)v41 )
      {
        v42 = 24 * v35;
        v43 = (volatile signed __int64 *)(v38 + 24);
        goto LABEL_36;
      }
      ++v40;
      v41 += 24LL;
    }
    v43 = (volatile signed __int64 *)(v38 + 24);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
      goto LABEL_52;
    if ( v16 != -1 && !v95 && (*(_DWORD *)(v38 + 32) & 0x8000000) == 0 )
      break;
    v42 = 24 * v35;
    *(_BYTE *)(24 * v35 + a6 + 24) = 1;
LABEL_36:
    v44 = a2;
    v45 = v42 + a6;
    v46 = v43;
    *(_QWORD *)(v45 + 8) = v37;
    *(_QWORD *)(v45 + 16) = v38;
    if ( !v34 )
    {
      v47 = (_DWORD *)(a2 + 32);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        _m_prefetchw(v47);
        v48 = *v47 & 0x7FFFFFFF;
        do
        {
          v49 = (unsigned int)(v48 + 1);
          v50 = v48;
          v48 = _InterlockedCompareExchange(v47, v49, v48);
          if ( v50 == v48 )
          {
            v46 = v43;
            goto LABEL_41;
          }
        }
        while ( v48 >= 0 );
        LOBYTE(v49) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v47, v49, v36);
        v35 = v103;
        v46 = v43;
        v36 = v99;
        v44 = a2;
      }
      else
      {
        LOBYTE(v46) = -1;
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v47, v46);
        v35 = v103;
        v46 = (volatile signed __int64 *)(v38 + 24);
        v36 = v99;
        v44 = a2;
      }
LABEL_41:
      v34 = 1;
    }
    if ( v16 != -1 )
    {
      v46 = v43;
      if ( !v95 )
      {
        v19 = 0;
LABEL_185:
        v84 = *(_QWORD *)(v38 + 40) & 0xFFFFFFFFFFLL;
        goto LABEL_186;
      }
    }
    if ( *(_QWORD *)(v36 + 8LL * v33) != v37 )
    {
      if ( *(_BYTE *)(v45 + 24) )
      {
        _InterlockedAnd64(v46, 0x7FFFFFFFFFFFFFFFuLL);
        *(_BYTE *)(v45 + 24) = 0;
      }
      --v32;
      LOBYTE(v33) = v33 - 1;
LABEL_52:
      v30 = v96;
      ++v32;
      v20 = v94;
      v23 = a5;
      v33 = ((_BYTE)v33 + 1) & 0x3F;
      v19 = v95;
      goto LABEL_27;
    }
    v19 = v95;
    if ( v16 != -1 && !v95 )
      goto LABEL_185;
    if ( v35 )
      v84 = (8LL * (*(_DWORD *)(v38 + 36) & 0xFFE00000)) | (((*(_QWORD *)v38 >> 20) | *(_QWORD *)(v38 + 40) & 0xF80000000000000uLL) >> 20);
    else
      v84 = *(_QWORD *)v38 & 0xFFFFFFFFFFLL;
LABEL_186:
    if ( v84 == 0x3FFFFFFFFFLL )
    {
      v85 = v44 + 40;
      if ( v35 )
        v85 = v101 + 40;
    }
    else
    {
      v85 = 48 * v84 - 0x220000000000LL;
    }
    if ( (unsigned int)MiPageAlreadyLocked(a6, v85) )
    {
      v39 = a6;
      v88 = v35 + 1;
    }
    else
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v86 + 24), 0x3FuLL) )
      {
        v36 = v99;
        if ( *(_BYTE *)(v45 + 24) )
        {
          _InterlockedAnd64(v43, 0x7FFFFFFFFFFFFFFFuLL);
          *(_BYTE *)(v45 + 24) = 0;
        }
        goto LABEL_52;
      }
      v39 = a6;
      v88 = v35 + 1;
      *(_BYTE *)(a6 + 24 * v88 + 24) = 1;
    }
    v89 = 3 * v88;
    *(_QWORD *)(v39 + 8 * v89 + 8) = v87;
    *(_QWORD *)(v39 + 8 * v89 + 16) = v86;
    v103 = v88 + 1;
    v110[v19] = v33;
    v53 = BugCheckParameter2;
    if ( v19 || (unsigned int)MiIsDecayPfn(BugCheckParameter2) )
      goto LABEL_137;
    v30 = v96;
    v95 = 1;
    v91 = *(_QWORD *)(v104 + 16);
    if ( a4 < 9 )
    {
      v92 = 0;
      if ( a4 == 8 )
        v92 = v115;
      v36 = *(_QWORD *)(232LL * a4 + v91 + v107 + 14816) + ((v96 + 8LL * v92) << 9);
    }
    else
    {
      v36 = ((v96 + 110 * v108 + 8LL * v93) << 9) + v91 + 5568;
    }
    v20 = 0;
    v23 = a5;
    v19 = 1;
    v32 = 0;
    v99 = v36;
    v94 = 0;
    v33 = v100 & 0x3F;
    v17 = 64;
  }
  _InterlockedAnd64(v43, 0x7FFFFFFFFFFFFFFFuLL);
  v19 = 0;
  ++v32;
  v53 = BugCheckParameter2;
LABEL_137:
  v20 = v94;
  v30 = v96;
LABEL_79:
  if ( v32 != 64 && (v32 != 1 || v16 == -1 || v19) )
  {
    *(_BYTE *)v39 = 1;
    v54 = 0LL;
    for ( j = 1; ; v98 = j )
    {
      v117 = v54;
      if ( (unsigned int)v54 >= 2 )
        return;
      if ( v16 == -1 || j != 1 )
        break;
LABEL_119:
      v53 = BugCheckParameter2;
      v54 = (unsigned int)(v54 + 1);
      ++j;
    }
    if ( j )
    {
      if ( j == 1 )
      {
        v57 = v109 + 12224;
      }
      else
      {
        v56 = *(_QWORD *)(v104 + 16);
        if ( a4 < 9 )
        {
          v82 = 0;
          if ( a4 == 8 )
            v82 = v115;
          v57 = *(_QWORD *)(232LL * a4 + v56 + v107 + 14816) + ((v30 + 8LL * v82) << 9);
        }
        else
        {
          v57 = ((v30 + 110 * v108 + 8LL * v93) << 9) + v56 + 5568;
        }
      }
    }
    else
    {
      v57 = v109 + 8128;
    }
    v58 = (unsigned int)v110[v54];
    v59 = (unsigned int)v54;
    v102 = (unsigned int)v54;
    v60 = *(_QWORD *)(v57 + 8 * v58);
    *(_QWORD *)(v57 + 8 * v58) = v53;
    if ( v60 == -1LL || v60 >= qword_140E34930 && v60 < qword_140E34930 + 2048 )
    {
LABEL_117:
      if ( BugCheckParameter2 != -1LL
        && (BugCheckParameter2 < qword_140E34930 || BugCheckParameter2 >= qword_140E34930 + 2048) )
      {
        v78 = 8LL;
        v79 = *(_QWORD *)(v106 - 0x21FFFFFFFFF0LL);
        if ( (v79 & 0x400) == 0 )
          v78 = 0x10000000LL;
        *(_QWORD *)(v106 - 0x21FFFFFFFFF0LL) = v79 | v78;
      }
      v30 = v96;
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8 * (v96 + 8 * v59) + 16320));
      if ( j == 1 && (unsigned int)MiIsDecayPfn(BugCheckParameter2) )
        return;
      goto LABEL_119;
    }
    v111 = 0LL;
    v61 = 48 * v60;
    v62 = 48 * v60 - 0x220000000000LL;
    v63 = -9LL;
    v64 = *(_QWORD *)(v62 + 16);
    if ( (v64 & 0x400) == 0 )
      v63 = -268435457LL;
    v65 = v64 & v63;
    if ( v60 < qword_140E34930 || v60 >= qword_140E34930 + 2048 )
    {
      if ( byte_140E3BEA6 )
      {
        v66 = (unsigned __int64)(v61 / 48) >> 9;
        if ( *(_BYTE *)(qword_140E3D240 + 2 * v66) )
          v67 = *(unsigned __int8 *)(qword_140E3D240 + 2 * v66) - 1;
        else
          v67 = 9;
      }
      else
      {
        v67 = 9;
      }
    }
    else
    {
      v67 = 9;
    }
    v68 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v62 + 40) >> 43) & 0x3FFLL));
    v69 = MiPageToNode(v60);
    v70 = *(_DWORD *)(v62 + 32);
    v71 = v69;
    if ( (*(_QWORD *)(v62 + 40) & 0x20000000000000LL) == 0 )
    {
      if ( (*(_DWORD *)(v62 + 32) & 0x8000000) == 0 )
        goto LABEL_98;
      if ( v62 >= 0xFFFFDE0000000000uLL
        && v62 < 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
        && !(unsigned int)MiIsDecayPfn(v61 / 48) )
      {
        if ( (v70 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(48 * v60 - 0x220000000000LL) == 9 )
        {
          v72 = 5;
          goto LABEL_99;
        }
LABEL_98:
        v72 = HIBYTE(v70) & 7;
LABEL_99:
        if ( qword_140E2D868 )
          v73 = *((_BYTE *)MiSearchChannelTable(v60) + 12);
        else
          v73 = 0;
        if ( v67 < 9 )
        {
          if ( v67 == 8 )
            v74 = *(_BYTE *)(qword_140E3D240 + 2 * ((unsigned __int64)(v61 / 48) >> 9) + 1) & 0x7F;
          else
            v74 = 0;
        }
        else
        {
          v74 = BYTE8(v111);
        }
        j = v98;
        if ( v98 != 3 )
        {
          for ( k = 0; k < 3; ++k )
          {
            if ( k )
            {
              if ( k == 1 )
              {
                v76 = v68 + ((unsigned __int64)v72 << 9) + 12224;
              }
              else if ( v67 < 9 )
              {
                v81 = 0;
                if ( v67 == 8 )
                  v81 = v74;
                v76 = *(_QWORD *)(232LL * v67 + *(_QWORD *)(v68 + 16) + 56320 * v71 + 14816) + ((v72 + 8LL * v81) << 9);
              }
              else
              {
                v76 = ((v72 + 110 * v71 + 8LL * v73) << 9) + *(_QWORD *)(v68 + 16) + 5568LL;
              }
            }
            else
            {
              v76 = v68 + ((unsigned __int64)v72 << 9) + 8128;
            }
            if ( k != v98 )
            {
              for ( m = 0LL; (unsigned int)m < 0x40; m = (unsigned int)(m + 1) )
              {
                if ( v60 == *(_QWORD *)(v76 + 8 * m) )
                  goto LABEL_116;
              }
            }
          }
        }
        *(_QWORD *)(v62 + 16) = v65;
LABEL_116:
        v16 = v105;
        v59 = v102;
        LODWORD(v54) = v117;
        goto LABEL_117;
      }
    }
    v72 = 5;
    goto LABEL_99;
  }
  if ( v34 )
  {
    *(_BYTE *)v39 = 1;
    if ( *(_BYTE *)(v39 + 24) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v39 + 16) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v39 + 24) = 0;
    }
    if ( *(_BYTE *)(v39 + 48) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v39 + 40) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v39 + 48) = 0;
    }
    if ( *(_BYTE *)(v39 + 72) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v39 + 64) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v39 + 72) = 0;
    }
    if ( *(_BYTE *)(v39 + 96) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(v39 + 88) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(v39 + 96) = 0;
    }
    v51 = (volatile signed __int32 *)(a2 + 32);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v51, 0xBFFFFFFF);
      _InterlockedDecrement(v51);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a2 + 32, retaddr);
    }
    v52 = a2;
    *(_BYTE *)v39 = 0;
  }
  else
  {
    v52 = a2;
    v51 = (volatile signed __int32 *)(a2 + 32);
  }
  if ( v32 != 1 || v16 == -1 || v19 )
  {
    *(_BYTE *)(v39 + 2) = 1;
    if ( v19 )
    {
      *(_BYTE *)(v39 + 2) = 2;
      v51 = (volatile signed __int32 *)(v52 + 32);
    }
    if ( v20 >= 0x20 )
      *(_BYTE *)(v39 + 1) = 1;
  }
  else
  {
    *(_BYTE *)(v39 + 2) = 3;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(v51);
}
