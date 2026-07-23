/*
 * XREFs of LdrpSectionTableFromVirtualAddress @ 0x1800A9EC0
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x1800A7B80 (LdrpResSearchResourceInsideDirectory.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall LdrpSectionTableFromVirtualAddress(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned int a5,
        char a6,
        char a7)
{
  _DWORD *v9; // r10
  int i; // edx
  int v11; // eax
  unsigned int v12; // ecx

  v9 = a4;
  if ( a3 )
  {
    if ( a4 || (v9 = (_DWORD *)(a3 + *(unsigned __int16 *)(a3 + 20) + 24LL)) != 0LL )
    {
      for ( i = 0;
            i < *(unsigned __int16 *)(a3 + 6)
         && (a4 || !a6 || (unsigned __int64)(v9 + 10) <= a2 + (a1 & 0xFFFFFFFFFFFFFFFCuLL));
            ++i )
      {
        if ( !a7 || (v11 = v9[2]) == 0 )
          v11 = v9[4];
        v12 = v9[3];
        if ( a5 >= v12 && a5 < v12 + v11 )
          return v9;
        v9 += 10;
      }
    }
  }
  return 0LL;
}
