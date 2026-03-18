/*
 * XREFs of ??1SURFMEM@@QEAA@XZ @ 0x140026090
 * Callers:
 *     EngCreateBitmap @ 0x140024340 (EngCreateBitmap.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x140025048 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     EngCreateRedirectionDeviceBitmap @ 0x140025290 (EngCreateRedirectionDeviceBitmap.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x14002541C (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x14002550C (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x140025D60 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x14002F2C0 (pProcessDfbSurfacesInternal.c)
 *     ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1401668B0 (-EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     HmgRemoveObject @ 0x14001AB00 (HmgRemoveObject.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z @ 0x140024160 (-Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z.c)
 *     ?GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z @ 0x1400241E0 (-GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0CE@@@QEAAXXZ @ 0x140024A68 (-vUnlock@-$SEMOBJ@$0CE@@@QEAAXXZ.c)
 *     ?EngTryFreeUserMem@@YA_NPEAX@Z @ 0x140034444 (-EngTryFreeUserMem@@YA_NPEAX@Z.c)
 *     SURFACE_Free @ 0x140043FE0 (SURFACE_Free.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1400C4910 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x14015672C (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ??1SectionObj@Gre@@QEAA@XZ @ 0x14015D9B0 (--1SectionObj@Gre@@QEAA@XZ.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x1401645D0 (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$0CE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140189E60 (--0-$SEMOBJ@$0CE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1401C0010 (-vFreeKernelSection@@YAXPEAX@Z.c)
 */

void __fastcall SURFMEM::~SURFMEM(unsigned int **this)
{
  __int64 SessionState; // rax
  unsigned int *v3; // rdx
  struct Gre::Base::SESSION_GLOBALS *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int *v7; // rax
  __int64 v8; // rcx
  void *v9; // rsi
  __int64 v10; // r14
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  unsigned __int64 v14; // rax
  PEPROCESS *v15; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  int v19; // eax
  __int128 v20; // [rsp+50h] [rbp-9h]
  __int128 v21; // [rsp+68h] [rbp+Fh] BYREF
  __int128 v22; // [rsp+78h] [rbp+1Fh]
  __int128 v23; // [rsp+88h] [rbp+2Fh]
  __int64 v24; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v25; // [rsp+C8h] [rbp+6Fh] BYREF

  if ( !*this )
    return;
  SessionState = W32GetSessionState(this);
  v3 = *this;
  v4 = *(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88);
  v5 = (__int64)v4;
  if ( ((_BYTE)this[1] & 1) != 0 )
  {
LABEL_13:
    HmgDecrementShareReferenceCount(v5, v3);
    return;
  }
  if ( !HmgRemoveObject(v4, *(_QWORD *)v3, 0, 1, 1, 5, 0LL) )
  {
    v5 = (__int64)v4;
    *((_WORD *)*this + 7) |= 0x10u;
    v3 = *this;
    goto LABEL_13;
  }
  if ( ((_BYTE)this[1] & 8) != 0 && *((_QWORD *)*this + 16) )
  {
    v24 = *((_QWORD *)*this + 16);
    XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v24);
    *((_QWORD *)*this + 16) = 0LL;
  }
  v7 = *this;
  v8 = *((unsigned __int16 *)*this + 51);
  v9 = (void *)*((_QWORD *)*this + 9);
  v10 = *((_QWORD *)*this + 31);
  v11 = *((_OWORD *)*this + 18);
  v21 = *((_OWORD *)*this + 17);
  v12 = *((_OWORD *)v7 + 19);
  v22 = v11;
  v13 = *(_OWORD *)(v7 + 146);
  v23 = v12;
  v20 = *(_OWORD *)(v7 + 150);
  if ( (v8 & 8) != 0 )
  {
    if ( (v7[28] & 0x40000) != 0 && v9 )
    {
      if ( (v8 & 0x80u) == 0LL )
      {
        EngTryFreeUserMem(v9);
      }
      else
      {
        if ( *((_QWORD *)GreGetCurrentThread(v8, v6) + 8) )
        {
          v14 = *((_QWORD *)&v13 + 1);
          if ( DWORD2(v20) )
            v14 = (unsigned __int64)v9;
          v21 = 0uLL;
          v22 = v14;
          LODWORD(v23) = 1;
          Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v21);
          *(_QWORD *)&v21 = 0LL;
          LODWORD(v23) = 2;
          if ( DWORD2(v20) )
            v9 = (void *)*((_QWORD *)&v13 + 1);
          *((_QWORD *)&v21 + 1) = 0LL;
          v22 = (unsigned __int64)v9;
          Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v21);
        }
        if ( (_QWORD)v13 )
        {
          v24 = v13;
          Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v24);
        }
        else
        {
          GrepCaptureLiveMemoryDump(400LL, 68LL, 2LL, 0LL, 0LL, 0);
        }
      }
    }
  }
  else if ( (v8 & 0x800) != 0 )
  {
    SEMOBJ<36>::SEMOBJ<36>(&v25, v4);
    v15 = (PEPROCESS *)*((_QWORD *)*this + 33);
    if ( v15 )
    {
      PsGetCurrentProcessWin32Process();
      v16 = *this + 132;
      v17 = (_QWORD *)*v16;
      if ( (_QWORD *)*v16 != v16 )
      {
        if ( (_QWORD *)v17[1] != v16 || (v18 = (_QWORD *)*((_QWORD *)*this + 67), (_QWORD *)*v18 != v16) )
          __fastfail(3u);
        *v18 = v17;
        v17[1] = v18;
      }
      if ( v9 && v10 )
      {
        v19 = (unsigned int)GrepW32PidFromW32Process(v15);
        Gre::MapViewOfSectionObj::Unmap(v19, v9);
      }
    }
    W32PIDLOCK::vCleanUp((W32PIDLOCK *)&v21);
    if ( v10 )
    {
      v24 = v10;
      Gre::SectionObj::~SectionObj((Gre::SectionObj *)&v24);
    }
    SEMOBJ<36>::vUnlock(&v25);
  }
  else if ( (v8 & 0x10) != 0 )
  {
    vFreeKernelSection(v9);
  }
  SURFACE_Free(*this);
}
