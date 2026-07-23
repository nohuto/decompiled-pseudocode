/*
 * XREFs of MiResetAccessBitPte @ 0x14029BDF0
 * Callers:
 *     <none>
 * Callees:
 *     MiAcquirePrcbAgeTrimLists @ 0x14029C380 (MiAcquirePrcbAgeTrimLists.c)
 *     MiSetVaAgeListEx @ 0x14029C850 (MiSetVaAgeListEx.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiDemoteCombinedPte @ 0x1402E01A0 (MiDemoteCombinedPte.c)
 *     MiClearPteAccessed @ 0x1402E1A30 (MiClearPteAccessed.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiLogPageAccess @ 0x140322960 (MiLogPageAccess.c)
 *     MiIsPageTableLocked @ 0x140479F4C (MiIsPageTableLocked.c)
 */

__int64 __fastcall MiResetAccessBitPte(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // r11
  __int64 v10; // r13
  unsigned __int64 v11; // r14
  __int64 v12; // r8
  unsigned __int64 v13; // rdi
  _QWORD *v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // r10d
  __int64 v18; // rbx
  unsigned __int64 v20; // rdx
  __int64 HasShadow; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  char v25; // r8^7
  unsigned __int64 v26; // r9
  __int64 v27; // rax
  unsigned __int64 *v28; // rcx
  unsigned __int64 PteShadow; // rax
  int v30; // eax
  unsigned int v31; // r9d
  unsigned int v32; // r9d
  ULONG *v33; // rax
  int PagePrivilege; // eax
  _DWORD *v35; // rcx

  v3 = *(_QWORD *)(a1 + 184);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)a2;
  v7 = 0xFFFFF6FB7DBED7F8uLL;
  v8 = 1;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v20 = *(_QWORD *)a2;
    if ( (v6 & 1) != 0 && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
    {
      HasShadow = MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v20, a3);
      if ( HasShadow )
      {
        v7 = *(_QWORD *)(HasShadow + 1288);
        if ( v7 )
        {
          v23 = *(_QWORD *)(v7 + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v23 & 0x20) != 0 )
            v22 |= 0x20uLL;
          v6 = v22 | 0x42;
          if ( (v23 & 0x42) == 0 )
            v6 = v22;
        }
      }
    }
  }
  if ( (v6 & 0x20) != 0 )
  {
    v9 = 0xFFFFFFFFFFLL;
    v10 = 48 * ((v6 >> 12) & 0xFFFFFFFFFFLL);
    v11 = v10 - 0x220000000000LL;
    if ( !(_DWORD)a3
      || (*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 && !(unsigned int)MiIsPageTableLocked(v5, a2) )
    {
      v12 = *(_QWORD *)(v11 + 8);
      if ( v12 > 0 && (*(_QWORD *)(v11 + 40) & 0x10000000000LL) == 0 )
      {
        v30 = MiDemoteCombinedPte(v5, a2, v12 | 0x8000000000000000uLL);
        v9 = 0xFFFFFFFFFFLL;
        if ( v30 )
          v6 = *(_QWORD *)a2;
      }
      v13 = (__int64)(a2 << 25) >> 16;
      if ( !*(_QWORD *)(v3 + 24) )
        goto LABEL_8;
      if ( (*(_DWORD *)(v5 + 184) & 0xF) != 0 )
      {
        if ( (MiGetPagePrivilege(48 * (v9 & (v6 >> 12)) - 0x220000000000LL) & 0x41) != 0 )
        {
LABEL_63:
          if ( *(_QWORD *)(v3 + 24) == 1LL )
            MiAcquirePrcbAgeTrimLists(v5, v3 + 8);
          v35 = *(_DWORD **)(v3 + 24);
          *(_QWORD *)&v35[2 * (*v35)++ + 2] = v13 & 0xFFFFFFFFFFFFF000uLL;
          return 0LL;
        }
      }
      else if ( v13 < 0x7FFFFFFF0000LL )
      {
        if ( *(_QWORD *)(v5 + 624) )
          goto LABEL_63;
        PagePrivilege = MiGetPagePrivilege(48 * (v9 & (v6 >> 12)) - 0x220000000000LL);
        if ( PagePrivilege )
        {
          if ( (*(_BYTE *)(v5 - 656) & 1) != 0 || (PagePrivilege & 8) == 0 )
            goto LABEL_63;
        }
      }
LABEL_8:
      if ( v13 < 0xFFFFF68000000000uLL || v13 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v14 = (_QWORD *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v15 = *v14;
        if ( (unsigned __int64)v14 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v14 <= 0xFFFFF6FB7DBED7F8uLL
          && (v15 & 1) != 0
          && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
        {
          v24 = MiPteHasShadow(v7, v15, *v14);
          if ( v24 )
          {
            v27 = *(_QWORD *)(v24 + 1288);
            if ( v27 )
            {
              HIBYTE(v15) = v25;
              if ( (*(_QWORD *)(v27 + 8 * ((v26 >> 3) & 0x1FF)) & 0x42) == 0 )
                HIBYTE(v15) = v25;
            }
          }
        }
        LODWORD(v16) = HIBYTE(v15) & 0xF;
      }
      else
      {
        v28 = (unsigned __int64 *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        PteShadow = *v28;
        if ( (unsigned __int64)v28 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v28 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(v28, *v28);
        v16 = (*(_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) >> 46) & 7LL;
      }
      v17 = 5;
      if ( (_DWORD)v16 == 7
        && ((v31 = *(_DWORD *)(v11 + 32), (*(_QWORD *)(v11 + 40) & 0x20000000000000LL) == 0)
         && ((*(_DWORD *)(v11 + 32) & 0x8000000) == 0
          || v11 >= 0xFFFFDE0000000000uLL
          && v11 < 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
          && !(unsigned int)MiIsDecayPfn(v10 / 48)
          && ((v31 & 0x70000) == 0x60000 || (unsigned int)MiGetPfnSlabType(v10 - 0x220000000000LL) != 9))
          ? (v32 = HIBYTE(v31) & 7)
          : (v32 = v17),
            (*(_DWORD *)(v5 + 184) & 0xF) == 1
          ? (v33 = &MiSystemPartition)
          : (v33 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v5 + 174))),
            v32 < v33[4540]) )
      {
        v8 = 0;
      }
      else if ( (int)v16 - 1 <= v17 )
      {
        MiSetVaAgeListEx(v5, (__int64)(a2 << 25) >> 16, 1, 0, 0);
      }
      v18 = 0LL;
      if ( *(_DWORD *)(v3 + 4) )
      {
        if ( !*(_QWORD *)(v3 + 8) )
          MiAcquirePrcbAgeTrimLists(v5, v3 + 8);
        v18 = *(_QWORD *)(v3 + 8);
      }
      if ( (unsigned int)MiClearPteAccessed(v5, v10, a2, v18, *(_DWORD *)v3 != 0) && v8 && *(_DWORD *)v3 && !v18 )
        MiLogPageAccess(v5, a2);
    }
  }
  return 0LL;
}
