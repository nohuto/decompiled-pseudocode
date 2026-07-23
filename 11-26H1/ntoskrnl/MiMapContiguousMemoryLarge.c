/*
 * XREFs of MiMapContiguousMemoryLarge @ 0x1402A1EFC
 * Callers:
 *     MiMapContiguousMemory @ 0x140365BB0 (MiMapContiguousMemory.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiMapWithLargePages @ 0x1402A1BE4 (MiMapWithLargePages.c)
 *     MiAssignInitialPageAttribute @ 0x1402A2190 (MiAssignInitialPageAttribute.c)
 *     MiGetPageTablesForLargeMap @ 0x1402A2624 (MiGetPageTablesForLargeMap.c)
 *     MiReferenceIoPages @ 0x1402D2018 (MiReferenceIoPages.c)
 *     MiDereferenceIoPages @ 0x1403152FC (MiDereferenceIoPages.c)
 *     MiProtectionToCacheAttribute @ 0x140374020 (MiProtectionToCacheAttribute.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiMapContiguousMemoryLarge(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a2,
        unsigned int a3,
        int a4,
        _DWORD *a5)
{
  char v7; // r9
  ULONG_PTR BugCheckParameter4; // r10
  __int64 v9; // rdx
  _QWORD *v10; // r15
  __int64 v11; // rbx
  ULONG_PTR v12; // r13
  int v13; // esi
  ULONG_PTR v14; // r14
  ULONG_PTR i; // r12
  unsigned int v16; // edx
  int v17; // r15d
  int v18; // eax
  char v19; // r12
  unsigned __int64 PageTablesForLargeMap; // rax
  unsigned __int64 v21; // r14
  unsigned int v23; // [rsp+A0h] [rbp+8h] BYREF
  int v24; // [rsp+A8h] [rbp+10h]
  unsigned int v25; // [rsp+B0h] [rbp+18h]
  int v26; // [rsp+B8h] [rbp+20h]

  v26 = a4;
  v25 = a3;
  v24 = 0;
  *a5 = 0;
  v23 = MiProtectionToCacheAttribute(a3);
  v9 = v23;
  if ( BugCheckParameter2 > qword_140E2D920 )
  {
    LODWORD(v11) = BugCheckParameter4;
    v10 = (_QWORD *)(48 * BugCheckParameter2 - 0x21FFFFFFFFD8LL);
  }
  else
  {
    v10 = (_QWORD *)(48 * BugCheckParameter2 - 0x21FFFFFFFFD8LL);
    v11 = (*v10 >> 54) & 1LL;
    if ( ((*v10 >> 54) & 1) != 0 )
    {
      v12 = 48 * BugCheckParameter2 - 0x220000000000LL;
      goto LABEL_4;
    }
  }
  v12 = BugCheckParameter4;
LABEL_4:
  v13 = 3;
  v14 = v12 + 32;
  for ( i = BugCheckParameter4; i < a2; ++i )
  {
    if ( i + BugCheckParameter2 <= qword_140E2D920 && ((*v10 >> 54) & 1) != 0 )
    {
      if ( (v7 & 2) != 0 && ((*(_BYTE *)(v14 + 2) & 7) != 5 || (*(_QWORD *)(v14 + 8) & 0x20000000000000LL) == 0) )
        KeBugCheckEx(0x1Au, 0x1246uLL, i + BugCheckParameter2, 0LL, BugCheckParameter4);
      if ( !v12 )
        return 0LL;
      if ( (*(_DWORD *)v14 & 0xC00000) == 0xC00000 )
      {
        MiAssignInitialPageAttribute(v14 - 32, v9);
        v9 = v23;
        BugCheckParameter4 = 0LL;
        v7 = v26;
      }
      if ( ((*(_DWORD *)v14 >> 22) & 3) != (_DWORD)v9 )
        return 0LL;
      v13 = v9;
    }
    else if ( v12 )
    {
      return 0LL;
    }
    v10 += 6;
    v14 += 48LL;
  }
  if ( i != a2 )
    return 0LL;
  if ( (_DWORD)v11 )
  {
    v17 = v24;
    goto LABEL_26;
  }
  v23 = BugCheckParameter4;
  if ( (int)MiReferenceIoPages(1, BugCheckParameter2, a2, v9, (__int64)&v23, BugCheckParameter4) < 0 )
    return 0LL;
  v16 = v23;
  if ( ((v23 - 1) & v23) != 0 )
  {
    MiDereferenceIoPages(1LL, BugCheckParameter2, a2);
    return 0LL;
  }
  v13 = 0;
  while ( (v16 & 1) == 0 )
  {
    ++v13;
    v16 >>= 1;
  }
  v17 = 1;
LABEL_26:
  v18 = MiPageToNode(BugCheckParameter2);
  v19 = v25;
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(a2, (v25 & 0x18) != 0 ? 6 : 8, 1LL, (unsigned int)(v18 + 1));
  v21 = PageTablesForLargeMap;
  if ( PageTablesForLargeMap )
  {
    MiMapWithLargePages((__int64)&unk_140E37340, PageTablesForLargeMap, BugCheckParameter2, a2, 1u, v19, v13);
    if ( v17 )
      *a5 |= 1u;
  }
  else if ( !(_DWORD)v11 )
  {
    MiDereferenceIoPages(1LL, BugCheckParameter2, a2);
  }
  return v21;
}
