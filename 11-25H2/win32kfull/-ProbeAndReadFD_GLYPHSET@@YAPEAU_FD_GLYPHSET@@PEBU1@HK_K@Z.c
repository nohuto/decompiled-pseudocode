/*
 * XREFs of ?ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z @ 0x1401BF0DC
 * Callers:
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1401BE860 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 * Callees:
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

struct _FD_GLYPHSET *__fastcall ProbeAndReadFD_GLYPHSET(
        const struct _FD_GLYPHSET *Src,
        int a2,
        unsigned int a3,
        __int64 a4)
{
  ULONG cRuns; // r12d
  __int64 v6; // r13
  ULONG cGlyphsSupported; // ecx
  unsigned int v9; // r14d
  _DWORD *v10; // rdi
  ULONG v11; // r15d
  _DWORD *v12; // r10
  unsigned int v13; // r8d
  ULONG i; // r14d
  unsigned int v15; // ecx
  int v16; // edx
  unsigned int v17; // eax
  __int64 v18; // rax
  _BYTE *v19; // rdx
  __int64 v20; // r8
  char v21; // [rsp+20h] [rbp-58h]
  int v22; // [rsp+28h] [rbp-50h]
  ULONG v23; // [rsp+2Ch] [rbp-4Ch]
  unsigned int v24; // [rsp+2Ch] [rbp-4Ch]
  ULONG v25; // [rsp+30h] [rbp-48h]
  ULONG v26; // [rsp+34h] [rbp-44h]
  int v27; // [rsp+38h] [rbp-40h]
  _DWORD *v28; // [rsp+40h] [rbp-38h]

  if ( a3 < 0x10 )
    return 0LL;
  if ( !a2 && ((unsigned __int8)Src & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  cRuns = Src->cRuns;
  v25 = cRuns;
  if ( cRuns > (a3 - 16) >> 4 )
    return 0LL;
  v6 = 16LL * cRuns;
  cGlyphsSupported = Src->cGlyphsSupported;
  v23 = cGlyphsSupported;
  v26 = Src->cGlyphsSupported;
  if ( cGlyphsSupported > (a3 - ((_DWORD)v6 + 16)) >> 2 )
    return 0LL;
  v9 = v6 + 16 + 4 * cGlyphsSupported;
  if ( v9 > 0x2710000 )
    return 0LL;
  v10 = (_DWORD *)PALLOCMEM(v9, 1886221639LL);
  if ( !v10 )
    return 0LL;
  v21 = 0;
  v22 = 0;
  memmove(v10, Src, v6 + 16);
  *v10 = v9;
  if ( v10[3] == cRuns )
  {
    v11 = v23;
    if ( v10[2] == v23 )
    {
      v12 = &v10[(unsigned __int64)v6 / 4 + 4];
      v28 = v12;
      v13 = 0;
      for ( i = 0; i < cRuns; ++i )
      {
        v15 = HIWORD(v10[4 * i + 4]);
        v16 = v22;
        if ( v11 - v22 < v15 )
          goto LABEL_34;
        v17 = LOWORD(v10[4 * i + 4]);
        if ( v17 < v13 )
          goto LABEL_34;
        v13 = v17 + v15;
        v24 = v17 + v15;
        v22 += v15;
        v27 = v15 + v16;
        v18 = *(_QWORD *)&v10[4 * i + 6];
        if ( v18 )
        {
          v19 = (_BYTE *)(v18 + a4);
          v20 = 4 * v15;
          if ( v18 + a4 < (unsigned __int64)Src
            || v19 - (_BYTE *)Src > (unsigned __int64)a3
            || (unsigned int)v20 > (unsigned __int64)Src + a3 - (_QWORD)v19 )
          {
            goto LABEL_34;
          }
          if ( !a2 && (_DWORD)v20 )
          {
            if ( ((unsigned __int8)v19 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)&v19[v20] > MmUserProbeAddress || &v19[v20] < v19 )
            {
              cRuns = v25;
              v11 = v26;
              v22 = v27;
            }
          }
          memmove(v12, v19, (unsigned int)v20);
          *(_QWORD *)&v10[4 * i + 6] = v28;
          v12 = &v28[HIWORD(v10[4 * i + 4])];
          v28 = v12;
          v13 = v24;
        }
      }
      v21 = 1;
    }
  }
LABEL_34:
  if ( !v21 )
  {
    Win32FreePool(v10);
    return 0LL;
  }
  return (struct _FD_GLYPHSET *)v10;
}
