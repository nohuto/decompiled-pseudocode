/*
 * XREFs of ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1400FB1B4
 * Callers:
 *     bAddAllFlEntry @ 0x1400CAAB4 (bAddAllFlEntry.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1400CB52C (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1400FABEC (-pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1400FAC2C (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     GreEudcLoadLinkW @ 0x14032453C (GreEudcLoadLinkW.c)
 * Callees:
 *     ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1400FABEC (-pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x140101C04 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x140101DB4 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall bComputeQuickLookup(struct _QUICKLOOKUP *a1, struct PFE *a2, int a3)
{
  int v3; // ebx
  struct _QUICKLOOKUP *v5; // r14
  unsigned __int16 v6; // si
  unsigned __int16 v7; // di
  struct _FD_GLYPHSET *v8; // rax
  struct _FD_GLYPHSET *v9; // r15
  ULONG cRuns; // eax
  WCRUN *awcrun; // rdx
  __int64 v12; // r10
  int wcLow; // r9d
  int cGlyphs; // r11d
  unsigned __int16 v15; // r8
  void **v16; // r14
  int v18; // r12d
  USHORT v19; // r11
  __int64 v20; // rdi
  _DWORD *v21; // r8
  unsigned int v22; // eax
  int v23; // r10d
  __int64 v24; // rsi
  __int64 v25; // r9
  unsigned int v26; // edx
  unsigned int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // eax
  struct PFE *v31; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v31 = a2;
  v5 = a1;
  v6 = 0;
  v7 = -1;
  if ( !a2 )
    return 0LL;
  if ( !a1 )
    v5 = PFEOBJ::pql(&v31);
  if ( a3 || !*((_QWORD *)v5 + 1) )
  {
    v8 = PFEOBJ::pfdg((PFEOBJ *)&v31);
    v9 = v8;
    if ( !v8 )
      return 0LL;
    cRuns = v8->cRuns;
    if ( cRuns )
    {
      awcrun = v9->awcrun;
      v12 = cRuns;
      do
      {
        wcLow = awcrun->wcLow;
        cGlyphs = awcrun->cGlyphs;
        v15 = wcLow;
        if ( v7 <= (unsigned __int16)wcLow )
          v15 = v7;
        if ( v6 < (unsigned int)(wcLow + cGlyphs) )
          v6 = wcLow + cGlyphs - 1;
        ++awcrun;
        v7 = v15;
        --v12;
      }
      while ( v12 );
    }
    *(_WORD *)v5 = v7;
    *((_WORD *)v5 + 1) = v6;
    v16 = (void **)((char *)v5 + 8);
    if ( a3 )
    {
      if ( *v16 )
        memset_0(*v16, 0, 0x2000uLL);
      else
        *v16 = (void *)Win32AllocPoolZInit(0x2000LL, 1802400071LL);
      v7 = 0;
    }
    else
    {
      *v16 = (void *)PALLOCMEM((unsigned int)(4 * ((v6 - v7 + 32) / 32)), 1802400071LL);
    }
    if ( !*v16 )
    {
      PFEOBJ::vFreepfdg((PFEOBJ *)&v31);
      return 0LL;
    }
    if ( !v9->cRuns )
    {
LABEL_23:
      PFEOBJ::vFreepfdg((PFEOBJ *)&v31);
      return 1LL;
    }
    v18 = v7;
    while ( 1 )
    {
      v19 = v9->awcrun[v3].cGlyphs;
      v20 = (unsigned int)((v9->awcrun[v3].wcLow - v18) / 32);
      v21 = *v16;
      v22 = (v19 - v18 + v9->awcrun[v3].wcLow - 1) / 32;
      v23 = *((_DWORD *)*v16 + v20);
      v24 = v22;
      if ( (_DWORD)v20 != v22 )
        break;
      v21[v20] = v23 | ((unsigned int)(-1 << (32 - v19)) >> ((v9->awcrun[v3].wcLow - v18) % 32));
LABEL_22:
      if ( ++v3 >= v9->cRuns )
        goto LABEL_23;
    }
    v25 = (unsigned int)(v20 + 1);
    v26 = v22 - v25;
    v21[v20] = v23 | (0xFFFFFFFF >> ((v9->awcrun[v3].wcLow - v18) % 32));
    v27 = v20 + 1;
    if ( (unsigned int)v25 < v22 )
    {
      if ( v26 < 4 || (char *)*v16 + 4 * v25 <= (char *)v16 && (char *)*v16 + 4 * v22 - 4 >= (char *)v16 )
        goto LABEL_28;
      v30 = v22 - (v26 & 3);
      do
        v27 += 4;
      while ( v27 < v30 );
      memset_0((char *)*v16 + 4 * v25, -1, 16 * ((unsigned __int64)(v30 - (unsigned int)v25 + 3) >> 2));
    }
    if ( v27 >= (unsigned int)v24 )
    {
LABEL_26:
      *((_DWORD *)*v16 + v24) |= -1 << (31 - (v9->awcrun[v3].wcLow + v9->awcrun[v3].cGlyphs - v18 - 1) % 32);
      goto LABEL_22;
    }
LABEL_28:
    v28 = (unsigned int)v24 - v27;
    v29 = 4LL * v27;
    do
    {
      *(_DWORD *)((char *)*v16 + v29) = -1;
      v29 += 4LL;
      --v28;
    }
    while ( v28 );
    goto LABEL_26;
  }
  return 1LL;
}
