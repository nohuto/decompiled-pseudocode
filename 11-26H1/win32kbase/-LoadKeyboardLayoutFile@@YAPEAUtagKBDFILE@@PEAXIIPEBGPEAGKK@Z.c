/*
 * XREFs of ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x14011DC94
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011BC8C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     HMFreeObject @ 0x1401187F0 (HMFreeObject.c)
 *     HMAllocObjectEx @ 0x14011DE20 (HMAllocObjectEx.c)
 *     ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x14011E338 (-ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z.c)
 *     ?PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z @ 0x14011F598 (-PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z.c)
 *     _wcsicmp @ 0x1401C77A8 (_wcsicmp.c)
 */

struct tagKBDFILE *__fastcall LoadKeyboardLayoutFile(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        wchar_t *Str2,
        unsigned int a6,
        unsigned int a7)
{
  wchar_t *v10; // rdi
  struct tagKBDFILE *i; // rbx
  int v12; // r8d
  struct tagKBDFILE *v13; // rax
  int v14; // edx
  _WORD *v15; // rcx
  __int16 v16; // ax
  struct tagKbdLayer *LayoutFile; // rax
  int v18; // ecx
  int v19; // r8d
  int v20; // edx
  __int64 v21; // rcx
  int v22; // edx
  int v23; // r8d

  v10 = Str2;
  for ( i = *(struct tagKBDFILE **)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 14184);
        i;
        i = (struct tagKBDFILE *)*((_QWORD *)i + 2) )
  {
    if ( Str2 && !wcsicmp((const wchar_t *)i + 28, Str2) )
      return i;
  }
  LOBYTE(v12) = 14;
  v13 = (struct tagKBDFILE *)HMAllocObjectEx(0, 0, v12, 120, 0);
  i = v13;
  if ( v13 )
  {
    if ( a1 )
    {
      v14 = 32;
      v15 = (_WORD *)((char *)v13 + 56);
      do
      {
        v16 = *v10++;
        *v15++ = v16;
        if ( !v16 )
          break;
        --v14;
      }
      while ( v14 );
      *((_WORD *)i + 59) = 0;
      LayoutFile = ReadLayoutFile(i, a1, a2, a3);
      v19 = a6;
      v20 = a7;
      *((_QWORD *)i + 4) = LayoutFile;
      if ( a6 || a7 )
      {
        if ( !LayoutFile )
        {
LABEL_18:
          HMFreeObject(i, v20, v19);
          return 0LL;
        }
        *((_DWORD *)LayoutFile + 24) = a6;
        *(_DWORD *)(*((_QWORD *)i + 4) + 100LL) = a7;
        LayoutFile = (struct tagKbdLayer *)*((_QWORD *)i + 4);
      }
    }
    else
    {
      LayoutFile = PrepareFallbackKeyboardFile(v13);
      *((_QWORD *)i + 4) = LayoutFile;
    }
    if ( LayoutFile )
    {
      v21 = *(_QWORD *)(W32GetUserSessionState(v18, v20, v19) + 14184);
      *((_QWORD *)i + 2) = v21;
      *(_QWORD *)(W32GetUserSessionState(v21, v22, v23) + 14184) = i;
      return i;
    }
    goto LABEL_18;
  }
  return 0LL;
}
