/*
 * XREFs of GreExtGetObjectW @ 0x14007D99C
 * Callers:
 *     _SystemParametersInfoForDpi @ 0x1400412AC (_SystemParametersInfoForDpi.c)
 *     GetScaledLogFontForDpi @ 0x140041420 (GetScaledLogFontForDpi.c)
 *     GetWindowNCMetricsForDpi @ 0x1400418A8 (GetWindowNCMetricsForDpi.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x140042684 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     GetWindowNCMetrics @ 0x140042BB0 (GetWindowNCMetrics.c)
 *     RecreateRedirectionBitmap @ 0x140057DF8 (RecreateRedirectionBitmap.c)
 *     xxxCreateCaret @ 0x14005DFA8 (xxxCreateCaret.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x14007C330 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     NtGdiExtGetObjectW @ 0x14007D880 (NtGdiExtGetObjectW.c)
 *     CreateFontFromUserProfile @ 0x1400C04C8 (CreateFontFromUserProfile.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x140131284 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     UserSetAltScaleFont @ 0x1401491DC (UserSetAltScaleFont.c)
 *     xxxSetNCFonts @ 0x140149590 (xxxSetNCFonts.c)
 *     CreateCompatiblePublicDC @ 0x140174D54 (CreateCompatiblePublicDC.c)
 *     xxxDrawState @ 0x140190760 (xxxDrawState.c)
 *     xxxRealDrawMenuItem @ 0x1401910EC (xxxRealDrawMenuItem.c)
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     CreateScaledFont @ 0x1401E7300 (CreateScaledFont.c)
 *     EraseBitmap @ 0x14020DF78 (EraseBitmap.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x14022553C (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1402917BC (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     ?GetTelemetryInfo@CursorApiRouter@@QEAAXPEAUCursorTelemetryInfo@@@Z @ 0x1402DBAF8 (-GetTelemetryInfo@CursorApiRouter@@QEAAXPEAUCursorTelemetryInfo@@@Z.c)
 *     ?PatchArgbCursorWithMask@CursorApiRouter@@CA_NPEAUHBITMAP__@@IPEAKUtagSIZE@@_N@Z @ 0x1402DBF98 (-PatchArgbCursorWithMask@CursorApiRouter@@CA_NPEAUHBITMAP__@@IPEAKUtagSIZE@@_N@Z.c)
 *     ?SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z @ 0x1402DC1B0 (-SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402EA1A4 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140077E90 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14007C824 (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14008952C (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x140089AA4 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D7D10 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1400E3294 (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x140214A38 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall GreExtGetObjectW(Gre::Base *a1, __int64 a2, _WORD *a3, __int64 a4)
{
  unsigned __int64 v5; // r13
  int v6; // edi
  unsigned int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int *v17; // rbx
  struct LFONT *v18; // r15
  unsigned int v19; // ecx
  unsigned __int64 v20; // rdx
  int DIBits; // ebx
  __int64 v22; // r8
  __int64 v23; // rax
  int v24; // ecx
  int v25; // r12d
  _QWORD *HDEV; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // r12d
  int v31; // r12d
  __int64 v32; // rcx
  struct Gre::Base::SESSION_GLOBALS *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v37; // [rsp+70h] [rbp-98h]
  _BYTE v38[32]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v39; // [rsp+98h] [rbp-70h]
  _BYTE v40[128]; // [rsp+A8h] [rbp-60h] BYREF
  HSEMAPHORE v41; // [rsp+158h] [rbp+50h] BYREF

  v5 = (int)a2;
  v6 = 0;
  v8 = 0;
  if ( (((unsigned int)a1 >> 16) & 0x1F) != 5 )
  {
    if ( (((unsigned int)a1 >> 16) & 0x1F) == 8 )
    {
      v8 = 2;
      if ( a3 )
      {
        if ( (int)a2 < 2 )
        {
          return 0;
        }
        else
        {
          v33 = Gre::Base::Globals(a1);
          SEMOBJ<13>::SEMOBJ<13>(&v41, v33);
          LOBYTE(v34) = 8;
          v35 = HmgShareLockCheck(a1, v34);
          if ( v35 )
          {
            *a3 = *(_WORD *)(v35 + 28);
            DEC_SHARE_REF_CNT(v35);
          }
          else
          {
            v8 = 0;
          }
          SEMOBJ<13>::vUnlock(&v41);
        }
      }
      return v8;
    }
    if ( (((unsigned int)a1 >> 16) & 0x1F) == 9 )
      return (unsigned int)cjGetLogicalColorSpace((HCOLORSPACE)a1, a2, a3);
    if ( (((unsigned int)a1 >> 16) & 0x1F) != 0xA )
    {
      if ( (((unsigned int)a1 >> 16) & 0x1F) != 0x10 )
        return v8;
      return (unsigned int)cjGetBrushOrPen((HBRUSH)a1, a2, a3);
    }
    LOBYTE(a2) = 10;
    v14 = HmgShareLock(a1, a2, (((unsigned int)a1 >> 16) & 0x1F) - 10, a4);
    v15 = v14 + 24;
    v16 = -v14;
    v17 = (int *)(v15 & -(__int64)(v16 != 0));
    if ( !v17 )
    {
      v18 = 0LL;
LABEL_21:
      if ( v17 )
      {
        if ( a3 )
        {
          v19 = v5;
          if ( v5 >= (unsigned int)v17[62] )
            v19 = v17[62];
          v8 = v19;
          memmove(a3, v17 + 63, v19);
        }
        else
        {
          v8 = v17[62];
        }
      }
      if ( v18 )
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v18);
      return v8;
    }
    v18 = (struct LFONT *)(v17 - 6);
    if ( (*(_BYTE *)((v15 & -(__int64)(v16 != 0)) + 4) & 1) == 0 )
      goto LABEL_21;
    v25 = *v17;
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)(v17 - 6));
    v18 = 0LL;
    HDEV = (_QWORD *)UserGetHDEV();
    if ( !HDEV )
      goto LABEL_21;
    v30 = v25 - 4;
    if ( v30 )
    {
      v31 = v30 - 1;
      if ( v31 )
      {
        if ( v31 != 1 )
        {
LABEL_48:
          v17 = (int *)(((unsigned __int64)v18 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v18 >> 64));
          goto LABEL_21;
        }
        v32 = HDEV[181];
      }
      else
      {
        v32 = HDEV[180];
      }
    }
    else
    {
      v32 = HDEV[179];
    }
    if ( v32 )
    {
      LOBYTE(v27) = 10;
      v18 = (struct LFONT *)HmgShareLock(v32, v27, v28, v29);
    }
    goto LABEL_48;
  }
  if ( !a3 )
    return 32;
  if ( (int)a2 >= 32 )
  {
    SURFREF::SURFREF((SURFREF *)v38, (HSURF)a1);
    v9 = v39;
    if ( !v39 || (*(_DWORD *)(v39 + 112) & 0x4100000) == 0 )
      goto LABEL_11;
    *(_DWORD *)a3 = 0;
    *((_DWORD *)a3 + 1) = *(_DWORD *)(v9 + 56);
    *((_DWORD *)a3 + 2) = *(_DWORD *)(v9 + 60);
    if ( (*(_DWORD *)(v9 + 116) & 0x800) != 0 )
    {
      *((_DWORD *)a3 + 1) = *(_DWORD *)(v9 + 668);
      *((_DWORD *)a3 + 2) = *(_DWORD *)(v9 + 672);
    }
    v8 = 32;
    v10 = (unsigned __int16)gaulConvert[2 * *(unsigned int *)(v9 + 96)];
    a3[9] = v10;
    v11 = v10 * *(int *)(v9 + 56);
    a3[8] = 1;
    *((_QWORD *)a3 + 3) = 0LL;
    *((_DWORD *)a3 + 3) = ((unsigned __int64)(v11 + 15) >> 3) & 0xFFFFFFFE;
    if ( (*(_WORD *)(v9 + 100) || !*(_QWORD *)(v9 + 192)) && (*(_DWORD *)(v9 + 112) & 0x100000) == 0 )
      goto LABEL_11;
    v20 = *(_QWORD *)(v9 + 72);
    if ( v20 < 0x10000 || v20 > (unsigned __int64)MmHighestUserAddress )
      v20 = 0LL;
    *((_QWORD *)a3 + 3) = v20;
    *((_DWORD *)a3 + 3) = ((unsigned __int64)(v10 * *(int *)(v9 + 56) + 31) >> 3) & 0xFFFFFFFC;
    if ( (unsigned int)v5 < 0x68 )
      goto LABEL_11;
    v36[0] = 0LL;
    v37 = 0;
    *((_DWORD *)a3 + 8) = 40;
    a3[23] = 0;
    v36[1] = 0LL;
    v36[2] = 0LL;
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v40, 0LL);
    DIBits = GrepGetDIBits((struct OPTAPIDCOBJ *)v40, (HSURF)a1, (__int64)v36, a3 + 16, 0, 0, 104);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v40);
    v22 = v39;
    if ( DIBits )
    {
      v8 = 104;
      if ( (*(_DWORD *)(v39 + 112) & 0x100000) != 0 )
        *((_DWORD *)a3 + 13) = 0;
    }
    v23 = *(_QWORD *)(v22 + 128);
    if ( v23 )
    {
      v24 = *(_DWORD *)(v23 + 24);
      if ( (v24 & 2) != 0 )
      {
        *((_DWORD *)a3 + 18) = **(_DWORD **)(v23 + 112);
        *((_DWORD *)a3 + 19) = *(_DWORD *)(*(_QWORD *)(v23 + 112) + 4LL);
        v6 = *(_DWORD *)(*(_QWORD *)(v23 + 112) + 8LL);
LABEL_41:
        *((_DWORD *)a3 + 20) = v6;
        *((_QWORD *)a3 + 11) = *(_QWORD *)(v22 + 184);
        *((_DWORD *)a3 + 24) = *(_DWORD *)(v22 + 212);
LABEL_11:
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v38);
        return v8;
      }
      if ( (v24 & 8) != 0 )
        *((_DWORD *)a3 + 12) = 0;
    }
    *((_QWORD *)a3 + 9) = 0LL;
    goto LABEL_41;
  }
  return v8;
}
