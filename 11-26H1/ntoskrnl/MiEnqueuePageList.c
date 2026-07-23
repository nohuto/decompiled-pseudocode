/*
 * XREFs of MiEnqueuePageList @ 0x1402AECA0
 * Callers:
 *     MiAddPageToInsertList @ 0x140320F90 (MiAddPageToInsertList.c)
 * Callees:
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     MiPageToNodeEntry @ 0x1402AEC40 (MiPageToNodeEntry.c)
 *     MiInsertPagesInList @ 0x1402AF3C0 (MiInsertPagesInList.c)
 *     MiSearchNumaNodeTable @ 0x1402AFDE0 (MiSearchNumaNodeTable.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiEnqueuePageList(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // r9
  unsigned __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 v8; // r10
  __int64 v9; // rax
  int v10; // ebp
  ULONG_PTR v11; // r12
  __int64 v12; // r15
  unsigned int v13; // r14d
  unsigned __int64 v14; // r11
  int v15; // r10d
  int v16; // r14d
  unsigned int v17; // r8d
  char v18; // r14
  char v19; // al
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8
  unsigned __int64 *v22; // r9
  unsigned __int64 v23; // rax
  __int64 result; // rax
  int v25; // r8d
  char *v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  char *v29; // rax
  __int64 HasShadow; // rax
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rax
  int i; // r10d
  int v35; // edx

  v2 = 48 * a2;
  v5 = 48 * a2 - 0x220000000000LL;
  v6 = *(_DWORD *)(a1 + 112);
  if ( v6 == 2 || !v6 )
  {
    v7 = *(_QWORD *)(v5 + 16);
    v8 = v5 + 16;
    if ( v5 + 16 >= 0xFFFFF6FB7DBED000uLL
      && v8 <= 0xFFFFF6FB7DBED7F8uLL
      && (v7 & 1) != 0
      && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
    {
      HasShadow = MiPteHasShadow(a1, v7, *(_QWORD *)(v5 + 16));
      if ( HasShadow )
      {
        v32 = *(_QWORD *)(HasShadow + 1288);
        if ( v32 )
        {
          v33 = *(_QWORD *)(v32 + 8 * ((v8 >> 3) & 0x1FF));
          if ( (v33 & 0x20) != 0 )
            v31 |= 0x20uLL;
          v7 = v31 | 0x42;
          if ( (v33 & 0x42) == 0 )
            v7 = v31;
        }
      }
    }
    v9 = -65537LL;
    if ( (v7 & 0x400) != 0 )
      v9 = -5LL;
    *(_QWORD *)v8 = v7 & v9;
  }
  v10 = 0;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v11 = *(_QWORD *)a1;
    v12 = 48LL * *(_QWORD *)a1;
    v13 = *(_DWORD *)(v5 + 32);
    v14 = v12 - 0x220000000000LL;
    v15 = 5;
    if ( (*(_QWORD *)(v5 + 40) & 0x20000000000000LL) != 0 )
    {
      v16 = 5;
    }
    else
    {
      if ( (*(_DWORD *)(v5 + 32) & 0x8000000) == 0 )
        goto LABEL_9;
      if ( v5 < 0xFFFFDE0000000000uLL
        || v5 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
        || (unsigned int)MiIsDecayPfn(v2 / 48) )
      {
        v16 = v15;
        goto LABEL_10;
      }
      if ( (v13 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(v5) == 9 )
        v16 = v15;
      else
LABEL_9:
        v16 = HIBYTE(v13) & 7;
    }
LABEL_10:
    v17 = *(_DWORD *)(v14 + 32);
    if ( (*(_QWORD *)(v14 + 40) & 0x20000000000000LL) == 0
      && ((*(_DWORD *)(v14 + 32) & 0x8000000) == 0
       || v14 >= 0xFFFFDE0000000000uLL
       && v14 < 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
       && !(unsigned int)MiIsDecayPfn(v12 / 48)
       && ((v17 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(v14) != 9)) )
    {
      v15 = HIBYTE(v17) & 7;
    }
    if ( v16 != v15
      || ((*(_BYTE *)(v5 + 34) ^ *(_BYTE *)(v14 + 34)) & 0x10) != 0
      || ((*(_DWORD *)(v5 + 16) ^ *(_DWORD *)(v14 + 16)) & 0x400LL) != 0
      || *(__int64 *)(v5 + 40) < 0 != *(__int64 *)(v14 + 40) < 0 )
    {
      MiInsertPagesInList(a1);
      MiPageToNodeEntry((_QWORD *)(a1 + 96), a2);
      goto LABEL_24;
    }
    if ( *(_DWORD *)(a1 + 28) != 2 )
      goto LABEL_24;
    if ( a2 < *(_QWORD *)(a1 + 96) || a2 > *(_QWORD *)(a1 + 104) )
      goto LABEL_45;
    if ( qword_140E2D868 )
    {
      v18 = *((_BYTE *)MiSearchChannelTable(a2) + 12);
      if ( qword_140E2D868 )
      {
        v19 = *((_BYTE *)MiSearchChannelTable(v11) + 12);
LABEL_23:
        if ( v18 == v19 )
          goto LABEL_24;
LABEL_45:
        MiInsertPagesInList(a1);
        v29 = (char *)MiSearchNumaNodeTable(a2);
        *(_QWORD *)(a1 + 96) = *(_QWORD *)v29;
        if ( (unsigned int)((v29 - (_BYTE *)qword_140E2D860) >> 4) == dword_140E2D804 )
          *(_QWORD *)(a1 + 104) = -1LL;
        else
          *(_QWORD *)(a1 + 104) = *((_QWORD *)v29 + 2) - 1LL;
        goto LABEL_24;
      }
    }
    else
    {
      v18 = 0;
    }
    v19 = 0;
    goto LABEL_23;
  }
  v25 = dword_140E2D804;
  if ( dword_140E2D800 > (unsigned int)dword_140E2D804
    || (v26 = (char *)qword_140E2D860 + 16 * dword_140E2D800, v27 = *(_QWORD *)v26, a2 < *(_QWORD *)v26)
    || dword_140E2D800 != dword_140E2D804 && a2 >= *((_QWORD *)v26 + 2) )
  {
    for ( i = 0; ; i = v35 + 1 )
    {
      while ( 1 )
      {
        if ( v25 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, a2, 0LL, 0LL);
        v35 = (i + v25) >> 1;
        v26 = (char *)qword_140E2D860 + 16 * v35;
        if ( a2 >= *(_QWORD *)v26 )
          break;
        if ( !v35 )
          KeBugCheckEx(0x1Au, 0x5180uLL, a2, (ULONG_PTR)v26, 0LL);
        v25 = v35 - 1;
      }
      if ( v35 == dword_140E2D804 || a2 < *((_QWORD *)v26 + 2) )
        break;
    }
    dword_140E2D800 = (i + v25) >> 1;
    v27 = *(_QWORD *)v26;
  }
  *(_QWORD *)(a1 + 96) = v27;
  if ( (unsigned int)((v26 - (_BYTE *)qword_140E2D860) >> 4) == dword_140E2D804 )
    v28 = -1LL;
  else
    v28 = *((_QWORD *)v26 + 2) - 1LL;
  *(_QWORD *)(a1 + 104) = v28;
LABEL_24:
  if ( *(_QWORD *)a1 == 0x3FFFFFFFFFLL )
  {
    v10 = 1;
    *(_DWORD *)(a1 + 28) = (*(_BYTE *)(v5 + 34) & 0x10 | 0x20u) >> 4;
  }
  v20 = 0xFFFFFF3FFFFFFFFFuLL;
  if ( *(_DWORD *)(a1 + 28) != 2 )
    v20 = *(_QWORD *)v5 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
  *(_QWORD *)v5 = v20;
  if ( v10 )
  {
    *(_QWORD *)a1 = a2;
    *(_QWORD *)(a1 + 8) = a2;
    *(_QWORD *)(v5 + 24) = *(_QWORD *)(v5 + 24) & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    if ( *(_DWORD *)(a1 + 28) == 2 )
    {
      *(_DWORD *)(v5 + 36) |= 0xFFE00000;
      *(_QWORD *)(v5 + 40) = *(_QWORD *)(v5 + 40) & 0xF07FFFFFFFFFFFFFuLL | 0x380000000000000LL;
      *(_QWORD *)(v5 + 24) |= 0x7FFFF0000000000uLL;
      *(_DWORD *)(v5 + 36) = *(_DWORD *)(v5 + 36) & 0xFFE00000 | 0x7FFFF;
    }
  }
  else
  {
    v21 = *(_QWORD *)(a1 + 8);
    v22 = (unsigned __int64 *)(48 * v21 - 0x220000000000LL);
    v23 = a2 ^ (a2 ^ *v22) & 0xFFFFFF0000000000uLL;
    if ( *(_DWORD *)(a1 + 28) == 2 )
      v23 = (a2 << 40) | v23 & 0xFFFFFFFFFFLL;
    *v22 = v23;
    *(_QWORD *)(v5 + 24) = v21 ^ (v21 ^ *(_QWORD *)(v5 + 24)) & 0xFFFFFF0000000000uLL;
    if ( *(_DWORD *)(a1 + 28) == 2 )
    {
      *(_DWORD *)(48 * v21 - 0x21FFFFFFFFDCLL) = *(_DWORD *)(48 * v21 - 0x21FFFFFFFFDCLL) & 0x1FFFFF | ((unsigned int)(a2 >> 24) << 21);
      *(_QWORD *)(48 * v21 - 0x21FFFFFFFFD8LL) = ((a2 & 0xFFFFFFF800000000uLL) << 20) ^ (((a2 & 0xFFFFFFF800000000uLL) << 20) ^ *(_QWORD *)(48 * v21 - 0x21FFFFFFFFD8LL)) & 0xF07FFFFFFFFFFFFFuLL;
      *(_QWORD *)(v5 + 24) = (v21 << 40) ^ (*(_QWORD *)(v5 + 24) ^ (v21 << 40)) & 0xF80000FFFFFFFFFFuLL;
      *(_DWORD *)(v5 + 36) = (v21 >> 19) ^ ((v21 >> 19) ^ *(_DWORD *)(v5 + 36)) & 0xFFE00000;
      *(_DWORD *)(v5 + 36) |= 0xFFE00000;
      *(_QWORD *)(v5 + 40) = *(_QWORD *)(v5 + 40) & 0xF07FFFFFFFFFFFFFuLL | 0x380000000000000LL;
    }
    *(_QWORD *)(a1 + 8) = a2;
  }
  result = *(_QWORD *)(a1 + 16) + 1LL;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
