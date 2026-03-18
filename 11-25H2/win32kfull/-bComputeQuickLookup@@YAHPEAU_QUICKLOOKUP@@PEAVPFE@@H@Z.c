/*
 * XREFs of ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x140122504
 * Callers:
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x140121430 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1401224C4 (-pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1401470EC (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1401475F8 (bAddAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x14030D518 (GreEudcLoadLinkW.c)
 * Callees:
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x140108C70 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x140108DD8 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1401224C4 (-pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall bComputeQuickLookup(struct _QUICKLOOKUP *a1, struct PFE *a2, __int64 a3)
{
  int v3; // ebx
  int v4; // r12d
  struct _QUICKLOOKUP *v5; // rdi
  unsigned __int16 v6; // bp
  unsigned __int16 v7; // si
  struct _FD_GLYPHSET *v8; // rax
  struct _FD_GLYPHSET *v9; // r15
  WCRUN *awcrun; // r13
  ULONG cRuns; // eax
  WCRUN *v12; // rdx
  __int64 v13; // r10
  int wcLow; // r9d
  int cGlyphs; // r11d
  unsigned __int16 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  int v20; // r9d
  __int64 *v21; // rbp
  USHORT v22; // di
  int v23; // r11d
  __int64 v24; // r13
  int v25; // eax
  __int64 v26; // r9
  unsigned int v27; // eax
  unsigned int v28; // edx
  int v29; // r10d
  unsigned int v30; // eax
  __int64 v31; // rt2
  __int64 v32; // rsi
  __int64 v33; // r9
  unsigned int v34; // edx
  unsigned int v35; // edi
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned int v38; // eax
  void *v39; // rcx
  int v40; // [rsp+68h] [rbp+10h]
  __int64 *v41; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v41 = (__int64 *)a2;
  v4 = a3;
  v5 = a1;
  v6 = 0;
  v7 = -1;
  if ( !a2 )
    return 0LL;
  if ( !a1 )
    v5 = PFEOBJ::pql((struct PFE **)&v41);
  if ( !v4 && *((_QWORD *)v5 + 1) )
    return 1LL;
  v8 = PFEOBJ::pfdg(&v41, (__int64)a2, a3);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  awcrun = v8->awcrun;
  cRuns = v8->cRuns;
  if ( cRuns )
  {
    v12 = awcrun;
    v13 = cRuns;
    do
    {
      wcLow = v12->wcLow;
      cGlyphs = v12->cGlyphs;
      v16 = wcLow;
      if ( v7 <= (unsigned __int16)wcLow )
        v16 = v7;
      if ( v6 < (unsigned int)(cGlyphs + wcLow) )
        v6 = cGlyphs + wcLow - 1;
      ++v12;
      v7 = v16;
      --v13;
    }
    while ( v13 );
  }
  *(_WORD *)v5 = v7;
  *((_WORD *)v5 + 1) = v6;
  if ( v4 )
  {
    v39 = (void *)*((_QWORD *)v5 + 1);
    if ( v39 )
      memset_0(v39, 0, 0x2000uLL);
    else
      *((_QWORD *)v5 + 1) = Win32AllocPoolZInit(0x2000LL, 1802400071LL);
    v7 = 0;
  }
  else
  {
    *((_QWORD *)v5 + 1) = PALLOCMEM(4 * ((v6 - v7 + 32) / 32), 1802400071LL);
  }
  if ( !*((_QWORD *)v5 + 1) )
  {
    PFEOBJ::vFreepfdg(&v41, v17, v18);
    return 0LL;
  }
  if ( v9->cRuns )
  {
    v20 = v7;
    v21 = (__int64 *)((char *)v5 + 8);
    v40 = v7;
    while ( 1 )
    {
      v18 = awcrun[v3].wcLow;
      v22 = v9->awcrun[v3].cGlyphs;
      v23 = awcrun[v3].wcLow - v20;
      v24 = (unsigned int)(v23 / 32);
      v25 = v22 - v20;
      v26 = *v21;
      v28 = ((int)v18 + v25 - 1) >> 31;
      v27 = v18 + v25 - 1;
      v17 = v28;
      v29 = *(_DWORD *)(*v21 + 4 * v24);
      v31 = __SPAIR64__(v28, v27) % 32;
      v30 = __SPAIR64__(v28, v27) / 32;
      LODWORD(v17) = v31;
      v32 = v30;
      if ( (_DWORD)v24 != v30 )
        break;
      *(_DWORD *)(v26 + 4 * v24) = v29 | ((unsigned int)(-1 << (32 - v22)) >> (v23 % 32));
      awcrun = v9->awcrun;
LABEL_24:
      v20 = v40;
      if ( ++v3 >= v9->cRuns )
        goto LABEL_25;
    }
    *(_DWORD *)(v26 + 4 * v24) = v29 | (0xFFFFFFFF >> (v23 % 32));
    v33 = (unsigned int)(v24 + 1);
    v34 = v30 - v33;
    v35 = v24 + 1;
    if ( (unsigned int)v33 < v30 )
    {
      if ( v34 < 4
        || *v21 + 4 * v33 <= (unsigned __int64)v21 && *v21 + 4 * (unsigned __int64)(v30 - 1) >= (unsigned __int64)v21 )
      {
        goto LABEL_30;
      }
      v38 = v30 - (v34 & 3);
      do
        v35 += 4;
      while ( v35 < v38 );
      memset_0((void *)(*v21 + 4 * v33), -1, 16 * ((unsigned __int64)(v38 - (unsigned int)v33 + 3) >> 2));
    }
    if ( v35 >= (unsigned int)v32 )
    {
LABEL_28:
      v18 = *v21;
      awcrun = v9->awcrun;
      v17 = (unsigned int)((v9->awcrun[v3].cGlyphs + v9->awcrun[v3].wcLow - v40 - 1) >> 31);
      LODWORD(v17) = (v9->awcrun[v3].cGlyphs + v9->awcrun[v3].wcLow - v40 - 1) % 32;
      *(_DWORD *)(*v21 + 4 * v32) |= -1 << (31 - v17);
      goto LABEL_24;
    }
LABEL_30:
    v36 = (unsigned int)v32 - v35;
    v37 = 4LL * v35;
    do
    {
      *(_DWORD *)(v37 + *v21) = -1;
      v37 += 4LL;
      --v36;
    }
    while ( v36 );
    goto LABEL_28;
  }
LABEL_25:
  PFEOBJ::vFreepfdg(&v41, v17, v18);
  return 1LL;
}
