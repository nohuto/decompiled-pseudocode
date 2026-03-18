/*
 * XREFs of ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400D02BC
 * Callers:
 *     NtGdiExtEscape @ 0x14027EE60 (NtGdiExtEscape.c)
 * Callees:
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400C29D0 (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400CEDC4 (-UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400CEFD8 (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1400CF0F4 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1400CFC88 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400D06A4 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400D0C18 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x140184BFC (-UmfdEscEngComputeGlyphSet@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z @ 0x1401C4878 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z.c)
 *     FONTOBJ_pifi @ 0x14023A440 (FONTOBJ_pifi.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x14025AC08 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1402828A0 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?OnHostReady@UmfdHostLifeTimeManager@@SAXXZ @ 0x1402916D4 (-OnHostReady@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     EngFntCacheFault @ 0x1402960A0 (EngFntCacheFault.c)
 *     ??$GreProbeAndReadFromUntrustedVa@UtagUMFD_ESCAPE_ARGUMENT@@@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@PEBU0@_K@Z @ 0x140349ADC (--$GreProbeAndReadFromUntrustedVa@UtagUMFD_ESCAPE_ARGUMENT@@@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@PE.c)
 *     ??$GreProbeAndWriteToUntrustedVa@J@@YAXPEAJPEBJ_K@Z @ 0x140349B74 (--$GreProbeAndWriteToUntrustedVa@J@@YAXPEAJPEBJ_K@Z.c)
 *     ??$GreProbeAndWriteToUntrustedVa@PEAU_XFORMOBJ@@@@YAXPEAPEAU_XFORMOBJ@@PEBQEAU0@_K@Z @ 0x140349BA8 (--$GreProbeAndWriteToUntrustedVa@PEAU_XFORMOBJ@@@@YAXPEAPEAU_XFORMOBJ@@PEBQEAU0@_K@Z.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x140349DE0 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x140349ED4 (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 */

void __fastcall UmfdDispatchEscape(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  struct _PATHOBJ *v2; // rdx
  __int64 v3; // r8
  int (*v4)(struct _PATHOBJ *, struct _POINTFIX *, unsigned int); // rcx
  int v5; // eax
  __int64 v6; // rcx
  struct UmfdTls *v7; // rax
  PATHOBJ *v8; // rcx
  struct UmfdTls *v9; // rax
  PATHOBJ *v10; // rcx
  Gre::Base *v11; // rcx
  BOOL v12; // ebx
  struct UmfdTls *v13; // rax
  FONTOBJ *v14; // rcx
  IFIMETRICS *v15; // rax
  __int128 v16; // [rsp+40h] [rbp-38h] BYREF
  __int128 ptfx; // [rsp+50h] [rbp-28h]
  __int128 v18; // [rsp+60h] [rbp-18h]

  v16 = 0LL;
  ptfx = 0LL;
  v18 = 0LL;
  GreProbeAndReadFromUntrustedVa<tagUMFD_ESCAPE_ARGUMENT>(&v16, a1);
  if ( (int)v16 > 10 )
  {
    switch ( (_DWORD)v16 )
    {
      case 0xB:
        UmfdEscEngUnmapFontFileFD((struct tagUMFD_ESCAPE_ARGUMENT *)&v16, (__int64)v2, v3);
        break;
      case 0xC:
        UmfdEscEngGetFileChangeTime((struct tagUMFD_ESCAPE_ARGUMENT *)&v16);
        break;
      case 0xD:
        UmfdEscEngGetFilePath((struct tagUMFD_ESCAPE_ARGUMENT *)&v16);
        break;
      case 0xE:
        UmfdEscEngComputeGlyphSet((struct tagUMFD_ESCAPE_ARGUMENT *)&v16);
        break;
      case 0xF:
        UmfdEscEngCreateFile((struct tagUMFD_ESCAPE_ARGUMENT *)&v16);
        break;
      case 0x10:
        UmfdEscParseFontResources((struct tagUMFD_ESCAPE_ARGUMENT *)&v16);
        break;
      case 0x11:
        v11 = *(Gre::Base **)(W32GetSessionState(0LL, v2, v3) + 96);
        v12 = *((_DWORD *)v11 + 4900) != 0;
        DWORD2(v16) = v12 | (*(_DWORD *)(*((_QWORD *)Gre::Base::Globals(v11) + 232) + 1573012LL) != 0 ? 2 : 0);
        break;
      case 0x12:
        UmfdHostLifeTimeManager::OnHostReady();
        break;
      case 0x13:
        UmfdHostLifeTimeManager::UninitializeThread();
        break;
    }
    goto LABEL_4;
  }
  if ( (_DWORD)v16 == 10 )
  {
    UmfdEscEngMapFontFileFD((struct tagUMFD_ESCAPE_ARGUMENT *)&v16);
    goto LABEL_4;
  }
  if ( (int)v16 > 5 )
  {
    if ( (_DWORD)v16 == 6 )
    {
      v4 = PATHOBJ_bPolyBezierTo;
    }
    else
    {
      if ( (_DWORD)v16 != 7 )
      {
        if ( (_DWORD)v16 != 8 )
        {
          if ( (_DWORD)v16 == 9 )
            EngFntCacheFault(DWORD2(v16), HIDWORD(v16));
          goto LABEL_4;
        }
        if ( (unsigned __int8)UmfdFontCacheEntry::FntCacheAllocate(
                                *((_QWORD *)&ptfx + 1),
                                (unsigned int)ptfx,
                                HIDWORD(v16),
                                DWORD2(v16)) )
        {
          DWORD2(v16) = 1;
          goto LABEL_4;
        }
LABEL_60:
        DWORD2(v16) = 0;
        goto LABEL_4;
      }
      v4 = PATHOBJ_bPolyLineTo;
    }
    v5 = UmfdEscPATHOBJ_bCommonTo(v4, v2, (struct _POINTFIX *)ptfx, DWORD2(ptfx));
LABEL_38:
    DWORD2(v16) = v5;
    goto LABEL_4;
  }
  switch ( (_DWORD)v16 )
  {
    case 5:
      v9 = UmfdTls::EnsureTls(5LL);
      if ( v9 )
      {
        v10 = (PATHOBJ *)*((_QWORD *)v9 + 6);
        if ( v10 )
        {
          v5 = PATHOBJ_bMoveTo(v10, (POINTFIX)ptfx);
          goto LABEL_38;
        }
      }
      goto LABEL_60;
    case 0:
      UmfdEscSendCompleteWaitReceive((struct tagUMFD_ESCAPE_ARGUMENT *)&v16);
      goto LABEL_4;
    case 1:
      UmfdEscXFORMOBJ_iGetXform((void **)&v16);
      goto LABEL_4;
  }
  if ( (_DWORD)v16 != 2 )
  {
    v6 = (unsigned int)(v16 - 3);
    if ( (_DWORD)v16 != 3 )
    {
      if ( (_DWORD)v16 != 4 )
        goto LABEL_4;
      v7 = UmfdTls::EnsureTls(v6);
      if ( v7 )
      {
        v8 = (PATHOBJ *)*((_QWORD *)v7 + 6);
        if ( v8 )
        {
          v5 = PATHOBJ_bCloseFigure(v8);
          goto LABEL_38;
        }
      }
      goto LABEL_60;
    }
    v13 = UmfdTls::EnsureTls(v6);
    if ( v13 && (v14 = (FONTOBJ *)*((_QWORD *)v13 + 5)) != 0LL && (v15 = FONTOBJ_pifi(v14)) != 0LL )
      *((_QWORD *)&v16 + 1) = *(_QWORD *)&v15[-1].panose.bMidline;
    else
      *((_QWORD *)&v16 + 1) = 0LL;
  }
LABEL_4:
  if ( (int)v16 > 8 )
  {
    switch ( (_DWORD)v16 )
    {
      case 0xA:
      case 0xC:
      case 0xD:
      case 0xE:
        goto LABEL_15;
      case 0xF:
        GreProbeAndWriteToUntrustedVa((char *)a1 + 8, 8uLL, (char *)&v16 + 8, 8uLL, 8uLL);
        break;
      case 0x10:
        goto LABEL_15;
      case 0x11:
        goto LABEL_7;
    }
  }
  else
  {
    switch ( (_DWORD)v16 )
    {
      case 8:
        goto LABEL_15;
      case 0:
LABEL_7:
        GreProbeAndWriteToUntrustedVa<long>((char *)a1 + 8, (char *)&v16 + 8);
        return;
      case 1:
        goto LABEL_15;
      case 2:
      case 3:
        GreProbeAndWriteToUntrustedVa<_XFORMOBJ *>((char *)a1 + 8, (char *)&v16 + 8);
        break;
      case 4:
      case 5:
        goto LABEL_15;
      case 6:
        ProbeForWrite((char *)a1 + 8, 4uLL, 8u);
        *((_DWORD *)a1 + 2) = DWORD2(v16);
        break;
      case 7:
LABEL_15:
        GreProbeAndWriteToUntrustedVa((char *)a1 + 8, 4uLL, (char *)&v16 + 8, 4uLL, 8uLL);
        break;
    }
  }
}
