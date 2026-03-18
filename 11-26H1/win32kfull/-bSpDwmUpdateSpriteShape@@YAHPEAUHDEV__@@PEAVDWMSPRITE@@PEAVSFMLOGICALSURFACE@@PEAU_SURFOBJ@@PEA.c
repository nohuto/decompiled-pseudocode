/*
 * XREFs of ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1400757E8
 * Callers:
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140073700 (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1400A211C (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x14019C5C4 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x140074A40 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x140076840 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x14009EE88 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1401AE128 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bSpDwmUpdateSpriteShape(
        Gre::Base *a1,
        struct DWMSPRITE *a2,
        struct SFMLOGICALSURFACE *a3,
        struct _SURFOBJ *a4,
        struct _RECTL *a5,
        struct PALETTE *a6,
        unsigned int *a7,
        struct _RECTL *a8,
        struct SFMLOGICALSURFACE **a9)
{
  struct Gre::Base::SESSION_GLOBALS *v12; // r13
  unsigned int v13; // ebx
  LONG left; // r10d
  LONG top; // edx
  LONG right; // r9d
  LONG bottom; // ecx
  struct SFMLOGICALSURFACE *v18; // rdi
  struct _SURFOBJ *v19; // rdx
  LONG v20; // r10d
  LONG v21; // r9d
  LONG v22; // r11d
  LONG v23; // ecx
  LONG v24; // r8d
  LONG v25; // edx
  XLATEOBJ *v26; // r12
  Gre::Base *v27; // rcx
  Gre::Base *v28; // rax
  unsigned int inited; // eax
  struct Gre::Base::SESSION_GLOBALS *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // eax
  int v35; // eax
  LONG v36; // eax
  LONG v37; // eax
  unsigned int v38; // eax
  struct SFMLOGICALSURFACE *v39; // [rsp+60h] [rbp-71h] BYREF
  struct tagSIZE v40; // [rsp+68h] [rbp-69h] BYREF
  struct _RECTL *v41; // [rsp+70h] [rbp-61h] BYREF
  Gre::Base *v42; // [rsp+78h] [rbp-59h] BYREF
  _QWORD v43[2]; // [rsp+80h] [rbp-51h] BYREF
  _QWORD v44[2]; // [rsp+90h] [rbp-41h] BYREF
  struct tagRECT v45; // [rsp+A0h] [rbp-31h] BYREF
  struct tagRECT v46; // [rsp+B0h] [rbp-21h] BYREF

  v41 = a8;
  v39 = a3;
  v42 = a1;
  v12 = Gre::Base::Globals(a1);
  v13 = 1;
  if ( a4 )
  {
    left = a5->left;
    if ( a5->left >= 0 )
    {
      top = a5->top;
      if ( top >= 0 )
      {
        right = a5->right;
        if ( right <= a4->sizlBitmap.cx )
        {
          bottom = a5->bottom;
          if ( bottom <= a4->sizlBitmap.cy && top <= bottom && left <= right )
          {
            v45.top = a5->top;
            v45.bottom = bottom;
            v40.cx = right - left;
            v45.left = left;
            v40.cy = bottom - top;
            v45.right = right;
            v44[0] = 0LL;
            SURFREFVIEW::bMap((SURFREFVIEW *)v44, a4);
            if ( !v44[0] )
              goto LABEL_27;
            v13 = bSpDwmCreateLogicalSurface((HDEV)a1, a2, v39, &v40, a9);
            if ( !v13 )
              goto LABEL_27;
            v18 = *a9;
            v19 = (struct _SURFOBJ *)*((_QWORD *)*a9 + 23);
            v43[0] = 0LL;
            SURFREFVIEW::bMap((SURFREFVIEW *)v43, v19);
            if ( !v43[0] )
              goto LABEL_26;
            v20 = v45.left;
            v21 = 0;
            v22 = v45.top;
            v23 = 0;
            v24 = v45.right - v45.left;
            v25 = v45.bottom - v45.top;
            v39 = *(struct SFMLOGICALSURFACE **)&v45.left;
            if ( v41 )
            {
              if ( v41->left > 0 )
                v21 = v41->left;
              v35 = v41->top;
              v45.left = v21;
              if ( v35 > 0 )
                v23 = v35;
              v36 = v41->right;
              v45.top = v23;
              if ( v36 < v24 )
                v24 = v36;
              v37 = v41->bottom;
              v45.right = v24;
              if ( v37 < v25 )
                v25 = v37;
              v45.bottom = v25;
              if ( v24 < v21 )
              {
                v21 = v24;
                v45.left = v24;
              }
              else
              {
                if ( v25 < v23 )
                  v23 = v25;
                v45.top = v23;
              }
              LODWORD(v39) = v21 + v20;
              HIDWORD(v39) = v23 + v22;
            }
            else
            {
              *(_QWORD *)&v45.left = 0LL;
              v45.right = v24;
              v45.bottom = v25;
            }
            if ( v23 == v25 || v21 == v24 )
            {
LABEL_26:
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v43);
LABEL_27:
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v44);
              return v13;
            }
            v26 = (XLATEOBJ *)((char *)v12 + 4664);
            v27 = (Gre::Base *)*((_QWORD *)v12 + 485);
            v28 = (Gre::Base *)*((_QWORD *)v12 + 484);
            v40 = 0LL;
            if ( !a6
              || (inited = EXLATEOBJ::bInitXlateObj(
                             (Gre::Base *)&v40,
                             0LL,
                             0,
                             (__int64)a6,
                             (__int64)v27,
                             (__int64)v28,
                             v28,
                             0,
                             0,
                             0,
                             0),
                  v26 = (XLATEOBJ *)v40,
                  (v13 = inited) != 0) )
            {
              if ( (*((_DWORD *)a2 + 34) & 0x20) != 0 )
              {
                v46 = v45;
                ERECTL::vScale((ERECTL *)&v45, (struct DWMSPRITE *)((char *)a2 + 128));
                if ( (HIDWORD(a4[1].hsurf) & 0x800) != 0 )
                {
                  v41 = *(struct _RECTL **)&a4[7].iType;
                  ERECTL::vScale((ERECTL *)&v46, (const struct POINTFL *)&v41);
                }
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v42) )
                {
                  v38 = RedirStretchBlt(
                          *((struct _SURFOBJ **)v18 + 23),
                          a4,
                          0LL,
                          0LL,
                          v26,
                          0LL,
                          0LL,
                          (RECTL *)&v45,
                          (RECTL *)&v46,
                          0LL,
                          3);
                }
                else if ( (*(_DWORD *)(*((_QWORD *)v18 + 23) + 88LL) & 2) != 0 )
                {
                  v38 = (*((__int64 (__fastcall **)(_QWORD, struct _SURFOBJ *, _QWORD, _QWORD, XLATEOBJ *, _QWORD, _QWORD, struct tagRECT *, struct tagRECT *, _QWORD, int))a1
                         + 355))(
                          *((_QWORD *)v18 + 23),
                          a4,
                          0LL,
                          0LL,
                          v26,
                          0LL,
                          0LL,
                          &v45,
                          &v46,
                          0LL,
                          3);
                }
                else
                {
                  v38 = ((__int64 (__fastcall *)(_QWORD, struct _SURFOBJ *, _QWORD, _QWORD, XLATEOBJ *, _QWORD, _QWORD, struct tagRECT *, struct tagRECT *, _QWORD, int))EngStretchBlt)(
                          *((_QWORD *)v18 + 23),
                          a4,
                          0LL,
                          0LL,
                          v26,
                          0LL,
                          0LL,
                          &v45,
                          &v46,
                          0LL,
                          3);
                }
                v13 = v38;
                if ( !v38 )
                  goto LABEL_25;
              }
              else
              {
                v30 = Gre::Base::Globals(v27);
                if ( !*((_QWORD *)a1 + 428)
                  || (*((_DWORD *)a1 + 528) & 0x400) == 0
                  || *((_QWORD *)v30 + 28) && (unsigned int)UserIsRemoteAndNotDisconnectConnection(v32, v31) )
                {
                  if ( (*(_DWORD *)(*((_QWORD *)v18 + 23) + 88LL) & 0x400) != 0 )
                    v33 = (*((__int64 (__fastcall **)(_QWORD, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, struct SFMLOGICALSURFACE **))a1
                           + 354))(
                            *((_QWORD *)v18 + 23),
                            a4,
                            0LL,
                            v26,
                            &v45,
                            &v39);
                  else
                    v33 = ((__int64 (__fastcall *)(_QWORD, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, struct SFMLOGICALSURFACE **))EngCopyBits)(
                            *((_QWORD *)v18 + 23),
                            a4,
                            0LL,
                            v26,
                            &v45,
                            &v39);
                }
                else
                {
                  v33 = ((__int64 (__fastcall *)(_QWORD, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, struct SFMLOGICALSURFACE **))RedirCopyBits)(
                          *((_QWORD *)v18 + 23),
                          a4,
                          0LL,
                          v26,
                          &v45,
                          &v39);
                }
                v13 = v33;
                if ( !v33 )
                  goto LABEL_25;
                vSpUpdateDirtyRgn(a2, v18, 0LL, (const struct _RECTL *)&v45, a7, 0);
              }
              vSpUpdateDirtyRgn(a2, v18, 0LL, (const struct _RECTL *)&v45, a7, 0);
            }
LABEL_25:
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v40);
            goto LABEL_26;
          }
        }
      }
    }
  }
  return v13;
}
