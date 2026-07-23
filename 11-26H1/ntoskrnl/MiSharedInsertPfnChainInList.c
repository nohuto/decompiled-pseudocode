/*
 * XREFs of MiSharedInsertPfnChainInList @ 0x1402AFEC0
 * Callers:
 *     MiInsertPagesInList @ 0x1402AF3C0 (MiInsertPagesInList.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     MiSwizzleInvalidPte @ 0x1402B1EF0 (MiSwizzleInvalidPte.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 */

signed __int64 __fastcall MiSharedInsertPfnChainInList(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 i; // r8
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // r8
  unsigned __int64 v9; // rbp
  __int64 v10; // r10
  unsigned __int64 *v11; // rbx
  __int64 v12; // r9
  unsigned int v13; // esi
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  signed __int64 v18; // rcx
  signed __int64 result; // rax
  signed __int64 v20; // rcx
  unsigned int v21; // r11d
  __int64 v22; // r15
  unsigned int v23; // r11d
  unsigned __int64 v24; // r15
  __int64 v25; // rbx
  unsigned int v26; // r8d
  unsigned __int8 v27; // dl
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r10
  __int64 v30; // r11
  ULONG_PTR v31; // rbx
  volatile signed __int64 *v32; // r8
  unsigned __int64 v33; // rbx
  volatile signed __int64 v34; // rdx
  signed __int64 v35; // rax
  signed __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  __int64 v38; // r8
  signed __int64 v39; // rdx
  unsigned __int64 v40; // r10
  signed __int64 v41; // rax
  signed __int64 v42; // rdx
  int v43; // eax
  unsigned int v44; // r11d
  __int64 v45; // r15
  unsigned int v46; // r11d
  __int64 v47; // [rsp+20h] [rbp-68h]
  __int64 v48; // [rsp+30h] [rbp-58h]
  __int64 v49; // [rsp+90h] [rbp+8h]
  __int64 v50; // [rsp+98h] [rbp+10h]
  __int64 v51; // [rsp+A0h] [rbp+18h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
  {
    for ( i = *(_QWORD *)a1; i != 0x3FFFFFFFFFLL; *(_DWORD *)(8 * v6 - 0x21FFFFFFFFE0LL) = v7 )
    {
      v6 = 6 * i;
      v7 = *(_DWORD *)(48 * i - 0x21FFFFFFFFE0LL) | 0x8000000;
      i = *(_QWORD *)(48 * i - 0x220000000000LL) & 0xFFFFFFFFFFLL;
    }
  }
  v8 = 48LL * *(_QWORD *)a1;
  v9 = v8 - 0x220000000000LL;
  v48 = 48LL * *(_QWORD *)(a1 + 8);
  v10 = a2[1];
  v11 = (unsigned __int64 *)(v48 - 0x220000000000LL);
  v12 = a2[4];
  v13 = 5;
  v50 = v10;
  v49 = v12;
  if ( !v2 )
  {
    if ( v10 != 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(48 * v10 - 0x220000000000LL) = *(_QWORD *)a1 ^ (*(_QWORD *)a1 ^ *(_QWORD *)(48 * v10 - 0x220000000000LL)) & 0xFFFFFF0000000000uLL;
      goto LABEL_15;
    }
    v44 = *(_DWORD *)(v9 + 32);
    v45 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
    if ( (*(_QWORD *)(v9 + 40) & 0x20000000000000LL) == 0 )
    {
      if ( (*(_DWORD *)(v9 + 32) & 0x8000000) == 0 )
        goto LABEL_60;
      if ( v9 >= 0xFFFFDE0000000000uLL
        && v9 < 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
        && !(unsigned int)MiIsDecayPfn(v8 / 48) )
      {
        if ( (v44 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v9) == 9 )
        {
          v46 = 5;
          goto LABEL_61;
        }
LABEL_60:
        v46 = HIBYTE(v44) & 7;
LABEL_61:
        *(_QWORD *)(88LL * v46 + v45 + 3648) = *(_QWORD *)a1;
LABEL_15:
        if ( v12 != 0x3FFFFFFFFFLL )
        {
          result = 0xFFFFDE0000000018uLL;
          *(_QWORD *)(48 * v12 - 0x21FFFFFFFFE8LL) = *(_QWORD *)(a1 + 8) ^ (*(_QWORD *)(48 * v12 - 0x21FFFFFFFFE8LL) ^ *(_QWORD *)(a1 + 8)) & 0xFFFFFF0000000000uLL;
          goto LABEL_21;
        }
        v21 = *(_DWORD *)(v9 + 32);
        v22 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
        if ( (*(_QWORD *)(v9 + 40) & 0x20000000000000LL) == 0 )
        {
          if ( (*(_DWORD *)(v9 + 32) & 0x8000000) == 0 )
            goto LABEL_19;
          if ( v9 >= 0xFFFFDE0000000000uLL
            && v9 < 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
            && !(unsigned int)MiIsDecayPfn(v8 / 48) )
          {
            if ( (v21 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v9) == 9 )
            {
              v23 = 5;
              goto LABEL_20;
            }
LABEL_19:
            v23 = HIBYTE(v21) & 7;
LABEL_20:
            result = v23;
            *(_QWORD *)(88LL * v23 + v22 + 3656) = *(_QWORD *)(a1 + 8);
            goto LABEL_21;
          }
        }
        v23 = 5;
        goto LABEL_20;
      }
    }
    v46 = 5;
    goto LABEL_61;
  }
  v14 = *(_QWORD *)(v2 + 16);
  v15 = (v2 + 0x220000000000LL) / 48;
  if ( qword_140E2D8C0 && (v14 & 0x10) == 0 )
    v14 &= qword_140E2D8C8;
  v16 = *(_QWORD *)(v2 + 40);
  *v11 = v15 ^ (v15 ^ *v11) & 0xFFFFFF0000000000uLL;
  *(_QWORD *)(v9 + 24) = v16 ^ (v16 ^ *(_QWORD *)(v9 + 24)) & 0xFFFFFF0000000000uLL;
  if ( ((v14 >> 12) & 0xFFFFFFFFFFLL) == v15 )
    *(_QWORD *)(v2 + 16) = MiSwizzleInvalidPte(*(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFF0000000000C9FuLL | ((*(_QWORD *)a1 & 0xFFFFFFFFFFLL) << 12) | 0x880);
  else
    *(_QWORD *)(48 * (v16 & 0xFFFFFFFFFFLL) - 0x220000000000LL) = *(_QWORD *)a1 ^ (*(_QWORD *)a1 ^ *(_QWORD *)(48 * (v16 & 0xFFFFFFFFFFLL) - 0x220000000000LL)) & 0xFFFFFF0000000000uLL;
  v17 = *(_QWORD *)(a1 + 8);
  v18 = *(_QWORD *)(v2 + 40);
  result = _InterlockedCompareExchange64(
             (volatile signed __int64 *)(v2 + 40),
             v17 ^ (v17 ^ v18) & 0xFFFFFF0000000000uLL,
             v18);
  if ( v18 != result )
  {
    do
    {
      v20 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(v2 + 40),
                 v17 ^ (v17 ^ result) & 0xFFFFFF0000000000uLL,
                 result);
    }
    while ( v20 != result );
  }
LABEL_21:
  if ( *(_DWORD *)(a1 + 28) == 2 )
  {
    BugCheckParameter2 = *(_QWORD *)a1;
    v51 = 48LL * *(_QWORD *)a1;
    v24 = v51 - 0x220000000000LL;
    v47 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v51 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
    v25 = (unsigned int)MiPageToNode(*(_QWORD *)a1);
    if ( !v2 )
    {
      v26 = *(_DWORD *)(v24 + 32);
      if ( (*(_QWORD *)(v24 + 40) & 0x20000000000000LL) == 0
        && ((*(_DWORD *)(v24 + 32) & 0x8000000) == 0
         || v24 >= 0xFFFFDE0000000000uLL
         && v24 < 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
         && !(unsigned int)MiIsDecayPfn(v51 / 48)
         && ((v26 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(v24) != 9)) )
      {
        v13 = HIBYTE(v26) & 7;
      }
    }
    if ( qword_140E2D868 )
      v27 = *((_BYTE *)MiSearchChannelTable(BugCheckParameter2) + 12);
    else
      v27 = 0;
    v28 = a2[7];
    v29 = a2[10];
    v30 = *(_QWORD *)(v47 + 16) + 88 * (v13 + 8 * (v27 + 80 * v25));
    if ( v28 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(v30 + 4160) = *(_QWORD *)a1;
    }
    else
    {
      v31 = *(_QWORD *)a1;
      *(_QWORD *)(48 * v28 - 0x220000000000LL) = *(_QWORD *)(48 * v28 - 0x220000000000LL) & 0xFFFFFFFFFFLL | (*(_QWORD *)a1 << 40);
      *(_DWORD *)(48 * v28 - 0x21FFFFFFFFDCLL) = *(_DWORD *)(48 * v28 - 0x21FFFFFFFFDCLL) & 0x1FFFFF | ((unsigned int)(v31 >> 24) << 21);
      v32 = (volatile signed __int64 *)(48 * v28 - 0x21FFFFFFFFD8LL);
      v33 = (v31 & 0xFFFFFFF800000000uLL) << 20;
      v34 = *v32;
      v35 = _InterlockedCompareExchange64(v32, v33 ^ (*v32 ^ v33) & 0xF07FFFFFFFFFFFFFuLL, *v32);
      if ( v34 != v35 )
      {
        do
        {
          v36 = v35;
          v35 = _InterlockedCompareExchange64(v32, v33 ^ (v35 ^ v33) & 0xF07FFFFFFFFFFFFFuLL, v35);
        }
        while ( v36 != v35 );
      }
    }
    if ( v29 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(v30 + 4168) = *(_QWORD *)(a1 + 8);
    }
    else
    {
      v37 = *(_QWORD *)(a1 + 8);
      v38 = 6 * v29;
      *(_QWORD *)(8 * v38 - 0x21FFFFFFFFE8LL) = (v37 << 40) ^ ((v37 << 40) ^ *(_QWORD *)(48 * v29 - 0x21FFFFFFFFE8LL)) & 0xF80000FFFFFFFFFFuLL;
      *(_DWORD *)(8 * v38 - 0x21FFFFFFFFDCLL) = (v37 >> 19) ^ ((v37 >> 19) ^ *(_DWORD *)(48 * v29 - 0x21FFFFFFFFDCLL)) & 0xFFE00000;
    }
    v11 = (unsigned __int64 *)(v48 - 0x220000000000LL);
    *(_QWORD *)(v48 - 0x220000000000LL) = *(_QWORD *)(v48 - 0x220000000000LL) & 0xFFFFFFFFFFLL | (v29 << 40);
    *(_DWORD *)(v48 - 0x21FFFFFFFFDCLL) = *(_DWORD *)(v48 - 0x21FFFFFFFFDCLL) & 0x1FFFFF | ((unsigned int)(v29 >> 24) << 21);
    v39 = *(_QWORD *)(v48 - 0x21FFFFFFFFD8LL);
    v40 = (v29 & 0xFFFFFFF800000000uLL) << 20;
    v41 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v48 - 0x21FFFFFFFFD8LL),
            v40 ^ (v39 ^ v40) & 0xF07FFFFFFFFFFFFFuLL,
            v39);
    if ( v39 != v41 )
    {
      do
      {
        v42 = v41;
        v41 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v48 - 0x21FFFFFFFFD8LL),
                v40 ^ (v41 ^ v40) & 0xF07FFFFFFFFFFFFFuLL,
                v41);
      }
      while ( v42 != v41 );
    }
    v10 = v50;
    *(_QWORD *)(v9 + 24) = (v28 << 40) ^ (*(_QWORD *)(v9 + 24) ^ (v28 << 40)) & 0xF80000FFFFFFFFFFuLL;
    v43 = (v28 >> 19) ^ ((v28 >> 19) ^ *(_DWORD *)(v9 + 36)) & 0xFFE00000;
    v12 = v49;
    *(_DWORD *)(v9 + 36) = v43;
    result = *(_QWORD *)(a1 + 16);
    if ( result == 1 )
      _InterlockedIncrement64((volatile signed __int64 *)(v30 + 4176));
    else
      _InterlockedAdd64((volatile signed __int64 *)(v30 + 4176), result);
  }
  if ( !v2 )
  {
    *v11 = v12 ^ (v12 ^ *v11) & 0xFFFFFF0000000000uLL;
    result = v10 ^ (v10 ^ *(_QWORD *)(v9 + 24)) & 0xFFFFFF0000000000uLL;
    *(_QWORD *)(v9 + 24) = result;
  }
  return result;
}
