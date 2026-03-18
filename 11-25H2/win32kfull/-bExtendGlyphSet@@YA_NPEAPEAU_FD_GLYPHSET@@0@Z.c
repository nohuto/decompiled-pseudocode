/*
 * XREFs of ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x14017CAC8
 * Callers:
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x140108DD8 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x14030FE30 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 * Callees:
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     ?ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z @ 0x14017D4C8 (-ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

char __fastcall bExtendGlyphSet(struct _FD_GLYPHSET **a1, struct _FD_GLYPHSET **a2)
{
  __int64 v2; // r14
  char v3; // bl
  __int64 v4; // rbp
  unsigned int v5; // r15d
  unsigned int v6; // edx
  __int64 v7; // rcx
  struct _FD_GLYPHSET *v8; // rsi
  unsigned int v9; // r11d
  __int16 *v10; // rdx
  __int64 v11; // r9
  unsigned int v12; // r10d
  unsigned int v13; // r8d
  __int16 v14; // r12
  __int64 v15; // rax
  unsigned __int16 v16; // cx
  USHORT v17; // cx
  unsigned int v18; // eax
  int v19; // edx
  unsigned int v21; // r13d
  char *v22; // rdi
  WCRUN *awcrun; // r12
  __int64 v24; // r15
  WCHAR v25; // ax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // r11d
  unsigned __int16 *v29; // r8
  __int64 v30; // r10
  unsigned int i; // r9d
  __int64 v32; // rcx
  char *v33; // rdi
  unsigned __int16 *v34; // rbx
  char *v35; // r14
  __int64 v36; // rbp
  __int64 v37; // rax
  USHORT AnsiCodePage[2]; // [rsp+30h] [rbp-358h] BYREF
  USHORT OemCodePage; // [rsp+34h] [rbp-354h] BYREF
  struct _FD_GLYPHSET **v40; // [rsp+38h] [rbp-350h]
  char v41[256]; // [rsp+40h] [rbp-348h] BYREF
  unsigned __int16 v42[256]; // [rsp+140h] [rbp-248h] BYREF

  v2 = (__int64)*a1;
  v3 = 0;
  AnsiCodePage[0] = 0;
  OemCodePage = 0;
  v40 = a2;
  v4 = *(unsigned int *)(v2 + 12);
  if ( !(_DWORD)v4 )
    return 0;
  v5 = *(_DWORD *)(v2 + 8);
  if ( v5 > 0x100 )
    return 0;
  if ( (unsigned __int16)(*(_WORD *)(v2 + 16LL * (unsigned int)(v4 - 1) + 16)
                        + *(_WORD *)(v2 + 16LL * (unsigned int)(v4 - 1) + 18)
                        - 1) >= 0xF020u
    && *(_WORD *)(v2 + 16) <= 0xF0FFu )
  {
    v6 = 0;
    while ( v6 < (int)v4 - 1 )
    {
      v7 = 2LL * v6++;
      if ( (unsigned __int16)(*(_WORD *)(v2 + 8 * v7 + 16) + *(_WORD *)(v2 + 8 * v7 + 18) - 1) < 0xF020u
        && *(_WORD *)(v2 + 16 * (v6 + 1LL)) > 0xF0FFu )
      {
        goto LABEL_9;
      }
    }
    return 0;
  }
LABEL_9:
  v8 = (struct _FD_GLYPHSET *)PALLOCMEM(4 * (v5 + 4 * (v4 + 58)), 1936484167LL);
  if ( v8 )
  {
    memset_0(v41, 0, sizeof(v41));
    v9 = 0;
    v10 = (__int16 *)(v2 + 16);
    v11 = v4;
    do
    {
      v12 = (unsigned __int16)v10[1];
      v13 = 0;
      if ( v10[1] )
      {
        v14 = *v10;
        do
        {
          v15 = v9;
          v16 = v13 + v14;
          ++v9;
          ++v13;
          v42[v15] = v16;
        }
        while ( v13 < v12 );
      }
      v10 += 8;
      --v11;
    }
    while ( v11 );
    RtlGetDefaultCodePage(AnsiCodePage, &OemCodePage);
    v17 = AnsiCodePage[0];
    v18 = AnsiCodePage[0];
    if ( (unsigned __int16)(AnsiCodePage[0] - 932) <= 0x12u )
    {
      v19 = 393233;
      LOWORD(v18) = AnsiCodePage[0] - 932;
      if ( _bittest(&v19, v18) )
      {
        v17 = 1252;
        AnsiCodePage[0] = 1252;
      }
    }
    if ( ConvertToAndFromWideChar(v17, v42, 2 * v5, v41, 256, 0) == -1 )
    {
      Win32FreePool(v8);
      return 0;
    }
    v8->cjThis = 4 * (v5 + 4 * (v4 + 58));
    v21 = 0;
    v8->flAccel = *(_DWORD *)(v2 + 4) | 0x10;
    v8->cGlyphsSupported = v5 + 224;
    v8->cRuns = v4 + 1;
    v22 = (char *)&v8->awcrun[(unsigned int)(v4 + 1)];
    awcrun = v8->awcrun;
    v24 = v2 - (_QWORD)v8;
    do
    {
      v25 = *(WCHAR *)((char *)&awcrun->wcLow + v24);
      if ( v25 >= 0xF020u )
        break;
      awcrun->wcLow = v25;
      awcrun->cGlyphs = *(USHORT *)((char *)&awcrun->cGlyphs + v24);
      awcrun->phg = (HGLYPH *)v22;
      memmove(
        v22,
        *(const void **)((char *)&awcrun->phg + v24),
        4LL * *(unsigned __int16 *)((char *)&awcrun->cGlyphs + v24));
      v26 = *(unsigned __int16 *)((char *)&awcrun->cGlyphs + v24);
      ++v21;
      ++awcrun;
      v22 += 4 * v26;
    }
    while ( v21 < (unsigned int)v4 );
    v27 = v21;
    *(_DWORD *)&v8->awcrun[v27].wcLow = 14741536;
    v8->awcrun[v27].phg = (HGLYPH *)v22;
    memset_0(v22, 0, 0x380uLL);
    v28 = 0;
    v29 = (unsigned __int16 *)(v2 + 18);
    v30 = v4;
    do
    {
      for ( i = 0; i < *v29; ++i )
      {
        v32 = (unsigned __int8)v41[v28];
        if ( (unsigned __int8)v32 >= 0x20u )
          *(_DWORD *)&v22[4 * v32 - 128] = *(_DWORD *)(*(_QWORD *)(v29 + 3) + 4LL * i);
        ++v28;
      }
      v29 += 8;
      --v30;
    }
    while ( v30 );
    v33 = v22 + 896;
    if ( v21 < (unsigned int)v4 )
    {
      v34 = (unsigned __int16 *)(16LL * v21 + v2 + 18);
      v35 = (char *)&v8[1].cjThis + 16 * v21 + 2;
      v36 = (unsigned int)v4 - v21;
      do
      {
        *((_WORD *)v35 - 1) = *(v34 - 1);
        *(_WORD *)v35 = *v34;
        *(_QWORD *)(v35 + 6) = v33;
        memmove(v33, *(const void **)(v34 + 3), 4LL * *v34);
        v37 = *v34;
        v35 += 16;
        v34 += 8;
        v33 += 4 * v37;
        --v36;
      }
      while ( v36 );
    }
    v3 = 1;
    *v40 = v8;
  }
  return v3;
}
