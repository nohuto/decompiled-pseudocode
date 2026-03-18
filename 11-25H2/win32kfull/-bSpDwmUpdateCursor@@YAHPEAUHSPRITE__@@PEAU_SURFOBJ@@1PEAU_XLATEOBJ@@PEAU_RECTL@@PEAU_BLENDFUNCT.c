/*
 * XREFs of ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x140173F98
 * Callers:
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x140173B30 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14007C824 (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1400979BC (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ @ 0x140097B38 (-uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x140098234 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1400986E8 (-GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x140099648 (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x140099690 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1401743E4 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 */

__int64 __fastcall bSpDwmUpdateCursor(
        Gre::Base *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _BLENDFUNCTION *a6)
{
  unsigned int v9; // r14d
  struct Gre::Base::SESSION_GLOBALS *v10; // r15
  __int64 v11; // rbx
  Gre::Base *v12; // rcx
  __int64 v13; // rdx
  __int64 v15; // r14
  struct W32_PUSH_LOCK *v16; // rsi
  char *v17; // r15
  unsigned int updated; // eax
  HSPRITE v19; // rsi
  HDEV v20; // r14
  UINT_PTR v21; // rax
  struct SFMLOGICALSURFACE *v22; // rcx
  struct SFMLOGICALSURFACE *v24; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v25[56]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v26[128]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v27[176]; // [rsp+140h] [rbp+40h] BYREF
  unsigned int v28; // [rsp+200h] [rbp+100h] BYREF
  struct _BLENDFUNCTION v29; // [rsp+218h] [rbp+118h] BYREF
  int v30; // [rsp+21Ch] [rbp+11Ch]

  v30 = HIDWORD(a4);
  v29 = (struct _BLENDFUNCTION)33488896;
  v9 = 0;
  v10 = Gre::Base::Globals(a1);
  v11 = 0LL;
  Gre::Base::Globals(v12);
  if ( a1 )
  {
    LOBYTE(v13) = 15;
    v11 = HmgShareLockCheck(a1, v13);
    if ( v11 )
    {
      v28 = 0;
      v15 = *(_QWORD *)(v11 + 144);
      v24 = (struct SFMLOGICALSURFACE *)v15;
      SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v25, (HLSURF *)v15);
      if ( v11 != -88 )
        GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v11 + 88));
      if ( !a3 || a2 )
      {
        v16 = (struct W32_PUSH_LOCK *)(v15 + 256);
        if ( v15 != -256 )
          GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v15 + 256));
        v17 = (char *)v10 + 136;
        updated = bSpDwmUpdateMaskCursor(
                    *(HDEV *)(*(_QWORD *)v17 + 176LL),
                    (struct DWMSPRITE *)v11,
                    (struct SFMLOGICALSURFACE *)v15,
                    a2,
                    a3,
                    a5,
                    &v28,
                    &v24);
      }
      else
      {
        v16 = (struct W32_PUSH_LOCK *)(v15 + 256);
        if ( v15 != -256 )
          GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v15 + 256));
        *(_DWORD *)(v11 + 140) &= ~4u;
        v17 = (char *)v10 + 136;
        updated = bSpDwmUpdateSpriteShape(
                    *(Gre::Base **)(*(_QWORD *)v17 + 176LL),
                    (struct DWMSPRITE *)v11,
                    (struct SFMLOGICALSURFACE *)v15,
                    a3,
                    a5,
                    (struct PALETTE *)a3[1].hdev,
                    &v28,
                    0LL,
                    &v24);
      }
      v9 = updated;
      if ( v16 )
        GreReleasePushLockExclusive(v16);
      if ( v11 != -88 )
        GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v11 + 88));
      if ( v9 )
      {
        if ( a6 )
          v29 = *a6;
        v19 = *(HSPRITE *)v11;
        v20 = *(HDEV *)(*(_QWORD *)v17 + 176LL);
        OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v27, 0LL);
        OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v26, 0LL);
        v9 = GrepUpdateSprite(
               v20,
               0LL,
               v19,
               (struct OPTAPIDCOBJ *)v27,
               0LL,
               0LL,
               (struct OPTAPIDCOBJ *)v26,
               0LL,
               0,
               &v29,
               0x21200002u,
               0LL,
               0LL,
               1,
               0,
               0);
        OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v26);
        OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v27);
        if ( v11 != -88 )
          GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v11 + 88));
        v21 = SFMLOGICALSURFACE::uiCookie(*(SFMLOGICALSURFACE **)(v11 + 144));
        bSpDwmNotifyDirty(*(HSPRITE *)v11, v22, v28, v21);
        if ( v11 != -88 )
          GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v11 + 88));
      }
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v25);
    }
  }
  if ( v11 )
    DEC_SHARE_REF_CNT(v11);
  return v9;
}
