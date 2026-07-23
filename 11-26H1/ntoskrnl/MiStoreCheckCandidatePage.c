/*
 * XREFs of MiStoreCheckCandidatePage @ 0x1403FD488
 * Callers:
 *     MiStoreWriteModifiedPagePrepare @ 0x1404022B0 (MiStoreWriteModifiedPagePrepare.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiIsDecayPfn @ 0x1402DB8D0 (MiIsDecayPfn.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiGetTopLevelPfn @ 0x1403FD790 (MiGetTopLevelPfn.c)
 *     MiIsStoreProcess @ 0x1403FD910 (MiIsStoreProcess.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1403FD950 (MiGetPageTablePfnBuddyRaw.c)
 */

__int64 __fastcall MiStoreCheckCandidatePage(ULONG_PTR BugCheckParameter2, int a2, _DWORD *a3, _OWORD *a4, _QWORD *a5)
{
  unsigned int v5; // edi
  int v9; // r14d
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  __int64 TopLevelPfn; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // ebx
  char v17; // al
  unsigned int v18; // r9d
  char v19; // r8
  unsigned int v20; // r9d
  int v21; // ecx
  int v22; // r8d
  __int128 v24; // [rsp+20h] [rbp-10h]

  v5 = 0;
  v9 = 0;
  if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 )
  {
    *(_QWORD *)&v24 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
    *((_QWORD *)&v24 + 1) = 2LL;
  }
  else
  {
    v10 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
    if ( (unsigned int)MiGetSystemRegionType(v10) == 4 )
    {
      *(_QWORD *)&v24 = v10 - 808;
      *((_QWORD *)&v24 + 1) = 0xFFFFF6FB7DBED000uLL;
    }
    else
    {
      v11 = (__int64)(v10 << 25) >> 16;
      HIDWORD(v24) = HIDWORD(v11);
      if ( v11 < 0x7FFFFFFF0000LL
        || v11 >= qword_140E2DFC0 && v11 <= qword_140E2DFD0
        || v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
        if ( TopLevelPfn == BugCheckParameter2 )
          return (unsigned int)-1073741253;
        *(_QWORD *)&v24 = MiGetPageTablePfnBuddyRaw(TopLevelPfn, v13, TopLevelPfn);
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned int)MiIsStoreProcess(v24) )
          return (unsigned int)-1073741401;
        v9 = (*(_DWORD *)(v15 + 1532) >> 18) & 1;
        DWORD2(v24) = v11 & 0xFFFFFFFC;
      }
      else
      {
        *(_QWORD *)&v24 = 0LL;
        DWORD2(v24) = v11 & 0xFFFFFFFC | 1;
      }
    }
  }
  v16 = *(_DWORD *)(BugCheckParameter2 + 32) & 0xC00000;
  v17 = MiPageToNode((__int64)(BugCheckParameter2 + 0x220000000000LL) / 48);
  v18 = *(_DWORD *)(BugCheckParameter2 + 32);
  v19 = v17;
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x20000000000000LL) != 0
    || (*(_DWORD *)(BugCheckParameter2 + 32) & 0x8000000) != 0
    && (BugCheckParameter2 < 0xFFFFDE0000000000uLL
     || BugCheckParameter2 >= 48 * qword_140E2D920 - 0x21FFFFFFFFD0LL
     || MiIsDecayPfn((__int64)(BugCheckParameter2 + 0x220000000000LL) / 48)
     || (v18 & 0x70000) != 0x60000 && (unsigned int)MiGetPfnSlabType(BugCheckParameter2) == 9) )
  {
    LOBYTE(v20) = 5;
  }
  else
  {
    v20 = HIBYTE(v18);
  }
  v21 = 3072;
  v22 = (v20 & 7 | (16 * (v9 | (2 * (v19 & 0x3F))))) << 13;
  *a4 = v24;
  if ( v16 != 0x400000 )
    v21 = 68608;
  *a3 = a2;
  *a5 = v21 | (unsigned int)v22;
  return v5;
}
