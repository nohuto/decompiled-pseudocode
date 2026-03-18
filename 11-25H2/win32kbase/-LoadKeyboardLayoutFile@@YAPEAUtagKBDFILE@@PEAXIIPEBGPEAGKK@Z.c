/*
 * XREFs of ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x14010D3A8
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011CA28 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     HMAllocObjectEx @ 0x14003E880 (HMAllocObjectEx.c)
 *     HMFreeObject @ 0x1400F67F0 (HMFreeObject.c)
 *     ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x14010D514 (-ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z.c)
 *     ?PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z @ 0x14019F620 (-PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z.c)
 *     _wcsicmp @ 0x1401A3290 (_wcsicmp.c)
 */

struct tagKBDFILE *__fastcall LoadKeyboardLayoutFile(
        void *a1,
        __int64 a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        wchar_t *Str2,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v8; // r14d
  wchar_t *v10; // rdi
  struct tagKBDFILE *i; // rbx
  struct tagKBDFILE *v12; // rax
  int v13; // edx
  _WORD *v14; // rcx
  __int16 v15; // ax
  struct tagKbdLayer *LayoutFile; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx

  v8 = a2;
  v10 = Str2;
  for ( i = *(struct tagKBDFILE **)(W32GetUserSessionState(a1, a2) + 14192); i; i = (struct tagKBDFILE *)*((_QWORD *)i + 2) )
  {
    if ( Str2 && !wcsicmp((const wchar_t *)i + 28, Str2) )
      return i;
  }
  v12 = (struct tagKBDFILE *)HMAllocObjectEx(0LL, 0LL, 0xEu, 0x78u, 0);
  i = v12;
  if ( v12 )
  {
    if ( a1 )
    {
      v13 = 32;
      v14 = (_WORD *)((char *)v12 + 56);
      do
      {
        v15 = *v10++;
        *v14++ = v15;
        if ( !v15 )
          break;
        --v13;
      }
      while ( v13 );
      *((_WORD *)i + 59) = 0;
      LayoutFile = ReadLayoutFile(i, a1, v8, a3);
      v18 = a7;
      *((_QWORD *)i + 4) = LayoutFile;
      if ( a6 || a7 )
      {
        if ( !LayoutFile )
        {
LABEL_18:
          HMFreeObject((unsigned int *)i, v18);
          return 0LL;
        }
        *((_DWORD *)LayoutFile + 24) = a6;
        *(_DWORD *)(*((_QWORD *)i + 4) + 100LL) = a7;
        LayoutFile = (struct tagKbdLayer *)*((_QWORD *)i + 4);
      }
    }
    else
    {
      LayoutFile = PrepareFallbackKeyboardFile(v12);
      *((_QWORD *)i + 4) = LayoutFile;
    }
    if ( LayoutFile )
    {
      v19 = *(_QWORD *)(W32GetUserSessionState(v17, v18) + 14192);
      *((_QWORD *)i + 2) = v19;
      *(_QWORD *)(W32GetUserSessionState(v19, v20) + 14192) = i;
      return i;
    }
    goto LABEL_18;
  }
  return 0LL;
}
