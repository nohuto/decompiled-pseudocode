/*
 * XREFs of MiUpdateOldPte @ 0x1402DFDB0
 * Callers:
 *     <none>
 * Callees:
 *     MiUpdateOldPteWorker @ 0x14029B8EC (MiUpdateOldPteWorker.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x14029C380 (MiAcquirePrcbAgeTrimLists.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiDemoteCombinedPte @ 0x1402E01A0 (MiDemoteCombinedPte.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 */

__int64 __fastcall MiUpdateOldPte(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // r13
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r9
  __int64 v8; // r10
  _QWORD *v9; // r15
  __int64 v10; // r8
  unsigned __int64 v11; // r14
  _QWORD *v12; // r9
  __int64 v13; // rdx
  char v14; // dl
  __int64 v15; // rdi
  __int64 result; // rax
  __int64 HasShadow; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  char v21; // r8^7
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  unsigned __int64 *v24; // rcx
  unsigned __int64 PteShadow; // rax
  int v26; // eax
  int PagePrivilege; // eax
  _DWORD *v28; // rcx

  v4 = a1;
  if ( (int)a3 >= 1 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    HasShadow = MiPteHasShadow(a1, v6, a3);
    if ( HasShadow )
    {
      a1 = *(_QWORD *)(HasShadow + 1288);
      if ( a1 )
      {
        v19 = *(_QWORD *)(a1 + 8 * ((a2 >> 3) & 0x1FF));
        if ( (v19 & 0x20) != 0 )
          v18 |= 0x20uLL;
        v6 = v18 | 0x42;
        if ( (v19 & 0x42) == 0 )
          v6 = v18;
      }
    }
  }
  v7 = 0xFFFFDE0000000000uLL;
  v8 = 0xFFFFFFFFFFLL;
  v9 = (_QWORD *)(48 * ((v6 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
  v10 = v9[1];
  if ( v10 > 0 && (v9[5] & 0x10000000000LL) == 0 )
  {
    v26 = MiDemoteCombinedPte(v5, a2, v10 | 0x8000000000000000uLL);
    v7 = 0xFFFFDE0000000000uLL;
    v8 = 0xFFFFFFFFFFLL;
    if ( v26 )
      v6 = *(_QWORD *)a2;
  }
  v11 = (__int64)(a2 << 25) >> 16;
  if ( v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v12 = (_QWORD *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v13 = *v12;
    if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      v20 = MiPteHasShadow(a1, v13, *v12);
      if ( v20 )
      {
        v23 = *(_QWORD *)(v20 + 1288);
        if ( v23 )
        {
          HIBYTE(v13) = v21;
          if ( (*(_QWORD *)(v23 + 8 * ((v22 >> 3) & 0x1FF)) & 0x42) == 0 )
            HIBYTE(v13) = v21;
        }
      }
    }
    v14 = HIBYTE(v13) & 0xF;
    v7 = 0xFFFFDE0000000000uLL;
  }
  else
  {
    v24 = (unsigned __int64 *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v24;
    if ( (unsigned __int64)v24 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v24 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v24, *v24);
    v14 = (*(_QWORD *)(v7 + 48 * (v8 & (PteShadow >> 12))) >> 46) & 7;
  }
  if ( v14 != 6 )
    return 0LL;
  v15 = *(_QWORD *)(v4 + 184);
  if ( (v9[3] & 0x3FFFFFFFFFFFFFFFLL) == 1 && ((*(_DWORD *)v15 & 1) == 0 || (__int64)v9[5] >= 0) )
  {
    if ( (v6 & 0x20) == 0 )
    {
      MiUpdateOldPteWorker(v4, a2, (unsigned __int64)v9, *(unsigned int **)(v4 + 184));
      goto LABEL_9;
    }
    if ( *(_QWORD *)(v15 + 40) )
    {
      if ( (*(_DWORD *)(v5 + 184) & 0xF) == 0 )
      {
        if ( v11 >= 0x7FFFFFFF0000LL )
          goto LABEL_9;
        if ( !*(_QWORD *)(v5 + 624) )
        {
          PagePrivilege = MiGetPagePrivilege((_QWORD *)(v7 + 48 * (v8 & (v6 >> 12))), 2LL, 0LL);
          if ( !PagePrivilege || (*(_BYTE *)(v5 - 656) & 1) == 0 && (PagePrivilege & 8) != 0 )
            goto LABEL_9;
        }
LABEL_50:
        if ( *(_QWORD *)(v15 + 40) == 1LL )
          MiAcquirePrcbAgeTrimLists(v5, (__int64 *)(v15 + 24));
        v28 = *(_DWORD **)(v15 + 40);
        *(_QWORD *)&v28[2 * (*v28)++ + 2] = v11 & 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_9;
      }
      if ( (MiGetPagePrivilege((_QWORD *)(v7 + 48 * (v8 & (v6 >> 12))), 2LL, 0LL) & 0x41) != 0 )
        goto LABEL_50;
    }
  }
LABEL_9:
  ++*(_QWORD *)(v15 + 16);
  result = 0LL;
  if ( *(_QWORD *)(v15 + 16) >= *(_QWORD *)(v15 + 8) )
    return 4LL;
  return result;
}
