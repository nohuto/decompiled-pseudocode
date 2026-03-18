/*
 * XREFs of InitializeScripts @ 0x1403ECA34
 * Callers:
 *     ?vLookupScript@@YAXKPEAGK@Z @ 0x1401021B4 (-vLookupScript@@YAXKPEAGK@Z.c)
 *     cjCopyFontDataW @ 0x140102FD8 (cjCopyFontDataW.c)
 * Callees:
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     ?LOADSTRING@@YAHPEAXIPEAGH@Z @ 0x1401DCDA8 (-LOADSTRING@@YAHPEAXIPEAGH@Z.c)
 */

__int64 __fastcall InitializeScripts(int a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // r14
  unsigned __int16 **v4; // rbx
  int v6; // ebp
  unsigned __int16 *v7; // r12
  unsigned int v8; // esi
  int v9; // eax
  unsigned int i; // esi
  int v11; // eax
  int v12; // edx
  unsigned __int16 *v13; // rcx
  unsigned __int16 v14; // r9
  unsigned __int16 *v15; // r8
  int v16; // eax
  int v17; // edx

  v2 = 1;
  if ( !hModuleWinKernel )
    return 0LL;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v4 = (unsigned __int16 **)(v3 + 19808);
  if ( !*(_QWORD *)(v3 + 19808) )
  {
    v6 = 0;
    v7 = 0LL;
    v8 = 0;
    do
    {
      v9 = LOADSTRING(hModuleWinKernel, v8, 0LL, 0);
      if ( !v9 )
        break;
      ++v8;
      v6 += v9 + 1;
      if ( v8 == 19 )
      {
        v7 = (unsigned __int16 *)PALLOCMEM(2 * v6, 1819501383LL);
        break;
      }
    }
    while ( v8 < 0x13 );
    *v4 = 0LL;
    if ( v7 )
    {
      for ( i = 0; i < 0x13; ++i )
      {
        *v4 = v7;
        v11 = LOADSTRING(hModuleWinKernel, i, v7, v6) + 1;
        *((_DWORD *)v4 - 2) = 0;
        v6 -= v11;
        v12 = 0;
        v7 += v11;
        v13 = *v4;
        v14 = **v4;
        if ( v14 )
        {
          v15 = *v4;
          v16 = 0;
          do
          {
            v12 = v16;
            if ( v14 == 58 )
              break;
            *((_DWORD *)v4 - 2) = 10 * v16;
            v17 = *v15 - 48;
            *v4 = v15 + 1;
            v12 = 10 * v16 + v17;
            *((_DWORD *)v4 - 2) = v12;
            if ( !i )
            {
              ++*(_DWORD *)(v3 + 19792);
              v12 = *((_DWORD *)v4 - 2);
            }
            v13 = *v4;
            v16 = v12;
            v15 = *v4;
            v14 = **v4;
          }
          while ( v14 );
        }
        *((_DWORD *)v4 - 2) = v12 + 1000;
        *v4 = v13 + 1;
        if ( !i )
          ++*(_DWORD *)(v3 + 19792);
        v4 += 2;
      }
    }
    else
    {
      return 0;
    }
  }
  return v2;
}
