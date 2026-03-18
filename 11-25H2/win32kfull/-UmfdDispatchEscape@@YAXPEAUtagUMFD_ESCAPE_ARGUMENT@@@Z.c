/*
 * XREFs of ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B13EC
 * Callers:
 *     NtGdiExtEscape @ 0x140167C30 (NtGdiExtEscape.c)
 * Callees:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B176C (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B1D68 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B2274 (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z @ 0x140161938 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x140161A64 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x140161B94 (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x140161CB8 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x14017CF28 (-UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1401ABFD8 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 *     ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1401E24AC (-UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x140203EF8 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x140263948 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     EngFntCacheFault @ 0x1403041E0 (EngFntCacheFault.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1403325FC (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x140332708 (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscFONTOBJ_pifi@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x140332804 (-UmfdEscFONTOBJ_pifi@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 */

void __fastcall UmfdDispatchEscape(struct tagUMFD_ESCAPE_ARGUMENT *a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int (*v14)(struct _PATHOBJ *, struct _POINTFIX *, unsigned int); // rcx
  int v15; // eax
  struct UmfdTls *v16; // rax
  PATHOBJ *v17; // rcx
  struct UmfdTls *v18; // rax
  PATHOBJ *v19; // rcx
  Gre::Base *v20; // rcx
  int v21; // ebx
  ULONG v22; // ecx
  ULONG ulFastCheckSum[4]; // [rsp+30h] [rbp-38h] BYREF
  POINTFIX ptfx[2]; // [rsp+40h] [rbp-28h]
  __int128 v25; // [rsp+50h] [rbp-18h]

  *(_OWORD *)ulFastCheckSum = 0LL;
  *(_OWORD *)&ptfx[0].x = 0LL;
  v25 = 0LL;
  if ( ((unsigned __int8)a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  *(_OWORD *)ulFastCheckSum = *(_OWORD *)a1;
  *(_OWORD *)&ptfx[0].x = *((_OWORD *)a1 + 1);
  v25 = *((_OWORD *)a1 + 2);
  v4 = ulFastCheckSum[0];
  if ( ulFastCheckSum[0] == 10 )
  {
    UmfdEscEngMapFontFileFD((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
    goto LABEL_10;
  }
  if ( (int)ulFastCheckSum[0] > 10 )
  {
    switch ( ulFastCheckSum[0] )
    {
      case 0xBu:
        UmfdEscEngUnmapFontFileFD((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
        goto LABEL_10;
      case 0xCu:
        UmfdEscEngGetFileChangeTime((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
        goto LABEL_10;
      case 0xDu:
        UmfdEscEngGetFilePath((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
        goto LABEL_10;
      case 0xEu:
        UmfdEscEngComputeGlyphSet((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
        goto LABEL_10;
      case 0xFu:
        UmfdEscEngCreateFile((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
        goto LABEL_10;
      case 0x10u:
        UmfdEscParseFontResources((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
        goto LABEL_10;
    }
    if ( ulFastCheckSum[0] != 17 )
    {
      if ( ulFastCheckSum[0] == 18 )
      {
        UmfdHostLifeTimeManager::OnHostReady();
      }
      else if ( ulFastCheckSum[0] == 19 )
      {
        UmfdHostLifeTimeManager::UninitializeThread();
      }
      goto LABEL_11;
    }
    v20 = *(Gre::Base **)(W32GetSessionState(0LL, 0LL, a3) + 96);
    v21 = *((_DWORD *)v20 + 4902);
    v22 = (v21 != 0) | (*(_DWORD *)(*((_QWORD *)Gre::Base::Globals(v20) + 221) + 1573012LL) != 0 ? 2 : 0);
    goto LABEL_63;
  }
  if ( (int)ulFastCheckSum[0] > 5 )
  {
    if ( ulFastCheckSum[0] == 6 )
    {
      v14 = PATHOBJ_bPolyBezierTo;
LABEL_37:
      v15 = UmfdEscPATHOBJ_bCommonTo(v14, 0LL, *(struct _POINTFIX **)ptfx, ptfx[1].x);
LABEL_38:
      ulFastCheckSum[2] = v15;
      goto LABEL_11;
    }
    if ( ulFastCheckSum[0] == 7 )
    {
      v14 = PATHOBJ_bPolyLineTo;
      goto LABEL_37;
    }
    if ( ulFastCheckSum[0] != 8 )
    {
      EngFntCacheFault(ulFastCheckSum[2], ulFastCheckSum[3]);
      goto LABEL_11;
    }
    v22 = (unsigned __int8)UmfdFontCacheEntry::FntCacheAllocate(
                             *(_QWORD *)&ptfx[1],
                             (unsigned int)ptfx[0].x,
                             ulFastCheckSum[3],
                             ulFastCheckSum[2]) != 0;
LABEL_63:
    ulFastCheckSum[2] = v22;
    goto LABEL_11;
  }
  switch ( ulFastCheckSum[0] )
  {
    case 5u:
      v18 = UmfdTls::EnsureTls();
      if ( v18 )
      {
        v19 = (PATHOBJ *)*((_QWORD *)v18 + 6);
        if ( v19 )
        {
          v15 = PATHOBJ_bMoveTo(v19, ptfx[0]);
          goto LABEL_38;
        }
      }
LABEL_52:
      ulFastCheckSum[2] = 0;
      goto LABEL_11;
    case 0u:
      UmfdEscSendCompleteWaitReceive((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
LABEL_10:
      v4 = ulFastCheckSum[0];
      goto LABEL_11;
    case 1u:
      UmfdEscXFORMOBJ_iGetXform((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_10;
  }
  if ( ulFastCheckSum[0] != 2 )
  {
    if ( ulFastCheckSum[0] == 3 )
    {
      UmfdEscFONTOBJ_pifi((struct tagUMFD_ESCAPE_ARGUMENT *)ulFastCheckSum);
      goto LABEL_10;
    }
    if ( ulFastCheckSum[0] == 4 )
    {
      v16 = UmfdTls::EnsureTls();
      if ( v16 )
      {
        v17 = (PATHOBJ *)*((_QWORD *)v16 + 6);
        if ( v17 )
        {
          v15 = PATHOBJ_bCloseFigure(v17);
          goto LABEL_38;
        }
      }
      goto LABEL_52;
    }
  }
LABEL_11:
  if ( v4 > 8 )
  {
    v10 = v4 - 10;
    if ( !v10 )
      goto LABEL_14;
    v11 = v10 - 2;
    if ( !v11 )
      goto LABEL_14;
    v12 = v11 - 1;
    if ( !v12 )
      goto LABEL_14;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_14;
    v9 = v13 - 1;
    if ( v9 )
      goto LABEL_20;
LABEL_22:
    ProbeForWrite((char *)a1 + 8, 8uLL, 8u);
    *((_QWORD *)a1 + 1) = *(_QWORD *)&ulFastCheckSum[2];
    return;
  }
  if ( v4 == 8 )
    goto LABEL_14;
  if ( !v4 )
    goto LABEL_14;
  v5 = v4 - 1;
  if ( !v5 )
    goto LABEL_14;
  v6 = v5 - 1;
  if ( !v6 )
    goto LABEL_22;
  v7 = v6 - 1;
  if ( !v7 )
    goto LABEL_22;
  v8 = v7 - 1;
  if ( !v8 )
    goto LABEL_14;
  v9 = v8 - 1;
  if ( !v9 )
    goto LABEL_14;
LABEL_20:
  if ( (unsigned int)(v9 - 1) <= 1 )
  {
LABEL_14:
    ProbeForWrite((char *)a1 + 8, 4uLL, 8u);
    *((_DWORD *)a1 + 2) = ulFastCheckSum[2];
  }
}
