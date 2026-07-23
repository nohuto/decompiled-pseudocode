/*
 * XREFs of MiFreeZeroPageToColorHead @ 0x14028D340
 * Callers:
 *     MiPageFreeToZero @ 0x14028B780 (MiPageFreeToZero.c)
 *     MiFreeListPageContentsChanged @ 0x14028D0B0 (MiFreeListPageContentsChanged.c)
 *     MiBeginPageAccessor @ 0x1403CED40 (MiBeginPageAccessor.c)
 * Callees:
 *     MiColorGetCache @ 0x140288F60 (MiColorGetCache.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x14028D4F0 (MI_PAGE_TO_FULL_COLOR.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFreeZeroPageToColorHead(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // r14
  int v3; // r8d
  __int64 v4; // r11
  char *v5; // r10
  __int64 v6; // rsi
  unsigned int v7; // edi
  unsigned int v8; // eax
  unsigned int Cache; // eax
  __int64 v10; // r11
  unsigned int v11; // r10d
  int i; // r9d
  int v14; // edi

  v1 = 48 * BugCheckParameter2 - 0x220000000000LL;
  v2 = 0LL;
  v3 = dword_140E2D804;
  v4 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v1 + 40) >> 43) & 0x3FFLL));
  if ( dword_140E2D800 > (unsigned int)dword_140E2D804
    || (v5 = (char *)qword_140E2D860 + 16 * dword_140E2D800, BugCheckParameter2 < *(_QWORD *)v5)
    || dword_140E2D800 != dword_140E2D804 && BugCheckParameter2 >= *((_QWORD *)v5 + 2) )
  {
    for ( i = 0; ; i = v14 + 1 )
    {
      while ( 1 )
      {
        if ( v3 < i )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, 0LL, 0LL);
        v14 = (i + v3) >> 1;
        v5 = (char *)qword_140E2D860 + 16 * v14;
        if ( BugCheckParameter2 >= *(_QWORD *)v5 )
          break;
        if ( !v14 )
          KeBugCheckEx(0x1Au, 0x5180uLL, BugCheckParameter2, (ULONG_PTR)v5, 0LL);
        v3 = v14 - 1;
      }
      if ( v14 == dword_140E2D804 || BugCheckParameter2 < *((_QWORD *)v5 + 2) )
        break;
    }
    dword_140E2D800 = (i + v3) >> 1;
  }
  v6 = *(_QWORD *)(v4 + 16) + 56320LL * *((unsigned int *)v5 + 2);
  v7 = (*(_DWORD *)(v1 + 32) >> 22) & 3;
  v8 = MI_PAGE_TO_FULL_COLOR(BugCheckParameter2);
  if ( (unsigned __int8)byte_140E2D898 > 1u )
    v2 = (v8 >> 8) & 1;
  Cache = MiColorGetCache(v8);
  return *(_QWORD *)(v6
                   + 8 * (v7 + ((unsigned __int64)v11 << 7) + 3 * (v2 + 2 * ((*(_BYTE *)(v1 + 34) & 7) + 2 * v10)))
                   + 800)
       + 88LL * Cache;
}
