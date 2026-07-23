/*
 * XREFs of MiDecommitPagesCoalesce @ 0x140441E90
 * Callers:
 *     MiDecommitFreePagesTail @ 0x1402BC510 (MiDecommitFreePagesTail.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecommitPagesCoalesce(_WORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  unsigned int v5; // r15d
  unsigned int v6; // edi
  int v9; // r9d
  ULONG_PTR v10; // r8
  __int64 v11; // r14
  __int64 v13; // r10
  int v14; // r11d
  char *v15; // rax
  int v16; // eax
  unsigned __int64 v17; // rdx
  int i; // edx
  int v19; // esi
  __int64 v20; // rcx

  v3 = -1LL;
  v4 = -1LL;
  v5 = a3 + 16;
  v6 = a3;
  v9 = -1;
  while ( v6 < v5 )
  {
    v10 = (*(_QWORD *)(a2 + 8LL * v6 + 12384) >> 12) & 0xFFFFFFFFFFLL;
    if ( v10 > qword_140E2D920 )
      return 0LL;
    v11 = 48 * v10;
    if ( (*(_QWORD *)(48 * v10 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 || v10 != v3 && v3 != -1 )
      return 0LL;
    v3 = v10 + 1;
    v13 = v11 - 0x220000000000LL;
    if ( (unsigned __int16)*(_DWORD *)(v11 - 0x220000000000LL + 32) != 1 )
      return 0LL;
    v14 = dword_140E2D804;
    if ( dword_140E2D800 > (unsigned int)dword_140E2D804
      || (v15 = (char *)qword_140E2D860 + 16 * dword_140E2D800, v10 < *(_QWORD *)v15)
      || dword_140E2D800 != dword_140E2D804 && v10 >= *((_QWORD *)v15 + 2) )
    {
      for ( i = 0; ; i = v19 + 1 )
      {
        while ( 1 )
        {
          if ( v14 < i )
            KeBugCheckEx(0x1Au, 0x5180uLL, v10, 0LL, 0LL);
          v19 = (i + v14) >> 1;
          v20 = 16LL * v19;
          v15 = (char *)qword_140E2D860 + v20;
          if ( v10 >= *(_QWORD *)((char *)qword_140E2D860 + v20) )
            break;
          if ( !v19 )
            KeBugCheckEx(0x1Au, 0x5180uLL, v10, (ULONG_PTR)qword_140E2D860 + v20, 0LL);
          v14 = v19 - 1;
        }
        if ( v19 == dword_140E2D804 || v10 < *((_QWORD *)v15 + 2) )
          break;
      }
      dword_140E2D800 = (i + v14) >> 1;
    }
    v16 = *((_DWORD *)v15 + 2);
    if ( v9 == -1 )
    {
      v9 = v16;
    }
    else if ( v16 != v9 )
    {
      return 0LL;
    }
    if ( v4 == -1 )
    {
      v4 = *(_QWORD *)(v13 + 40) & 0xFFFFFFFFFFLL;
    }
    else if ( (*(_QWORD *)(v13 + 40) & 0xFFFFFFFFFFLL) != v4 )
    {
      return 0LL;
    }
    if ( *(__int64 *)(v13 + 40) < 0 )
      return 0LL;
    if ( byte_140E3BEA6 )
    {
      v17 = (unsigned __int64)(v11 / 48) >> 9;
      if ( *(_BYTE *)(qword_140E3D240 + 2 * v17) )
      {
        if ( *(_BYTE *)(qword_140E3D240 + 2 * v17) != 10 )
          return 0LL;
      }
    }
    if ( ((*(_QWORD *)(v13 + 40) >> 43) & 0x3FF) != *a1 )
      return 0LL;
    ++v6;
  }
  return 1LL;
}
