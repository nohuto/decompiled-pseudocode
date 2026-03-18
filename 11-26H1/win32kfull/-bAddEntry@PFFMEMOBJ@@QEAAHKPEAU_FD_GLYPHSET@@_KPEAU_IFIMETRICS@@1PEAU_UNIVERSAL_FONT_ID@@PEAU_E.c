/*
 * XREFs of ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x140102470
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1401020EC (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x1401F8CD4 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 * Callees:
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140101384 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x140103DF4 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?IsCHSBaseFont@@YAHPEBGI@Z @ 0x14021A824 (-IsCHSBaseFont@@YAHPEBGI@Z.c)
 */

__int64 __fastcall PFFMEMOBJ::bAddEntry(
        struct PFF **this,
        int a2,
        struct _FD_GLYPHSET *a3,
        unsigned __int64 a4,
        struct _IFIMETRICS *a5,
        unsigned __int64 a6,
        struct _UNIVERSAL_FONT_ID *a7,
        struct _EUDCLOAD *a8)
{
  struct PFF *v9; // rdx
  struct _EUDCLOAD *v11; // rbx
  unsigned __int8 v12; // si
  _QWORD *v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rcx
  wchar_t *v16; // rbp
  int v17; // esi
  struct _FLENTRY *BaseFontEntry; // rdi
  __int64 result; // rax
  __int64 v20; // rdi
  const wchar_t *v21; // rbp
  __int64 v22; // rcx
  _WORD *v23; // rdx
  const wchar_t *v24; // rsi
  __int16 v25; // r12
  BOOL v26; // edx
  __int64 v27; // rax
  const wchar_t *v28; // rsi
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // edi
  __int64 v33; // [rsp+80h] [rbp+8h] BYREF

  v9 = *this;
  v33 = *((_QWORD *)*this + 28) + (unsigned int)(*((_DWORD *)*this + 55) * (a2 - 1));
  if ( !v33 )
    return 0LL;
  v11 = a8;
  if ( a8 )
  {
    v13 = *(_QWORD **)a8;
    v12 = 1;
  }
  else
  {
    v12 = 0;
    v13 = 0LL;
  }
  if ( !(unsigned int)PFEMEMOBJ::bInit((PFEMEMOBJ *)&v33, v9, a2, a3, a4, a5, a6, *((_QWORD *)v9 + 11) == 0LL, a7, v12) )
    return 0LL;
  if ( v12 )
  {
    v21 = (const wchar_t *)*((_QWORD *)v11 + 1);
    v14 = v33;
    if ( v21 )
    {
      if ( a2 != 1 )
      {
        v22 = *(_QWORD *)(v33 + 32);
        v23 = (_WORD *)(v22 + *(int *)(v22 + 8));
        v24 = v23 + 1;
        v25 = *(_WORD *)(*(int *)(v22 + 16) + v22);
        if ( *v23 != 64 )
          v24 = (const wchar_t *)(v22 + *(int *)(v22 + 8));
        if ( _wcsicmp(v21, v24) )
        {
          v26 = 0;
          if ( (*(_DWORD *)(*(_QWORD *)(v14 + 32) + 48LL) & 0x8000000) == 0 )
            goto LABEL_15;
          v27 = -1LL;
          do
            ++v27;
          while ( v24[v27] );
          v28 = &v24[v27 + 1];
          do
          {
            if ( !*v28 )
              break;
            if ( *v28 == 64 )
              ++v28;
            v29 = _wcsicmp(v21, v28);
            v30 = -1LL;
            v26 = v29 == 0;
            do
              ++v30;
            while ( v28[v30] );
            v28 += v30 + 1;
          }
          while ( v29 );
          if ( !v26 )
            goto LABEL_15;
        }
        v31 = 0LL;
        if ( v25 == 64 )
          v31 = 1LL;
        v13[v31] = v14;
        if ( v25 == 64 )
          goto LABEL_15;
        goto LABEL_40;
      }
    }
    else
    {
      v32 = a2 - 1;
      if ( v32 )
      {
        if ( v32 != 1 || *(_WORD *)(*(int *)(*(_QWORD *)(v33 + 32) + 16LL) + *(_QWORD *)(v33 + 32)) != 64 )
          goto LABEL_15;
        goto LABEL_40;
      }
    }
    *v13 = v33;
LABEL_40:
    v13[1] = v14;
    goto LABEL_15;
  }
  v14 = v33;
  v15 = *(_QWORD *)(v33 + 32);
  v16 = (wchar_t *)(v15 + *(int *)(v15 + 8));
  v17 = *(_DWORD *)(v15 + 48) & 0x8000000;
  BaseFontEntry = FindBaseFontEntry(v16);
  if ( BaseFontEntry )
    goto LABEL_46;
  if ( v17 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v16[v20] );
    BaseFontEntry = FindBaseFontEntry(&v16[v20 + 1]);
    if ( BaseFontEntry )
    {
LABEL_46:
      if ( (unsigned int)IsCHSBaseFont(*((const unsigned __int16 **)*this + 3), *((_DWORD *)*this + 8)) )
        *((_DWORD *)*this + 13) |= 0x8000u;
      *(_QWORD *)(v14 + 120) = BaseFontEntry;
      goto LABEL_16;
    }
  }
LABEL_15:
  *(_QWORD *)(v14 + 120) = 0LL;
LABEL_16:
  result = 1LL;
  *((_QWORD *)*this + (unsigned int)(*((_DWORD *)*this + 54))++ + 28) = v14;
  return result;
}
