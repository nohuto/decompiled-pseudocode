/*
 * XREFs of CmpAddSecurityCellToCache @ 0x1409C96E0
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1408C4CC8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1409C9150 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpInsertSecurityCellList @ 0x140AE3114 (CmpInsertSecurityCellList.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x14046BB10 (CmpFindSecurityCellCacheIndex.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpSecConvKey @ 0x1409C9950 (CmpSecConvKey.c)
 */

__int64 __fastcall CmpAddSecurityCellToCache(ULONG_PTR BugCheckParameter3, unsigned int a2, char a3, __int64 a4)
{
  int v7; // ebx
  __int64 CellFlat; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r15
  int v13; // eax
  _QWORD *v14; // rcx
  ULONG_PTR v15; // rdx
  _QWORD *v16; // rax
  __int64 v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rcx
  const void *v21; // rsi
  int v22; // eax
  void *v23; // rax
  unsigned int v24; // ecx
  unsigned int v25[4]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+78h] [rbp+48h] BYREF
  int v27; // [rsp+7Ch] [rbp+4Ch]

  v27 = HIDWORD(a4);
  v25[0] = -1;
  v26 = 0;
  v25[1] = 0;
  if ( CmpFindSecurityCellCacheIndex(BugCheckParameter3, a2, &v26) != 1 )
  {
    v7 = *(_DWORD *)(BugCheckParameter3 + 1884);
    if ( *(_DWORD *)(BugCheckParameter3 + 1880) == v7 )
    {
      v21 = *(const void **)(BugCheckParameter3 + 1896);
      v22 = 256;
      if ( a3 != 1 )
        v22 = 16;
      *(_DWORD *)(BugCheckParameter3 + 1884) = v22 + v7;
      v23 = (void *)guard_dispatch_icall_no_overrides((unsigned int)(16 * (v22 + v7)), 0LL);
      v24 = *(_DWORD *)(BugCheckParameter3 + 1880);
      *(_QWORD *)(BugCheckParameter3 + 1896) = v23;
      if ( !v23 )
      {
        *(_QWORD *)(BugCheckParameter3 + 1896) = v21;
        *(_DWORD *)(BugCheckParameter3 + 1884) = v24;
        return 3221225626LL;
      }
      memmove(v23, v21, 16LL * v24);
      if ( v21 )
        guard_dispatch_icall_no_overrides((__int64)v21, (unsigned int)(16 * v7));
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, v25);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, a2);
    v9 = CellFlat;
    if ( CellFlat )
    {
      v10 = (unsigned int)(*(_DWORD *)(CellFlat + 16) + 32);
      if ( *(_DWORD *)(CellFlat + 16) < 0xFFFFFFE0 && (_DWORD)v10 != 32 )
      {
        v11 = guard_dispatch_icall_no_overrides(v10, 0LL);
        v12 = v11;
        if ( v11 )
        {
          memmove((void *)(v11 + 32), (const void *)(v9 + 20), *(unsigned int *)(v9 + 16));
          *(_DWORD *)v12 = a2;
          *(_DWORD *)(v12 + 24) = *(_DWORD *)(v9 + 16);
          *(_DWORD *)(v12 + 28) = 0;
          v13 = CmpSecConvKey(*(unsigned int *)(v9 + 16), v9 + 20);
          *(_DWORD *)(v12 + 4) = v13;
          v14 = (_QWORD *)(v12 + 8);
          v15 = BugCheckParameter3 + 16 * ((v13 & 0x3F) + 119LL);
          v16 = *(_QWORD **)(v15 + 8);
          if ( *v16 != v15 )
            __fastfail(3u);
          v18 = v26;
          *v14 = v15;
          *(_QWORD *)(v12 + 16) = v16;
          *v16 = v14;
          *(_QWORD *)(v15 + 8) = v14;
          v19 = *(_DWORD *)(BugCheckParameter3 + 1880);
          if ( (unsigned int)v18 < v19 )
            memmove(
              (void *)(*(_QWORD *)(BugCheckParameter3 + 1896) + 16LL * (unsigned int)(v18 + 1)),
              (const void *)(*(_QWORD *)(BugCheckParameter3 + 1896) + 16LL * (unsigned int)v18),
              16LL * (v19 - (unsigned int)v18));
          v20 = 2 * v18;
          *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 1896) + 8 * v20) = a2;
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 1896) + 8 * v20 + 8) = v12;
          ++*(_DWORD *)(BugCheckParameter3 + 1880);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, (__int64)v25);
          else
            HvpReleaseCellPaged(BugCheckParameter3, v25);
          return 0LL;
        }
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v25);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v25);
    }
    return 3221225626LL;
  }
  return 0LL;
}
