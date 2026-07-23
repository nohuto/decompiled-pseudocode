/*
 * XREFs of MiLocateCachedExtent @ 0x14050B884
 * Callers:
 *     MiInitializeCachedExtentWalker @ 0x1404FDCAC (MiInitializeCachedExtentWalker.c)
 * Callees:
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 */

_DWORD *__fastcall MiLocateCachedExtent(__int64 *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  _DWORD *v5; // r11
  unsigned __int64 v6; // rdi
  int v7; // r10d
  int v8; // edx
  int v9; // r8d
  __int64 v10; // r9
  unsigned int v11; // ecx

  v4 = MiStartingOffset(a1, a1[1], 0xFFFFFFFF);
  v5 = (_DWORD *)a1[14];
  v6 = (a2 - v4) >> 12;
  v7 = 0;
  if ( v5 )
  {
    v8 = *v5 - 1;
    while ( v8 >= v7 )
    {
      v9 = (v7 + v8) >> 1;
      v10 = 12LL * v9;
      v11 = v5[v10 + 8];
      if ( (unsigned int)v6 >= v11 )
      {
        if ( (unsigned int)v6 < v5[v10 + 12] + v11 )
          return &v5[v10 + 2];
        v7 = v9 + 1;
      }
      else
      {
        if ( !v9 )
          return 0LL;
        v8 = v9 - 1;
      }
    }
  }
  return 0LL;
}
