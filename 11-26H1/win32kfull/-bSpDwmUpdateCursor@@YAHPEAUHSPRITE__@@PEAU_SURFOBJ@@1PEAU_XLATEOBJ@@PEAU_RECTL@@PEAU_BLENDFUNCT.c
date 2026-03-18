/*
 * XREFs of ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1400A211C
 * Callers:
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1400A1B40 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140073568 (-GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34.c)
 *     SFMLOGICALSURFACEREF_vDestructor @ 0x1400745F4 (SFMLOGICALSURFACEREF_vDestructor.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1400757E8 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1400A153C (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ @ 0x1400A19CC (-uiCookie@SFMLOGICALSURFACE@@QEBA_KXZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1400A24C8 (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400B544C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x14019C5C4 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 */

__int64 __fastcall bSpDwmUpdateCursor(
        Gre::Base *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _BLENDFUNCTION *a6)
{
  unsigned int v6; // edi
  struct Gre::Base::SESSION_GLOBALS *v10; // r15
  Gre::Base *v11; // rcx
  struct Gre::Base::SESSION_GLOBALS *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdi
  struct W32_PUSH_LOCK *v17; // rsi
  char *v18; // r15
  unsigned int updated; // eax
  HSPRITE v20; // rdi
  HDEV v21; // rsi
  __int64 v22; // rax
  struct SFMLOGICALSURFACE *v23; // rcx
  Gre::Base *v24; // rcx
  struct Gre::Base::SESSION_GLOBALS *v25; // rax
  struct SFMLOGICALSURFACE *v27; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v28[56]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v29[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v30[48]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v31[8]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v32[96]; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v33; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _BLENDFUNCTION v34; // [rsp+1F8h] [rbp+F8h] BYREF
  int v35; // [rsp+1FCh] [rbp+FCh]

  v35 = HIDWORD(a4);
  v34 = (struct _BLENDFUNCTION)33488896;
  v6 = 0;
  v10 = Gre::Base::Globals(a1);
  v12 = Gre::Base::Globals(v11);
  if ( a1 )
  {
    LOBYTE(v13) = 15;
    v14 = HmgShareLock(v12, a1, v13, 0LL);
    v15 = v14;
    if ( v14 )
    {
      v16 = *(_QWORD *)(v14 + 144);
      v33 = 0;
      v27 = (struct SFMLOGICALSURFACE *)v16;
      SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v28, (struct SFMLOGICALSURFACE *)v16);
      if ( v15 != -88 )
        GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v15 + 88));
      if ( !a3 || a2 )
      {
        v17 = (struct W32_PUSH_LOCK *)(v16 + 256);
        if ( v16 != -256 )
          GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v16 + 256));
        v18 = (char *)v10 + 224;
        updated = bSpDwmUpdateMaskCursor(
                    *(HDEV *)(*(_QWORD *)v18 + 176LL),
                    (struct DWMSPRITE *)v15,
                    (struct SFMLOGICALSURFACE *)v16,
                    a2,
                    a3,
                    a5,
                    &v33,
                    &v27);
      }
      else
      {
        v17 = (struct W32_PUSH_LOCK *)(v16 + 256);
        if ( v16 != -256 )
          GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v16 + 256));
        *(_DWORD *)(v15 + 136) &= ~4u;
        v18 = (char *)v10 + 224;
        updated = bSpDwmUpdateSpriteShape(
                    *(Gre::Base **)(*(_QWORD *)v18 + 176LL),
                    (struct DWMSPRITE *)v15,
                    (struct SFMLOGICALSURFACE *)v16,
                    a3,
                    a5,
                    (struct PALETTE *)a3[1].hdev,
                    &v33,
                    0LL,
                    &v27);
      }
      v6 = updated;
      if ( v17 )
        GreReleasePushLockExclusive(v17);
      if ( v15 != -88 )
        GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v15 + 88));
      if ( v6 )
      {
        if ( a6 )
          v34 = *a6;
        v20 = *(HSPRITE *)v15;
        v21 = *(HDEV *)(*(_QWORD *)v18 + 176LL);
        OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v31, 0LL);
        OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v29, 0LL);
        v6 = GrepUpdateSprite(
               v21,
               0LL,
               v20,
               (struct OPTAPIDCOBJ *)v31,
               0LL,
               0LL,
               (struct OPTAPIDCOBJ *)v29,
               0LL,
               0,
               &v34,
               0x21200002u,
               0LL,
               0LL,
               1,
               0,
               0);
        v29[0] &= -(__int64)(v30[40] != 0);
        PopThreadGuardedObject(v30);
        DCOBJ::~DCOBJ((DCOBJ *)v29);
        v31[0] &= -(__int64)(v32[40] != 0);
        PopThreadGuardedObject(v32);
        DCOBJ::~DCOBJ((DCOBJ *)v31);
        if ( v15 != -88 )
          GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v15 + 88));
        v22 = SFMLOGICALSURFACE::uiCookie(*(SFMLOGICALSURFACE **)(v15 + 144));
        bSpDwmNotifyDirty(*(HSPRITE *)v15, v23, v33, v22);
        if ( v15 != -88 )
          GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v15 + 88));
      }
      SFMLOGICALSURFACEREF_vDestructor((__int64)v28);
      PopThreadGuardedObject(v28);
      v25 = Gre::Base::Globals(v24);
      DEC_SHARE_REF_CNT(v25, v15);
    }
  }
  return v6;
}
