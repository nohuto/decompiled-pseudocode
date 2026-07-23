/*
 * XREFs of ExpCreateOutputNT @ 0x140A2DF10
 * Callers:
 *     ExpConvertArcName @ 0x140841144 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x140841304 (ExpConvertSignatureName.c)
 *     ExpTranslateEfiPath @ 0x140A2D97C (ExpTranslateEfiPath.c)
 * Callees:
 *     wcscpy_s @ 0x14053EF80 (wcscpy_s.c)
 */

__int64 __fastcall ExpCreateOutputNT(__int64 a1, unsigned int *a2, const wchar_t **a3, const wchar_t *a4)
{
  int v4; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  rsize_t v11; // r14
  wchar_t *v12; // rcx
  __int64 v14; // r10

  v4 = *(unsigned __int16 *)a3 + 2;
  if ( a4 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a4[v14] );
    v4 += 2 * v14;
  }
  v9 = (unsigned int)(v4 + 2) >> 1;
  v10 = v4 + 14;
  if ( a1 && *a2 >= v10 )
  {
    *(_DWORD *)a1 = 1;
    *(_DWORD *)(a1 + 4) = v10;
    *(_DWORD *)(a1 + 8) = 3;
    v11 = v9;
    wcscpy_s((wchar_t *)(a1 + 12), v9, a3[1]);
    v12 = (wchar_t *)(*(unsigned __int16 *)a3 + a1 + 14);
    if ( a4 )
      wcscpy_s(v12, v11, a4);
    else
      *v12 = 0;
    *a2 = v10;
    return 0LL;
  }
  else
  {
    *a2 = v10;
    return 3221225507LL;
  }
}
