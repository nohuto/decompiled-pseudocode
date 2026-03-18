/*
 * XREFs of ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x140098234
 * Callers:
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140098880 (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x140173F98 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1401743E4 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x140095760 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x140097B7C (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x140099AFC (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1401DD684 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
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
  struct Gre::Base::SESSION_GLOBALS *v12; // r12
  unsigned int v13; // ebx
  LONG left; // ecx
  int top; // edx
  LONG right; // r9d
  LONG bottom; // r10d
  struct SFMLOGICALSURFACE *v18; // rdi
  struct _SURFOBJ *v19; // rdx
  LONG v20; // r10d
  LONG v21; // r9d
  LONG v22; // r11d
  LONG v23; // ecx
  LONG v24; // r8d
  LONG v25; // edx
  XLATEOBJ *v26; // r15
  Gre::Base *v27; // rcx
  __int64 v28; // rax
  unsigned int inited; // eax
  struct Gre::Base::SESSION_GLOBALS *v30; // rax
  unsigned int v31; // eax
  int v33; // eax
  LONG v34; // eax
  LONG v35; // eax
  unsigned int v36; // eax
  struct SFMLOGICALSURFACE *v37; // [rsp+60h] [rbp-71h] BYREF
  struct tagSIZE v38; // [rsp+68h] [rbp-69h] BYREF
  struct _RECTL *v39; // [rsp+70h] [rbp-61h] BYREF
  Gre::Base *v40; // [rsp+78h] [rbp-59h] BYREF
  _QWORD v41[2]; // [rsp+80h] [rbp-51h] BYREF
  _QWORD v42[2]; // [rsp+90h] [rbp-41h] BYREF
  struct tagRECT v43; // [rsp+A0h] [rbp-31h] BYREF
  struct tagRECT v44; // [rsp+B0h] [rbp-21h] BYREF

  v39 = a8;
  v37 = a3;
  v40 = a1;
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
            v42[0] = 0LL;
            v43.left = left;
            v38.cx = right - left;
            v43.top = top;
            v43.right = right;
            v38.cy = bottom - top;
            v43.bottom = bottom;
            SURFREFVIEW::bMap((SURFREFVIEW *)v42, a4);
            if ( !v42[0] )
              goto LABEL_27;
            v13 = bSpDwmCreateLogicalSurface((HDEV)a1, a2, v37, &v38, a9);
            if ( !v13 )
              goto LABEL_27;
            v18 = *a9;
            v19 = (struct _SURFOBJ *)*((_QWORD *)*a9 + 23);
            v41[0] = 0LL;
            SURFREFVIEW::bMap((SURFREFVIEW *)v41, v19);
            if ( !v41[0] )
              goto LABEL_26;
            v20 = v43.left;
            v21 = 0;
            v22 = v43.top;
            v23 = 0;
            v24 = v43.right - v43.left;
            v25 = v43.bottom - v43.top;
            v37 = *(struct SFMLOGICALSURFACE **)&v43.left;
            if ( v39 )
            {
              if ( v39->left > 0 )
                v21 = v39->left;
              v33 = v39->top;
              v43.left = v21;
              if ( v33 > 0 )
                v23 = v33;
              v34 = v39->right;
              v43.top = v23;
              if ( v34 < v24 )
                v24 = v34;
              v35 = v39->bottom;
              v43.right = v24;
              if ( v35 < v25 )
                v25 = v35;
              v43.bottom = v25;
              if ( v24 < v21 )
              {
                v21 = v24;
                v43.left = v24;
              }
              else
              {
                if ( v25 < v23 )
                  v23 = v25;
                v43.top = v23;
              }
              LODWORD(v37) = v21 + v20;
              HIDWORD(v37) = v23 + v22;
            }
            else
            {
              *(_QWORD *)&v43.left = 0LL;
              v43.right = v24;
              v43.bottom = v25;
            }
            if ( v23 == v25 || v21 == v24 )
            {
LABEL_26:
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v41);
LABEL_27:
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v42);
              return v13;
            }
            v26 = (XLATEOBJ *)((char *)v12 + 4552);
            v27 = (Gre::Base *)*((_QWORD *)v12 + 472);
            v28 = *((_QWORD *)v12 + 471);
            v38 = 0LL;
            if ( !a6
              || (inited = EXLATEOBJ::bInitXlateObj(
                             (Gre::Base *)&v38,
                             0LL,
                             0,
                             (__int64)a6,
                             (__int64)v27,
                             v28,
                             v28,
                             0,
                             0,
                             0,
                             0),
                  v26 = (XLATEOBJ *)v38,
                  (v13 = inited) != 0) )
            {
              if ( (*((_DWORD *)a2 + 35) & 0x20) != 0 )
              {
                v44 = v43;
                ERECTL::vScale((ERECTL *)&v43, (struct DWMSPRITE *)((char *)a2 + 132));
                if ( (HIDWORD(a4[1].hsurf) & 0x800) != 0 )
                {
                  v39 = *(struct _RECTL **)&a4[7].iType;
                  ERECTL::vScale((ERECTL *)&v44, (const struct POINTFL *)&v39);
                }
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v40) )
                {
                  v36 = RedirStretchBlt(
                          *((struct _SURFOBJ **)v18 + 23),
                          a4,
                          0LL,
                          0LL,
                          v26,
                          0LL,
                          0LL,
                          (RECTL *)&v43,
                          (RECTL *)&v44,
                          0LL,
                          3);
                }
                else if ( (*(_DWORD *)(*((_QWORD *)v18 + 23) + 88LL) & 2) != 0 )
                {
                  v36 = (*((__int64 (__fastcall **)(_QWORD, struct _SURFOBJ *, _QWORD, _QWORD, XLATEOBJ *, _QWORD, _QWORD, struct tagRECT *, struct tagRECT *, _QWORD, int))a1
                         + 355))(
                          *((_QWORD *)v18 + 23),
                          a4,
                          0LL,
                          0LL,
                          v26,
                          0LL,
                          0LL,
                          &v43,
                          &v44,
                          0LL,
                          3);
                }
                else
                {
                  v36 = ((__int64 (__fastcall *)(_QWORD, struct _SURFOBJ *, _QWORD, _QWORD, XLATEOBJ *, _QWORD, _QWORD, struct tagRECT *, struct tagRECT *, _QWORD, int))EngStretchBlt)(
                          *((_QWORD *)v18 + 23),
                          a4,
                          0LL,
                          0LL,
                          v26,
                          0LL,
                          0LL,
                          &v43,
                          &v44,
                          0LL,
                          3);
                }
                v13 = v36;
                if ( !v36 )
                  goto LABEL_25;
              }
              else
              {
                v30 = Gre::Base::Globals(v27);
                if ( !*((_QWORD *)a1 + 428)
                  || (*((_DWORD *)a1 + 528) & 0x400) == 0
                  || *((_QWORD *)v30 + 17) && (unsigned int)UserIsRemoteAndNotDisconnectConnection() )
                {
                  if ( (*(_DWORD *)(*((_QWORD *)v18 + 23) + 88LL) & 0x400) != 0 )
                    v31 = (*((__int64 (__fastcall **)(_QWORD, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, struct SFMLOGICALSURFACE **))a1
                           + 354))(
                            *((_QWORD *)v18 + 23),
                            a4,
                            0LL,
                            v26,
                            &v43,
                            &v37);
                  else
                    v31 = ((__int64 (__fastcall *)(_QWORD, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, struct SFMLOGICALSURFACE **))EngCopyBits)(
                            *((_QWORD *)v18 + 23),
                            a4,
                            0LL,
                            v26,
                            &v43,
                            &v37);
                }
                else
                {
                  v31 = ((__int64 (__fastcall *)(_QWORD, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, struct SFMLOGICALSURFACE **))RedirCopyBits)(
                          *((_QWORD *)v18 + 23),
                          a4,
                          0LL,
                          v26,
                          &v43,
                          &v37);
                }
                v13 = v31;
                if ( !v31 )
                  goto LABEL_25;
                vSpUpdateDirtyRgn(a2, v18, 0LL, &v43, a7, 0);
              }
              vSpUpdateDirtyRgn(a2, v18, 0LL, &v43, a7, 0);
            }
LABEL_25:
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v38);
            goto LABEL_26;
          }
        }
      }
    }
  }
  return v13;
}
