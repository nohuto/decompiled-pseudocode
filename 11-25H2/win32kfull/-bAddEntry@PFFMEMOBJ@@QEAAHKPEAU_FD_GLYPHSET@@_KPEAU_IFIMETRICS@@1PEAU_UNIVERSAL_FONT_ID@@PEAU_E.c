/*
 * XREFs of ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1401081B0
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x140108068 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x14030FE30 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 * Callees:
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1400B7AE0 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140108460 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 *     ?IsCHSBaseFont@@YAHPEBGI@Z @ 0x1402621E4 (-IsCHSBaseFont@@YAHPEBGI@Z.c)
 */

__int64 __fastcall PFFMEMOBJ::bAddEntry(
        PFFMEMOBJ *this,
        unsigned int a2,
        struct _FD_GLYPHSET *a3,
        unsigned __int64 a4,
        struct _IFIMETRICS *a5,
        unsigned __int64 a6,
        struct _UNIVERSAL_FONT_ID *a7,
        struct _EUDCLOAD *a8)
{
  __int64 v9; // rdx
  struct _EUDCLOAD *v11; // rbx
  unsigned __int8 v12; // bp
  _QWORD *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rax
  wchar_t *v18; // rdi
  int v19; // ebp
  __int64 v20; // rdx
  struct _FLENTRY *BaseFontEntry; // rsi
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 result; // rax
  const wchar_t *v25; // r12
  __int64 v26; // rcx
  _WORD *v27; // rdx
  const wchar_t *v28; // rbp
  __int16 v29; // r13
  __int64 v30; // rax
  const wchar_t *v31; // r14
  BOOL v32; // eax
  int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // esi
  __int64 v37; // [rsp+80h] [rbp+8h] BYREF

  v9 = *(_QWORD *)this;
  v37 = *(_QWORD *)(*(_QWORD *)this + 224LL) + *(_DWORD *)(*(_QWORD *)this + 220LL) * (a2 - 1);
  if ( v37 )
  {
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
    if ( (unsigned int)PFEMEMOBJ::bInit(
                         (PFEMEMOBJ *)&v37,
                         (struct PFF *)v9,
                         a2,
                         a3,
                         a4,
                         a5,
                         a6,
                         *(_QWORD *)(v9 + 88) == 0LL,
                         a7,
                         v12) )
    {
      if ( !v12 )
      {
        v16 = v37;
        v17 = *(_QWORD *)(v37 + 32);
        v18 = (wchar_t *)(v17 + *(int *)(v17 + 8));
        v19 = *(_DWORD *)(v17 + 48) & 0x8000000;
        BaseFontEntry = FindBaseFontEntry(v18, v14, v15);
        if ( BaseFontEntry )
          goto LABEL_46;
        if ( v19 )
        {
          v23 = -1LL;
          do
            ++v23;
          while ( v18[v23] );
          BaseFontEntry = FindBaseFontEntry(&v18[v23 + 1], v20, v22);
          if ( BaseFontEntry )
          {
LABEL_46:
            if ( (unsigned int)IsCHSBaseFont(
                                 *(const unsigned __int16 **)(*(_QWORD *)this + 24LL),
                                 *(_DWORD *)(*(_QWORD *)this + 32LL)) )
              *(_DWORD *)(*(_QWORD *)this + 52LL) |= 0x8000u;
            *(_QWORD *)(v16 + 120) = BaseFontEntry;
            goto LABEL_12;
          }
        }
LABEL_11:
        *(_QWORD *)(v16 + 120) = 0LL;
LABEL_12:
        result = 1LL;
        *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 216LL))++ + 224) = v16;
        return result;
      }
      v25 = (const wchar_t *)*((_QWORD *)v11 + 1);
      v16 = v37;
      if ( v25 )
      {
        if ( a2 != 1 )
        {
          v26 = *(_QWORD *)(v37 + 32);
          v27 = (_WORD *)(v26 + *(int *)(v26 + 8));
          v28 = v27 + 1;
          v29 = *(_WORD *)(*(int *)(v26 + 16) + v26);
          if ( *v27 != 64 )
            v28 = (const wchar_t *)(v26 + *(int *)(v26 + 8));
          if ( _wcsicmp(v25, v28) )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(v16 + 32) + 48LL) & 0x8000000) == 0 )
              goto LABEL_11;
            v30 = -1LL;
            do
              ++v30;
            while ( v28[v30] );
            v31 = &v28[v30 + 1];
            v32 = 0;
            do
            {
              if ( !*v31 )
                break;
              if ( *v31 == 64 )
                ++v31;
              v33 = _wcsicmp(v25, v31);
              v34 = -1LL;
              do
                ++v34;
              while ( v31[v34] );
              v31 += v34 + 1;
              v32 = v33 == 0;
            }
            while ( v33 );
            if ( !v32 )
              goto LABEL_11;
          }
          v35 = 0LL;
          if ( v29 == 64 )
            v35 = 1LL;
          v13[v35] = v16;
          if ( v29 == 64 )
            goto LABEL_11;
          goto LABEL_40;
        }
      }
      else
      {
        v36 = a2 - 1;
        if ( v36 )
        {
          if ( v36 != 1 || *(_WORD *)(*(int *)(*(_QWORD *)(v37 + 32) + 16LL) + *(_QWORD *)(v37 + 32)) != 64 )
            goto LABEL_11;
          goto LABEL_40;
        }
      }
      *v13 = v37;
LABEL_40:
      v13[1] = v16;
      goto LABEL_11;
    }
  }
  return 0LL;
}
